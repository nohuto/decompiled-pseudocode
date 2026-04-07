/*
 * XREFs of ?RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T_LARGE_INTEGER@@II@Z @ 0x180027B80
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180010D80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011CF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ThumbnailTabs@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180011D18 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_ThumbnailTabs@@@wil@@CAX_NW4Reportin.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180015648 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x1800166DC (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180017270 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x180026378 (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     ?UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z @ 0x180027FDC (-UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z.c)
 *     ?WrapExistingResource@CVisual@@SAJIPEAPEAV1@@Z @ 0x1800281AC (-WrapExistingResource@CVisual@@SAJIPEAPEAV1@@Z.c)
 *     ?IsBaseThumbnailDestinationReachable@CWindowList@@AEAA_NPEAVCWindowData@@@Z @ 0x18002823C (-IsBaseThumbnailDestinationReachable@CWindowList@@AEAA_NPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x18004FB12 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0p @ 0x18008E088 (McTemplateU0p.c)
 */

__int64 __fastcall CWindowList::RegisterSharedThumbnailVisual(
        CWindowList *this,
        HWND a2,
        HWND a3,
        int a4,
        int a5,
        const struct _DWM_THUMBNAIL_PROPERTIES *a6,
        union _LARGE_INTEGER a7,
        unsigned int a8,
        unsigned int a9)
{
  struct CVisual *v13; // r12
  int SyncedWindowDataByHwnd; // eax
  int v15; // ebx
  struct CWindowData *v16; // r15
  bool v17; // zf
  struct CWindowData *v18; // r14
  bool IsBaseThumbnailDestinationReachable; // al
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // r8
  __int64 v24; // rcx
  int v25; // eax
  _QWORD *v26; // r10
  unsigned int v27; // eax
  unsigned int v28; // edx
  unsigned int v29; // eax
  unsigned int v30; // edx
  unsigned int v31; // eax
  unsigned int v32; // edx
  int updated; // eax
  struct CVisual *v34; // rax
  CVisual *v35; // rcx
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // r9d
  struct CVisual *v41; // rax
  unsigned int v42; // [rsp+20h] [rbp-40h]
  void *v43; // [rsp+28h] [rbp-38h]
  unsigned int v44; // [rsp+30h] [rbp-30h] BYREF
  struct CWindowData *v45; // [rsp+38h] [rbp-28h] BYREF
  struct CVisual *v46; // [rsp+40h] [rbp-20h] BYREF
  struct CWindowData *v47; // [rsp+48h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v48; // [rsp+50h] [rbp-10h] BYREF

  v48 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v44 = 0;
  v46 = 0LL;
  v13 = 0LL;
  v47 = 0LL;
  v45 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, a2, &v47);
  v15 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v42 = 3863;
LABEL_55:
    v40 = SyncedWindowDataByHwnd;
LABEL_60:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v40, v42, v43);
    goto LABEL_34;
  }
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, a3, &v45);
  v15 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v42 = 3864;
    goto LABEL_55;
  }
  v16 = v47;
  if ( !v47 )
    goto LABEL_63;
  v17 = a4 == 0;
  v18 = v45;
  if ( v17 )
  {
    if ( v45 )
      goto LABEL_6;
LABEL_63:
    v15 = -2147024809;
    goto LABEL_34;
  }
  if ( v45 )
    goto LABEL_63;
