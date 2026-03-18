/*
 * XREFs of ?IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z @ 0x1801C3B10
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180061D00 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetPointInLocalSpace@CHitTestContext@@SA_NAEBUD2D_POINT_2F@@AEBVCMILMatrix@@PEAU2@@Z @ 0x1800C22C4 (-GetPointInLocalSpace@CHitTestContext@@SA_NAEBUD2D_POINT_2F@@AEBVCMILMatrix@@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1800EC51B (sqrtf_0.c)
 *     ?CalculateWorldRenderingScale@CVisual@@IEAAMXZ @ 0x1801C2924 (-CalculateWorldRenderingScale@CVisual@@IEAAMXZ.c)
 *     ?GetNotifiedEffectiveLayoutSize@CVisual@@QEBA?AUVector2@Numerics@Foundation@Windows@@XZ @ 0x1801C3174 (-GetNotifiedEffectiveLayoutSize@CVisual@@QEBA-AUVector2@Numerics@Foundation@Windows@@XZ.c)
 *     ?GetNotifiedWorldOffset@CVisual@@QEBA?AUVector3@Numerics@Foundation@Windows@@XZ @ 0x1801C31D0 (-GetNotifiedWorldOffset@CVisual@@QEBA-AUVector3@Numerics@Foundation@Windows@@XZ.c)
 *     ?GetNotifiedWorldRenderingScale@CVisual@@QEBAMXZ @ 0x1801C3230 (-GetNotifiedWorldRenderingScale@CVisual@@QEBAMXZ.c)
 *     ?GetNotifiedWorldUpVector@CVisual@@QEBA?AUVector3@Numerics@Foundation@Windows@@XZ @ 0x1801C3284 (-GetNotifiedWorldUpVector@CVisual@@QEBA-AUVector3@Numerics@Foundation@Windows@@XZ.c)
 *     ?SetNotifiedEffectiveLayoutSize@CVisual@@QEAAXUVector2@Numerics@Foundation@Windows@@@Z @ 0x1801C4AF8 (-SetNotifiedEffectiveLayoutSize@CVisual@@QEAAXUVector2@Numerics@Foundation@Windows@@@Z.c)
 *     ?SetNotifiedWorldOffset@CVisual@@QEAAXUVector3@Numerics@Foundation@Windows@@@Z @ 0x1801C4B3C (-SetNotifiedWorldOffset@CVisual@@QEAAXUVector3@Numerics@Foundation@Windows@@@Z.c)
 *     ?SetNotifiedWorldRenderingScale@CVisual@@QEAAXM@Z @ 0x1801C4B90 (-SetNotifiedWorldRenderingScale@CVisual@@QEAAXM@Z.c)
 *     ?SetNotifiedWorldUpVector@CVisual@@QEAAXUVector3@Numerics@Foundation@Windows@@@Z @ 0x1801C4BD8 (-SetNotifiedWorldUpVector@CVisual@@QEAAXUVector3@Numerics@Foundation@Windows@@@Z.c)
 */

void __fastcall CVisual::IssueContextUpdateNotification(CVisual *this, float a2, const struct D2D_VECTOR_2F *a3)
{
  unsigned int v3; // edi
  char v4; // r14
  const struct CMILMatrix *v5; // r12
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
  int v26; // [rsp+28h] [rbp-A9h]
  _QWORD v27[2]; // [rsp+68h] [rbp-69h] BYREF
  struct D2D_POINT_2F v28; // [rsp+78h] [rbp-59h] BYREF
  unsigned int v29; // [rsp+80h] [rbp-51h]
  struct D2D_POINT_2F v30; // [rsp+88h] [rbp-49h] BYREF
  unsigned int v31; // [rsp+90h] [rbp-41h]

  v3 = 0;
  v4 = 0;
  v5 = (CVisual *)((char *)this + 368);
  CVisual::GetNotifiedWorldOffset((__int64)this, (__int64)&v30);
  v9 = *((float *)this + 105);
  v28.x = *((FLOAT *)this + 104);
  v10 = *((_DWORD *)this + 106);
  v28.y = v9;
  v29 = v10;
  v11 = *(_QWORD *)&v30 - *(_QWORD *)&v28;
  if ( v30 == v28 )
    v11 = v31 - (unsigned __int64)v10;
  if ( v11 )
  {
    v29 = v10;
    CVisual::SetNotifiedWorldOffset(this, &v28);
    v4 = 1;
  }
  CVisual::GetNotifiedEffectiveLayoutSize((__int64)this, &v28);
  v12 = *((float *)this + 34);
  v30.x = *((FLOAT *)this + 33);
  v30.y = v12;
  v13 = v30;
  if ( v28 != v30 )
  {
    ((void (__fastcall *)(_QWORD, _QWORD))CVisual::SetNotifiedEffectiveLayoutSize)(this, v30);
    v4 = 1;
  }
  v14 = CVisual::CalculateWorldRenderingScale(this) * a2;
  if ( CVisual::GetNotifiedWorldRenderingScale(this) != v14 )
  {
    CVisual::SetNotifiedWorldRenderingScale(this, v14);
    v4 = 1;
  }
  v15 = *((float *)this + 93) * 0.0;
  v30.x = (float)((float)((float)(*((float *)this + 96) * 0.0) + (float)(*(float *)v5 * 0.0)) + *((float *)this + 104))
        + a3->x;
  v30.y = (float)((float)((float)(*((float *)this + 97) * 0.0) + v15) + *((float *)this + 105)) + a3->y;
  if ( CHitTestContext::GetPointInLocalSpace(&v30, v5, &v28)
    && (y = v28.y, x = v28.x, v18 = sqrtf_0((float)(y * y) + (float)(x * x)), v18 > 0.00000011920929) )
  {
    v29 = 0;
    v19 = x / v18;
    v20 = y / v18;
    v28.x = v19;
    v28.y = v20;
  }
  else
  {
    v20 = 0.0;
    v28 = 0LL;
    v19 = 0.0;
  }
  CVisual::GetNotifiedWorldUpVector((__int64)this, (__int64)&v30);
  v21 = v28;
  if ( v30.x != v19 || v30.y != v20 )
  {
    v29 = 0;
    CVisual::SetNotifiedWorldUpVector(this, &v28);
    v4 = 1;
  }
  if ( v4 )
  {
    v22 = *((_QWORD *)this + 2);
    v30 = v21;
    v31 = 0;
    v23 = *(_QWORD *)(v22 + 1224);
    v24 = *((_QWORD *)this + 6);
    if ( v24 )
      v3 = *(_DWORD *)(v24 + 68);
    v25 = *(_QWORD *)(v23 + 48);
    v27[0] = v3;
    v27[1] = *((unsigned int *)this + 14);
    v28 = v13;
    LOWORD(v26) = 8;
    CoreUICallSend(v25, v27, 2LL, 15LL, v26, &unk_1802B2EC5, COERCE_UNSIGNED_INT64(v14), &v28);
  }
}
