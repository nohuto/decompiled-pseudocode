/*
 * XREFs of ?Reset@CContactManager@@QEAAJXZ @ 0x18000B324
 * Callers:
 *     ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x18000B160 (-DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z.c)
 *     ??1CContactManager@@QEAA@XZ @ 0x180091538 (--1CContactManager@@QEAA@XZ.c)
 * Callees:
 *     ?StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x18000B3C8 (-StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveAt@?$DynArray@UCPenContact@@$0A@@@QEAAJI@Z @ 0x1800743C0 (-RemoveAt@-$DynArray@UCPenContact@@$0A@@@QEAAJI@Z.c)
 *     ?RemoveAt@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z @ 0x18007BD68 (-RemoveAt@-$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z.c)
 *     ?RemoveAt@?$DynArray@PEAVCTouchVisual@@$0A@@@QEAAJI@Z @ 0x18007C6E0 (-RemoveAt@-$DynArray@PEAVCTouchVisual@@$0A@@@QEAAJI@Z.c)
 *     ?RemoveAt@?$DynArray@UCStationaryAnimation@@$0A@@@QEAAJI@Z @ 0x180095068 (-RemoveAt@-$DynArray@UCStationaryAnimation@@$0A@@@QEAAJI@Z.c)
 *     ?RemoveAt@?$DynArray@UCTouchContact@@$0A@@@QEAAJI@Z @ 0x1800950F8 (-RemoveAt@-$DynArray@UCTouchContact@@$0A@@@QEAAJI@Z.c)
 */

__int64 __fastcall CContactManager::Reset(CContactManager *this)
{
  struct CTouchVisual *v2; // rdi
  __int64 result; // rax
  char *v4; // rdi
  char *v5; // rdi
  struct CTouchVisual *v6; // rdi
  struct CTouchVisual *v7; // rsi
  CContactManager *v8; // rcx
  struct CTouchVisual *v9; // rsi
  CContactManager *v10; // rcx
  struct CTouchVisual *v11; // rsi
  CContactManager *v12; // rcx
  struct CTouchVisual *v13; // rsi
  CContactManager *v14; // rcx
  struct CTouchVisual *v15; // rsi
  CContactManager *v16; // rcx
  struct CTouchVisual *v17; // rsi
  CContactManager *v18; // rcx
  struct CTouchVisual *v19; // rsi
  struct CTouchVisual *v20; // rdi
  struct CTouchVisual *v21; // rsi
  CContactManager *v22; // rcx
  struct CTouchVisual *v23; // rsi
  struct CTouchVisual *v24; // rdi
  struct CTouchVisual *v25; // rdi

  while ( *((_DWORD *)this + 36) )
  {
    v6 = *(struct CTouchVisual **)(*((_QWORD *)this + 15) + 16LL);
    CContactManager::StopAndRemoveFromRootNode(this, v6);
    if ( v6 )
      CBaseObject::Release(v6);
    DynArray<CStationaryAnimation,0>::RemoveAt((char *)this + 120, 0LL);
  }
  if ( *((_DWORD *)this + 20) )
  {
    v4 = (char *)this + 56;
    do
    {
      v7 = *(struct CTouchVisual **)(*(_QWORD *)v4 + 48LL);
      CContactManager::StopAndRemoveFromRootNode(this, v7);
      if ( v7 )
        CBaseObject::Release(v7);
      v9 = *(struct CTouchVisual **)(*(_QWORD *)v4 + 56LL);
      CContactManager::StopAndRemoveFromRootNode(v8, v9);
      if ( v9 )
        CBaseObject::Release(v9);
      v11 = *(struct CTouchVisual **)(*(_QWORD *)v4 + 72LL);
      CContactManager::StopAndRemoveFromRootNode(v10, v11);
      if ( v11 )
        CBaseObject::Release(v11);
      v13 = *(struct CTouchVisual **)(*(_QWORD *)v4 + 80LL);
      CContactManager::StopAndRemoveFromRootNode(v12, v13);
      if ( v13 )
        CBaseObject::Release(v13);
      v15 = *(struct CTouchVisual **)(*(_QWORD *)v4 + 88LL);
      CContactManager::StopAndRemoveFromRootNode(v14, v15);
      if ( v15 )
        CBaseObject::Release(v15);
      v17 = *(struct CTouchVisual **)(*(_QWORD *)v4 + 64LL);
      CContactManager::StopAndRemoveFromRootNode(v16, v17);
      if ( v17 )
        CBaseObject::Release(v17);
      v19 = *(struct CTouchVisual **)(*(_QWORD *)v4 + 96LL);
      CContactManager::StopAndRemoveFromRootNode(v18, v19);
      if ( v19 )
        CBaseObject::Release(v19);
      DynArray<CTouchContact,0>::RemoveAt((char *)this + 56, 0LL);
    }
    while ( *((_DWORD *)this + 20) );
  }
  while ( *((_DWORD *)this + 44) )
  {
    v20 = (struct CTouchVisual *)**((_QWORD **)this + 19);
    CContactManager::StopAndRemoveFromRootNode(this, v20);
    if ( v20 )
      CBaseObject::Release(v20);
    DynArray<CTouchVisual *,0>::RemoveAt((char *)this + 152, 0LL);
  }
  if ( *((_DWORD *)this + 28) )
  {
    v5 = (char *)this + 88;
    do
    {
      v21 = *(struct CTouchVisual **)(*(_QWORD *)v5 + 8LL);
      CContactManager::StopAndRemoveFromRootNode(this, v21);
      if ( v21 )
        CBaseObject::Release(v21);
      v23 = *(struct CTouchVisual **)(*(_QWORD *)v5 + 16LL);
      CContactManager::StopAndRemoveFromRootNode(v22, v23);
      if ( v23 )
        CBaseObject::Release(v23);
      DynArray<CPenContact,0>::RemoveAt((char *)this + 88, 0LL);
    }
    while ( *((_DWORD *)this + 28) );
  }
  while ( *((_DWORD *)this + 68) )
  {
    v24 = *(struct CTouchVisual **)(*((_QWORD *)this + 31) + 8LL);
    CContactManager::StopAndRemoveFromRootNode(this, v24);
    if ( v24 )
      CBaseObject::Release(v24);
    DynArray<CIconicBitmapPending,0>::RemoveAt((char *)this + 248, 0LL);
  }
  while ( *((_DWORD *)this + 76) )
  {
    v25 = *(struct CTouchVisual **)(*((_QWORD *)this + 35) + 8LL);
    CContactManager::StopAndRemoveFromRootNode(this, v25);
    if ( v25 )
      CBaseObject::Release(v25);
    DynArray<CIconicBitmapPending,0>::RemoveAt((char *)this + 280, 0LL);
  }
  v2 = (struct CTouchVisual *)*((_QWORD *)this + 39);
  CContactManager::StopAndRemoveFromRootNode(this, v2);
  if ( v2 )
    CBaseObject::Release(v2);
  result = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  return result;
}