LABEL_6:
  *((_QWORD *)this + 48) = v47;
  if ( v18 )
    IsBaseThumbnailDestinationReachable = CWindowList::IsBaseThumbnailDestinationReachable(this, v18);
  else
    IsBaseThumbnailDestinationReachable = 0;
  *((_QWORD *)this + 48) = 0LL;
  if ( IsBaseThumbnailDestinationReachable )
    goto LABEL_63;
  v22 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          128LL);
  if ( v22 )
  {
    *(_QWORD *)(v22 + 8) = 0LL;
    *(_QWORD *)(v22 + 16) = 0LL;
    *(_QWORD *)(v22 + 24) = 0LL;
    *(_QWORD *)(v22 + 32) = 0LL;
    *(_DWORD *)(v22 + 40) = 0;
    memset_0((void *)(v22 + 44), 0, 0x2DuLL);
    *(_QWORD *)(v22 + 96) = 0LL;
    *(_QWORD *)v22 = &CDCompThumbnailData::`vftable';
    *(_QWORD *)(v22 + 104) = 0LL;
    *(_QWORD *)(v22 + 112) = 0LL;
    *(_DWORD *)(v22 + 120) = 0;
  }
  else
  {
    v22 = 0LL;
  }
  if ( !v22 )
  {
    v15 = -2147024882;
    v42 = 3894;
    v40 = -2147024882;
    goto LABEL_60;
  }
  *(union _LARGE_INTEGER *)(v22 + 8) = a7;
  *(_QWORD *)(v22 + 16) = v16;
  *(_BYTE *)(v22 + 41) = a5 != 0;
  *(_QWORD *)(v22 + 24) = v18;
  *(_DWORD *)(v22 + 120) = a4 != 0;
  *(_BYTE *)(v22 + 40) = 0;
  *(_BYTE *)(v22 + 42) = 1;
  wil::Feature<__WilFeatureTraits_Feature_ThumbnailTabs>::ReportUsageToService(v21, v20, v23);
  SyncedWindowDataByHwnd = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, unsigned int *))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL) + 120LL))(
                             *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
                             a8,
                             a9,
                             39LL,
                             &v44);
  v15 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v42 = 3915;
    goto LABEL_55;
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0p(v24, &CommitChannel_WindowList_Thumbnail, a2);
  SyncedWindowDataByHwnd = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                             + 5)
                                                                           + 16LL)
                                                             + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                                  + 5)
                                                                                + 16LL));
  v15 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v42 = 3920;
    goto LABEL_55;
  }
  v25 = CVisual::WrapExistingResource(v44, &v46);
  v15 = v25;
  if ( v25 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0xF54u, v43);
    v13 = v46;
    goto LABEL_34;
  }
  v13 = v46;
  v26 = (_QWORD *)((char *)this + 352);
  *(_QWORD *)(v22 + 104) = v46;
  v27 = *((_DWORD *)this + 94);
  v47 = (struct CWindowData *)v22;
  v28 = v27 + 1;
  if ( v27 + 1 < v27 )
  {
    v15 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u, v43);
    goto LABEL_58;
  }
  if ( v28 <= *((_DWORD *)this + 93) )
  {
    *(_QWORD *)(*v26 + 8LL * v27) = v47;
    *((_DWORD *)this + 94) = v28;
    goto LABEL_20;
  }
  v37 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v26, 8, 1, &v47);
  v15 = v37;
  if ( v37 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v37, 0xC0u, v43);
  if ( v15 < 0 )
  {
LABEL_58:
    v42 = 3928;
LABEL_59:
    v40 = v15;
    goto LABEL_60;
  }
LABEL_20:
  v46 = (struct CVisual *)v22;
  v29 = *((_DWORD *)v16 + 128);
  v13 = 0LL;
  v30 = v29 + 1;
  if ( v29 + 1 < v29 )
  {
    v15 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u, v43);
LABEL_69:
    v42 = 3936;
    goto LABEL_59;
  }
  if ( v30 <= *((_DWORD *)v16 + 127) )
  {
    *(_QWORD *)(*((_QWORD *)v16 + 61) + 8LL * v29) = v46;
    *((_DWORD *)v16 + 128) = v30;
    goto LABEL_23;
  }
  v38 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v16 + 488, 8, 1, &v46);
  v15 = v38;
  if ( v38 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0xC0u, v43);
  if ( v15 < 0 )
    goto LABEL_69;
LABEL_23:
  if ( v18 )
  {
    v45 = (struct CWindowData *)v22;
    v31 = *((_DWORD *)v18 + 136);
    v32 = v31 + 1;
    if ( v31 + 1 < v31 )
    {
      v15 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u, v43);
    }
    else
    {
      if ( v32 <= *((_DWORD *)v18 + 135) )
      {
        *(_QWORD *)(*((_QWORD *)v18 + 65) + 8LL * v31) = v45;
        *((_DWORD *)v18 + 136) = v32;
        goto LABEL_27;
      }
      v39 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v18 + 520, 8, 1, &v45);
      v15 = v39;
      if ( v39 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v39, 0xC0u, v43);
      if ( v15 >= 0 )
        goto LABEL_27;
    }
    v42 = 3939;
    goto LABEL_59;
  }
LABEL_27:
  if ( a4 )
  {
    updated = CThumbnailData::UpdateProperties((CThumbnailData *)v22, a6);
    v15 = updated;
    if ( updated < 0 )
    {
      v42 = 3951;
      goto LABEL_74;
    }
    updated = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
    v15 = updated;
    if ( updated < 0 )
    {
      v42 = 3952;
      goto LABEL_74;
    }
    v41 = (struct CVisual *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    updated = VisualCollection::InsertRelative((VisualCollection *)(*(_QWORD *)(v22 + 104) + 32LL), v41, 0LL, 0, 1);
    v15 = updated;
    if ( updated < 0 )
    {
      v42 = 3953;
      goto LABEL_74;
    }
  }
  else
  {
    updated = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
    v15 = updated;
    if ( updated < 0 )
    {
      v42 = 3957;
      goto LABEL_74;
    }
    updated = CThumbnailData::UpdateProperties((CThumbnailData *)v22, a6);
    v15 = updated;
    if ( updated < 0 )
    {
      v42 = 3958;
      goto LABEL_74;
    }
    v34 = (struct CVisual *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    updated = VisualCollection::InsertRelative((VisualCollection *)(*(_QWORD *)(v22 + 104) + 32LL), v34, 0LL, 0, 1);
    v15 = updated;
    if ( updated < 0 )
    {
      v42 = 3959;
      goto LABEL_74;
    }
    if ( CDesktopManager::IsLogonDesktop(*((_QWORD *)v16 + 15)) )
    {
      updated = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v22 + 104) + 64LL))(*(_QWORD *)(v22 + 104));
      v15 = updated;
      if ( updated < 0 )
      {
        v42 = 3965;
LABEL_74:
        v40 = updated;
        goto LABEL_60;
      }
    }
  }
  v35 = (CVisual *)*((_QWORD *)v16 + 50);
  if ( v35 )
    CVisual::SetDirtyFlags(v35, 0x8000000);
LABEL_34:
  if ( v44 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL)
                                   + 136LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                       + 16LL));
  if ( v13 )
    CBaseObject::Release(v13);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v48);
  return (unsigned int)v15;
}
