/*
 * XREFs of ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x18001E330
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180006B6C (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x18000F524 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180011E50 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180012688 (--0CWindowData@@QEAA@XZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18001CDE0 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001F020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z @ 0x180020FE0 (-AddMultipleAndSet@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800245C0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?InsertAt@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJAEBQEAVCWindowData@@I@Z @ 0x1800378D8 (-InsertAt@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJAEBQEAVCWindowData@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?OnAccentStateUpdated@CAccent@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z @ 0x1800853B4 (-OnAccentStateUpdated@CAccent@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z.c)
 *     ?GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z @ 0x18008AA58 (-GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z.c)
 *     ?ZOrderProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x1800B103C (-ZOrderProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ.c)
 */

__int64 __fastcall CWindowList::ZOrder(CWindowList *this, struct IDwmWindow *a2, struct IDwmWindow *a3)
{
  __int64 v6; // rax
  unsigned int v7; // esi
  int v8; // edi
  struct CWindowData *v9; // rbx
  int v10; // r14d
  __int64 v11; // rax
  struct _RTL_GENERIC_TABLE *v12; // r12
  char *v13; // rax
  struct CWindowData *v14; // rbx
  struct CWindowData *v15; // r14
  struct CWindowData *v16; // rcx
  struct CWindowData **v17; // rdx
  _QWORD *v18; // rcx
  struct CWindowData *v19; // rax
  struct CWindowData *v20; // rdi
  struct CVisual *v21; // r15
  _QWORD *v22; // rax
  __int64 v23; // r14
  struct CVisual *v24; // rdi
  char *v25; // rax
  struct CWindowData *v26; // rax
  __int64 v27; // rax
  VisualCollection *v28; // r12
  int inserted; // eax
  __int64 v30; // rbx
  int v31; // ecx
  unsigned int v32; // ebx
  __int64 v33; // rax
  struct CVisual *v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rbx
  struct CWindowData *v38; // r15
  char *v39; // rax
  struct CWindowData *v40; // rcx
  struct CWindowData *v41; // rax
  struct CWindowData ***v42; // rdi
  unsigned int v43; // ecx
  struct CWindowData **v44; // rax
  __int64 v45; // rdx
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  int v47; // eax
  CWindowData *v48; // rax
  CWindowData *v49; // rax
  int v50; // eax
  CWindowData *v51; // rax
  CWindowData *v52; // rax
  int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rcx
  int v57; // eax
  int ProjectedShadowSceneForDesktop; // eax
  unsigned int v59; // [rsp+20h] [rbp-E0h]
  struct _RTL_CRITICAL_SECTION *v60; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v61; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v62; // [rsp+48h] [rbp-B8h]
  __int128 v63; // [rsp+50h] [rbp-B0h]
  __int128 v64; // [rsp+60h] [rbp-A0h]
  __int128 v65; // [rsp+70h] [rbp-90h]
  __int64 v66; // [rsp+80h] [rbp-80h]
  char v67; // [rsp+88h] [rbp-78h]
  _QWORD Buffer[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v69; // [rsp+B0h] [rbp-50h]
  __int128 v70; // [rsp+C0h] [rbp-40h]
  __int128 v71; // [rsp+D0h] [rbp-30h]
  __int64 v72; // [rsp+E0h] [rbp-20h]
  char v73; // [rsp+E8h] [rbp-18h]
  _QWORD v74[2]; // [rsp+100h] [rbp+0h] BYREF
  __int128 v75; // [rsp+110h] [rbp+10h]
  __int128 v76; // [rsp+120h] [rbp+20h]
  __int128 v77; // [rsp+130h] [rbp+30h]
  __int64 v78; // [rsp+140h] [rbp+40h]
  char v79; // [rsp+148h] [rbp+48h]
  struct CWindowData *v80; // [rsp+1A8h] [rbp+A8h] BYREF
  struct CProjectedShadowScene *v81; // [rsp+1B8h] [rbp+B8h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = *(_QWORD *)a2;
  v7 = 0;
  v80 = 0LL;
  v8 = 0;
  v9 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(v6 + 8))(a2);
  if ( v9 || !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
    goto LABEL_2;
  v48 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         744LL);
  if ( !v48 || (v49 = CWindowData::CWindowData(v48), (v9 = v49) == 0LL) )
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x887u);
    v10 = -2147024882;
    goto LABEL_66;
  }
  *((_QWORD *)v49 + 3) = a2;
  (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v49);
  *((_QWORD *)v9 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
  v50 = CWindowList::SyncWindowData(this, a2, v9);
  v8 = v50;
  if ( v50 >= 0 )
  {
LABEL_2:
    v80 = v9;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v50, 0x88Bu);
    v9 = v80;
  }
  v10 = v8;
  if ( v8 < 0 )
  {
LABEL_66:
    v59 = 3070;
LABEL_97:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, v59);
    goto LABEL_37;
  }
  if ( !v9 )
  {
    v10 = -2147024890;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024890, 0xC00u);
    goto LABEL_37;
  }
  v11 = *((_QWORD *)v9 + 15);
  v12 = (struct _RTL_GENERIC_TABLE *)((char *)this + 8);
  Buffer[1] = 0LL;
  v69 = 0LL;
  v72 = -1LL;
  v73 = 0;
  v70 = 0LL;
  v71 = 0LL;
  Buffer[0] = v11;
  v13 = (char *)RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
  if ( !v13 || (v14 = (struct CWindowData *)(v13 + 80), v13 == (char *)-80LL) )
  {
    v59 = 3075;
LABEL_96:
    v8 = -2147024882;
    v10 = -2147024882;
    goto LABEL_97;
  }
  if ( a3 )
  {
    v8 = 0;
    v15 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a3 + 8LL))(a3);
    if ( v15 || !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a3 + 16LL))(a3) )
      goto LABEL_9;
    v51 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                           WPF::g_pProcessHeap,
                           744LL);
    if ( !v51 || (v52 = CWindowData::CWindowData(v51), (v15 = v52) == 0LL) )
    {
      v8 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x887u);
      v10 = -2147024882;
