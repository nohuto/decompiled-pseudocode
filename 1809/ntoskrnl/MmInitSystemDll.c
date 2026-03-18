/*
 * XREFs of MmInitSystemDll @ 0x1409C4738
 * Callers:
 *     Phase1InitializationIoReady @ 0x1409C4788 (Phase1InitializationIoReady.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14004D9D0 (ObFastDereferenceObject.c)
 *     PspReferenceSystemDll @ 0x140677B48 (PspReferenceSystemDll.c)
 *     PsQuerySystemDllInfo @ 0x1406820DC (PsQuerySystemDllInfo.c)
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
    qword_140439FD0 = *(_QWORD *)(v1 + 24);
    if ( result )
      return ObFastDereferenceObject((signed __int64 *)(v1 - 16), result);
  }
  return result;
}
