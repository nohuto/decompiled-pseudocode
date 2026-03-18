/*
 * XREFs of PspSiloInitializeIsMultiSessionSku @ 0x1408C5CAC
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1408C57C0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x14008BD60 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14008BD80 (PsAttachSiloToCurrentThread.c)
 *     ExIsMultiSessionSku @ 0x140788314 (ExIsMultiSessionSku.c)
 */

__int64 __fastcall PspSiloInitializeIsMultiSessionSku(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *Blink; // rsi
  struct _LIST_ENTRY *v2; // rbx
  int IsMultiSessionSku; // edi
  char v5; // [rsp+30h] [rbp+8h] BYREF

  Blink = a1[78].Blink;
  v2 = PsAttachSiloToCurrentThread(a1);
  IsMultiSessionSku = ExIsMultiSessionSku(&v5);
  PsDetachSiloFromCurrentThread(v2);
  if ( IsMultiSessionSku >= 0 )
    BYTE4(Blink[69].Flink[1].Blink) = v5;
  return (unsigned int)IsMultiSessionSku;
}
