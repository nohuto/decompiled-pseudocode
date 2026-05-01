/*
 * XREFs of ?pop_front@?$deque@UpositioningOperationInfo@@V?$allocator@UpositioningOperationInfo@@@std@@@std@@QEAAXXZ @ 0x180143768
 * Callers:
 *     ?ApplyPendingPositioningOperations@FullScreenPositioner@@AEAAXXZ @ 0x180140760 (-ApplyPendingPositioningOperations@FullScreenPositioner@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x180141C8C (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall std::deque<positioningOperationInfo>::pop_front(_QWORD *a1)
{
  __int64 *v2; // rbx
  __int64 result; // rax

  v2 = *(__int64 **)(a1[1] + 8 * (a1[3] & (a1[2] - 1LL)));
  Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(v2 + 1);
  result = Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v2);
  if ( a1[4]-- == 1LL )
    a1[3] = 0LL;
  else
    ++a1[3];
  return result;
}
