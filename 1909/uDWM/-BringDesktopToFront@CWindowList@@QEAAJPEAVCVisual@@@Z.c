/*
 * XREFs of ?BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z @ 0x18000ACE8
 * Callers:
 *     ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x18002FDAC (-DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z.c)
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x180030060 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 *     ?EnableDesktopRenderTarget@CDesktopManager@@AEAAJ_N@Z @ 0x18004BDC8 (-EnableDesktopRenderTarget@CDesktopManager@@AEAAJ_N@Z.c)
 * Callees:
 *     ?MoveNext@VisualCollectionIterator@@QEAA_NXZ @ 0x18000BB70 (-MoveNext@VisualCollectionIterator@@QEAA_NXZ.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x1800189B0 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ @ 0x180018CD8 (-MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::BringDesktopToFront(CWindowList *this, struct CVisual *a2)
{
  __int64 v2; // rax
  struct CVisual *v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  char v10; // [rsp+20h] [rbp-28h]
  unsigned int v11; // [rsp+20h] [rbp-28h]
  void *v12; // [rsp+28h] [rbp-20h]
  __int64 v13; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v14; // [rsp+38h] [rbp-10h]
  __int16 v15; // [rsp+3Ch] [rbp-Ch]

  v2 = *((_QWORD *)this + 10);
  v14 = -1;
  v15 = 0;
  v13 = v2 + 32;
  while ( VisualCollectionIterator::MoveNext((VisualCollectionIterator *)&v13) )
  {
    v5 = *(struct CVisual **)(*(_QWORD *)(v13 + 16) + 8LL * v14);
    if ( v5 != a2 )
      (*(void (__fastcall **)(struct CVisual *))(*(_QWORD *)v5 + 104LL))(v5);
  }
  (*(void (__fastcall **)(struct CVisual *))(*(_QWORD *)a2 + 104LL))(a2);
  v6 = CVisual::MoveToFront(a2, 0);
  v7 = v6;
  if ( v6 < 0 )
  {
    v11 = 1646;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, v11, v12);
    return v7;
  }
  v6 = CWindowList::MoveTransitionAndTouchVisualToFront(this);
  v7 = v6;
  if ( v6 < 0 )
  {
    v11 = 1647;
    goto LABEL_13;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 64LL))(*((_QWORD *)this + 10));
  v7 = v6;
  if ( v6 < 0 )
  {
    v11 = 1648;
    goto LABEL_13;
  }
  LOBYTE(v8) = 1;
  v10 = 0;
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, char))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                                + 5)
                                                                              + 16LL)
                                                                + 176LL))(
    *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
    v8,
    0LL,
    0LL,
    v10);
  return v7;
}
