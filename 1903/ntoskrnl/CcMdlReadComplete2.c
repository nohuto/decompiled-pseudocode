/*
 * XREFs of CcMdlReadComplete2 @ 0x1406AF674
 * Callers:
 *     FsRtlMdlReadCompleteDev @ 0x1400FCDB0 (FsRtlMdlReadCompleteDev.c)
 *     CcMdlReadComplete @ 0x1406E9FB0 (CcMdlReadComplete.c)
 * Callees:
 *     MmUnlockPages @ 0x14006A390 (MmUnlockPages.c)
 *     IoFreeMdl @ 0x1400FCDD0 (IoFreeMdl.c)
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
