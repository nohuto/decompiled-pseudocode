/*
 * XREFs of ??4?$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18000656C
 * Callers:
 *     ?Initialize@CAtlasTexture@@AEAAJPEAVCD3DDeviceLevel1@@I@Z @ 0x180004810 (-Initialize@CAtlasTexture@@AEAAJPEAVCD3DDeviceLevel1@@I@Z.c)
 *     ?EnsureBlackBitmapTargets@CD3DDeviceLevel1@@AEAAJXZ @ 0x18000643C (-EnsureBlackBitmapTargets@CD3DDeviceLevel1@@AEAAJXZ.c)
 *     ?GetSampledConditionAnimation@CConditionalExpression@@QEBAXPEAPEAVCBaseExpression@@@Z @ 0x1801930C4 (-GetSampledConditionAnimation@CConditionalExpression@@QEBAXPEAPEAVCBaseExpression@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18001B8B8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<CBaseExpression>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rdi
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  if ( *a1 != *a2 )
  {
    v5 = *a2;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v5);
    v5 = *a1;
    *a1 = v2;
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v5);
  }
  return a1;
}
