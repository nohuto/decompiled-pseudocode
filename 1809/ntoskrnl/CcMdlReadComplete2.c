/*
 * XREFs of CcMdlReadComplete2 @ 0x140664024
 * Callers:
 *     FsRtlMdlReadCompleteDev @ 0x1400E0BC0 (FsRtlMdlReadCompleteDev.c)
 *     CcMdlReadComplete @ 0x1406C87B0 (CcMdlReadComplete.c)
 * Callees:
 *     MmUnlockPages @ 0x140033580 (MmUnlockPages.c)
 *     IoFreeMdl @ 0x1400E0BE0 (IoFreeMdl.c)
 */

void __fastcall CcMdlReadComplete2(__int64 a1, struct _MDL *a2)
{
  struct _MDL *v2; // rdi
  struct _MDL *Next; // rbx

  if ( a2 )
  {
    v2 = a2;
    do
    {
      Next = v2->Next;
      MmUnlockPages(v2);
      IoFreeMdl(v2);
      v2 = Next;
    }
    while ( Next );
  }
}
