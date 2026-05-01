/*
 * XREFs of ??_G?$CAnimationCallbackHandler@V_lambda_ed8ffcce05179564df35e7d067b53c30_@@V_lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb_@@@DCompThumbnailHelpers@@UEAAPEAXI@Z @ 0x180376EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180084E20 (--3@YAXPEAX@Z.c)
 */

__int64 *__fastcall DCompThumbnailHelpers::CAnimationCallbackHandler<_lambda_ed8ffcce05179564df35e7d067b53c30_,_lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb_>::`scalar deleting destructor'(
        __int64 *Block,
        char a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(Block + 6);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(Block + 4);
  *((_DWORD *)Block + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
