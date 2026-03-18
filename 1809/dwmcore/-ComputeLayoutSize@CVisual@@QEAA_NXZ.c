/*
 * XREFs of ?ComputeLayoutSize@CVisual@@QEAA_NXZ @ 0x18009F3A0
 * Callers:
 *     ?EnsureLayoutSize@CPreComputeContext@@AEAAJPEBVCVisualTree@@@Z @ 0x18004BF14 (-EnsureLayoutSize@CPreComputeContext@@AEAAJPEBVCVisualTree@@@Z.c)
 *     ?UpdateRelativeLayout@CPreComputeHelper@@IEAAXPEAVCVisual@@@Z @ 0x180225DD0 (-UpdateRelativeLayout@CPreComputeHelper@@IEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     ?GetRelativeOffsetInternal@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x18009F378 (-GetRelativeOffsetInternal@CVisual@@QEBA-AUD2D_VECTOR_3F@@XZ.c)
 *     ?GetRelativeLayoutSizeInternal@CVisual@@QEBA?AUD2D_SIZE_F@@XZ @ 0x18009FD04 (-GetRelativeLayoutSizeInternal@CVisual@@QEBA-AUD2D_SIZE_F@@XZ.c)
 *     ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x1800A5428 (-ClearContentTreeDataCaches@CVisual@@IEAAXXZ.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x1800A96E0 (-OnClipChanged@CVisual@@AEAAXXZ.c)
 */

char __fastcall CVisual::ComputeLayoutSize(CVisual *this)
{
  char v1; // bl
  float v3; // xmm7_4
  float v4; // xmm3_4
  float v5; // xmm8_4
  float v6; // xmm9_4
  __int64 v7; // rax
  float v8; // xmm10_4
  float v9; // xmm4_4
  float v10; // xmm6_4
  float v11; // xmm5_4
  float v12; // xmm4_4
  float v13; // xmm2_4
  float v14; // xmm0_4
  char v15; // bp
  char v16; // si
  __int64 v18; // rax
  struct D2D_VECTOR_3F v19; // [rsp+20h] [rbp-68h] BYREF
  float v20; // [rsp+90h] [rbp+8h]
  float v21; // [rsp+94h] [rbp+Ch]

  v1 = 0;
  v3 = *((float *)this + 29);
  v4 = 0.0;
  v5 = *((float *)this + 30);
  v6 = *((float *)this + 34);
  v7 = *((_QWORD *)this + 10);
  v8 = *((float *)this + 33);
  if ( v7 )
    v4 = *(float *)(v7 + 132);
  CVisual::GetRelativeOffsetInternal(this, &v19);
  v10 = (float)(v19.y * v9) + *((float *)this + 27);
  *((float *)this + 29) = (float)(v19.x * v4) + *((float *)this + 26);
  *((float *)this + 30) = v10;
  CVisual::GetRelativeLayoutSizeInternal(this);
  v13 = (float)(v20 * v4) + *((float *)this + 31);
  v14 = (float)(v21 * v12) + *((float *)this + 32);
  *((float *)this + 34) = v14;
  *((float *)this + 33) = v13;
  if ( v13 < 0.0 )
  {
    *((_DWORD *)this + 33) = 0;
    v13 = 0.0;
  }
  if ( v14 < 0.0 )
  {
    *((_DWORD *)this + 34) = 0;
    v14 = 0.0;
  }
  if ( v3 != v11 || (v15 = 0, v5 != v10) )
    v15 = 1;
  if ( v8 == v13 && v6 == v14 )
  {
    v16 = 0;
  }
  else
  {
    v18 = *((_QWORD *)this + 31);
    v16 = 1;
    if ( v18 && *(_BYTE *)(v18 + 128) )
      CVisual::OnClipChanged(this);
    CVisual::ClearContentTreeDataCaches(this);
  }
  if ( v15 || v16 )
    return 1;
  return v1;
}
