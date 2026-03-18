/*
 * XREFs of ?StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z @ 0x1C0145EF0
 * Callers:
 *     NtUserStopAndEndInertia @ 0x1C00F1F80 (NtUserStopAndEndInertia.c)
 * Callees:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x1C0001E68 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD240 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C0132F74 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ApiSetEditionPostInertiaMessage @ 0x1C0162F08 (ApiSetEditionPostInertiaMessage.c)
 */

__int64 __fastcall CTouchProcessor::StopAndEndInertia(CTouchProcessor *this, int a2, void *a3)
{
  __int64 *Blink; // rbp
  __int64 v6; // rcx
  unsigned int v7; // ebx
  unsigned int v8; // r9d
  unsigned int v9; // edx
  __int64 v10; // r11
  __int64 v11; // r8
  PDEVICE_OBJECT v12; // rcx
  unsigned __int16 v13; // r9
  __int64 v15; // rdi
  CInpLockGuard *v16[8]; // [rsp+30h] [rbp-108h] BYREF
  _BYTE v17[176]; // [rsp+70h] [rbp-C8h] BYREF

  Blink = (__int64 *)WPP_MAIN_CB.Queue.ListEntry.Blink;
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v16,
    (struct CInpLockGuard *)&WPP_MAIN_CB.Queue.ListEntry.Blink[3].Blink,
    0LL);
  v6 = Blink[10];
  v7 = 0;
  while ( 1 )
  {
    if ( (__int64 *)v6 == Blink + 9 )
    {
      WPP_RECORDER_SF_(Blink[1], 2u, 0xBu, 0x12Du, (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
      UserSetLastError(1168LL);
      v12 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        goto LABEL_11;
      v13 = 302;
      goto LABEL_10;
    }
    v8 = *(_DWORD *)(v6 + 40);
    v9 = 0;
    if ( v8 )
      break;
LABEL_6:
    v6 = *(_QWORD *)(v6 + 8);
  }
  v10 = *(_QWORD *)(v6 + 96);
  while ( 1 )
  {
    v11 = 576LL * v9;
    if ( *(unsigned __int16 *)(v11 + v10 + 236) == a2 )
      break;
    if ( ++v9 >= v8 )
      goto LABEL_6;
  }
  v15 = v11 + v10;
  if ( CSpatialProcessor::ResolveInputSinkToINPUTDEST(
         (CSpatialProcessor *)Blink,
         a3,
         *(_DWORD *)(v11 + v10 + 232),
         (struct tagINPUTDEST *)v17) )
  {
    v7 = ApiSetEditionPostInertiaMessage(v17, v15 + 232);
  }
  else
  {
    WPP_RECORDER_SF_(Blink[1], 2u, 0xBu, 0x12Fu, (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
    UserSetLastError(1168LL);
    v12 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v13 = 304;
LABEL_10:
      WPP_RECORDER_SF_(
        (__int64)v12->DeviceExtension,
        5u,
        0xBu,
        v13,
        (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
    }
  }
LABEL_11:
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v16);
  return v7;
}
