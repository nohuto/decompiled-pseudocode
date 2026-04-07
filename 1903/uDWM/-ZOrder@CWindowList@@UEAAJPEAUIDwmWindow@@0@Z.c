/*
 * XREFs of ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x180018A90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180002AC4 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x18000EC64 (-OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011A00 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180014F38 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180016C00 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018120 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?UpdateAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z @ 0x18002396C (-UpdateAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x18002507C (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?InsertAt@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJAEBQEAVCWindowData@@I@Z @ 0x180039378 (-InsertAt@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJAEBQEAVCWindowData@@I@Z.c)
 *     ?GetWindowListForDesktopCanFail@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x18003AF90 (-GetWindowListForDesktopCanFail@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z @ 0x180090E00 (-GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z.c)
 *     ?ZOrderProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x1800B54EC (-ZOrderProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ.c)
 */

__int64 __fastcall CWindowList::ZOrder(CWindowList *this, struct IDwmWindow *a2, struct IDwmWindow *a3)
{
  unsigned int v6; // edi
  int SyncedWindowData; // eax
  unsigned int v8; // ebx
  __int64 v9; // rax
  char *v10; // rax
  struct CWindowData *v11; // rsi
  struct CWindowData *v12; // rcx
  struct CWindowData **v13; // rdx
  __int64 v14; // rcx
  struct CWindowData *v15; // rax
  unsigned __int64 *v16; // rdx
  struct CVisual *v17; // r15
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // r14
  struct CVisual *v21; // rbx
  char *v22; // rax
  struct CWindowData *v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r14
  struct _LIST_ENTRY *v28; // r15
  struct _LIST_ENTRY *WindowListForDesktopCanFail; // rax
  struct _LIST_ENTRY *i; // rcx
  struct _LIST_ENTRY ***v31; // rsi
  struct _LIST_ENTRY **v32; // rax
  unsigned int v33; // eax
  unsigned int v34; // edx
  int v35; // eax
  int v36; // r9d
  int ProjectedShadowSceneForDesktop; // eax
  unsigned int v38; // [rsp+28h] [rbp-A9h]
  void *v39; // [rsp+30h] [rbp-A1h]
  struct CWindowData *v40; // [rsp+38h] [rbp-99h] BYREF
  struct _RTL_CRITICAL_SECTION *v41; // [rsp+40h] [rbp-91h] BYREF
  __int64 Buffer; // [rsp+48h] [rbp-89h] BYREF
  __int64 v43; // [rsp+50h] [rbp-81h]
  __int128 v44; // [rsp+58h] [rbp-79h]
  __int128 v45; // [rsp+68h] [rbp-69h]
  __int128 v46; // [rsp+78h] [rbp-59h]
  __int64 v47; // [rsp+88h] [rbp-49h]
  char v48; // [rsp+90h] [rbp-41h]
  _QWORD v49[2]; // [rsp+A8h] [rbp-29h] BYREF
  __int128 v50; // [rsp+B8h] [rbp-19h]
  __int128 v51; // [rsp+C8h] [rbp-9h]
  __int128 v52; // [rsp+D8h] [rbp+7h]
  __int64 v53; // [rsp+E8h] [rbp+17h]
  char v54; // [rsp+F0h] [rbp+1Fh]
  struct CWindowData *v55; // [rsp+150h] [rbp+7Fh] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = 0;
  v55 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v55);
  v8 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v38 = 3104;
    goto LABEL_51;
  }
  if ( !v55 )
  {
    v8 = -2147024890;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024890, 0xC22u, v39);
    goto LABEL_28;
  }
  v9 = *((_QWORD *)v55 + 15);
  v47 = -1LL;
  v43 = 0LL;
  v44 = 0LL;
  v48 = 0;
  v45 = 0LL;
  v46 = 0LL;
  Buffer = v9;
  v10 = (char *)RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), &Buffer);
  v11 = (struct CWindowData *)(v10 + 80);
  if ( !v10 )
    v11 = 0LL;
  v40 = v11;
  if ( !v11 )
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xC25u, v39);
    goto LABEL_28;
  }
  if ( a3 )
  {
    SyncedWindowData = CWindowList::GetSyncedWindowData(this, a3, 1, &v40);
    v8 = SyncedWindowData;
    if ( SyncedWindowData < 0 )
    {
      v38 = 3115;
      goto LABEL_51;
    }
    v11 = v40;
    if ( !v40 )
    {
      v8 = -2147024890;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024890, 0xC2Eu, v39);
      goto LABEL_28;
    }
  }
  if ( v55 == *(struct CWindowData **)v11 )
    goto LABEL_28;
  v12 = *(struct CWindowData **)v55;
  if ( *(struct CWindowData **)(*(_QWORD *)v55 + 8LL) != v55
    || (v13 = (struct CWindowData **)*((_QWORD *)v55 + 1), *v13 != v55)
    || (*v13 = v12,
        *((_QWORD *)v12 + 1) = v13,
        v14 = *(_QWORD *)v11,
        v15 = v55,
        *(struct CWindowData **)(*(_QWORD *)v11 + 8LL) != v11) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)v55 = v14;
  *((_QWORD *)v15 + 1) = v11;
  *(_QWORD *)(v14 + 8) = v15;
  *(_QWORD *)v11 = v15;
  v16 = (unsigned __int64 *)v55;
  v17 = (struct CVisual *)*((_QWORD *)v55 + 50);
  if ( v17 )
  {
    v18 = *((_QWORD *)v55 + 15);
    v47 = -1LL;
    v44 = 0LL;
    v45 = 0LL;
    v46 = 0LL;
    Buffer = v18;
    v43 = 0LL;
    v48 = 0;
    v19 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), &Buffer);
    if ( v19 )
      v20 = v19[3];
    else
      v20 = 0LL;
    v53 = -1LL;
    v49[1] = 0LL;
    v21 = 0LL;
    v50 = 0LL;
    v49[0] = *((_QWORD *)v55 + 15);
    v54 = 0;
    v51 = 0LL;
    v52 = 0LL;
    v22 = (char *)RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), v49);
    if ( v22 )
      v23 = (struct CWindowData *)(v22 + 80);
    else
      v23 = 0LL;
    if ( !v23 )
    {
      v36 = -2147024882;
      v38 = 3134;
      v8 = -2147024882;
      goto LABEL_53;
    }
    while ( v11 != v23 )
    {
      v21 = (struct CVisual *)*((_QWORD *)v11 + 50);
      if ( v21 )
      {
        v24 = *((_QWORD *)v11 + 52);
        if ( v24 && *(_QWORD *)(v24 + 24) )
          v21 = (struct CVisual *)*((_QWORD *)v11 + 52);
        break;
      }
      v11 = (struct CWindowData *)*((_QWORD *)v11 + 1);
    }
    SyncedWindowData = VisualCollection::InsertRelative((VisualCollection *)(v20 + 32), v17, v21, 1u, 1);
    v8 = SyncedWindowData;
    if ( SyncedWindowData < 0 )
    {
      v38 = 3160;
    }
    else
    {
      SyncedWindowData = CTopLevelWindow3D::OnZOrderUpdated(*((CTopLevelWindow3D **)v55 + 51), 0);
      v8 = SyncedWindowData;
      if ( SyncedWindowData < 0 )
      {
        v38 = 3161;
      }
      else
      {
        CWindowList::UpdateAccentState(this, v55, 3LL);
        v16 = (unsigned __int64 *)v55;
        if ( !*((_QWORD *)v55 + 52) )
        {
LABEL_25:
          v25 = v16[50];
          if ( v25 && (*(_BYTE *)(v25 + 241) & 0x20) != 0 )
          {
            v40 = 0LL;
            Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v40);
            ProjectedShadowSceneForDesktop = CWindowList::GetProjectedShadowSceneForDesktop(
                                               this,
                                               *((_QWORD *)v55 + 15),
                                               0,
                                               &v40);
            v8 = ProjectedShadowSceneForDesktop;
            if ( ProjectedShadowSceneForDesktop < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ProjectedShadowSceneForDesktop, 0xC66u, v39);
              Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v40);
              goto LABEL_28;
            }
            v41 = &CDesktopManager::s_csDwmInstance;
            EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
            CProjectedShadowScene::ZOrderProjectedShadowReceiverVisual(v40);
            CGuard<CDwmCS>::~CGuard<CDwmCS>(&v41);
            Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v40);
            v16 = (unsigned __int64 *)v55;
          }
          goto LABEL_27;
        }
        SyncedWindowData = VisualCollection::InsertRelative(
                             (VisualCollection *)(v20 + 32),
                             *((struct CVisual **)v55 + 52),
                             *((struct CVisual **)v55 + 50),
                             1u,
                             1);
        v8 = SyncedWindowData;
        if ( SyncedWindowData >= 0 )
        {
          v16 = (unsigned __int64 *)v55;
          goto LABEL_25;
        }
        v38 = 3167;
      }
    }
