/*
 * XREFs of ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18000E820
 * Callers:
 *     <none>
 * Callees:
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x18000EB90 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x180011D7C (-UpdateOwnerLists@CWindowData@@QEAAX_N@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800127B0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x1800136DC (--0CWindowData@@QEAA@XZ.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x180014254 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x180014EB4 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180016070 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x1800167EC (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x180038A48 (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 *     ?ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ @ 0x180038D44 (-ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ.c)
 *     ?Add@?$CGenericSet@PEAVCWindowData@@@@QEAAJPEAVCWindowData@@@Z @ 0x18003C2E8 (-Add@-$CGenericSet@PEAVCWindowData@@@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18003F790 (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004F5C0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::StyleChange(CWindowList *this, struct IDwmWindow *a2)
{
  struct CWindowData *v4; // rdi
  int v5; // esi
  struct CWindowData *v6; // rbp
  unsigned int v7; // ebp
  int v8; // r13d
  int v9; // eax
  bool v10; // r8
  int v11; // esi
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
  __int64 v26; // rdx
  CDesktopManager *v27; // rcx
  unsigned __int8 v28; // bl
  __int64 v30; // r8
  struct _LIST_ENTRY *WindowListForDesktop; // rax
  struct _LIST_ENTRY *v32; // r15
  struct _LIST_ENTRY *j; // r14
  CWindowData *v34; // rax
  CWindowData *v35; // rax
  int v36; // eax
  int v37; // eax
  __int64 v38; // rdx
  unsigned int v39; // [rsp+20h] [rbp-48h]
  void *v40; // [rsp+28h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  struct CWindowData *Buffer; // [rsp+78h] [rbp+10h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0LL;
  v5 = 0;
  v6 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v6 || !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
    goto LABEL_2;
  v34 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         752LL);
  if ( !v34 || (v35 = CWindowData::CWindowData(v34), (v6 = v35) == 0LL) )
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x891u, v40);
    v7 = -2147024882;
    goto LABEL_53;
  }
  *((_QWORD *)v35 + 3) = a2;
  (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v35);
  *((_QWORD *)v6 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
  v36 = CWindowList::SyncWindowData(this, a2, v6);
  v5 = v36;
  if ( v36 >= 0 )
LABEL_2:
    v4 = v6;
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36, 0x895u, v40);
  v7 = v5;
  if ( v5 < 0 )
  {
LABEL_53:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xDDFu, v40);
    goto LABEL_27;
  }
  if ( !v4 )
    goto LABEL_27;
  v8 = *((_DWORD *)v4 + 25);
  v9 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 32LL))(a2);
  v11 = v9;
  if ( (v8 & 0x20000000) != 0 )
  {
    if ( (v9 & 0x20000000) != 0 )
      goto LABEL_7;
    CWindowData::ClearSnapshot(v4, 0, v10, 0);
    if ( !*((_QWORD *)v4 + 52) )
      goto LABEL_7;
    LOBYTE(v30) = 1;
    v37 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                + 65)
                                                             + 72LL))(
            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 65),
            *((_QWORD *)v4 + 5),
            v30);
    if ( v37 >= 0 )
      goto LABEL_7;
    v38 = 3564LL;
  }
  else
  {
    if ( (v9 & 0x20000000) == 0 )
      goto LABEL_7;
    if ( !*((_QWORD *)v4 + 52) )
      goto LABEL_7;
    v37 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                               + 65)
                                                            + 72LL))(
            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 65),
            *((_QWORD *)v4 + 5),
            0LL);
    if ( v37 >= 0 )
      goto LABEL_7;
    v38 = 3571LL;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)v38,
    (unsigned int)"windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)v37,
    v39);
LABEL_7:
  *((_DWORD *)v4 + 25) = v11;
  *((_DWORD *)v4 + 26) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 40LL))(a2);
  *((_DWORD *)v4 + 27) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 48LL))(a2);
  v12 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 168LL))(a2);
  *((_BYTE *)v4 + 604) &= ~8u;
  *((_BYTE *)v4 + 604) |= 8 * (v12 & 1);
  v13 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 176LL))(a2);
  *((_BYTE *)v4 + 604) &= ~0x80u;
  v14 = *((_QWORD *)v4 + 50);
  *((_BYTE *)v4 + 604) |= v13 << 7;
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
    v17 = (CWindowIconic *)*((_QWORD *)v4 + 55);
    if ( v17 )
      CWindowIconic::OnWindowStyleUpdated(v17, 1);
    v18 = CTopLevelWindow3D::OnWindowStyleUpdated(*((CTopLevelWindow3D **)v4 + 51));
    v7 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0xE00u, v40);
      goto LABEL_27;
    }
  }
  v19 = *((_QWORD *)v4 + 69);
  v20 = v19 && (*(_BYTE *)(v19 + 605) & 0x40) != 0 && CWindowData::ShouldBeIncludedInOwnerSWR(v4);
  v21 = *((_BYTE *)v4 + 605);
  if ( v21 >> 7 != v20 )
  {
    CWindowData::UpdateOwnerLists(v4, !(v21 >> 7));
    v21 = *((_BYTE *)v4 + 605);
  }
  v22 = (*((_DWORD *)v4 + 25) & 0x11000000) == 0x11000000 && *((_QWORD *)v4 + 4);
  v23 = (struct _RTL_GENERIC_TABLE *)((char *)this + 392);
  v24 = RtlIsGenericTableEmpty(v23) == 0;
  *((_BYTE *)v4 + 605) &= ~2u;
  v25 = v21 & 2;
  *((_BYTE *)v4 + 605) |= 2 * v22;
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
  v28 = RtlIsGenericTableEmpty(v23) == 0;
  if ( v24 != v28 )
  {
    WindowListForDesktop = CWindowList::GetWindowListForDesktop(this, *((_QWORD *)v4 + 15));
    v27 = CDesktopManager::s_pDesktopManagerInstance;
    v32 = WindowListForDesktop;
    *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 21) = v28;
    for ( j = WindowListForDesktop->Flink; j != v32; j = j->Flink )
    {
      if ( (BYTE5(j[37].Blink) & 8) != 0 )
      {
        CWindowData::OnColorizationUpdated((CWindowData *)j);
        PostMessageW((HWND)j[2].Blink, 0x321u, v28, 0LL);
      }
    }
  }
  if ( ((v8 ^ v11) & 0x20000000) != 0 )
    CWindowData::NotifyRepresentationChanged(v4);
  LOBYTE(v26) = 3;
  wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(v27, v26);
LABEL_27:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v7;
}
