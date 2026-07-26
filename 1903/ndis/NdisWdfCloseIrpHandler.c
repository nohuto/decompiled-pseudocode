/*
 * XREFs of NdisWdfCloseIrpHandler @ 0x1C009EAB0
 * Callers:
 *     <none>
 * Callees:
 *     ndisCloseHandler @ 0x1C0094B38 (ndisCloseHandler.c)
 */

__int64 __fastcall NdisWdfCloseIrpHandler(_IRP *a1)
{
  _BYTE **FsContext; // rcx

  FsContext = (_BYTE **)a1->Tail.Overlay.CurrentStackLocation->FileObject->FsContext;
  return ndisCloseHandler((char)*FsContext, FsContext[1], a1);
}
