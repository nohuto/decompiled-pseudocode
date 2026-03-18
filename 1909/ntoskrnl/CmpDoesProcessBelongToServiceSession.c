/*
 * XREFs of CmpDoesProcessBelongToServiceSession @ 0x1405BC110
 * Callers:
 *     CmpDoParseKey @ 0x1405FBD70 (CmpDoParseKey.c)
 * Callees:
 *     PsGetServerSiloServiceSessionId @ 0x140002320 (PsGetServerSiloServiceSessionId.c)
 *     PsGetProcessServerSilo @ 0x1400065B0 (PsGetProcessServerSilo.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 */

bool __fastcall CmpDoesProcessBelongToServiceSession(__int64 a1)
{
  __int64 ProcessServerSilo; // rax
  int ServerSiloServiceSessionId; // ebx

  ProcessServerSilo = PsGetProcessServerSilo(a1);
  ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(ProcessServerSilo);
  return (unsigned int)MmGetSessionIdEx(a1) == ServerSiloServiceSessionId;
}
