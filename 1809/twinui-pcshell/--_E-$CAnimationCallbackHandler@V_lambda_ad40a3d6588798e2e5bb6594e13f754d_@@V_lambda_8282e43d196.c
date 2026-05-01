/*
 * XREFs of ??_E?$CAnimationCallbackHandler@V_lambda_ad40a3d6588798e2e5bb6594e13f754d_@@V_lambda_8282e43d19605b8bda0fa017156e9de9_@@@DCompThumbnailHelpers@@UEAAPEAXI@Z @ 0x180310E70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180084E20 (--3@YAXPEAX@Z.c)
 */

__int64 *__fastcall DCompThumbnailHelpers::CAnimationCallbackHandler<_lambda_ad40a3d6588798e2e5bb6594e13f754d_,_lambda_8282e43d19605b8bda0fa017156e9de9_>::`vector deleting destructor'(
        __int64 *Block,
        char a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(Block + 3);
  *((_DWORD *)Block + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
