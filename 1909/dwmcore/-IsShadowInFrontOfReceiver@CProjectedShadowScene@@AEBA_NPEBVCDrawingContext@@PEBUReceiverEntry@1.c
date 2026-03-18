/*
 * XREFs of ?IsShadowInFrontOfReceiver@CProjectedShadowScene@@AEBA_NPEBVCDrawingContext@@PEBUReceiverEntry@1@@Z @ 0x180007778
 * Callers:
 *     ?UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z @ 0x180006690 (-UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z.c)
 * Callees:
 *     ?GetLightPosition@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@PEAVCVisual@@PEAUD2D_VECTOR_3F@@@Z @ 0x180006070 (-GetLightPosition@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@PEAVCVisual@@PEAUD2D.c)
 *     ?Transpose@CMILMatrix@@QEAAXXZ @ 0x180008C94 (-Transpose@CMILMatrix@@QEAAXXZ.c)
 *     ?Transform3DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_3F@@AEBU2@@Z @ 0x1800097C0 (-Transform3DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_3F@@AEBU2@@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800CE4A8 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CProjectedShadowScene::IsShadowInFrontOfReceiver(
        CProjectedShadowScene *this,
        const struct CDrawingContext *a2,
        const struct CProjectedShadowScene::ReceiverEntry *a3)
{
  const struct CVisualTree *v3; // rdi
  ShadowHelpers *v5; // rbx
  const struct CCompositionLight *v7; // rax
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  float x; // xmm6_4
  float y; // xmm7_4
  float z; // xmm8_4
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  struct D2D_VECTOR_3F v20; // [rsp+28h] [rbp-69h] BYREF
  __int128 v21; // [rsp+38h] [rbp-59h] BYREF
  __int128 v22; // [rsp+48h] [rbp-49h]
  __int128 v23; // [rsp+58h] [rbp-39h]
  __int128 v24; // [rsp+68h] [rbp-29h]
  int v25; // [rsp+78h] [rbp-19h]
  D2D_VECTOR_3F v26; // [rsp+88h] [rbp-9h] BYREF

  v3 = (const struct CVisualTree *)*((_QWORD *)this + 11);
  v5 = (ShadowHelpers *)*((_QWORD *)a2 + 757);
  v7 = (const struct CCompositionLight *)(*(__int64 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)v3 + 208LL))(v3);
  ShadowHelpers::GetLightPosition(v5, v3, v7, (struct CVisual *)&v20);
  v8 = *((_OWORD *)a3 + 2);
  v9 = *((_OWORD *)a3 + 3);
  v25 = *((_DWORD *)a3 + 24);
  v21 = v8;
  v10 = *((_OWORD *)a3 + 4);
  v22 = v9;
  v11 = *((_OWORD *)a3 + 5);
  v23 = v10;
  v24 = v11;
  CMILMatrix::Invert((CMILMatrix *)&v21);
  CMILMatrix::Transpose((CMILMatrix *)&v21);
  x = v20.x;
  y = v20.y;
  z = v20.z;
  if ( (*(unsigned int (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)v3 + 224LL))(v3) == 2 )
  {
    x = x - (float)(*((float *)a3 + 20) / *((float *)a3 + 23));
    y = y - (float)(*((float *)a3 + 21) / *((float *)a3 + 23));
    z = z - (float)(*((float *)a3 + 22) / *((float *)a3 + 23));
  }
  v20 = (struct D2D_VECTOR_3F)v23;
  if ( (float)((float)((float)(*(float *)&v23 * x) + (float)(*((float *)&v23 + 1) * y))
             + (float)(*((float *)&v23 + 2) * z)) <= 0.0 )
  {
    LODWORD(v20.x) = v23 ^ _xmm;
    LODWORD(v20.y) = DWORD1(v23) ^ _xmm;
    LODWORD(v20.z) = DWORD2(v23) ^ _xmm;
  }
  v15 = *((_OWORD *)a2 + 228);
  v16 = *((_OWORD *)a2 + 229);
  v25 = *((_DWORD *)a2 + 928);
  v21 = v15;
  v17 = *((_OWORD *)a2 + 230);
  v22 = v16;
  v18 = *((_OWORD *)a2 + 231);
  v23 = v17;
  v24 = v18;
  CMILMatrix::Invert((CMILMatrix *)&v21);
  CMILMatrix::Transpose((CMILMatrix *)&v21);
  CMILMatrix::Transform3DVector((CMILMatrix *)&v21, &v26, &v20);
  return v26.z > 0.0;
}
