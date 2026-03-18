/*
 * XREFs of MmInitSystemDll @ 0x1409FD1E4
 * Callers:
 *     Phase1InitializationIoReady @ 0x1409FED48 (Phase1InitializationIoReady.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14003AE70 (ObFastDereferenceObject.c)
 *     PsQuerySystemDllInfo @ 0x1405C9E2C (PsQuerySystemDllInfo.c)
 *     PspReferenceSystemDll @ 0x14067E85C (PspReferenceSystemDll.c)
 */

unsigned __int64 MmInitSystemDll()
{
  unsigned __int64 result; // rax
  unsigned __int64 v1; // rbx

  result = PsQuerySystemDllInfo(0);
  v1 = result;
  if ( result )
  {
    result = PspReferenceSystemDll((signed __int64 *)(result - 16));
    qword_1404656E8 = *(_QWORD *)(v1 + 24);
    if ( result )
      return ObFastDereferenceObject((signed __int64 *)(v1 - 16), result);
  }
  return result;
}
