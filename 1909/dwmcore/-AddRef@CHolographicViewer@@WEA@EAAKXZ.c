/*
 * XREFs of ?AddRef@CHolographicViewer@@WEA@EAAKXZ @ 0x1800F0B50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHolographicViewer::AddRef(__int64 a1)
{
  return CHolographicClient::AddRef((CHolographicClient *)(a1 - 64));
}
