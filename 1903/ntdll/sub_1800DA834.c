/*
 * XREFs of sub_1800DA834 @ 0x1800DA834
 * Callers:
 *     sub_1800D8B78 @ 0x1800D8B78 (sub_1800D8B78.c)
 * Callees:
 *     LdrGetProcedureAddressForCaller @ 0x18001AEC0 (LdrGetProcedureAddressForCaller.c)
 *     RtlInitString @ 0x180021100 (RtlInitString.c)
 *     DbgPrint @ 0x180053DA0 (DbgPrint.c)
 *     _wcsicmp @ 0x18008E1D0 (_wcsicmp.c)
 */

__int64 sub_1800DA834()
{
  __int64 i; // rbx
  void *v2; // rbx
  NTSTATUS ProcedureAddressForCaller; // ebx
  _STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  PVOID *Callback; // [rsp+48h] [rbp+0h]
  PVOID ProcedureAddress; // [rsp+50h] [rbp+8h] BYREF

  for ( i = qword_180164610; ; i = *(_QWORD *)i )
  {
    if ( (__int64 *)i == &qword_180164610 )
      goto LABEL_5;
    if ( !wcsicmp(*(const wchar_t **)(i + 24), L"verifier.dll") )
      break;
  }
  v2 = *(void **)(*(_QWORD *)(i + 32) + 48LL);
  if ( !v2 )
  {
LABEL_5:
    DbgPrint("AVRF: Failed to find verifier.dll among loaded providers! \n");
    return 3221225473LL;
  }
  RtlInitString(&DestinationString, "VerifierStopMessage");
  ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(v2, &DestinationString, 0, &ProcedureAddress, 0, Callback);
  if ( ProcedureAddressForCaller >= 0 )
    qword_180164EA8 = (__int64)ProcedureAddress;
  else
    DbgPrint("AVRF: Failed to find `VerifierStopMessage()' export in verifier.dll! \n");
  return (unsigned int)ProcedureAddressForCaller;
}
