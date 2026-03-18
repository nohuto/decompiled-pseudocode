/*
 * XREFs of ?IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z @ 0x1801B73A8
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180041660 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetPointInLocalSpace@CHitTestContext@@SA_NAEBUD2D_POINT_2F@@AEBVCMILMatrix@@PEAU2@@Z @ 0x180066EE0 (-GetPointInLocalSpace@CHitTestContext@@SA_NAEBUD2D_POINT_2F@@AEBVCMILMatrix@@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1800F004B (sqrtf_0.c)
 *     ?CalculateWorldRenderingScale@CVisual@@IEAAMXZ @ 0x1801B6494 (-CalculateWorldRenderingScale@CVisual@@IEAAMXZ.c)
 *     ?GetNotifiedEffectiveLayoutSize@CVisual@@QEBA?AUVector2@Numerics@Foundation@Windows@@XZ @ 0x1801B69D8 (-GetNotifiedEffectiveLayoutSize@CVisual@@QEBA-AUVector2@Numerics@Foundation@Windows@@XZ.c)
 *     ?GetNotifiedWorldOffset@CVisual@@QEBA?AUVector3@Numerics@Foundation@Windows@@XZ @ 0x1801B6A34 (-GetNotifiedWorldOffset@CVisual@@QEBA-AUVector3@Numerics@Foundation@Windows@@XZ.c)
 *     ?GetNotifiedWorldRenderingScale@CVisual@@QEBAMXZ @ 0x1801B6A94 (-GetNotifiedWorldRenderingScale@CVisual@@QEBAMXZ.c)
 *     ?GetNotifiedWorldUpVector@CVisual@@QEBA?AUVector3@Numerics@Foundation@Windows@@XZ @ 0x1801B6AE8 (-GetNotifiedWorldUpVector@CVisual@@QEBA-AUVector3@Numerics@Foundation@Windows@@XZ.c)
 *     ?SetNotifiedEffectiveLayoutSize@CVisual@@QEAAXUVector2@Numerics@Foundation@Windows@@@Z @ 0x1801B8564 (-SetNotifiedEffectiveLayoutSize@CVisual@@QEAAXUVector2@Numerics@Foundation@Windows@@@Z.c)
 *     ?SetNotifiedWorldOffset@CVisual@@QEAAXUVector3@Numerics@Foundation@Windows@@@Z @ 0x1801B85A8 (-SetNotifiedWorldOffset@CVisual@@QEAAXUVector3@Numerics@Foundation@Windows@@@Z.c)
 *     ?SetNotifiedWorldRenderingScale@CVisual@@QEAAXM@Z @ 0x1801B85F0 (-SetNotifiedWorldRenderingScale@CVisual@@QEAAXM@Z.c)
 *     ?SetNotifiedWorldUpVector@CVisual@@QEAAXUVector3@Numerics@Foundation@Windows@@@Z @ 0x1801B8638 (-SetNotifiedWorldUpVector@CVisual@@QEAAXUVector3@Numerics@Foundation@Windows@@@Z.c)
 */

void __fastcall CVisual::IssueContextUpdateNotification(FLOAT *this, float a2, const struct D2D_VECTOR_2F *a3)
{
  unsigned int v3; // edi
  char v4; // r14
  float *v5; // rsi
  FLOAT v9; // xmm0_4
  unsigned int v10; // xmm1_4
  unsigned __int64 v11; // rcx
  FLOAT v12; // xmm2_4
  struct D2D_POINT_2F v13; // xmm11_8
  float v14; // xmm9_4
  float v15; // xmm0_4
  float y; // xmm7_4
  float x; // xmm6_4
  float v18; // xmm0_4
  float v19; // xmm6_4
  float v20; // xmm7_4
  struct D2D_POINT_2F v21; // xmm8_8
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  _QWORD v26[2]; // [rsp+68h] [rbp-69h] BYREF
  struct D2D_POINT_2F v27; // [rsp+78h] [rbp-59h] BYREF
  unsigned int v28; // [rsp+80h] [rbp-51h]
  struct D2D_POINT_2F v29; // [rsp+88h] [rbp-49h] BYREF
  unsigned int v30; // [rsp+90h] [rbp-41h]

  v3 = 0;
  v4 = 0;
  v5 = this + 92;
  CVisual::GetNotifiedWorldOffset((__int64)this, (__int64)&v29);
  v9 = v5[13];
  v27.x = v5[12];
  v10 = *((_DWORD *)v5 + 14);
  v27.y = v9;
  v28 = v10;
  v11 = *(_QWORD *)&v29 - *(_QWORD *)&v27;
  if ( v29 == v27 )
    v11 = v30 - (unsigned __int64)v10;
  if ( v11 )
  {
    v28 = v10;
    CVisual::SetNotifiedWorldOffset(this, &v27);
    v4 = 1;
  }
  CVisual::GetNotifiedEffectiveLayoutSize((__int64)this, &v27);
  v12 = this[34];
  v29.x = this[33];
  v29.y = v12;
  v13 = v29;
  if ( v27 != v29 )
  {
    ((void (__fastcall *)(_QWORD, _QWORD))CVisual::SetNotifiedEffectiveLayoutSize)(this, v29);
    v4 = 1;
  }
  v14 = CVisual::CalculateWorldRenderingScale((CVisual *)this) * a2;
  if ( CVisual::GetNotifiedWorldRenderingScale((CVisual *)this) != v14 )
  {
    CVisual::SetNotifiedWorldRenderingScale((CVisual *)this, v14);
    v4 = 1;
  }
  v15 = v5[1] * 0.0;
  v29.x = (float)((float)((float)(v5[4] * 0.0) + (float)(*v5 * 0.0)) + v5[12]) + a3->x;
  v29.y = (float)((float)((float)(v5[5] * 0.0) + v15) + v5[13]) + a3->y;
  if ( CHitTestContext::GetPointInLocalSpace(&v29, (const struct CMILMatrix *)v5, &v27)
    && (y = v27.y, x = v27.x, v18 = sqrtf_0((float)(y * y) + (float)(x * x)), v18 > 0.00000011920929) )
  {
    v28 = 0;
    v19 = x / v18;
    v20 = y / v18;
    v27.x = v19;
    v27.y = v20;
  }
  else
  {
    v20 = 0.0;
    v27 = 0LL;
    v19 = 0.0;
  }
  CVisual::GetNotifiedWorldUpVector((__int64)this, (__int64)&v29);
  v21 = v27;
  if ( v29.x != v19 || v29.y != v20 )
  {
    v28 = 0;
    CVisual::SetNotifiedWorldUpVector(this, &v27);
    v4 = 1;
  }
  if ( v4 )
  {
    v22 = *((_QWORD *)this + 2);
    v29 = v21;
    v30 = 0;
    v23 = *(_QWORD *)(v22 + 1208);
    v24 = *((_QWORD *)this + 6);
    if ( v24 )
      v3 = *(_DWORD *)(v24 + 68);
    v25 = *(_QWORD *)(v23 + 56);
    v26[0] = v3;
    v26[1] = *((unsigned int *)this + 14);
    v27 = v13;
    CoreUICallSend(v25, v26, 2LL, 14LL, 8, &unk_18027645F);
  }
}
