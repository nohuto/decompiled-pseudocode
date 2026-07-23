/*
 * XREFs of PsConvertToGuiThread @ 0x1406CAB80
 * Callers:
 *     KiConvertToGuiThread @ 0x1401C8300 (KiConvertToGuiThread.c)
 * Callees:
 *     MmSessionGetWin32Callouts @ 0x14001D200 (MmSessionGetWin32Callouts.c)
 *     SeCaptureAtomTableCallout @ 0x140123D1C (SeCaptureAtomTableCallout.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     ExCallCallBack @ 0x1405EBA04 (ExCallCallBack.c)
 *     PsQuerySectionSignatureInformation @ 0x1406CACB0 (PsQuerySectionSignatureInformation.c)
 *     EtwTimLogProhibitWin32kSystemCalls @ 0x1408F991C (EtwTimLogProhibitWin32kSystemCalls.c)
 */

__int64 PsConvertToGuiThread()
{
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *Process; // r14
  int v2; // esi
  int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // rcx
  char v6; // al
  _RTL_RUN_ONCE *Win32Callouts; // rax
  __int64 result; // rax
  int v9; // esi
  _RTL_RUN_ONCE *v10; // rax
  int v11; // edi
  _KPROCESS *v12; // [rsp+20h] [rbp-20h] BYREF
  int v13; // [rsp+28h] [rbp-18h]
  int v14; // [rsp+2Ch] [rbp-14h]
  struct _KTHREAD *v15; // [rsp+30h] [rbp-10h] BYREF
  int v16; // [rsp+38h] [rbp-8h]
  int v17; // [rsp+3Ch] [rbp-4h]
  char v18; // [rsp+60h] [rbp+20h] BYREF

  v14 = 0;
  v17 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread->PreviousMode )
    return 3221225485LL;
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x80u) != 0 )
    return 1073741851LL;
  Process = CurrentThread->ApcState.Process;
  v2 = *(_DWORD *)&Process[2].Spare2[7];
  if ( (v2 & 0x1000) != 0 || (*(_DWORD *)&Process[2].Spare2[7] & 0x2000) != 0 )
  {
    EtwTimLogProhibitWin32kSystemCalls((unsigned int)((v2 & 0x1000) != 0) + 1, CurrentThread->ApcState.Process);
    if ( (v2 & 0x1000) != 0 )
      return 3221225506LL;
  }
  v3 = 1;
  v12 = Process;
  v13 = 1;
  if ( (int)PsQuerySectionSignatureInformation(Process, &v18) >= 0 )
  {
    v6 = (char)qword_140436440;
    if ( qword_140436440 )
    {
      LOBYTE(v5) = v18;
      LOBYTE(v4) = 12;
      v6 = qword_140436440(v5, v4);
      v3 = v13;
    }
    v13 = ((unsigned __int8)v3 ^ (unsigned __int8)(2 * v6)) & 2 ^ v3;
  }
  Win32Callouts = MmSessionGetWin32Callouts();
  result = ExCallCallBack((signed __int64 *)Win32Callouts, 0LL, (__int64)&v12);
  if ( (int)result >= 0 )
  {
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 7u);
    v9 = v2 & 0xC000;
    if ( v9 )
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x15u);
    v16 = 0;
    v15 = CurrentThread;
    v10 = MmSessionGetWin32Callouts();
    v11 = ExCallCallBack((signed __int64 *)v10, 1LL, (__int64)&v15);
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
