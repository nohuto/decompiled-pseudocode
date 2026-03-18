/*
 * XREFs of PspSiloInitializeIsMultiSessionSku @ 0x1408C558C
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1408C50A0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x14008D060 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14008D080 (PsAttachSiloToCurrentThread.c)
 *     ExIsMultiSessionSku @ 0x14078A774 (ExIsMultiSessionSku.c)
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
