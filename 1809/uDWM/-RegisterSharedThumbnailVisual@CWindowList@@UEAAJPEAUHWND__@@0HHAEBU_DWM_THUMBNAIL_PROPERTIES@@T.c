/*
 * XREFs of ?RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T_LARGE_INTEGER@@II@Z @ 0x180008000
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z @ 0x180008478 (-UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ThumbnailTabs@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180009708 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_ThumbnailTabs@@@wil@@CAX_NW4Reportin.c)
 *     ?IsBaseThumbnailDestinationReachable@CWindowList@@AEAA_NPEAVCWindowData@@@Z @ 0x18000A124 (-IsBaseThumbnailDestinationReachable@CWindowList@@AEAA_NPEAVCWindowData@@@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x1800116A8 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001F020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002107C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x180022708 (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023740 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800245C0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?WrapExistingResource@CVisual@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x18003B220 (-WrapExistingResource@CVisual@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x18004E2A2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0p @ 0x180088248 (McTemplateU0p.c)
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
  struct CVisual *v13; // r13
  int SyncedWindowDataByHwnd; // eax
  int v15; // ebx
  struct CWindowData *v16; // r15
  bool v17; // zf
  struct CWindowData *v18; // r14
  bool IsBaseThumbnailDestinationReachable; // al
  __int64 v20; // rsi
  __int64 v21; // rcx
  int v22; // eax
  _QWORD *v23; // r10
  __int64 v24; // rax
  unsigned int v25; // edx
  int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // edx
  int v29; // eax
  unsigned int v30; // eax
  unsigned int v31; // edx
  int v32; // eax
  int updated; // eax
  struct CVisual *v34; // rax
  CVisual *v35; // rcx
  int v37; // r9d
  struct CVisual *v38; // rax
  unsigned int v39; // [rsp+20h] [rbp-40h]
  unsigned int v40; // [rsp+30h] [rbp-30h] BYREF
  struct CWindowData *v41; // [rsp+38h] [rbp-28h] BYREF
  struct CVisual *v42; // [rsp+40h] [rbp-20h] BYREF
  struct CWindowData *v43; // [rsp+48h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v44; // [rsp+50h] [rbp-10h] BYREF

  v44 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v40 = 0;
  v42 = 0LL;
  v13 = 0LL;
  v43 = 0LL;
  v41 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, a2, &v43);
  v15 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v39 = 3784;
LABEL_52:
    v37 = SyncedWindowDataByHwnd;
LABEL_56:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v37, v39);
    goto LABEL_40;
  }
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, a3, &v41);
  v15 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v39 = 3785;
    goto LABEL_52;
  }
  v16 = v43;
  if ( !v43 )
    goto LABEL_59;
  v17 = a4 == 0;
  v18 = v41;
  if ( v17 )
  {
    if ( v41 )
      goto LABEL_6;
LABEL_59:
    v15 = -2147024809;
    goto LABEL_40;
  }
  if ( v41 )
    goto LABEL_59;
LABEL_6:
  *((_QWORD *)this + 48) = v43;
  if ( v18 )
    IsBaseThumbnailDestinationReachable = CWindowList::IsBaseThumbnailDestinationReachable(this, v18);
  else
    IsBaseThumbnailDestinationReachable = 0;
  *((_QWORD *)this + 48) = 0LL;
  if ( IsBaseThumbnailDestinationReachable )
    goto LABEL_59;
  v20 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          128LL);
  if ( v20 )
  {
    *(_QWORD *)(v20 + 8) = 0LL;
    *(_QWORD *)(v20 + 16) = 0LL;
    *(_QWORD *)(v20 + 24) = 0LL;
    *(_QWORD *)(v20 + 32) = 0LL;
    *(_DWORD *)(v20 + 40) = 0;
    memset_0((void *)(v20 + 44), 0, 0x2DuLL);
    *(_QWORD *)(v20 + 96) = 0LL;
    *(_QWORD *)v20 = &CDCompThumbnailData::`vftable';
    *(_QWORD *)(v20 + 104) = 0LL;
    *(_QWORD *)(v20 + 112) = 0LL;
    *(_DWORD *)(v20 + 120) = 0;
  }
  else
  {
    v20 = 0LL;
  }
  if ( !v20 )
  {
    v15 = -2147024882;
    v39 = 3815;
    v37 = -2147024882;
    goto LABEL_56;
  }
  *(union _LARGE_INTEGER *)(v20 + 8) = a7;
  *(_QWORD *)(v20 + 16) = v16;
  *(_BYTE *)(v20 + 41) = a5 != 0;
  *(_QWORD *)(v20 + 24) = v18;
  *(_DWORD *)(v20 + 120) = a4 != 0;
  *(_BYTE *)(v20 + 40) = 0;
  *(_BYTE *)(v20 + 42) = 1;
  wil::Feature<__WilFeatureTraits_Feature_ThumbnailTabs>::ReportUsageToService();
  SyncedWindowDataByHwnd = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, unsigned int *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 5) + 112LL))(
                             *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
                             a8,
                             a9,
                             38LL,
                             &v40);
  v15 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v39 = 3836;
    goto LABEL_52;
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0p(v21, &CommitChannel_WindowList_Thumbnail, a2);
  SyncedWindowDataByHwnd = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                + 5)
                                                             + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                      + 5));
  v15 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v39 = 3841;
    goto LABEL_52;
  }
  v22 = CVisual::WrapExistingResource(
          *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 5),
          v40,
          &v42);
  v15 = v22;
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0xF05u);
    v13 = v42;
    goto LABEL_40;
  }
  v13 = v42;
  v23 = (_QWORD *)((char *)this + 352);
  *(_QWORD *)(v20 + 104) = v42;
  v24 = *((unsigned int *)this + 94);
  v43 = (struct CWindowData *)v20;
  v25 = v24 + 1;
  v15 = (int)v24 + 1 < (unsigned int)v24 ? 0x80070216 : 0;
  if ( (int)v24 + 1 < (unsigned int)v24 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xB5u);
  }
  else if ( v25 <= *((_DWORD *)this + 93) )
  {
    *(_QWORD *)(*v23 + 8 * v24) = v43;
    *((_DWORD *)this + 94) = v25;
  }
  else
  {
    v26 = DynArrayImpl<0>::AddMultipleAndSet(v23, 8LL, 1LL, &v43);
    v15 = v26;
    if ( v26 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0xC0u);
  }
  if ( v15 < 0 )
  {
    v39 = 3849;
LABEL_55:
    v37 = v15;
    goto LABEL_56;
  }
  v13 = 0LL;
  v43 = (struct CWindowData *)v20;
  v27 = *((_DWORD *)v16 + 126);
  v28 = v27 + 1;
  v15 = v27 + 1 < v27 ? 0x80070216 : 0;
  if ( v27 + 1 < v27 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xB5u);
  }
  else if ( v28 <= *((_DWORD *)v16 + 125) )
  {
    *(_QWORD *)(*((_QWORD *)v16 + 60) + 8LL * *((unsigned int *)v16 + 126)) = v43;
    *((_DWORD *)v16 + 126) = v28;
  }
  else
  {
    v29 = DynArrayImpl<0>::AddMultipleAndSet((char *)v16 + 480, 8LL, 1LL, &v43);
    v15 = v29;
    if ( v29 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0xC0u);
  }
  if ( v15 < 0 )
  {
    v39 = 3857;
    goto LABEL_55;
  }
  if ( v18 )
  {
    v43 = (struct CWindowData *)v20;
    v30 = *((_DWORD *)v18 + 134);
    v31 = v30 + 1;
    v15 = v30 + 1 < v30 ? 0x80070216 : 0;
    if ( v30 + 1 < v30 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xB5u);
    }
    else if ( v31 <= *((_DWORD *)v18 + 133) )
    {
      *(_QWORD *)(*((_QWORD *)v18 + 64) + 8LL * *((unsigned int *)v18 + 134)) = v43;
      *((_DWORD *)v18 + 134) = v31;
    }
    else
    {
      v32 = DynArrayImpl<0>::AddMultipleAndSet((char *)v18 + 512, 8LL, 1LL, &v43);
      v15 = v32;
      if ( v32 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v32, 0xC0u);
    }
    if ( v15 < 0 )
    {
      v39 = 3860;
      goto LABEL_55;
    }
  }
  if ( a4 )
  {
    updated = CThumbnailData::UpdateProperties((CThumbnailData *)v20, a6);
    v15 = updated;
    if ( updated < 0 )
    {
      v39 = 3872;
      goto LABEL_71;
    }
    updated = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
    v15 = updated;
    if ( updated < 0 )
    {
      v39 = 3873;
      goto LABEL_71;
    }
    v38 = (struct CVisual *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    updated = VisualCollection::InsertRelative((VisualCollection *)(*(_QWORD *)(v20 + 104) + 32LL), v38, 0LL, 0, 1);
    v15 = updated;
    if ( updated < 0 )
    {
      v39 = 3874;
      goto LABEL_71;
    }
  }
  else
  {
    updated = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
    v15 = updated;
    if ( updated < 0 )
    {
      v39 = 3878;
      goto LABEL_71;
    }
    updated = CThumbnailData::UpdateProperties((CThumbnailData *)v20, a6);
    v15 = updated;
    if ( updated < 0 )
    {
      v39 = 3879;
      goto LABEL_71;
    }
    v34 = (struct CVisual *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    updated = VisualCollection::InsertRelative((VisualCollection *)(*(_QWORD *)(v20 + 104) + 32LL), v34, 0LL, 0, 1);
    v15 = updated;
    if ( updated < 0 )
    {
      v39 = 3880;
      goto LABEL_71;
    }
    if ( CDesktopManager::IsLogonDesktop(*((_QWORD *)v16 + 15)) )
    {
      updated = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v20 + 104) + 64LL))(*(_QWORD *)(v20 + 104));
      v15 = updated;
      if ( updated < 0 )
      {
        v39 = 3886;
LABEL_71:
        v37 = updated;
        goto LABEL_56;
      }
    }
  }
  v35 = (CVisual *)*((_QWORD *)v16 + 49);
  if ( v35 )
    CVisual::SetDirtyFlags(v35, 0x8000000u);
LABEL_40:
  if ( v40 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 5) + 128LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5));
  if ( v13 )
    CBaseObject::Release(v13);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v44);
  return (unsigned int)v15;
}
