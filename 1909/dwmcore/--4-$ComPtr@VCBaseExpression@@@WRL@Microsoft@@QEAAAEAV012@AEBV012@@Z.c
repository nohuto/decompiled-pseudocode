/*
 * XREFs of ??4?$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801D286C
 * Callers:
 *     ?GetSampledConditionAnimation@CConditionalExpression@@QEBAXPEAPEAVCBaseExpression@@@Z @ 0x1801D2F64 (-GetSampledConditionAnimation@CConditionalExpression@@QEBAXPEAPEAVCBaseExpression@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D76C (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800207E8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
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
