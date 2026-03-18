/*
 * XREFs of ?GetSourceRect@CBitmapRealization@@QEBA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180030524
 * Callers:
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800302F0 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?Activate@CDirectFlipInfo@@UEAAJXZ @ 0x180178910 (-Activate@CDirectFlipInfo@@UEAAJXZ.c)
 *     ?IsDirectFlipSupportedOnTarget@CBindInfo@CCompositionSurfaceInfo@@QEAA_NPEAVIRenderTarget@@@Z @ 0x1801BC6E4 (-IsDirectFlipSupportedOnTarget@CBindInfo@CCompositionSurfaceInfo@@QEAA_NPEAVIRenderTarget@@@Z.c)
 *     ?GetTransformAndYUVRects@CDxHandleYUVBitmapRealization@@UEBA_N_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@22@Z @ 0x180229080 (-GetTransformAndYUVRects@CDxHandleYUVBitmapRealization@@UEBA_N_NPEAVCMILMatrix@@PEAV-$TMilRect_@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CBitmapRealization::GetSourceRect(__int64 a1, _OWORD *a2)
{
  char v4; // cl
  char v6; // cl
  bool v7; // zf
  char v8; // al
  int v9; // edx
  int v10; // r8d
  int v11; // eax
  float v12; // xmm0_4
  float v13; // xmm1_4
  int v14; // r9d
  int v15; // r10d
  int v16; // r8d
  int v17; // edx
  int v18; // eax
  int v19; // ecx
  int v20; // r10d
  char v21; // dl
  int v22; // [rsp+20h] [rbp-18h] BYREF
  _DWORD v23[5]; // [rsp+24h] [rbp-14h] BYREF

  v4 = *(_BYTE *)(a1 + 308);
  if ( (v4 & 1) == 0 )
  {
    v6 = v4 & 0xFD;
    v7 = *(_DWORD *)(a1 + 304) == 3;
    *(_BYTE *)(a1 + 308) = v6;
    if ( v7 )
    {
      (*(void (__fastcall **)(__int64, _DWORD *, int *))(*(_QWORD *)(a1 + 144) + 32LL))(a1 + 144, v23, &v22);
      v16 = *(_DWORD *)(a1 + 200);
      v17 = *(_DWORD *)(a1 + 208);
      if ( v16 <= v17 )
      {
        v18 = *(_DWORD *)(a1 + 204);
        v19 = *(_DWORD *)(a1 + 212);
        if ( v18 <= v19 )
        {
          v20 = *(_DWORD *)(a1 + 208);
          if ( v18 <= 0 )
            v18 = 0;
          if ( v16 <= 0 )
            v16 = 0;
          if ( v17 >= v23[0] )
            v20 = v23[0];
          if ( v19 >= v22 )
            v19 = v22;
          if ( v17 >= v23[0] )
            v17 = v23[0];
          if ( v17 <= v16 || (v21 = 0, v19 <= v18) )
            v21 = 1;
          if ( !v21 )
          {
            *(_BYTE *)(a1 + 308) |= 2u;
            *(float *)(a1 + 312) = (float)v16;
            *(float *)(a1 + 316) = (float)v18;
            *(float *)(a1 + 320) = (float)v20;
            *(float *)(a1 + 324) = (float)v19;
          }
        }
      }
      v8 = *(_BYTE *)(a1 + 308);
    }
    else
    {
      v8 = v6;
      if ( *(int *)(a1 + 272) >= 2 )
      {
        v9 = *(_DWORD *)(a1 + 208);
        v10 = *(_DWORD *)(a1 + 200);
        if ( v9 > v10 )
        {
          v14 = *(_DWORD *)(a1 + 212);
          v8 = v6;
          v15 = *(_DWORD *)(a1 + 204);
          if ( v14 > v15 )
          {
            v8 = v6 | 2;
            *(_BYTE *)(a1 + 308) = v6 | 2;
            *(float *)(a1 + 312) = (float)v10;
            *(float *)(a1 + 316) = (float)v15;
            *(float *)(a1 + 320) = (float)v9;
            *(float *)(a1 + 324) = (float)v14;
          }
        }
      }
    }
    if ( (v8 & 2) == 0 )
    {
      (*(void (__fastcall **)(__int64, _DWORD *, int *))(*(_QWORD *)(a1 + 144) + 32LL))(a1 + 144, v23, &v22);
      v11 = v23[0];
      *(_QWORD *)(a1 + 312) = 0LL;
      v12 = (float)v11;
      v13 = (float)v22;
      v8 = *(_BYTE *)(a1 + 308);
      *(float *)(a1 + 320) = v12;
      *(float *)(a1 + 324) = v13;
    }
    *(_BYTE *)(a1 + 308) = v8 | 1;
  }
  *a2 = *(_OWORD *)(a1 + 312);
  return (*(_BYTE *)(a1 + 308) & 2) != 0;
}
