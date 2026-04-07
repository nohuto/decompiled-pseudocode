/*
 * XREFs of ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x1800078F4
 * Callers:
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180024950 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 * Callees:
 *     ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCResource@@11111@Z @ 0x180009950 (-GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCResource@@11111@Z.c)
 *     ?SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCResource@@0PEBUMilPointAndSizeL@@@Z @ 0x180009EE0 (-SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCResource@@0PEBUMilPointAndSizeL@@@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x18000F790 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180012470 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z @ 0x180013A04 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180013D04 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180019C10 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001EB90 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001F020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180021410 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?Create@CClientArea@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x180021A40 (-Create@CClientArea@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     ?Create@CTopLevelWindow@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180022580 (-Create@CTopLevelWindow@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023740 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x18002682C (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     ?Create@CRenderDataVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180026DD8 (-Create@CRenderDataVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x180027500 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     ?GetCVIFromCache@CDesktopManager@@SAJHHPEAPEAVCResource@@@Z @ 0x180033A80 (-GetCVIFromCache@CDesktopManager@@SAJHHPEAPEAVCResource@@@Z.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180036ED8 (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z @ 0x180037B24 (-GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z.c)
 *     ?SetScale@CVisual@@QEAAXNN@Z @ 0x18003B53C (-SetScale@CVisual@@QEAAXNN@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18003B690 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowSnapshot::ProcessFreezeSnapshotAndRelease(CWindowSnapshot *this, struct CWindowData *a2)
{
  __int64 v2; // rax
  struct CWindowData *v5; // rsi
  CBaseObject *v6; // r14
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
  __m128i v18; // xmm1
  int v19; // eax
  unsigned __int64 v20; // xmm0_8
  LONG v21; // edx
  int v22; // r9d
  int v23; // eax
  int v24; // r15d
  int v25; // eax
  __int64 i; // rax
  int v27; // eax
  int v28; // esi
  int RectangleGeometry; // eax
  __int64 v30; // rdx
  float ScalingFactorForCVI; // xmm0_4
  bool v32; // zf
  struct CResource **v33; // r15
  int Brush; // eax
  __int64 v35; // rax
  int v36; // eax
  int v37; // r9d
  int v38; // r8d
  int v39; // eax
  char *v40; // r12
  int v41; // eax
  int v42; // eax
  CVisual **v43; // r15
  int v44; // eax
  int v45; // eax
  int v46; // eax
  __int64 v47; // rcx
  CBaseObject *v48; // rsi
  int inserted; // eax
  CVisual *v50; // rsi
  int v51; // eax
  int v52; // eax
  CBaseObject *v53; // rcx
  CBaseObject *v54; // rsi
  int v56; // ecx
  __int64 v57; // rdx
  struct IDwmWindow *v58; // rax
  int SyncedWindowData; // eax
  float v60; // xmm1_4
  unsigned int v61; // eax
  int v62; // r9d
  int v63; // r9d
  __m128i v64; // xmm0
  int v65; // eax
  float v66; // xmm0_4
  struct tagRECT v67; // [rsp+40h] [rbp-69h] BYREF
  CBaseObject *v68; // [rsp+50h] [rbp-59h] BYREF
  int v69[2]; // [rsp+58h] [rbp-51h] BYREF
  int v70; // [rsp+60h] [rbp-49h]
  int v71; // [rsp+64h] [rbp-45h]
  CBaseObject *v72; // [rsp+68h] [rbp-41h]
  int v73; // [rsp+70h] [rbp-39h]
  LONG v74; // [rsp+78h] [rbp-31h]
  int v75; // [rsp+80h] [rbp-29h]
  CBaseObject *v76; // [rsp+88h] [rbp-21h] BYREF
  struct CWindowData *v77; // [rsp+90h] [rbp-19h] BYREF
  int v78; // [rsp+98h] [rbp-11h]
  double v79[2]; // [rsp+A0h] [rbp-9h] BYREF
  _DWORD v80[4]; // [rsp+B0h] [rbp+7h] BYREF

  v2 = *((_QWORD *)this + 4);
  v68 = 0LL;
  v76 = 0LL;
  v5 = a2;
  v72 = 0LL;
  *(_DWORD *)(v2 + 64) = 0;
  v6 = 0LL;
  *(_DWORD *)(*((_QWORD *)this + 4) + 68LL) = 0;
  *(_DWORD *)(*((_QWORD *)this + 4) + 76LL) = 0;
  *(_DWORD *)(*((_QWORD *)this + 4) + 72LL) = 0;
  v7 = CTopLevelWindow::Create(*((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 5), &v68);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xADu);
    goto LABEL_40;
  }
  v9 = *((_QWORD *)v5 + 3);
  if ( v9 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v9 + 80LL))(v9) )
    {
      v58 = (struct IDwmWindow *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 3) + 376LL))(*((_QWORD *)a2 + 3));
      if ( v58 )
      {
        v77 = 0LL;
        SyncedWindowData = CWindowList::GetSyncedWindowData(
                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                             v58,
                             0,
                             &v77);
        v8 = SyncedWindowData;
        if ( SyncedWindowData < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowData, 0xB5u);
          goto LABEL_40;
        }
        v5 = v77;
      }
    }
  }
  *((_QWORD *)a2 + 53) = 0LL;
  v78 = 1543;
  v10 = CSecondaryWindowRepresentation::Create(1543LL, ((unsigned __int64)this + 16) & -(__int64)(this != 0LL), v5);
  v8 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xC4u);
    goto LABEL_39;
  }
  v6 = v72;
  v11 = CSecondaryWindowRepresentation::Validate(v72);
  v8 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xC6u);
    goto LABEL_40;
  }
  v12 = CResource::Create(27LL, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5), (char *)this + 56);
  v8 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xC9u);
    goto LABEL_40;
  }
  v13 = 0LL;
  v14 = *((_DWORD *)v6 + 24);
  v15 = *((_DWORD *)v6 + 18);
  v16 = (CWindowData *)*((_QWORD *)v6 + 8);
  v67.left = *((_DWORD *)v6 + 22);
  v67.right = *((_DWORD *)v6 + 20) - *((_DWORD *)v6 + 23);
  v67.bottom = *((_DWORD *)v6 + 21) - *((_DWORD *)v6 + 25);
  v67.top = v14;
  v17 = v15 - 1;
  if ( !v17 )
    goto LABEL_8;
  v56 = v17 - 1;
  if ( !v56 )
  {
    v57 = *((_QWORD *)v16 + 53);
    if ( v57 )
    {
      v13 = *(__m128i **)(v57 + 32);
      goto LABEL_9;
    }
LABEL_8:
    v13 = (__m128i *)v16;
    goto LABEL_9;
  }
  if ( v56 == 1 )
  {
    if ( CWindowData::IsImmersiveWindow(v16) )
      goto LABEL_8;
    v13 = *(__m128i **)(*((_QWORD *)v16 + 54) + 80LL);
  }
LABEL_9:
  v18 = v13[5];
  v19 = _mm_cvtsi128_si32(v18);
  v20 = _mm_srli_si128(v18, 8).m128i_u64[0];
  *(_QWORD *)v69 = 0LL;
  v21 = v67.right - v19;
  v67.left += v19;
  v22 = v14 + v20;
  v74 = v21;
  v23 = v67.bottom - HIDWORD(v20);
  v67.top = v14 + v20;
  v75 = v67.bottom - HIDWORD(v20);
  v24 = v21 - v67.left;
  v67.bottom -= HIDWORD(v20);
  if ( v21 - v67.left < 0 )
    v24 = 0;
  v67.right = v21;
  v25 = v23 - v22;
  if ( v25 < 0 )
    v25 = 0;
  v73 = v25;
  for ( i = 0LL; i < 4; ++i )
    *(float *)&v80[i] = (float)*(int *)((char *)&v67.left + i * 4);
  v27 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(**(_QWORD **)(*((_QWORD *)this + 7) + 16LL) + 312LL))(
          *(_QWORD *)(*((_QWORD *)this + 7) + 16LL),
          *(unsigned int *)(*((_QWORD *)this + 7) + 24LL),
          v80);
  v8 = v27;
  if ( v27 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0xDCu);
    goto LABEL_40;
  }
  v28 = v73;
  RectangleGeometry = ResourceHelper::CreateRectangleGeometry(0, 0, v24, v73, (struct CResource **)this + 11);
  v8 = RectangleGeometry;
  if ( RectangleGeometry < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, RectangleGeometry, 0xE1u);
    goto LABEL_40;
  }
  ScalingFactorForCVI = CDesktopManager::GetScalingFactorForCVI(CDesktopManager::s_pDesktopManagerInstance, &v67);
  *((float *)this + 18) = ScalingFactorForCVI;
  v32 = *((_QWORD *)this + 6) == 0LL;
  v70 = (int)(float)((float)v24 * ScalingFactorForCVI);
  v71 = (int)(float)((float)v28 * ScalingFactorForCVI);
  if ( v32 )
    CDesktopManager::GetCVIFromCache(
      (int)(float)((float)v24 * ScalingFactorForCVI),
      (int)(float)((float)v28 * ScalingFactorForCVI),
      (struct CResource **)this + 6);
  v33 = (struct CResource **)((char *)this + 40);
  Brush = CSecondaryWindowRepresentation::GetBrush(v6, v30, (char *)this + 56, 0LL);
  v8 = Brush;
  if ( Brush < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Brush, 0xF5u);
    goto LABEL_40;
  }
  if ( *((_BYTE *)v6 + 160) )
  {
    v60 = *((float *)v6 + 126);
    v61 = 0;
    v62 = v75;
    if ( v74 - v67.left >= 0 )
      v61 = v74 - v67.left;
    *((float *)this + 18) = v60;
    v63 = v62 - v67.top;
    v64 = _mm_cvtsi32_si128(v61);
    v65 = 0;
    LODWORD(v66) = _mm_cvtepi32_ps(v64).m128_u32[0];
    if ( v63 >= 0 )
      v65 = v63;
    v38 = (int)(float)(v66 * v60);
    v70 = v38;
    v37 = (int)(float)((float)v65 * v60);
    v71 = v37;
  }
  else
  {
    v35 = *((_QWORD *)this + 8);
    v79[0] = (double)v70;
    v79[1] = (double)v71;
    v36 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, double *))(**(_QWORD **)(v35 + 16) + 320LL))(
            *(_QWORD *)(v35 + 16),
            *(unsigned int *)(v35 + 24),
            v79);
    v8 = v36;
    if ( v36 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36, 0xFEu);
      goto LABEL_40;
    }
    CSecondaryWindowRepresentation::SnapshotIfStatic(
      v6,
      *((struct CResource **)this + 6),
      *v33,
      (const struct MilPointAndSizeL *)v69);
    v37 = v71;
    v38 = v70;
  }
  v39 = ResourceHelper::CreateRectangleGeometry(v69[0], v69[1], v38, v37, (struct CResource **)this + 11);
  v8 = v39;
  if ( v39 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v39, 0x10Cu);
  }
  else
  {
    v40 = (char *)this + 96;
    v41 = CClientArea::Create(
            *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 5),
            0,
            (struct CClientArea **)this + 12);
    v8 = v41;
    if ( v41 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v41, 0x10Eu);
    }
    else
    {
      v42 = CDrawGeometryInstruction::Create(*v33, *((struct CResource **)this + 11), &v76);
      v8 = v42;
      if ( v42 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v42, 0x113u);
      }
      else
      {
        v43 = (CVisual **)((char *)this + 80);
        v44 = CRenderDataVisual::Create(
                *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 5),
                (struct CRenderDataVisual **)this + 10);
        v8 = v44;
        if ( v44 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v44, 0x115u);
        }
        else
        {
          CVisual::SetScale(*v43, (float)(1.0 / *((float *)this + 18)), (float)(1.0 / *((float *)this + 18)));
          CVisual::SetInterpolationMode(*v43, 1LL);
          v45 = CRenderDataVisual::AddInstruction(*v43, v76);
          v8 = v45;
          if ( v45 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v45, 0x119u);
          }
          else
          {
            v46 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)*v43 + 64LL))(*v43);
            v8 = v46;
            if ( v46 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v46, 0x11Au);
            }
            else
            {
              v47 = *(_QWORD *)(*(_QWORD *)v40 + 16LL);
              if ( v47 )
                LODWORD(v47) = *(_DWORD *)(v47 + 24);
              v48 = v68;
              *(_DWORD *)(*((_QWORD *)this + 4) + 128LL) = v47;
              *(_QWORD *)(*((_QWORD *)this + 4) + 392LL) = v48;
              if ( v48 )
              {
                _InterlockedIncrement((volatile signed __int32 *)v48 + 2);
                v6 = v72;
              }
              *((_QWORD *)v68 + 90) = *((_QWORD *)this + 4);
              inserted = VisualCollection::InsertRelative((VisualCollection *)(*(_QWORD *)v40 + 32LL), *v43, 0LL, 0, 1);
              v8 = inserted;
              if ( inserted < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x120u);
              }
              else
              {
                v50 = v68;
                CVisual::SetDirtyFlags(v68, 0x400000u);
                CVisual::SetDirtyFlags(v50, 0x2000u);
                v51 = CTopLevelWindow::ShowWindow(v50, 1);
                v8 = v51;
                if ( v51 >= 0 )
                {
                  v52 = CVisual::RenderRecursive(v50);
                  v8 = v52;
                  if ( v52 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v52, 0x126u);
                    goto LABEL_40;
                  }
                  v53 = (CBaseObject *)*((_QWORD *)this + 3);
                  if ( v53 )
                    CBaseObject::Release(v53);
                  v54 = v68;
                  *((_QWORD *)this + 3) = v68;
                  _InterlockedIncrement((volatile signed __int32 *)v54 + 2);
                  *((_QWORD *)a2 + 53) = this;
                  *(_BYTE *)(*((_QWORD *)this + 4) + 600LL) &= ~4u;
LABEL_39:
                  v6 = v72;
                  goto LABEL_40;
                }
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v51, 0x125u);
              }
            }
          }
        }
      }
    }
  }
LABEL_40:
  if ( v68 )
    CBaseObject::Release(v68);
  if ( v76 )
    CBaseObject::Release(v76);
  if ( v6 )
    CBaseObject::Release(v6);
  return v8;
}
