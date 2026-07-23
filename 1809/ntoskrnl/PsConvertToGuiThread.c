/*
 * XREFs of PsConvertToGuiThread @ 0x1406AC240
 * Callers:
 *     KiConvertToGuiThread @ 0x1401C0800 (KiConvertToGuiThread.c)
 * Callees:
 *     MmSessionGetWin32Callouts @ 0x140088A50 (MmSessionGetWin32Callouts.c)
 *     SeCaptureAtomTableCallout @ 0x140125648 (SeCaptureAtomTableCallout.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExCallCallBack @ 0x1405F5BA4 (ExCallCallBack.c)
 *     PsQuerySectionSignatureInformation @ 0x1406AC390 (PsQuerySectionSignatureInformation.c)
 *     EtwTimLogProhibitWin32kSystemCalls @ 0x1408BE628 (EtwTimLogProhibitWin32kSystemCalls.c)
 */

__int64 PsConvertToGuiThread()
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 result; // rax
  _KPROCESS *Process; // rbp
  unsigned int UserTime; // esi
  int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  char v7; // al
  _RTL_RUN_ONCE *Win32Callouts; // rax
  int v9; // esi
  _RTL_RUN_ONCE *v10; // rax
  int v11; // edi
  _KPROCESS *v12; // [rsp+20h] [rbp-28h] BYREF
  int v13; // [rsp+28h] [rbp-20h]
  struct _KTHREAD *v14; // [rsp+30h] [rbp-18h] BYREF
  int v15; // [rsp+38h] [rbp-10h]
  char v16; // [rsp+50h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread->PreviousMode )
    return 3221225485LL;
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x80u) != 0 )
    return 1073741851LL;
  Process = CurrentThread->ApcState.Process;
  UserTime = Process[2].UserTime;
  if ( (UserTime & 0x1000) != 0 || (Process[2].UserTime & 0x2000) != 0 )
  {
    EtwTimLogProhibitWin32kSystemCalls((unsigned int)((UserTime & 0x1000) != 0) + 1, CurrentThread->ApcState.Process);
    if ( (UserTime & 0x1000) != 0 )
      return 3221225506LL;
  }
  v4 = 1;
  v12 = Process;
  v13 = 1;
  if ( (int)PsQuerySectionSignatureInformation(Process, &v16) >= 0 )
  {
    v7 = (char)qword_14040EE00;
    if ( qword_14040EE00 )
    {
      LOBYTE(v6) = v16;
      LOBYTE(v5) = 12;
      v7 = qword_14040EE00(v6, v5);
      v4 = v13;
    }
    v13 = ((unsigned __int8)v4 ^ (unsigned __int8)(2 * v7)) & 2 ^ v4;
  }
  Win32Callouts = MmSessionGetWin32Callouts();
  result = ExCallCallBack((signed __int64 *)Win32Callouts, 0LL, (__int64)&v12);
  if ( (int)result >= 0 )
  {
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 7u);
    v9 = UserTime & 0xC000;
    if ( v9 )
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x15u);
    v15 = 0;
    v14 = CurrentThread;
    v10 = MmSessionGetWin32Callouts();
    v11 = ExCallCallBack((signed __int64 *)v10, 1LL, (__int64)&v14);
    if ( v11 < 0 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 7u);
      if ( v9 )
        _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x15u);
    }
    SeCaptureAtomTableCallout();
    return (unsigned int)v11;
  }
  return result;
}
