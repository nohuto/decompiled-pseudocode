/*
 * XREFs of ?QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@3@@Z @ 0x18004EC1C
 * Callers:
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z @ 0x18004A840 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z.c)
 *     ?Initialize@AudioJournal@@AEAAJXZ @ 0x18004EE00 (-Initialize@AudioJournal@@AEAAJXZ.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18003F1BC (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ?Initialize@_RecurringTask@@QEAAJV?$function@$$A6AXXZ@std@@PEAVCSerialWorkQueue@@@Z @ 0x18004EB64 (-Initialize@_RecurringTask@@QEAAJV-$function@$$A6AXXZ@std@@PEAVCSerialWorkQueue@@@Z.c)
 *     ?Initialize@CSerialWorkQueue@@AEAAJXZ @ 0x18004ED8C (-Initialize@CSerialWorkQueue@@AEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006430C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ??_G_RecurringTask@@QEAAPEAXI@Z @ 0x1800F6078 (--_G_RecurringTask@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSerialWorkQueue::QueueRecurringItem(
        __int64 a1,
        __int64 a2,
        DWORD a3,
        __int64 a4,
        _RecurringTask **a5)
{
  __int64 v7; // r13
  int v9; // edi
  struct _TP_TIMER **v10; // rax
  struct _TP_TIMER **v11; // rsi
  _RecurringTask *v12; // rbx
  __int64 (__fastcall ***v13)(_QWORD, _BYTE *); // rcx
  struct _TP_TIMER *ThreadpoolTimer; // r14
  _RecurringTask *v15; // rcx
  signed int LastError; // eax
  _QWORD v18[3]; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v19[56]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v20; // [rsp+70h] [rbp-10h]
  struct _FILETIME pftDueTime; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v22; // [rsp+D8h] [rbp+58h]

  v22 = a4;
  v18[1] = -2LL;
  v7 = (unsigned int)a2;
  v9 = 0;
  if ( !*(_BYTE *)(a1 + 80) )
  {
    v9 = CSerialWorkQueue::Initialize((CSerialWorkQueue *)a1);
    if ( v9 >= 0 )
    {
      v10 = (struct _TP_TIMER **)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
      v11 = v10;
      v18[0] = v10;
      if ( v10 )
      {
        *v10 = 0LL;
        v10[1] = 0LL;
        v10[2] = 0LL;
      }
      else
      {
        v11 = 0LL;
      }
      v12 = (_RecurringTask *)v11;
      v18[0] = v11;
      if ( v11 )
      {
        v18[2] = v19;
        v20 = 0LL;
        v13 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a4 + 56);
        if ( v13 )
          v20 = (**v13)(v13, v19);
        v9 = _RecurringTask::Initialize((__int64)v11, (__int64)v19, a1);
        if ( v9 >= 0 )
        {
          ThreadpoolTimer = CreateThreadpoolTimer(
                              (PTP_TIMER_CALLBACK)CSerialWorkQueue::TimerCallback,
                              v11,
                              (PTP_CALLBACK_ENVIRON)(a1 + 8));
          if ( ThreadpoolTimer )
          {
            v9 = 0;
          }
          else
          {
            LastError = GetLastError();
            v9 = LastError;
            if ( LastError > 0 )
              v9 = (unsigned __int16)LastError | 0x80070000;
          }
          *v11 = ThreadpoolTimer;
          if ( v9 >= 0 )
          {
            pftDueTime = (struct _FILETIME)(-10000 * v7);
            SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, a3, 0);
            if ( a5 != v18 )
            {
              v12 = 0LL;
              v15 = *a5;
              *a5 = (_RecurringTask *)v11;
              if ( v15 )
                _RecurringTask::`scalar deleting destructor'(v15, a2);
            }
          }
        }
      }
      else
      {
        v9 = -2147024882;
      }
      if ( v12 )
        _RecurringTask::`scalar deleting destructor'(v12, a2);
    }
  }
  std::_Func_class<void,>::_Tidy(a4, a2);
  return (unsigned int)v9;
}
