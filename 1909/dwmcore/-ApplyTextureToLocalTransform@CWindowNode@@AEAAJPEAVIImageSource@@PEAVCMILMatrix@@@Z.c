/*
 * XREFs of ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIImageSource@@PEAVCMILMatrix@@@Z @ 0x18001D18C
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N5PEAU_D3DCOLORVALUE@@@Z @ 0x180068B40 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x18008F970 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 * Callees:
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x180028EDC (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180036740 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x18007F5CC (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18008C3D0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowNode::ApplyTextureToLocalTransform(
        CWindowNode *this,
        struct IImageSource *a2,
        struct CMILMatrix *a3)
{
  int v6; // esi
  void (__fastcall *v7)(struct IImageSource *, _OWORD *, _DWORD *); // rax
  __int128 v8; // xmm1
  int v9; // eax
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int64 v13; // rcx
  int v14; // eax
  float v15; // xmm5_4
  float v16; // xmm6_4
  float v17; // xmm0_4
  int v18; // eax
  _OWORD v19[4]; // [rsp+28h] [rbp-99h] BYREF
  int v20; // [rsp+68h] [rbp-59h]
  _OWORD v21[4]; // [rsp+78h] [rbp-49h] BYREF
  __int16 v22; // [rsp+B8h] [rbp-9h]
  float v23; // [rsp+C8h] [rbp+7h]
  float v24; // [rsp+CCh] [rbp+Bh]
  float v25; // [rsp+D0h] [rbp+Fh]
  float v26; // [rsp+D4h] [rbp+13h]
  _DWORD v27[4]; // [rsp+D8h] [rbp+17h] BYREF

  v6 = 0;
  v7 = *(void (__fastcall **)(struct IImageSource *, _OWORD *, _DWORD *))(*(_QWORD *)a2 + 64LL);
  v20 = 0;
  v7(a2, v19, v27);
  CMILMatrix::Translate((CMILMatrix *)v19, COERCE_FLOAT(v27[0] ^ _xmm), COERCE_FLOAT(v27[1] ^ _xmm));
  v8 = v19[1];
  v9 = v20;
  *(_OWORD *)a3 = v19[0];
  v10 = v19[2];
  *((_OWORD *)a3 + 1) = v8;
  v11 = v19[3];
  *((_OWORD *)a3 + 2) = v10;
  *((_OWORD *)a3 + 3) = v11;
  *((_DWORD *)a3 + 16) = v9;
  CMILMatrix::Transform2DBoundsHelper<0>(a3);
  if ( a2 == (struct IImageSource *)((*((_QWORD *)this + 111) + 64LL) & -(__int64)(*((_QWORD *)this + 111) != 0LL)) )
  {
    CMILMatrix::Translate(
      a3,
      (float)(*((_DWORD *)this + 174) - *((_DWORD *)this + 178)),
      (float)(*((_DWORD *)this + 175) - *((_DWORD *)this + 179)));
    v13 = *(_QWORD *)(*((_QWORD *)this + 111) + 96LL);
    if ( !v13 || *(_DWORD *)(v13 + 168) == 1 )
    {
      if ( *((_BYTE *)this + 942) )
        CMILMatrix::Translate(
          a3,
          (float)((float)(*((_DWORD *)this + 176) - *((_DWORD *)this + 178))
                - (float)(*((_DWORD *)this + 174) - *((_DWORD *)this + 178)))
        - (float)(v25 - v23),
          0.0);
    }
    else
    {
      v14 = 0;
      v15 = v25 - v23;
      if ( *((_DWORD *)this + 176) - *((_DWORD *)this + 174) >= 0 )
        v14 = *((_DWORD *)this + 176) - *((_DWORD *)this + 174);
      v16 = (float)v14;
      v17 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)v14 - v15)) & _xmm);
      if ( v17 > 0.00390625 )
        goto LABEL_12;
      v18 = 0;
      if ( *((_DWORD *)this + 177) - *((_DWORD *)this + 175) >= 0 )
        v18 = *((_DWORD *)this + 177) - *((_DWORD *)this + 175);
      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)v18 - (float)(v26 - v24))) & _xmm) > 0.00390625 )
      {
LABEL_12:
        if ( v15 > 0.0 && (float)(v26 - v24) > 0.0 )
        {
          if ( *((_DWORD *)this + 177) - *((_DWORD *)this + 175) >= 0 )
            v6 = *((_DWORD *)this + 177) - *((_DWORD *)this + 175);
          v21[2] = _xmm;
          v22 = 32085;
          v21[1] = _xmm;
          v21[3] = _xmm;
          v21[0] = _xmm;
          CMILMatrix::Scale((CMILMatrix *)v21, v16 / v15, (float)v6 / (float)(v26 - v24), 1.0);
          CMILMatrix::Multiply((const struct CMILMatrix *)v21, a3, a3);
        }
      }
    }
  }
  return 0LL;
}
