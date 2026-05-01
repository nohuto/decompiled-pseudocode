/*
 * XREFs of ??_G?$CAnimationCallbackHandler@V_lambda_3f14cb8a0624f11503591536414ec36d_@@V_lambda_88032d98673c75c82401aed8ec27639f_@@@DCompThumbnailHelpers@@UEAAPEAXI@Z @ 0x180323100
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180084E20 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall DCompThumbnailHelpers::CAnimationCallbackHandler<_lambda_3f14cb8a0624f11503591536414ec36d_,_lambda_88032d98673c75c82401aed8ec27639f_>::`scalar deleting destructor'(
        __int64 *Block,
        char a2)
{
  __int64 v4; // rcx

  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(Block + 4);
  v4 = Block[3];
  if ( v4 )
  {
    Block[3] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *((_DWORD *)Block + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
