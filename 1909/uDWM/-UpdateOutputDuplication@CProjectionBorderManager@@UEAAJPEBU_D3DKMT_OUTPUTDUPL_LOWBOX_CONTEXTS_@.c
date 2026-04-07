/*
 * XREFs of ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@@@Z @ 0x180088990
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011CF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180015648 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180017270 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x180018A54 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z @ 0x18002D210 (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180036620 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x18004FB12 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?Create@CProjectionBorderVisual@@SAJPEAPEAV1@@Z @ 0x180085A64 (-Create@CProjectionBorderVisual@@SAJPEAPEAV1@@Z.c)
 *     ?ScreenDuplicationEnabled@WindowFrameLoggingTelemetry@@SAXXZ @ 0x1800863C8 (-ScreenDuplicationEnabled@WindowFrameLoggingTelemetry@@SAXXZ.c)
 *     ?ScreenDuplicationInvalidMonitor@WindowFrameLoggingTelemetry@@SAXXZ @ 0x1800864D0 (-ScreenDuplicationInvalidMonitor@WindowFrameLoggingTelemetry@@SAXXZ.c)
 *     ?_FindProjectionVisualByAdapter@CProjectionBorderManager@@AEAAHAEBU_LUID@@I@Z @ 0x1800895E0 (-_FindProjectionVisualByAdapter@CProjectionBorderManager@@AEAAHAEBU_LUID@@I@Z.c)
 *     ?_FindProjectionVisualByRect@CProjectionBorderManager@@AEAAHAEBUtagRECT@@@Z @ 0x180089644 (-_FindProjectionVisualByRect@CProjectionBorderManager@@AEAAHAEBUtagRECT@@@Z.c)
 *     ?_GetAdapterDisplayRect@CProjectionBorderManager@@AEAAJAEBU_LUID@@IPEAUtagRECT@@@Z @ 0x1800896C8 (-_GetAdapterDisplayRect@CProjectionBorderManager@@AEAAJAEBU_LUID@@IPEAUtagRECT@@@Z.c)
 *     ?_RemoveInactiveVisuals@CProjectionBorderManager@@AEAAXXZ @ 0x180089BB8 (-_RemoveInactiveVisuals@CProjectionBorderManager@@AEAAXXZ.c)
 *     ?_RemoveVisualByIndex@CProjectionBorderManager@@AEAAXH@Z @ 0x180089C94 (-_RemoveVisualByIndex@CProjectionBorderManager@@AEAAXH@Z.c)
 *     ?_UpdateFilteredVisualList@CProjectionBorderManager@@AEAAJXZ @ 0x18008A5CC (-_UpdateFilteredVisualList@CProjectionBorderManager@@AEAAJXZ.c)
 *     ?UpdateRect@CProjectionBorderVisual@@QEAAXAEBUtagRECT@@@Z @ 0x18008A860 (-UpdateRect@CProjectionBorderVisual@@QEAAXAEBUtagRECT@@@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::UpdateOutputDuplication(
        CProjectionBorderManager *this,
        const struct _D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_ *a2)
{
  CProjectionBorderManager *v5; // rcx
  unsigned int v6; // edx
  int i; // edi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r14
  unsigned int v11; // r8d
  const struct _LUID *v12; // r12
  __int64 v13; // rcx
  unsigned int ProjectionVisualByAdapter; // ebx
  char v15; // r13
  int v16; // eax
  __int64 *v17; // r14
  __int64 v18; // rax
  unsigned int v19; // edx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // r12
  unsigned __int64 v23; // rcx
  struct CVisual *OverlayRootVisualForDesktop; // rdi
  __int64 v25; // rdx
  __int64 v26; // r12
  __int64 v27; // rcx
  int inserted; // eax
  __int64 v29; // rcx
  int v30; // [rsp+30h] [rbp-49h]
  unsigned __int64 v31; // [rsp+38h] [rbp-41h] BYREF
  __int64 v32; // [rsp+40h] [rbp-39h]
  struct _RTL_CRITICAL_SECTION *v33; // [rsp+48h] [rbp-31h] BYREF
  __m256i v34; // [rsp+50h] [rbp-29h] BYREF
  __int128 v35; // [rsp+70h] [rbp-9h]
  __int64 v36; // [rsp+80h] [rbp+7h]
  RECT rc1; // [rsp+88h] [rbp+Fh] BYREF

  if ( *(_DWORD *)a2 > 0x10u )
    return 2147942487LL;
  v33 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = 0;
  for ( i = 0; v6 < *((_DWORD *)this + 106); *(_BYTE *)(56 * v8 + *((_QWORD *)this + 50) + 48) = 0 )
  {
    v8 = v6++;
    v5 = (CProjectionBorderManager *)(56 * v8);
  }
  v9 = 0LL;
  v30 = 0;
  if ( !*(_DWORD *)a2 )
  {
LABEL_35:
    CProjectionBorderManager::_RemoveInactiveVisuals(this);
    CProjectionBorderManager::_UpdateFilteredVisualList(this);
    ProjectionVisualByAdapter = -1;
    goto LABEL_36;
  }
  while ( 1 )
  {
    v10 = 3 * v9;
    v11 = *((_DWORD *)a2 + 6 * v9 + 6);
    v12 = (const struct _LUID *)((char *)a2 + 24 * v9);
    *(_QWORD *)&rc1.left = 0LL;
    *(_QWORD *)&rc1.right = 0LL;
    if ( (int)CProjectionBorderManager::_GetAdapterDisplayRect(v5, v12 + 2, v11, &rc1) >= 0 )
      break;
    WindowFrameLoggingTelemetry::ScreenDuplicationInvalidMonitor(v13);
LABEL_34:
    v9 = (unsigned int)(v30 + 1);
    v30 = v9;
    if ( (unsigned int)v9 >= *(_DWORD *)a2 )
      goto LABEL_35;
  }
  ProjectionVisualByAdapter = CProjectionBorderManager::_FindProjectionVisualByAdapter(
                                this,
                                v12 + 2,
                                *((_DWORD *)a2 + 2 * v10 + 6));
  if ( ProjectionVisualByAdapter == -1 )
    ProjectionVisualByAdapter = CProjectionBorderManager::_FindProjectionVisualByRect(this, &rc1);
  if ( !(unsigned int)GetDesktopID(1LL, &v31) )
    goto LABEL_34;
  v15 = 0;
  if ( ProjectionVisualByAdapter == -1 )
  {
    memset_0(&v34, 0, sizeof(v34));
    v15 = 1;
    v34.m256i_u64[3] = (unsigned __int64)v12[2];
    LODWORD(v35) = *((_DWORD *)a2 + 2 * v10 + 6);
    *((_QWORD *)&v35 + 1) = v31;
    LOBYTE(v36) = 1;
    *(RECT *)&v34.m256i_u64[1] = rc1;
    v16 = CProjectionBorderVisual::Create((struct CProjectionBorderVisual **)&v34);
    i = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x82u);
      goto LABEL_38;
    }
    v17 = (__int64 *)((char *)this + 400);
    *(_DWORD *)(v34.m256i_i64[0] + 300) = 1;
    v18 = *((unsigned int *)this + 106);
    v19 = v18 + 1;
    if ( (int)v18 + 1 < (unsigned int)v18 )
    {
      i = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_40:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, i, 0x85u);
      goto LABEL_38;
    }
    if ( v19 > *((_DWORD *)this + 105) )
    {
      v21 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 400, 56, 1, &v34);
      i = v21;
      if ( v21 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0xC0u);
      if ( i < 0 )
        goto LABEL_40;
    }
    else
    {
      v20 = *v17 + 56 * v18;
      *(__m256i *)v20 = v34;
      *(_OWORD *)(v20 + 32) = v35;
      *(_QWORD *)(v20 + 48) = v36;
      *((_DWORD *)this + 106) = v19;
    }
    ProjectionVisualByAdapter = *((_DWORD *)this + 106) - 1;
  }
  else
  {
    v17 = (__int64 *)((char *)this + 400);
    v22 = 56LL * ProjectionVisualByAdapter;
    v32 = ProjectionVisualByAdapter;
    *(_BYTE *)(v22 + *((_QWORD *)this + 50) + 48) = 1;
    if ( !EqualRect(&rc1, (const RECT *)(v22 + *((_QWORD *)this + 50) + 8LL)) )
    {
      v15 = 1;
      *(RECT *)(v22 + *v17 + 8) = rc1;
    }
    v23 = v31;
    if ( v31 == *(_QWORD *)(v22 + *v17 + 40) )
    {
      v26 = v32;
LABEL_31:
      if ( v15 )
      {
        CProjectionBorderVisual::UpdateRect(
          *(CProjectionBorderVisual **)(56 * v26 + *v17),
          (const struct tagRECT *)(56 * v26 + *v17 + 8));
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(56 * v26 + *v17) + 104LL))(*(_QWORD *)(56 * v26 + *v17));
        v29 = *(_QWORD *)(*(_QWORD *)(56 * v26 + *v17) + 24LL);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 64LL))(v29);
      }
      WindowFrameLoggingTelemetry::ScreenDuplicationEnabled(v23);
      goto LABEL_34;
    }
    *(_QWORD *)(v22 + *v17 + 40) = v31;
  }
  OverlayRootVisualForDesktop = CWindowList::GetOverlayRootVisualForDesktop(
                                  *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                                  v31,
                                  1);
  if ( OverlayRootVisualForDesktop
    || (OverlayRootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                                        *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                                        v31)) != 0LL )
  {
    v25 = *v17;
    v26 = ProjectionVisualByAdapter;
    v32 = 56LL * ProjectionVisualByAdapter;
    v27 = *(_QWORD *)(*(_QWORD *)(v32 + v25) + 24LL);
    if ( v27 )
    {
      VisualCollection::Remove((VisualCollection *)(v27 + 32), *(struct CVisual **)(v32 + v25));
      v25 = *((_QWORD *)this + 50);
    }
    inserted = VisualCollection::InsertRelative(
                 (struct CVisual *)((char *)OverlayRootVisualForDesktop + 32),
                 *(struct CVisual **)(v32 + v25),
                 0LL,
                 0,
                 1);
    i = inserted;
    if ( inserted < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0xAFu);
      goto LABEL_36;
    }
    goto LABEL_31;
  }
  i = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0xA7u);
LABEL_36:
  if ( ProjectionVisualByAdapter != -1 )
    CProjectionBorderManager::_RemoveVisualByIndex(this, ProjectionVisualByAdapter);
LABEL_38:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v33);
  return (unsigned int)i;
}
