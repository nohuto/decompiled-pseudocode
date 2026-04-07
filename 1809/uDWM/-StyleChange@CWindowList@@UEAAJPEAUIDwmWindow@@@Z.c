/*
 * XREFs of ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18000D380
 * Callers:
 *     <none>
 * Callees:
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x18000CEBC (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 *     ?Add@?$CGenericSet@PEAVCWindowData@@@@QEAAJPEAVCWindowData@@@Z @ 0x18000D284 (-Add@-$CGenericSet@PEAVCWindowData@@@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x18000D720 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18000F484 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x18000F590 (-UpdateOwnerLists@CWindowData@@QEAAX_N@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180011E50 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180012688 (--0CWindowData@@QEAA@XZ.c)
 *     ?ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ @ 0x180012F50 (-ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x180023DEC (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180028BF0 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18004AD9C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CA-AW4wil_de.c)
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18004D640 (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180073C5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18008E460 (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CWindowList::StyleChange(CWindowList *this, struct IDwmWindow *a2)
{
  __int64 v4; // rdi
  int v5; // esi
  struct CWindowData *v6; // rbp
  unsigned int v7; // ebp
  int v8; // r13d
  int v9; // esi
  bool v10; // r8
  int v11; // ecx
  char v12; // al
  char v13; // al
  __int64 v14; // rbx
  int v15; // eax
  __int64 i; // rbx
  CWindowIconic *v17; // rcx
  int v18; // eax
  __int64 v19; // rax
  char v20; // al
  unsigned __int8 v21; // bl
  bool v22; // r14
  struct _RTL_GENERIC_TABLE *v23; // r15
  char v24; // r12
  char v25; // bl
  unsigned __int8 v26; // bl
  struct _LIST_ENTRY *WindowListForDesktop; // r15
  struct _LIST_ENTRY *j; // r14
  CWindowData *v30; // rax
  CWindowData *v31; // rax
  int v32; // eax
  __int64 v33; // r8
  __int64 v34; // rdx
  int v35; // eax
  unsigned int v36; // [rsp+20h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 Buffer; // [rsp+78h] [rbp+10h] BYREF
  int v40; // [rsp+80h] [rbp+18h] BYREF
  __int16 v41; // [rsp+84h] [rbp+1Ch]

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0LL;
  v5 = 0;
  v6 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v6 || !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
    goto LABEL_2;
  v30 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         744LL);
  if ( !v30 || (v31 = CWindowData::CWindowData(v30), (v6 = v31) == 0LL) )
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x887u);
    v7 = -2147024882;
    goto LABEL_53;
  }
  *((_QWORD *)v31 + 3) = a2;
  (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v31);
  *((_QWORD *)v6 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
  v32 = CWindowList::SyncWindowData(this, a2, v6);
  v5 = v32;
  if ( v32 >= 0 )
LABEL_2:
    v4 = (__int64)v6;
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v32, 0x88Bu);
  v7 = v5;
  if ( v5 < 0 )
  {
LABEL_53:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xD90u);
    goto LABEL_29;
  }
  if ( !v4 )
    goto LABEL_29;
  v8 = *(_DWORD *)(v4 + 100);
  v9 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 32LL))(a2);
  v11 = v9 & 0x20000000;
  if ( (v8 & 0x20000000) != 0 )
  {
    if ( v11 )
      goto LABEL_7;
    CWindowData::ClearSnapshot((CWindowData *)v4, 0, v10, 0);
    if ( !*(_QWORD *)(v4 + 408) )
      goto LABEL_7;
    LOBYTE(v33) = 1;
    v35 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                + 65)
                                                             + 72LL))(
            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 65),
            *(_QWORD *)(v4 + 40),
            v33);
    if ( v35 >= 0 )
      goto LABEL_7;
    v34 = 3485LL;
  }
  else
  {
    if ( !v11 )
      goto LABEL_7;
    if ( !*(_QWORD *)(v4 + 408) )
      goto LABEL_7;
    v35 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                               + 65)
                                                            + 72LL))(
            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 65),
            *(_QWORD *)(v4 + 40),
            0LL);
    if ( v35 >= 0 )
      goto LABEL_7;
    v34 = 3492LL;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)v34,
    (unsigned int)"windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)v35,
    v36);
LABEL_7:
  *(_DWORD *)(v4 + 100) = v9;
  *(_DWORD *)(v4 + 104) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 40LL))(a2);
  *(_DWORD *)(v4 + 108) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 48LL))(a2);
  v12 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 168LL))(a2);
  *(_BYTE *)(v4 + 596) &= ~8u;
  *(_BYTE *)(v4 + 596) |= 8 * (v12 & 1);
  v13 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 176LL))(a2);
  *(_BYTE *)(v4 + 596) &= ~0x80u;
  v14 = *(_QWORD *)(v4 + 392);
  *(_BYTE *)(v4 + 596) |= v13 << 7;
  if ( v14 )
  {
    v15 = *(_DWORD *)(v14 + 80);
    if ( (v15 & 0x8000) == 0 )
    {
      *(_DWORD *)(v14 + 80) = v15 | 0x8000;
      for ( i = *(_QWORD *)(v14 + 24); i; i = *(_QWORD *)(i + 24) )
      {
        if ( (*(_BYTE *)(i + 80) & 1) != 0 )
          break;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)i + 32LL))(i);
      }
    }
    v17 = *(CWindowIconic **)(v4 + 432);
    if ( v17 )
      CWindowIconic::OnWindowStyleUpdated(v17, 1);
    v18 = CTopLevelWindow3D::OnWindowStyleUpdated(*(CTopLevelWindow3D **)(v4 + 400));
    v7 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0xDB1u);
      goto LABEL_29;
    }
  }
  v19 = *(_QWORD *)(v4 + 544);
  v20 = v19 && (*(_BYTE *)(v19 + 597) & 0x40) != 0 && CWindowData::ShouldBeIncludedInOwnerSWR((CWindowData *)v4);
  v21 = *(_BYTE *)(v4 + 597);
  if ( v21 >> 7 != v20 )
  {
    CWindowData::UpdateOwnerLists((CWindowData *)v4, !(v21 >> 7));
    v21 = *(_BYTE *)(v4 + 597);
  }
  v22 = (*(_DWORD *)(v4 + 100) & 0x11000000) == 0x11000000 && *(_QWORD *)(v4 + 32);
  v23 = (struct _RTL_GENERIC_TABLE *)((char *)this + 392);
  v24 = RtlIsGenericTableEmpty(v23) == 0;
  *(_BYTE *)(v4 + 597) &= ~2u;
  v25 = v21 & 2;
  *(_BYTE *)(v4 + 597) |= 2 * v22;
  if ( !v22 )
  {
    if ( !v25 )
      goto LABEL_23;
LABEL_36:
    if ( !v22 )
    {
      Buffer = v4;
      RtlDeleteElementGenericTable(v23, &Buffer);
    }
    goto LABEL_23;
  }
  if ( v25 )
    goto LABEL_36;
  CGenericSet<CWindowData *>::Add(v23, v4);
LABEL_23:
  v26 = RtlIsGenericTableEmpty(v23) == 0;
  if ( v24 != v26 )
  {
    WindowListForDesktop = CWindowList::GetWindowListForDesktop(this, *(_QWORD *)(v4 + 120));
    *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 21) = v26;
    for ( j = WindowListForDesktop->Flink; j != WindowListForDesktop; j = j->Flink )
    {
      if ( (BYTE5(j[37].Flink) & 8) != 0 )
      {
        CWindowData::OnColorizationUpdated((CWindowData *)j);
        PostMessageW((HWND)j[2].Blink, 0x321u, v26, 0LL);
      }
    }
  }
  if ( ((v8 ^ v9) & 0x20000000) != 0 )
    CWindowData::NotifyRepresentationChanged((CWindowData *)v4);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetCachedFeatureEnabledState();
  BYTE4(Buffer) = 1;
  LODWORD(Buffer) = 0;
  v40 = 0;
  v41 = WORD2(Buffer);
  wil::details::ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetFeaturePropertyCache'::`2'::data,
    10727725LL,
    &v40,
    0LL,
    3);
LABEL_29:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v7;
}
