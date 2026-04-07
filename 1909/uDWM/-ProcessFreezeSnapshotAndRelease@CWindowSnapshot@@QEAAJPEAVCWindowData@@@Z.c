/*
 * XREFs of ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180031DF0
 * Callers:
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180010F28 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 * Callees:
 *     ?GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z @ 0x180009AE0 (-GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180010D80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x1800110E8 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x1800147A0 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180017270 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180018054 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800188B4 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18001F3C8 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x1800219E0 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180021F8C (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x18002343C (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCResource@@111PEAPEAVCCachedVisualImageProxy@@PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x180023AAC (-GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCResource@@111PEAPEAVCC.c)
 *     ?Create@CClientArea@@KAJIPEAPEAV1@@Z @ 0x180024D04 (-Create@CClientArea@@KAJIPEAPEAV1@@Z.c)
 *     ?Create@CRenderDataVisual@@SAJPEAPEAV1@@Z @ 0x180025BC0 (-Create@CRenderDataVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CTopLevelWindow@@SAJPEAPEAV1@@Z @ 0x180025F94 (-Create@CTopLevelWindow@@SAJPEAPEAV1@@Z.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x180027290 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180032424 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?SetScale@CVisual@@QEAAXNN@Z @ 0x180032464 (-SetScale@CVisual@@QEAAXNN@Z.c)
 *     ?GetCVIFromCache@CDesktopManager@@SAJHHPEAPEAVCCachedVisualImageProxy@@@Z @ 0x1800324E4 (-GetCVIFromCache@CDesktopManager@@SAJHHPEAPEAVCCachedVisualImageProxy@@@Z.c)
 *     ?SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCCachedVisualImageProxy@@PEAVCImageLegacyMilBrushProxy@@PEBUMilPointAndSizeL@@@Z @ 0x180032538 (-SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCCachedVisualImageProxy@@PEAVCImageLe.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180032674 (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowSnapshot::ProcessFreezeSnapshotAndRelease(CWindowSnapshot *this, struct CWindowData *a2)
{
  __int64 v2; // rax
  CBaseObject *v5; // r14
  struct CWindowData *v6; // rsi
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __m128i *v13; // rdx
  LONG v14; // r15d
  int v15; // ecx
  CWindowData *v16; // rbx
  int v17; // ecx
  int v18; // ecx
  __int64 v19; // rdx
  __m128i v20; // xmm1
  int v21; // eax
  unsigned __int64 v22; // xmm0_8
  LONG v23; // edx
  int v24; // r9d
  int v25; // eax
  int v26; // r15d
  int v27; // eax
  __int64 i; // rax
  int v29; // eax
  int v30; // esi
  int RectangleGeometry; // eax
  __int64 v32; // rdx
  float ScalingFactorForCVI; // xmm0_4
  bool v34; // zf
  struct CImageLegacyMilBrushProxy **v35; // r15
  int Brush; // eax
  __int64 v37; // rax
  int v38; // eax
  int v39; // r9d
  int v40; // r8d
  int v41; // eax
  char *v42; // r12
  int v43; // eax
  int v44; // eax
  CVisual **v45; // r15
  int v46; // eax
  int v47; // eax
  int v48; // eax
  __int64 v49; // rax
  int v50; // ecx
  CVisual *v51; // rsi
  int inserted; // eax
  CVisual *v53; // rsi
  int v54; // eax
  int v55; // eax
  CBaseObject *v56; // rcx
  CVisual *v57; // rsi
  struct IDwmWindow *v59; // rax
  int SyncedWindowData; // eax
  float v61; // xmm1_4
  unsigned int v62; // eax
  int v63; // r9d
  int v64; // r9d
  __m128i v65; // xmm0
  int v66; // eax
  float v67; // xmm0_4
  struct CRectangleGeometryProxy **v68; // [rsp+20h] [rbp-89h]
  struct CRectangleGeometryProxy **v69; // [rsp+20h] [rbp-89h]
  void *v70; // [rsp+28h] [rbp-81h]
  void *v71; // [rsp+28h] [rbp-81h]
  void *v72; // [rsp+28h] [rbp-81h]
  struct tagRECT v73; // [rsp+40h] [rbp-69h] BYREF
  CVisual *v74; // [rsp+50h] [rbp-59h] BYREF
  int v75[2]; // [rsp+58h] [rbp-51h] BYREF
  int v76; // [rsp+60h] [rbp-49h]
  int v77; // [rsp+64h] [rbp-45h]
  CBaseObject *v78; // [rsp+68h] [rbp-41h] BYREF
  int v79; // [rsp+70h] [rbp-39h]
  LONG v80; // [rsp+78h] [rbp-31h]
  int v81; // [rsp+80h] [rbp-29h]
  CBaseObject *v82; // [rsp+88h] [rbp-21h] BYREF
  struct CWindowData *v83; // [rsp+90h] [rbp-19h] BYREF
  int v84; // [rsp+98h] [rbp-11h]
  double v85[2]; // [rsp+A0h] [rbp-9h] BYREF
  _DWORD v86[4]; // [rsp+B0h] [rbp+7h] BYREF

  v2 = *((_QWORD *)this + 4);
  v74 = 0LL;
  v82 = 0LL;
  v5 = 0LL;
  v78 = 0LL;
  *(_DWORD *)(v2 + 64) = 0;
  v6 = a2;
  *(_DWORD *)(*((_QWORD *)this + 4) + 68LL) = 0;
  *(_DWORD *)(*((_QWORD *)this + 4) + 76LL) = 0;
  *(_DWORD *)(*((_QWORD *)this + 4) + 72LL) = 0;
  v7 = CTopLevelWindow::Create((struct CCanvasVisual ***)&v74);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xADu, v70);
    goto LABEL_42;
  }
  v9 = *((_QWORD *)v6 + 3);
  if ( v9 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v9 + 80LL))(v9) )
    {
      v59 = (struct IDwmWindow *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 3) + 376LL))(*((_QWORD *)a2 + 3));
      if ( v59 )
      {
        v83 = 0LL;
        SyncedWindowData = CWindowList::GetSyncedWindowData(
                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                             v59,
                             0,
                             &v83);
        v8 = SyncedWindowData;
        if ( SyncedWindowData < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowData, 0xB5u, v70);
          goto LABEL_42;
        }
        v6 = v83;
      }
    }
  }
  *((_QWORD *)a2 + 54) = 0LL;
  v84 = 1543;
  LODWORD(v68) = 100;
  v10 = CSecondaryWindowRepresentation::Create(
          1543LL,
          ((unsigned __int64)this + 16) & -(__int64)(this != 0LL),
          (__int64)v6,
          0,
          v68,
          &v78);
  v8 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xC4u, v71);
LABEL_41:
    v5 = v78;
    goto LABEL_42;
  }
  v5 = v78;
  v11 = CSecondaryWindowRepresentation::Validate(v78);
  v8 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xC6u, v71);
    goto LABEL_42;
  }
  v12 = CResource::Create(
          0x1Cu,
          *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
          (__int64 *)this + 7);
  v8 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xC9u, v71);
    goto LABEL_42;
  }
  v13 = 0LL;
  v14 = *((_DWORD *)v5 + 24);
  v15 = *((_DWORD *)v5 + 18);
  v16 = (CWindowData *)*((_QWORD *)v5 + 8);
  v73.left = *((_DWORD *)v5 + 22);
  v73.right = *((_DWORD *)v5 + 20) - *((_DWORD *)v5 + 23);
  v73.bottom = *((_DWORD *)v5 + 21) - *((_DWORD *)v5 + 25);
  v73.top = v14;
  v17 = v15 - 1;
  if ( !v17 )
    goto LABEL_49;
  v18 = v17 - 1;
  if ( !v18 )
  {
    v19 = *((_QWORD *)v16 + 54);
    if ( v19 )
    {
      v13 = *(__m128i **)(v19 + 32);
      goto LABEL_11;
    }
    goto LABEL_49;
  }
  if ( v18 == 1 )
  {
    if ( !CWindowData::IsImmersiveWindow(v16) )
    {
      v13 = *(__m128i **)(*((_QWORD *)v16 + 55) + 80LL);
      goto LABEL_11;
    }
LABEL_49:
    v13 = (__m128i *)v16;
  }
LABEL_11:
  v20 = v13[5];
  v21 = _mm_cvtsi128_si32(v20);
  v22 = _mm_srli_si128(v20, 8).m128i_u64[0];
  *(_QWORD *)v75 = 0LL;
  v23 = v73.right - v21;
  v73.left += v21;
  v24 = v14 + v22;
  v80 = v23;
  v25 = v73.bottom - HIDWORD(v22);
  v73.top = v14 + v22;
  v81 = v73.bottom - HIDWORD(v22);
  v26 = v23 - v73.left;
  v73.bottom -= HIDWORD(v22);
  if ( v23 - v73.left < 0 )
    v26 = 0;
  v73.right = v23;
  v27 = v25 - v24;
  if ( v27 < 0 )
    v27 = 0;
  v79 = v27;
  for ( i = 0LL; i < 4; ++i )
    *(float *)&v86[i] = (float)*(int *)((char *)&v73.left + i * 4);
  v29 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(**(_QWORD **)(*((_QWORD *)this + 7) + 16LL) + 320LL))(
          *(_QWORD *)(*((_QWORD *)this + 7) + 16LL),
          *(unsigned int *)(*((_QWORD *)this + 7) + 24LL),
          v86);
  v8 = v29;
  if ( v29 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0xDCu, v71);
    goto LABEL_42;
  }
  v30 = v79;
  RectangleGeometry = ResourceHelper::CreateRectangleGeometry(
                        0,
                        0,
                        v26,
                        v79,
                        (struct CRectangleGeometryProxy **)this + 11);
  v8 = RectangleGeometry;
  if ( RectangleGeometry < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, RectangleGeometry, 0xDEu, v71);
    goto LABEL_42;
  }
  ScalingFactorForCVI = CDesktopManager::GetScalingFactorForCVI(CDesktopManager::s_pDesktopManagerInstance, &v73);
  *((float *)this + 18) = ScalingFactorForCVI;
  v34 = *((_QWORD *)this + 6) == 0LL;
  v76 = (int)(float)((float)v26 * ScalingFactorForCVI);
  v77 = (int)(float)((float)v30 * ScalingFactorForCVI);
  if ( v34 )
    CDesktopManager::GetCVIFromCache(
      (int)(float)((float)v26 * ScalingFactorForCVI),
      (int)(float)((float)v30 * ScalingFactorForCVI),
      (struct CCachedVisualImageProxy **)this + 6);
  v35 = (struct CImageLegacyMilBrushProxy **)((char *)this + 40);
  Brush = CSecondaryWindowRepresentation::GetBrush(
            (__int64)v5,
            v32,
            (CBaseObject **)this + 7,
            0LL,
            (__int64)v69,
            (CBaseObject **)this + 8,
            (CBaseObject **)this + 6,
            (CBaseObject **)this + 5);
  v8 = Brush;
  if ( Brush < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Brush, 0xF1u, v72);
    goto LABEL_42;
  }
  if ( *((_BYTE *)v5 + 160) )
  {
    v61 = *((float *)v5 + 126);
    v62 = 0;
    v63 = v81;
    if ( v80 - v73.left >= 0 )
      v62 = v80 - v73.left;
    *((float *)this + 18) = v61;
    v64 = v63 - v73.top;
    v65 = _mm_cvtsi32_si128(v62);
    v66 = 0;
    LODWORD(v67) = _mm_cvtepi32_ps(v65).m128_u32[0];
    if ( v64 >= 0 )
      v66 = v64;
    v40 = (int)(float)(v67 * v61);
    v76 = v40;
    v39 = (int)(float)((float)v66 * v61);
    v77 = v39;
  }
  else
  {
    v37 = *((_QWORD *)this + 8);
    v85[0] = (double)v76;
    v85[1] = (double)v77;
    v38 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, double *))(**(_QWORD **)(v37 + 16) + 328LL))(
            *(_QWORD *)(v37 + 16),
            *(unsigned int *)(v37 + 24),
            v85);
    v8 = v38;
    if ( v38 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0xFAu, v72);
      goto LABEL_42;
    }
    CSecondaryWindowRepresentation::SnapshotIfStatic(
      v5,
      *((struct CCachedVisualImageProxy **)this + 6),
      *v35,
      (const struct MilPointAndSizeL *)v75);
    v39 = v77;
    v40 = v76;
  }
  v41 = ResourceHelper::CreateRectangleGeometry(v75[0], v75[1], v40, v39, (struct CRectangleGeometryProxy **)this + 11);
  v8 = v41;
  if ( v41 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v41, 0x105u, v72);
  }
  else
  {
    v42 = (char *)this + 96;
    v43 = CClientArea::Create(0, (struct CClientArea **)this + 12);
    v8 = v43;
    if ( v43 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v43, 0x107u, v72);
    }
    else
    {
      v44 = CDrawGeometryInstruction::Create(*v35, *((struct CBaseGeometryProxy **)this + 11), &v82);
      v8 = v44;
      if ( v44 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v44, 0x10Cu, v72);
      }
      else
      {
        v45 = (CVisual **)((char *)this + 80);
        v46 = CRenderDataVisual::Create((struct CRenderDataVisual **)this + 10);
        v8 = v46;
        if ( v46 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v46, 0x10Eu, v72);
        }
        else
        {
          CVisual::SetScale(*v45, (float)(1.0 / *((float *)this + 18)), (float)(1.0 / *((float *)this + 18)));
          CVisual::SetInterpolationMode(*v45, 1LL);
          v47 = CRenderDataVisual::AddInstruction(*v45, v82);
          v8 = v47;
          if ( v47 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v47, 0x112u, v72);
          }
          else
          {
            v48 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)*v45 + 64LL))(*v45);
            v8 = v48;
            if ( v48 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v48, 0x113u, v72);
            }
            else
            {
              v49 = *(_QWORD *)(*(_QWORD *)v42 + 16LL);
              if ( v49 )
                v50 = *(_DWORD *)(*(_QWORD *)(v49 + 16) + 24LL);
              else
                v50 = 0;
              v51 = v74;
              *(_DWORD *)(*((_QWORD *)this + 4) + 128LL) = v50;
              *(_QWORD *)(*((_QWORD *)this + 4) + 400LL) = v51;
              if ( v51 )
              {
                _InterlockedIncrement((volatile signed __int32 *)v51 + 2);
                v5 = v78;
              }
              *((_QWORD *)v74 + 90) = *((_QWORD *)this + 4);
              inserted = VisualCollection::InsertRelative((VisualCollection *)(*(_QWORD *)v42 + 32LL), *v45, 0LL, 0, 1);
              v8 = inserted;
              if ( inserted < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x119u, v72);
              }
              else
              {
                v53 = v74;
                CVisual::SetDirtyFlags(v74, 0x400000);
                CVisual::SetDirtyFlags(v53, 0x2000);
                v54 = CTopLevelWindow::ShowWindow(v53, 1);
                v8 = v54;
                if ( v54 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v54, 0x11Eu, v72);
                }
                else
                {
                  v55 = CVisual::RenderRecursive(v53);
                  v8 = v55;
                  if ( v55 >= 0 )
                  {
                    v56 = (CBaseObject *)*((_QWORD *)this + 3);
                    if ( v56 )
                      CBaseObject::Release(v56);
                    v57 = v74;
                    *((_QWORD *)this + 3) = v74;
                    _InterlockedIncrement((volatile signed __int32 *)v57 + 2);
                    *((_QWORD *)a2 + 54) = this;
                    *(_BYTE *)(*((_QWORD *)this + 4) + 608LL) &= ~4u;
                    goto LABEL_41;
                  }
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v55, 0x11Fu, v72);
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_42:
  if ( v74 )
    CBaseObject::Release(v74);
  if ( v82 )
    CBaseObject::Release(v82);
  if ( v5 )
    CBaseObject::Release(v5);
  return v8;
}
