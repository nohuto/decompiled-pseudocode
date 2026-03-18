/*
 * XREFs of ?AddRef@CHolographicViewer@@WDI@EAAKXZ @ 0x1800F0CD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHolographicViewer::AddRef(__int64 a1)
{
  return CHolographicClient::AddRef((CHolographicClient *)(a1 - 56));
}