LABEL_51:
    v36 = SyncedWindowData;
LABEL_53:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36, v38, v39);
    goto LABEL_28;
  }
LABEL_27:
  v26 = v16[69];
  if ( v26 && *(_DWORD *)(v26 + 584) > 1u )
  {
    v28 = 0LL;
    WindowListForDesktopCanFail = CWindowList::GetWindowListForDesktopCanFail(this, v16[15]);
    if ( WindowListForDesktopCanFail )
    {
      for ( i = *(struct _LIST_ENTRY **)v55; i != WindowListForDesktopCanFail; i = i->Flink )
      {
        if ( i[34].Blink == (struct _LIST_ENTRY *)v26 )
        {
          v28 = i;
          break;
        }
      }
    }
    v31 = (struct _LIST_ENTRY ***)(v26 + 560);
    if ( v28 )
    {
      DynArray<CWindowData *,0>::Remove(v26 + 560, &v55);
      v32 = *v31;
      if ( *(_DWORD *)(v26 + 584) )
      {
        do
        {
          if ( v28 == *v32 )
            break;
          ++v6;
          ++v32;
        }
        while ( v6 < *(_DWORD *)(v26 + 584) );
      }
      DynArray<CWindowData *,0>::InsertAt(v26 + 560, &v55, v6);
    }
    else if ( (*v31)[*(_DWORD *)(v26 + 584) - 1] != (struct _LIST_ENTRY *)v55 )
    {
      DynArray<CWindowData *,0>::Remove(v26 + 560, &v55);
      v33 = *(_DWORD *)(v26 + 584);
      v34 = v33 + 1;
      if ( v33 + 1 < v33 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u, v39);
      }
      else if ( v34 <= *(_DWORD *)(v26 + 580) )
      {
        (*v31)[*(unsigned int *)(v26 + 584)] = (struct _LIST_ENTRY *)v55;
        *(_DWORD *)(v26 + 584) = v34;
      }
      else
      {
        v35 = DynArrayImpl<0>::AddMultipleAndSet(v26 + 560, 8, 1, &v55);
        if ( v35 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v35, 0xC0u, v39);
      }
    }
  }
LABEL_28:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v8;
}
