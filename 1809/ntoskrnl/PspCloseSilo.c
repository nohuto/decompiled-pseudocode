/*
 * XREFs of PspCloseSilo @ 0x140583738
 * Callers:
 *     PspJobClose @ 0x1406075F0 (PspJobClose.c)
 * Callees:
 *     PsIsServerSilo @ 0x14008FCA0 (PsIsServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x1400922CC (PsGetServerSiloGlobals.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

char __fastcall PspCloseSilo(__int64 a1)
{
  _QWORD *ServerSiloGlobals; // rax
  __int64 v2; // rcx
  _QWORD *v3; // rbx
  void *v4; // rcx

  LOBYTE(ServerSiloGlobals) = PsIsServerSilo(a1);
  if ( (_BYTE)ServerSiloGlobals )
  {
    ServerSiloGlobals = PsGetServerSiloGlobals(v2);
    v3 = ServerSiloGlobals;
    v4 = (void *)ServerSiloGlobals[152];
    if ( v4 )
    {
      ExFreePoolWithTag(v4, 0);
      LOBYTE(ServerSiloGlobals) = 0;
      v3[151] = 0LL;
      v3[152] = 0LL;
    }
  }
  return (char)ServerSiloGlobals;
}
