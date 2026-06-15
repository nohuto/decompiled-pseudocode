/*
 * XREFs of ?GenerateMediaManagerNotification@@YAJPEAV?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@PEAPEAUMEDIAMANAGER_NOTIFICATION_BLOCK@@@Z @ 0x180023658
 * Callers:
 *     ?TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z @ 0x18002569C (-TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x18000CDF8 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000D64C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?GetSmtcProcesses@CApplication@@QEAAJAEAV?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@@Z @ 0x180010308 (-GetSmtcProcesses@CApplication@@QEAAJAEAV-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess.c)
 *     ?SetNotificationData@@YAJPEAV?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@PEAE_K@Z @ 0x180023468 (-SetNotificationData@@YAJPEAV-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@A.c)
 *     memset_0 @ 0x180034F8E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800359C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GenerateMediaManagerNotification(_QWORD *a1, _QWORD *a2)
{
  unsigned __int64 v3; // rsi
  _DWORD *v4; // rdi
  signed int SmtcProcesses; // ebx
  unsigned __int64 v6; // r15
  _QWORD *v7; // r12
  __int64 v8; // rax
  _QWORD *v9; // r14
  _WORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r15
  volatile signed __int32 *v16; // rbx
  unsigned __int64 v17; // rax
  HANDLE ProcessHeap; // rax
  _DWORD *v19; // rax
  HANDLE v20; // rax
  __int128 v22; // [rsp+28h] [rbp-38h] BYREF
  __int64 v23; // [rsp+38h] [rbp-28h]
  __int128 v24; // [rsp+40h] [rbp-20h]
  int v25; // [rsp+50h] [rbp-10h]
  __int64 v27; // [rsp+B0h] [rbp+50h]

  v3 = 0LL;
  v4 = 0LL;
  SmtcProcesses = 0;
  v6 = 0LL;
  v7 = (_QWORD *)*a1;
LABEL_2:
  if ( v7 )
  {
    v8 = v7[2];
    v7 = (_QWORD *)*v7;
    v27 = v8;
    v22 = 0LL;
    v23 = 0LL;
    v24 = 0LL;
    v25 = 10;
    SmtcProcesses = CApplication::GetSmtcProcesses(v8, (__int64)&v22);
    if ( SmtcProcesses >= 0 )
    {
      v9 = (_QWORD *)v22;
      while ( 1 )
      {
        if ( !v9 )
        {
          ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)&v22);
          goto LABEL_2;
        }
        v10 = *(_WORD **)(v27 + 24);
        if ( v10 )
        {
          v11 = 1024LL;
          do
          {
            if ( !*v10 )
              break;
            ++v10;
            --v11;
          }
          while ( v11 );
          SmtcProcesses = v11 == 0 ? 0x80070057 : 0;
          if ( v11 )
          {
            v12 = 1024 - v11;
            goto LABEL_13;
          }
        }
        else
        {
          SmtcProcesses = -2147024809;
        }
        v12 = 0LL;
LABEL_13:
        if ( SmtcProcesses < 0 )
          v13 = 0LL;
        else
          v13 = 2 * v12;
        if ( SmtcProcesses < 0 )
          break;
        v14 = v6 + v13 + 2;
        if ( v14 < v6 )
          goto LABEL_27;
        v15 = v14 + 4;
        if ( v14 + 4 < v14 )
          goto LABEL_27;
        v16 = (volatile signed __int32 *)v9[2];
        v9 = (_QWORD *)*v9;
        if ( v16 && _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 32LL))(v16);
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v16 + 24LL))(v16, 1LL);
        }
        v17 = v15 + 4;
        if ( v15 + 4 < v15 || (v6 = v15 + 8, v17 + 4 < v17) )
        {
LABEL_27:
          ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)&v22);
          goto LABEL_40;
        }
        SmtcProcesses = 0;
      }
    }
    ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)&v22);
  }
  else
  {
    v3 = v6;
  }
  if ( SmtcProcesses >= 0 )
  {
    ProcessHeap = GetProcessHeap();
    v19 = HeapAlloc(ProcessHeap, 0, v3 + 42);
    v4 = v19;
    if ( !v19 )
    {
      SmtcProcesses = -2147024882;
      goto LABEL_38;
    }
    memset_0(v19, 0, v3 + 42);
    *v4 = v3 + 42;
    v4[1] = 0x10000;
    *((_QWORD *)v4 + 1) = 0LL;
    v4[6] = 0;
    if ( !v3 )
    {
LABEL_37:
      *a2 = v4;
      v4 = 0LL;
      goto LABEL_38;
    }
    SmtcProcesses = SetNotificationData(a1, (__int64)(v4 + 8), v3);
    if ( SmtcProcesses < 0 )
      goto LABEL_38;
    if ( v3 <= 0xFFFFFFFF )
    {
      v4[7] = v3;
      SmtcProcesses = 0;
      goto LABEL_37;
    }
    v4[7] = -1;
LABEL_40:
    SmtcProcesses = -2147024362;
  }
LABEL_38:
  v20 = GetProcessHeap();
  HeapFree(v20, 0, v4);
  return (unsigned int)SmtcProcesses;
}
