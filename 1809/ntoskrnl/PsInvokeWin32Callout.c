/*
 * XREFs of PsInvokeWin32Callout @ 0x1405F4E90
 * Callers:
 *     PspJobDelete @ 0x14008FE10 (PspJobDelete.c)
 *     SeCaptureAtomTableCallout @ 0x140125558 (SeCaptureAtomTableCallout.c)
 *     KiSystemCall64 @ 0x1401CF000 (KiSystemCall64.c)
 *     PspSetProcessTimerDelayForWin32 @ 0x1402EA764 (PspSetProcessTimerDelayForWin32.c)
 *     PsFreezeProcess @ 0x140588E24 (PsFreezeProcess.c)
 *     PopInvokeWin32Callout @ 0x1405B0C84 (PopInvokeWin32Callout.c)
 *     NtSetInformationJobObject @ 0x140600B10 (NtSetInformationJobObject.c)
 *     PspAssignProcessToJob @ 0x140605664 (PspAssignProcessToJob.c)
 *     NtSetSystemInformation @ 0x140663E10 (NtSetSystemInformation.c)
 *     PsThawProcess @ 0x14067E324 (PsThawProcess.c)
 *     ExpWin32OpenProcedure @ 0x1406AF400 (ExpWin32OpenProcedure.c)
 *     ExpWin32OkayToCloseProcedure @ 0x1406B0EE0 (ExpWin32OkayToCloseProcedure.c)
 *     ExpWin32CloseProcedure @ 0x1406B2230 (ExpWin32CloseProcedure.c)
 *     ExpWin32ParseProcedure @ 0x1406B9560 (ExpWin32ParseProcedure.c)
 *     ExpWin32DeleteProcedure @ 0x1406C1D50 (ExpWin32DeleteProcedure.c)
 *     PfpQueryGpuUtilization @ 0x1406C4344 (PfpQueryGpuUtilization.c)
 *     PspShutdownCsrProcess @ 0x140887614 (PspShutdownCsrProcess.c)
 *     PspQueryProcessInterferenceCountCallback @ 0x140889F60 (PspQueryProcessInterferenceCountCallback.c)
 * Callees:
 *     MmSessionGetWin32Callouts @ 0x140088A60 (MmSessionGetWin32Callouts.c)
 *     ExDereferenceCallBackBlock @ 0x140088AA0 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x140088AF0 (ExReferenceCallBackBlock.c)
 *     MmGetSessionId @ 0x1400897B0 (MmGetSessionId.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     ExCallCallBack @ 0x1405F4BA4 (ExCallCallBack.c)
 *     ExCallSessionCallBack @ 0x14069E844 (ExCallSessionCallBack.c)
 */

__int64 __fastcall PsInvokeWin32Callout(int a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v5; // r10
  union _RTL_RUN_ONCE *v7; // rdi
  struct _EX_RUNDOWN_REF *v8; // rax
  struct _EX_RUNDOWN_REF *v9; // rbx
  unsigned int v10; // esi
  __int64 result; // rax
  int v12; // r8d
  _KPROCESS *Process; // rcx
  int SessionId; // eax
  _DWORD *v15; // r9
  union _RTL_RUN_ONCE *Win32Callouts; // rax
  __int64 v17; // rcx
  unsigned int v18; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  v5 = a4;
  if ( a3 )
  {
    v12 = a3 - 1;
    if ( v12 )
    {
      if ( v12 != 1 )
        return 3221225485LL;
      v17 = 0LL;
    }
    else
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( (Process[1].DirectoryTableBase & 0x1000000000000LL) != 0 )
      {
        SessionId = MmGetSessionId((__int64)Process);
        if ( *v15 == SessionId )
        {
          Win32Callouts = MmSessionGetWin32Callouts();
          return ExCallCallBack((signed __int64 *)Win32Callouts, v4, a2);
        }
      }
      v17 = v5;
    }
    result = ExCallSessionCallBack(v17, v4, a2, &v18);
    if ( (int)result >= 0 )
      return v18;
  }
  else
  {
    v7 = MmSessionGetWin32Callouts();
    v8 = ExReferenceCallBackBlock((signed __int64 *)v7);
    v9 = v8;
    if ( v8 )
    {
      v10 = ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64))v8[1].Count)(v8[2].Count, v4, a2);
      ExDereferenceCallBackBlock((signed __int64 *)v7, v9);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
    return v10;
  }
  return result;
}