LABEL_74:
      v59 = 3081;
      goto LABEL_97;
    }
    *((_QWORD *)v52 + 3) = a3;
    (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a3)(a3, v52);
    *((_QWORD *)v15 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a3 + 24LL))(a3);
    v53 = CWindowList::SyncWindowData(this, a3, v15);
    v8 = v53;
    if ( v53 >= 0 )
LABEL_9:
      v14 = v15;
    else
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v53, 0x88Bu);
    v10 = v8;
    if ( v8 >= 0 )
    {
      if ( !v14 )
      {
        v10 = -2147024890;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024890, 0xC0Cu);
        goto LABEL_37;
      }
      goto LABEL_12;
    }
    goto LABEL_74;
  }
LABEL_12:
  if ( v80 == *(struct CWindowData **)v14 )
    goto LABEL_37;
  v16 = *(struct CWindowData **)v80;
  if ( *(struct CWindowData **)(*(_QWORD *)v80 + 8LL) != v80
    || (v17 = (struct CWindowData **)*((_QWORD *)v80 + 1), *v17 != v80)
    || (*v17 = v16,
        *((_QWORD *)v16 + 1) = v17,
        v18 = *(_QWORD **)v14,
        v19 = v80,
        *(struct CWindowData **)(*(_QWORD *)v14 + 8LL) != v14) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)v80 = v18;
  *((_QWORD *)v19 + 1) = v14;
  v18[1] = v19;
  *(_QWORD *)v14 = v19;
  v20 = v80;
  v21 = (struct CVisual *)*((_QWORD *)v80 + 49);
  if ( v21 )
  {
    v74[0] = *((_QWORD *)v80 + 15);
    v75 = 0LL;
    v76 = 0LL;
    v77 = 0LL;
    v74[1] = 0LL;
    v78 = -1LL;
    v79 = 0;
    v22 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), v74);
    if ( v22 )
      v23 = v22[3];
    else
      v23 = 0LL;
    v62 = 0LL;
    v63 = 0LL;
    v24 = 0LL;
    v66 = -1LL;
    v61 = *((_QWORD *)v80 + 15);
    v67 = 0;
    v64 = 0LL;
    v65 = 0LL;
    v25 = (char *)RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), &v61);
    if ( v25 )
    {
      v26 = (struct CWindowData *)(v25 + 80);
      if ( v26 )
      {
        if ( v14 != v26 )
        {
          while ( 1 )
          {
            v24 = (struct CVisual *)*((_QWORD *)v14 + 49);
            if ( v24 )
              break;
            v14 = (struct CWindowData *)*((_QWORD *)v14 + 1);
            if ( v14 == v26 )
              goto LABEL_24;
          }
          v27 = *((_QWORD *)v14 + 51);
          if ( v27 && *(_QWORD *)(v27 + 24) )
            v24 = (struct CVisual *)*((_QWORD *)v14 + 51);
        }
LABEL_24:
        v28 = (VisualCollection *)(v23 + 32);
        inserted = VisualCollection::InsertRelative((VisualCollection *)(v23 + 32), v21, v24, 1, 1);
        v10 = inserted;
        if ( inserted < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0xC36u);
          goto LABEL_37;
        }
        v20 = v80;
        v10 = 0;
        v30 = *((_QWORD *)v80 + 50);
        v31 = *(_DWORD *)(v30 + 368);
        if ( (unsigned int)(v31 - 1) <= 1 || (unsigned int)(v31 - 4) <= 5 )
        {
          v45 = *(_QWORD *)(v30 + 328);
          if ( *(_QWORD *)(*(_QWORD *)(v45 + 392) + 24LL) )
          {
            RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                                     *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                                     *(_QWORD *)(v45 + 120));
            v47 = VisualCollection::InsertRelative(
                    (struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32),
                    (struct CVisual *)v30,
                    *(struct CVisual **)(*(_QWORD *)(v30 + 328) + 392LL),
                    1,
                    1);
            v10 = v47;
            if ( v47 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v47, 0x1E4u);
            v20 = v80;
          }
        }
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xC37u);
          goto LABEL_37;
        }
        v32 = 0;
        if ( *((_DWORD *)this + 140) )
        {
          do
          {
            v33 = *((_QWORD *)this + 67);
            if ( *(_DWORD *)(v33 + 16LL * v32 + 8) == 3 )
            {
              v54 = *(_QWORD *)(v33 + 16LL * v32);
              v55 = *(_QWORD *)(v54 + 392);
              if ( v55 )
              {
                if ( !v20 || *(_QWORD *)(v54 + 120) == *((_QWORD *)v20 + 15) )
                {
                  v56 = *(_QWORD *)(v55 + 264);
                  if ( v56 )
                    CAccent::OnAccentStateUpdated(v56, v54, 3LL);
                }
              }
            }
            ++v32;
          }
          while ( v32 < *((_DWORD *)this + 140) );
          v20 = v80;
        }
        v34 = (struct CVisual *)*((_QWORD *)v20 + 51);
        if ( v34 )
        {
          v57 = VisualCollection::InsertRelative(v28, v34, *((struct CVisual **)v20 + 49), 1, 1);
          v10 = v57;
          if ( v57 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v57, 0xC3Du);
            goto LABEL_37;
          }
          v20 = v80;
        }
        v35 = *((_QWORD *)v20 + 49);
        if ( v35 && (*(_BYTE *)(v35 + 241) & 0x40) != 0 )
        {
          v81 = 0LL;
          Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v81);
          ProjectedShadowSceneForDesktop = CWindowList::GetProjectedShadowSceneForDesktop(
                                             this,
                                             *((_QWORD *)v80 + 15),
                                             0,
                                             &v81);
          v10 = ProjectedShadowSceneForDesktop;
          if ( ProjectedShadowSceneForDesktop < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ProjectedShadowSceneForDesktop, 0xC44u);
            Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v81);
            goto LABEL_37;
          }
          v60 = &CDesktopManager::s_csDwmInstance;
          EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
          CProjectedShadowScene::ZOrderProjectedShadowReceiverVisual(v81);
          CGuard<CDwmCS>::~CGuard<CDwmCS>(&v60);
          Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v81);
          v20 = v80;
          v12 = (struct _RTL_GENERIC_TABLE *)((char *)this + 8);
        }
        else
        {
          v12 = (struct _RTL_GENERIC_TABLE *)((char *)this + 8);
        }
        goto LABEL_36;
      }
    }
    v59 = 3100;
    goto LABEL_96;
  }
