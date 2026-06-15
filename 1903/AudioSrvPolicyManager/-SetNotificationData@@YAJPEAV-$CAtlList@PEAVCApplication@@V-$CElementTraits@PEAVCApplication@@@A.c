/*
 * XREFs of ?SetNotificationData@@YAJPEAV?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@PEAE_K@Z @ 0x18002348C
 * Callers:
 *     ?GenerateMediaManagerNotification@@YAJPEAV?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@PEAPEAUMEDIAMANAGER_NOTIFICATION_BLOCK@@@Z @ 0x18002367C (-GenerateMediaManagerNotification@@YAJPEAV-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCAp.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x18000CE68 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000D67C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?IsBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x1800100BC (-IsBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?GetSmtcProcesses@CApplication@@QEAAJAEAV?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@@Z @ 0x180010338 (-GetSmtcProcesses@CApplication@@QEAAJAEAV-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess.c)
 *     memcpy_0 @ 0x180035A93 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180035AC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SetNotificationData(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // r12
  signed int SmtcProcesses; // ebx
  size_t v6; // rdi
  _QWORD *v7; // r14
  __int64 v8; // r15
  _QWORD *v9; // rsi
  _WORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r8
  size_t v14; // r8
  __int64 v15; // rax
  size_t v16; // r15
  size_t v17; // r12
  volatile signed __int32 *v18; // rdi
  __int128 v20; // [rsp+28h] [rbp-38h] BYREF
  __int64 v21; // [rsp+38h] [rbp-28h]
  __int128 v22; // [rsp+40h] [rbp-20h]
  int v23; // [rsp+50h] [rbp-10h]
  const void **v25; // [rsp+B8h] [rbp+58h]

  v4 = a2;
  SmtcProcesses = 0;
  v6 = 0LL;
  v7 = (_QWORD *)*a1;
LABEL_2:
  if ( !v7 )
    return (unsigned int)SmtcProcesses;
  v8 = v7[2];
  v7 = (_QWORD *)*v7;
  v25 = (const void **)v8;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 10;
  SmtcProcesses = CApplication::GetSmtcProcesses(v8, (__int64)&v20);
  if ( SmtcProcesses < 0 )
    goto LABEL_29;
  v9 = (_QWORD *)v20;
  while ( 1 )
  {
    if ( !v9 )
    {
      ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)&v20);
      goto LABEL_2;
    }
    v10 = *(_WORD **)(v8 + 24);
    if ( !v10 )
    {
      SmtcProcesses = -2147024809;
LABEL_12:
      v12 = 0LL;
      goto LABEL_13;
    }
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
    if ( !v11 )
      goto LABEL_12;
    v12 = 1024 - v11;
LABEL_13:
    if ( SmtcProcesses < 0 )
      v13 = 0LL;
    else
      v13 = 2 * v12;
    if ( SmtcProcesses < 0 )
      goto LABEL_29;
    v14 = v13 + 2;
    v15 = v6 + 4;
    if ( v6 + 4 > a3 )
      break;
    *(_DWORD *)(v6 + v4) = v14;
    v16 = v14 + v15;
    if ( v14 + v15 > a3 )
      break;
    memcpy_0((void *)(v15 + v4), v25[3], v14);
    v17 = v16 + 4;
    if ( v16 + 4 > a3 )
      break;
    v18 = (volatile signed __int32 *)v9[2];
    v9 = (_QWORD *)*v9;
    if ( !v18 )
    {
      SmtcProcesses = -2147418113;
      goto LABEL_29;
    }
    *(_DWORD *)(v16 + a2) = *((_DWORD *)v18 + 48);
    if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 32LL))(v18);
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v18 + 24LL))(v18, 1LL);
    }
    v6 = v16 + 8;
    if ( v16 + 8 > a3 )
      break;
    v8 = (__int64)v25;
    *(_DWORD *)(v17 + a2) = CApplication::IsBackgroundAudioCapable((CApplication *)v25);
    v4 = a2;
  }
  SmtcProcesses = -2147024774;
LABEL_29:
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)&v20);
  return (unsigned int)SmtcProcesses;
}
