/*
 * XREFs of ?Get3DBounds@CSpatialVisualContent@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801DB140
 * Callers:
 *     ?Get3DContentBounds@CSpatialVisual@@QEAAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B2B74 (-Get3DContentBounds@CSpatialVisual@@QEAAJPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 * Callees:
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180040650 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?ComputeSceneToLocalTransform@CSpatialVisualContent@@AEBAXAEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1801DAEA8 (-ComputeSceneToLocalTransform@CSpatialVisualContent@@AEBAXAEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 */

__int64 __fastcall CSpatialVisualContent::Get3DBounds(CSpatialVisualContent *this, struct D2D_SIZE_F *a2, __m128 *a3)
{
  _BYTE v7[64]; // [rsp+20h] [rbp-49h] BYREF
  int v8; // [rsp+60h] [rbp-9h]
  _DWORD v9[4]; // [rsp+70h] [rbp+7h] BYREF
  _DWORD v10[4]; // [rsp+80h] [rbp+17h] BYREF
  _DWORD v11[6]; // [rsp+90h] [rbp+27h] BYREF

  if ( !a2 || (*(unsigned __int8 (__fastcall **)(CSpatialVisualContent *))(*(_QWORD *)this + 192LL))(this) )
  {
    a3[1].m128_i32[0] = 0;
    a3[1].m128_i32[1] = 0;
    a3->m128_i32[3] = 0;
    a3->m128_i32[2] = 0;
    a3->m128_i32[1] = 0;
    a3->m128_i32[0] = 0;
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _DWORD *, _DWORD *))(**((_QWORD **)this + 9) + 32LL))(
      *((_QWORD *)this + 9),
      v9,
      v10);
    v8 = 0;
    v11[0] = v9[0];
    v11[1] = v9[1];
    v11[4] = v9[2];
    v11[2] = v10[0];
    v11[3] = v10[1];
    v11[5] = v10[2];
    CSpatialVisualContent::ComputeSceneToLocalTransform(this, a2, (struct CMILMatrix *)v7);
    CMILMatrix::Transform3DBoundsHelper<1>((CMILMatrix *)v7, (__int64)v11, a3);
  }
  return 0LL;
}