LABEL_36:
  v36 = *((_QWORD *)v20 + 68);
  if ( v36 && *(_DWORD *)(v36 + 576) > 1u )
  {
    v61 = *((_QWORD *)v20 + 15);
    v63 = 0LL;
    v64 = 0LL;
    v65 = 0LL;
    v38 = 0LL;
    v62 = 0LL;
    v66 = -1LL;
    v67 = 0;
    v39 = (char *)RtlLookupElementGenericTable(v12, &v61);
    if ( v39 )
    {
      v40 = (struct CWindowData *)(v39 + 80);
      if ( v39 != (char *)-80LL )
      {
        v41 = *(struct CWindowData **)v80;
        if ( *(struct CWindowData **)v80 != v40 )
        {
          while ( *((_QWORD *)v41 + 68) != v36 )
          {
            v41 = *(struct CWindowData **)v41;
            if ( v41 == v40 )
              goto LABEL_49;
          }
          v38 = v41;
        }
      }
    }
LABEL_49:
    v42 = (struct CWindowData ***)(v36 + 552);
    if ( v38 )
    {
      DynArray<CWindowData *,0>::Remove((__int64 *)(v36 + 552), &v80);
      v43 = *(_DWORD *)(v36 + 576);
      v44 = *v42;
      if ( v43 )
      {
        do
        {
          if ( v38 == *v44 )
            break;
          ++v7;
          ++v44;
        }
        while ( v7 < v43 );
      }
      DynArray<CWindowData *,0>::InsertAt(v36 + 552, &v80, v7);
    }
    else if ( (*v42)[*(_DWORD *)(v36 + 576) - 1] != v80 )
    {
      DynArray<CWindowData *,0>::Remove((__int64 *)(v36 + 552), &v80);
      DynArray<CWindowData *,0>::AddMultipleAndSet(v36 + 552, &v80);
    }
  }
LABEL_37:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v10;
}
