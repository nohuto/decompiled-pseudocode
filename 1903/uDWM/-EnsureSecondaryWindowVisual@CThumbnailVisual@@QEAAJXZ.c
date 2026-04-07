/*
 * XREFs of ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x180003634
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180025480 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 * Callees:
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180011A28 (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180016C00 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18001EEF4 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180023D10 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?_HasBorder@CThumbnailVisual@@AEAA_NXZ @ 0x180025DA8 (-_HasBorder@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x180025DCC (-EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentatio.c)
 *     ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x18002BF6C (-SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180031374 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?SetScale@CVisual@@QEAAXNN@Z @ 0x1800313B4 (-SetScale@CVisual@@QEAAXNN@Z.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x1800315C4 (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x180036A78 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?ClearInterpolationMode@CVisual@@QEAAXXZ @ 0x18004C2AC (-ClearInterpolationMode@CVisual@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ @ 0x18008CC9C (-_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ.c)
 */

__int64 __fastcall CThumbnailVisual::EnsureSecondaryWindowVisual(CThumbnailVisual *this)
{
  int v2; // eax
  unsigned int v3; // edi
  int v4; // eax
  int v5; // eax
  int inserted; // eax
  int v7; // eax
  CThumbnailVisual *v8; // rcx
  int v9; // ecx
  int v10; // eax
  double v11; // xmm3_8
  double v12; // xmm7_8
  double v13; // xmm9_8
  double v14; // xmm6_8
  double v15; // xmm2_8
  float v16; // xmm1_4
  double v17; // xmm2_8
  float v18; // xmm1_4
  __int64 v19; // rcx
  LONG v20; // esi
  LONG v21; // ebp
  CVisual *v22; // rcx
  int v24; // eax
  struct CBaseGeometryProxy *v25; // rdx
  int RectangleGeometry; // eax
  int v27; // eax
  void *v28; // [rsp+28h] [rbp-50h]
  struct tagPOINT v29; // [rsp+80h] [rbp+8h] BYREF

  v2 = VisualCollection::RemoveAll((CThumbnailVisual *)((char *)this + 32));
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x310u, v28);
  }
  else if ( *((_BYTE *)this + 472) )
  {
    v4 = CThumbnailVisual::EnsureSecondaryWindowRepresentation(this, 0LL);
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x314u, v28);
    }
    else
    {
      v5 = CSecondaryWindowRepresentation::EnsureOwnedWindowVisual(*((CSecondaryWindowRepresentation **)this + 47));
      v3 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x315u, v28);
      }
      else
      {
        inserted = VisualCollection::InsertRelative(
                     (CThumbnailVisual *)((char *)this + 32),
                     *(struct CVisual **)(*((_QWORD *)this + 47) + 48LL),
                     0LL,
                     0,
                     1);
        v3 = inserted;
        if ( inserted < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x316u, v28);
        }
        else
        {
          v7 = CSecondaryWindowRepresentation::Validate(*((CSecondaryWindowRepresentation **)this + 47));
          v3 = v7;
          if ( v7 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x317u, v28);
          }
          else if ( CThumbnailVisual::_HasBorder(this)
                 && (v24 = CThumbnailVisual::_AddBorderInstructions(v8), v3 = v24, v24 < 0) )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x31Au, v28);
          }
          else
          {
            *((_DWORD *)this + 20) &= ~0x80u;
            v9 = *((_DWORD *)this + 131);
            if ( v9 )
            {
              v10 = *((_DWORD *)this + 132);
              if ( v10 )
              {
                v11 = (double)*((int *)this + 127);
                v12 = v11 / (double)v9;
                v13 = (double)*((int *)this + 128);
                v14 = v13 / (double)v10;
                if ( (*(_DWORD *)(*((_QWORD *)this + 46) + 44LL) & 0x100000) != 0 && *((_BYTE *)this + 474) )
                {
                  v15 = *((double *)this + 60);
                  v16 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)v15 - 0.0)) & _xmm);
                  if ( v16 <= 0.0000011920929 )
                    v12 = 0.0;
                  else
                    v12 = v11 / v15;
                  v17 = *((double *)this + 61);
                  v18 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)v17 - 0.0)) & _xmm);
                  if ( v18 <= 0.0000011920929 )
                    v14 = 0.0;
                  else
                    v14 = v13 / v17;
                }
                CVisual::SetScale(*(CVisual **)(*((_QWORD *)this + 47) + 48LL), v12, v14);
                v19 = *((_QWORD *)this + 47);
                v20 = *((_DWORD *)this + 125);
                v21 = *((_DWORD *)this + 126);
                v29.x = v20;
                v22 = *(CVisual **)(v19 + 48);
                v29.y = v21;
                CVisual::SetOffset(v22, &v29);
                if ( !*(_BYTE *)(*((_QWORD *)this + 46) + 42LL) )
                {
                  if ( v12 == 1.0 && v14 == 1.0 )
                    CVisual::ClearInterpolationMode(this);
                  else
                    CVisual::SetInterpolationMode(this, 6LL);
                }
                if ( !*(_BYTE *)(*((_QWORD *)this + 46) + 42LL) )
                {
                  v25 = 0LL;
                  if ( v14 != 0.0 && v12 != 0.0 )
                  {
                    RectangleGeometry = ResourceHelper::CreateRectangleGeometry(
                                          _mm_cvtsi128_si32(*(__m128i *)((char *)this + 532)) - v20,
                                          HIDWORD(*(_QWORD *)((char *)this + 532)) - v21,
                                          (int)((double)(int)*(_QWORD *)((char *)this + 540) / v12 + 0.5),
                                          (int)((double)(int)HIDWORD(*(_OWORD *)((char *)this + 532)) / v14 + 0.5),
                                          (struct CRectangleGeometryProxy **)this + 55);
                    v3 = RectangleGeometry;
                    if ( RectangleGeometry < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, RectangleGeometry, 0x347u, v28);
                      return v3;
                    }
                    v25 = (struct CBaseGeometryProxy *)*((_QWORD *)this + 55);
                  }
                  v27 = CVisualProxy::SetClip(
                          *(CVisualProxy **)(*(_QWORD *)(*((_QWORD *)this + 47) + 48LL) + 16LL),
                          v25);
                  v3 = v27;
                  if ( v27 < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x34Bu, v28);
                }
              }
            }
          }
        }
      }
    }
  }
  return v3;
}
