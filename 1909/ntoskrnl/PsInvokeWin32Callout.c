/*
 * XREFs of PsInvokeWin32Callout @ 0x1405EBC10
 * Callers:
 *     PspJobDelete @ 0x1400EB730 (PspJobDelete.c)
 *     SeCaptureAtomTableCallout @ 0x140123D1C (SeCaptureAtomTableCallout.c)
 *     KiSystemCall64 @ 0x1401D5A80 (KiSystemCall64.c)
 *     PspSetProcessTimerDelayForWin32 @ 0x140307E24 (PspSetProcessTimerDelayForWin32.c)
 *     NtSetInformationJobObject @ 0x140615580 (NtSetInformationJobObject.c)
 *     PopInvokeWin32Callout @ 0x14067098C (PopInvokeWin32Callout.c)
 *     PspAssignProcessToJob @ 0x14068917C (PspAssignProcessToJob.c)
 *     PsFreezeProcess @ 0x1406A0E4C (PsFreezeProcess.c)
 *     PsThawProcess @ 0x1406A10B8 (PsThawProcess.c)
 *     NtSetSystemInformation @ 0x1406A6650 (NtSetSystemInformation.c)
 *     ExpWin32OpenProcedure @ 0x1406D1870 (ExpWin32OpenProcedure.c)
 *     ExpWin32OkayToCloseProcedure @ 0x1406D24E0 (ExpWin32OkayToCloseProcedure.c)
 *     ExpWin32CloseProcedure @ 0x1406D3390 (ExpWin32CloseProcedure.c)
 *     ExpWin32ParseProcedure @ 0x1406DAC40 (ExpWin32ParseProcedure.c)
 *     ExpWin32DeleteProcedure @ 0x1406E49B0 (ExpWin32DeleteProcedure.c)
 *     PfpQueryGpuUtilization @ 0x1406EBF54 (PfpQueryGpuUtilization.c)
 *     PspShutdownCsrProcess @ 0x1408C5264 (PspShutdownCsrProcess.c)
 *     PspQueryProcessInterferenceCountCallback @ 0x1408C7750 (PspQueryProcessInterferenceCountCallback.c)
 * Callees:
 *     MmSessionGetWin32Callouts @ 0x14001D200 (MmSessionGetWin32Callouts.c)
 *     ExDereferenceCallBackBlock @ 0x14001D240 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x14001D290 (ExReferenceCallBackBlock.c)
 *     MmGetSessionId @ 0x14001D880 (MmGetSessionId.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     ExCallCallBack @ 0x1405EBA04 (ExCallCallBack.c)
 *     ExCallSessionCallBack @ 0x140639448 (ExCallSessionCallBack.c)
 */

__int64 __fastcall PsInvokeWin32Callout(int a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // r10
  _RTL_RUN_ONCE *Win32Callouts; // rbp
  struct _EX_RUNDOWN_REF *v8; // rax
  struct _EX_RUNDOWN_REF *v9; // rsi
  int v10; // ebx
  int v12; // r8d
  _KPROCESS *Process; // rcx
  int SessionId; // eax
  _DWORD *v15; // r9
  _RTL_RUN_ONCE *v16; // rax
  __int64 v17; // rcx
  unsigned int v18; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  v5 = a4;
  if ( !a3 )
  {
    Win32Callouts = MmSessionGetWin32Callouts();
    v8 = ExReferenceCallBackBlock((signed __int64 *)Win32Callouts);
    v9 = v8;
    if ( v8 )
    {
      v10 = ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64))v8[1].Count)(v8[2].Count, v4, a2);
      ExDereferenceCallBackBlock((signed __int64 *)Win32Callouts, v9);
      return (unsigned int)v10;
    }
    return (unsigned int)-1073741811;
  }
  v12 = a3 - 1;
  if ( v12 )
  {
    if ( v12 != 1 )
      return (unsigned int)-1073741811;
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
        v16 = MmSessionGetWin32Callouts();
        return (unsigned int)ExCallCallBack((signed __int64 *)v16, v4, a2);
      }
    }
    v17 = v5;
  }
  v10 = ExCallSessionCallBack(v17, v4, a2, &v18);
  if ( v10 >= 0 )
    return v18;
  return (unsigned int)v10;
}
