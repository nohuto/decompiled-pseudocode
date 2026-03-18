/*
 * XREFs of DbgkInitializeServerSilo @ 0x140847B90
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1408C57C0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x14008BD60 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14008BD80 (PsAttachSiloToCurrentThread.c)
 *     PsGetServerSiloGlobals @ 0x14008D470 (PsGetServerSiloGlobals.c)
 *     DbgkpInitializePhase1SiloState @ 0x140758CFC (DbgkpInitializePhase1SiloState.c)
 */

__int64 __fastcall DbgkInitializeServerSilo(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *v2; // rdi
  _QWORD *ServerSiloGlobals; // rax
  int v4; // ebx

  v2 = PsAttachSiloToCurrentThread(a1);
  ServerSiloGlobals = PsGetServerSiloGlobals((__int64)a1);
  ServerSiloGlobals[120] = 0LL;
  v4 = DbgkpInitializePhase1SiloState((__int64)(ServerSiloGlobals + 120));
  if ( v4 >= 0 )
    v4 = 0;
  PsDetachSiloFromCurrentThread(v2);
  return (unsigned int)v4;
}
