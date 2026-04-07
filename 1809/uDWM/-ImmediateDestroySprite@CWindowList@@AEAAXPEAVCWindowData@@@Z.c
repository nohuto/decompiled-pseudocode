/*
 * XREFs of ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001B2F4
 * Callers:
 *     ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180010BB0 (-DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001BC50 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z @ 0x180033AE0 (-UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z.c)
 *     ??1CWindowList@@UEAA@XZ @ 0x18008898C (--1CWindowList@@UEAA@XZ.c)
 * Callees:
 *     ?OnVisibilityUpdated@CWindowData@@QEAAJXZ @ 0x18000F09C (-OnVisibilityUpdated@CWindowData@@QEAAJXZ.c)
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x18000F524 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?FindElement@?$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@_K@Z @ 0x18001D7DC (-FindElement@-$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_W.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001D830 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180020430 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023740 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800347E0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180037368 (-CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z @ 0x180038170 (-UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z.c)
 */

void __fastcall CWindowList::ImmediateDestroySprite(CWindowList *this, struct CWindowData *a2)
{
  struct CWindowData *v4; // rcx
  struct CWindowData **v5; // rax
  char v6; // si
  __int64 v7; // rax
  char v8; // r14
  char v9; // r14
  __int64 Element; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  CBaseObject *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rax
  _QWORD Buffer[2]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v19; // [rsp+30h] [rbp-50h]
  __int128 v20; // [rsp+40h] [rbp-40h]
  __int128 v21; // [rsp+50h] [rbp-30h]
  __int64 v22; // [rsp+60h] [rbp-20h]
  char v23; // [rsp+68h] [rbp-18h]
  struct CWindowData *v24; // [rsp+A8h] [rbp+28h] BYREF

  v24 = a2;
  DynArray<CWindowData *,0>::Remove((__int64 *)this + 31, &v24);
  v4 = *(struct CWindowData **)a2;
  if ( *(struct CWindowData **)(*(_QWORD *)a2 + 8LL) != a2
    || (v5 = (struct CWindowData **)*((_QWORD *)a2 + 1), *v5 != a2) )
  {
    __fastfail(3u);
  }
  *v5 = v4;
  *((_QWORD *)v4 + 1) = v5;
  *((_QWORD *)a2 + 1) = a2;
  *(_QWORD *)a2 = a2;
  v6 = *((_BYTE *)a2 + 596) & 4;
  if ( v6 )
  {
    v24 = a2;
    RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 280), &v24);
    *((_BYTE *)a2 + 596) &= ~4u;
  }
  v7 = *((_QWORD *)a2 + 49);
  if ( v7 )
    *(_BYTE *)(v7 + 241) &= ~1u;
  *((_QWORD *)a2 + 4) = 0LL;
  v8 = *((_BYTE *)a2 + 596);
  *((_BYTE *)a2 + 596) = v8 & 0xFE;
  v9 = v8 & 1;
  if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 20) )
  {
    CWindowList::CheckForMaximizedChange(this, a2);
    if ( v9 )
    {
      if ( *((_DWORD *)a2 + 28) == 1 || !v6 )
        CWindowList::ShowHide(this, a2, 1);
    }
    else
    {
      CWindowData::OnVisibilityUpdated((CWindowData **)a2);
    }
  }
  if ( *((_QWORD *)a2 + 50) )
  {
    Element = CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FindElement((char *)this + 8);
    if ( Element )
      v11 = *(_QWORD *)(Element + 24);
    else
      v11 = 0LL;
    VisualCollection::Remove((VisualCollection *)(v11 + 32), *((struct CVisual **)a2 + 50));
  }
  if ( *((_QWORD *)a2 + 49) )
  {
    v12 = CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FindElement((char *)this + 8);
    if ( v12 )
      v13 = *(_QWORD *)(v12 + 24);
    else
      v13 = 0LL;
    VisualCollection::Remove((VisualCollection *)(v13 + 32), *((struct CVisual **)a2 + 49));
  }
  v14 = (CBaseObject *)*((_QWORD *)a2 + 47);
  if ( v14 )
  {
    CBaseObject::Release(v14);
    *((_QWORD *)a2 + 47) = 0LL;
  }
  v15 = *((_QWORD *)a2 + 49);
  if ( v15 )
    *(_DWORD *)(v15 + 80) &= ~0x2000000u;
  v16 = *((_QWORD *)a2 + 15);
  Buffer[1] = 0LL;
  v22 = -1LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  Buffer[0] = v16;
  v23 = 0;
  v17 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
  if ( v17 )
    v17 = (_QWORD *)v17[8];
  if ( *((_QWORD **)a2 + 5) == v17 )
    CWindowList::UpdateDesktopWindowReplacement(this, *((_QWORD *)a2 + 15));
  if ( !*((_QWORD *)a2 + 3) )
    CWindowList::ImmediateDestroyWindow(this, a2);
}
