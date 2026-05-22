/*
 * XREFs of ?ExecuteWorkItems@ButtonProcessor@@AEAAXXZ @ 0x1800EAFE0
 * Callers:
 *     ?StaticExecuteWorkItems@ButtonProcessor@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800EAFD0 (-StaticExecuteWorkItems@ButtonProcessor@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ButtonProcessor::ExecuteWorkItems(ButtonProcessor *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  _QWORD *v3; // rax
  __int64 *v4; // rax
  volatile signed __int32 *v5; // rbx
  volatile signed __int32 *v6; // r14
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // [rsp+28h] [rbp-20h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 72);
  while ( 1 )
  {
    EnterCriticalSection(v2);
    if ( *((_BYTE *)this + 112) || !*((_QWORD *)this + 19) )
      break;
    v3 = (_QWORD *)*((_QWORD *)this + 15);
    if ( v3 )
      v3 = (_QWORD *)*v3;
    v4 = *(__int64 **)(v3[1] + 8 * (*((_QWORD *)this + 18) & (v3[2] - 1LL)));
    v5 = (volatile signed __int32 *)v4[1];
    if ( v5 )
    {
      _InterlockedIncrement(v5 + 2);
      v5 = (volatile signed __int32 *)v4[1];
    }
    v10 = *v4;
    v6 = *(volatile signed __int32 **)(*(_QWORD *)(*((_QWORD *)this + 16)
                                                 + 8 * (*((_QWORD *)this + 18) & (*((_QWORD *)this + 17) - 1LL)))
                                     + 8LL);
    if ( v6 )
    {
      if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
        if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
      }
    }
    if ( (*((_QWORD *)this + 19))-- == 1LL )
      v8 = 0LL;
    else
      v8 = *((_QWORD *)this + 18) + 1LL;
    *((_QWORD *)this + 18) = v8;
    if ( v2 )
      LeaveCriticalSection(v2);
    v9 = *(_QWORD *)(v10 + 56);
    if ( !v9 )
    {
      std::_Xbad_function_call();
      JUMPOUT(0x1800EB19ELL);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    if ( v5 )
    {
      if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
        if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
      }
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
