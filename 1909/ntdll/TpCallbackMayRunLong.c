/*
 * XREFs of TpCallbackMayRunLong @ 0x180070840
 * Callers:
 *     RtlpTpWorkCallback @ 0x18002F4F0 (RtlpTpWorkCallback.c)
 *     TppWorkCallbackPrologRelease @ 0x180032F0C (TppWorkCallbackPrologRelease.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x180033474 (TppCleanupGroupMemberCallbackProlog.c)
 *     TppIopExecuteCallback @ 0x180033520 (TppIopExecuteCallback.c)
 * Callees:
 *     TppCallbackMayRunLongProlog @ 0x1800708A8 (TppCallbackMayRunLongProlog.c)
 *     NtSetInformationWorkerFactory @ 0x1800A01A0 (NtSetInformationWorkerFactory.c)
 */

NTSTATUS __cdecl TpCallbackMayRunLong(PTP_CALLBACK_INSTANCE Instance)
{
  NTSTATUS result; // eax
  __int64 v2; // [rsp+30h] [rbp-18h] BYREF
  int v3; // [rsp+58h] [rbp+10h] BYREF
  int WorkerFactoryInformation; // [rsp+60h] [rbp+18h] BYREF
  __int64 v5; // [rsp+68h] [rbp+20h] BYREF

  v2 = 0LL;
  result = TppCallbackMayRunLongProlog((_DWORD)Instance, 1, (unsigned int)&v2, (unsigned int)&v3, (__int64)&v5);
  if ( result < 0 )
  {
    if ( result == -1073741637 )
      return 0;
  }
  else if ( !v3 )
  {
    WorkerFactoryInformation = 1;
    return NtSetInformationWorkerFactory(*(HANDLE *)(v2 + 56), WorkerFactoryCallbackType, &WorkerFactoryInformation, 4u);
  }
  return result;
}
