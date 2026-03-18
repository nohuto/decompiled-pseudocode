/*
 * XREFs of ?GetSampledConditionAnimation@CConditionalExpression@@QEBAXPEAPEAVCBaseExpression@@@Z @ 0x1801D46D4
 * Callers:
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x1801DBE20 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801D3FDC (--4-$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

void __fastcall CConditionalExpression::GetSampledConditionAnimation(
        CConditionalExpression *this,
        struct CBaseExpression **a2)
{
  __int64 v3; // rax
  __int64 *v4; // rdx
  struct CBaseExpression *v5; // rax
  struct CBaseExpression *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v3 = *((int *)this + 89);
  if ( (int)v3 >= 0 )
  {
    v4 = (__int64 *)(16 * v3 + *((_QWORD *)this + 40) + 8LL);
LABEL_4:
    Microsoft::WRL::ComPtr<CBaseExpression>::operator=((__int64 *)&v6, v4);
    goto LABEL_5;
  }
  v4 = (__int64 *)((char *)this + 344);
  if ( *((_QWORD *)this + 43) )
    goto LABEL_4;
LABEL_5:
  v5 = v6;
  v6 = 0LL;
  *a2 = v5;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v6);
}
