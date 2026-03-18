/*
 * XREFs of ?Get3DBounds@CSceneWorld@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180205A20
 * Callers:
 *     ?Get3DContentBounds@CSceneVisual@@QEAAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801C6E78 (-Get3DContentBounds@CSceneVisual@@QEAAJPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSi.c)
 * Callees:
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800600B0 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?SetScale@CMILMatrix@@QEAAXMMMMMM@Z @ 0x1800CF1E4 (-SetScale@CMILMatrix@@QEAAXMMMMMM@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSceneWorld::Get3DBounds(_QWORD **a1, __int64 a2, __m128 *a3)
{
  _BYTE v6[64]; // [rsp+40h] [rbp-39h] BYREF
  int v7; // [rsp+80h] [rbp+7h]
  _DWORD v8[4]; // [rsp+90h] [rbp+17h] BYREF
  _DWORD v9[4]; // [rsp+A0h] [rbp+27h] BYREF
  _DWORD v10[6]; // [rsp+B0h] [rbp+37h] BYREF

  if ( ((unsigned __int8 (__fastcall *)(_QWORD **))(*a1)[29])(a1) )
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
    (*(void (__fastcall **)(_QWORD *, _DWORD *, _DWORD *))(*a1[8] + 40LL))(a1[8], v8, v9);
    v7 = 0;
    v10[0] = v8[0];
    v10[1] = v8[1];
    v10[4] = v8[2];
    v10[2] = v9[0];
    v10[3] = v9[1];
    v10[5] = v9[2];
    CMILMatrix::SetScale((CMILMatrix *)v6, 1.0, -1.0, 1.0, 0.0, 0.0, 0.0);
    CMILMatrix::Transform3DBoundsHelper<1>((CMILMatrix *)v6, (__int64)v10, a3);
  }
  return 0LL;
}
