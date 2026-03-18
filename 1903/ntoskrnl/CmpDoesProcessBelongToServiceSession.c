/*
 * XREFs of CmpDoesProcessBelongToServiceSession @ 0x1405BBD30
 * Callers:
 *     CmpDoParseKey @ 0x1405FAD20 (CmpDoParseKey.c)
 * Callees:
 *     PsGetServerSiloServiceSessionId @ 0x140002320 (PsGetServerSiloServiceSessionId.c)
 *     PsGetProcessServerSilo @ 0x140006520 (PsGetProcessServerSilo.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 */

bool __fastcall CmpDoesProcessBelongToServiceSession(__int64 a1)
{
  __int64 ProcessServerSilo; // rax
  int ServerSiloServiceSessionId; // ebx

  ProcessServerSilo = PsGetProcessServerSilo(a1);
  ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(ProcessServerSilo);
  return (unsigned int)MmGetSessionIdEx(a1) == ServerSiloServiceSessionId;
}
