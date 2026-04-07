/*
 * XREFs of ?BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z @ 0x18000B404
 * Callers:
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x18000AF90 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 *     ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x18000B160 (-DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z.c)
 *     ?EnableDesktopRenderTarget@CDesktopManager@@AEAAJ_N@Z @ 0x180049C28 (-EnableDesktopRenderTarget@CDesktopManager@@AEAAJ_N@Z.c)
 * Callees:
 *     ?MoveNext@VisualCollectionIterator@@QEAA_NXZ @ 0x18000B628 (-MoveNext@VisualCollectionIterator@@QEAA_NXZ.c)
 *     ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ @ 0x18001B788 (-MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x18001D720 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::BringDesktopToFront(CWindowList *this, struct CVisual *a2)
{
  __int64 v2; // rax
  struct CVisual *v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  unsigned int v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v11; // [rsp+38h] [rbp-10h]
  __int16 v12; // [rsp+3Ch] [rbp-Ch]

  v2 = *((_QWORD *)this + 10);
  v11 = -1;
  v12 = 0;
  v10 = v2 + 32;
  while ( VisualCollectionIterator::MoveNext((VisualCollectionIterator *)&v10) )
  {
    v5 = *(struct CVisual **)(*(_QWORD *)(v10 + 16) + 8LL * v11);
    if ( v5 != a2 )
      (*(void (__fastcall **)(struct CVisual *))(*(_QWORD *)v5 + 104LL))(v5);
  }
  (*(void (__fastcall **)(struct CVisual *))(*(_QWORD *)a2 + 104LL))(a2);
  v6 = CVisual::MoveToFront(a2, 0);
  v7 = v6;
  if ( v6 < 0 )
  {
    v9 = 1636;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, v9);
    return v7;
  }
  v6 = CWindowList::MoveTransitionAndTouchVisualToFront(this);
  v7 = v6;
  if ( v6 < 0 )
  {
    v9 = 1637;
    goto LABEL_13;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 64LL))(*((_QWORD *)this + 10));
  v7 = v6;
  if ( v6 < 0 )
  {
    v9 = 1638;
    goto LABEL_13;
  }
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _DWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                     + 5)
                                                                  + 168LL))(
    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
    1LL,
    0LL,
    0LL,
    0);
  return v7;
}
