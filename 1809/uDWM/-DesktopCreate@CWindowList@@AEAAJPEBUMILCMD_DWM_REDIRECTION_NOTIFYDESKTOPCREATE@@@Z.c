/*
 * XREFs of ?DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z @ 0x1800438E4
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x1800117B0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001F020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800245C0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180028BF0 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?Create@CGlobalLightSet@@SAJ_KPEAPEAV1@@Z @ 0x180043A28 (-Create@CGlobalLightSet@@SAJ_KPEAPEAV1@@Z.c)
 *     ?CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@1@@Z @ 0x1800440F4 (-CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@1@@Z.c)
 *     ?ForceAtlasInitialize@CContactManager@@QEAAX_K@Z @ 0x18004551C (-ForceAtlasInitialize@CContactManager@@QEAAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CWindowList::DesktopCreate(
        CWindowList *this,
        const struct MILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE *a2)
{
  bool v4; // zf
  __int64 v5; // rax
  bool v6; // r15
  CWindowList *v7; // rcx
  int RootVisualForDesktop; // eax
  unsigned int v9; // ebx
  unsigned __int64 *inserted; // rdi
  struct _LIST_ENTRY *WindowListForDesktop; // rax
  CContactManager *v12; // rcx
  unsigned __int64 v13; // rcx
  int v14; // eax
  CBaseObject *v15; // rax
  CBaseObject *v16; // rcx
  int v18; // r9d
  unsigned int v19; // [rsp+20h] [rbp-39h]
  __int64 Buffer; // [rsp+30h] [rbp-29h] BYREF
  struct CVisual *v21; // [rsp+38h] [rbp-21h]
  __int128 v22; // [rsp+40h] [rbp-19h]
  __int128 v23; // [rsp+50h] [rbp-9h]
  __int128 v24; // [rsp+60h] [rbp+7h]
  __int64 v25; // [rsp+70h] [rbp+17h]
  char v26; // [rsp+78h] [rbp+1Fh]
  CBaseObject *v27; // [rsp+C0h] [rbp+67h] BYREF
  struct _RTL_CRITICAL_SECTION *v28; // [rsp+C8h] [rbp+6Fh] BYREF

  v28 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v26 = 0;
  v4 = RtlNumberGenericTableElements((PRTL_GENERIC_TABLE)((char *)this + 8)) == 0;
  v22 = 0LL;
  v5 = *(_QWORD *)((char *)a2 + 4);
  v6 = v4;
  v24 = 0LL;
  v21 = 0LL;
  v25 = -1LL;
  v23 = 0LL;
  Buffer = v5;
  RootVisualForDesktop = CWindowList::CreateRootVisualForDesktop(
                           v7,
                           (struct CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY *)&Buffer);
  v9 = RootVisualForDesktop;
  if ( RootVisualForDesktop < 0 )
  {
    v19 = 6307;
LABEL_13:
    v18 = RootVisualForDesktop;
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, v19);
    goto LABEL_10;
  }
  RootVisualForDesktop = VisualCollection::InsertRelative(
                           (VisualCollection *)(*((_QWORD *)this + 10) + 32LL),
                           v21,
                           0LL,
                           0,
                           1);
  v9 = RootVisualForDesktop;
  if ( RootVisualForDesktop < 0 )
  {
    v19 = 6308;
    goto LABEL_13;
  }
  inserted = (unsigned __int64 *)RtlInsertElementGenericTable(
                                   (PRTL_GENERIC_TABLE)((char *)this + 8),
                                   &Buffer,
                                   0x60u,
                                   0LL);
  if ( !inserted )
  {
    v9 = -2147024882;
    v19 = 6311;
    v18 = -2147024882;
    goto LABEL_15;
  }
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(this, *(_QWORD *)((char *)a2 + 4));
  WindowListForDesktop->Blink = WindowListForDesktop;
  WindowListForDesktop->Flink = WindowListForDesktop;
  if ( v6 )
    CContactManager::ForceAtlasInitialize(v12, *(_QWORD *)((char *)a2 + 4));
  v13 = *inserted;
  v27 = 0LL;
  v14 = CGlobalLightSet::Create(v13, &v27);
  v9 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x18B3u);
    v16 = v27;
    if ( !v27 )
      goto LABEL_10;
    goto LABEL_9;
  }
  v15 = v27;
  inserted[7] = (unsigned __int64)v27;
  if ( v15 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v15 + 2);
    v16 = v27;
LABEL_9:
    CBaseObject::Release(v16);
  }
LABEL_10:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v28);
  return v9;
}
