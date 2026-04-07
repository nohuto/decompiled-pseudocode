/*
 * XREFs of ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ @ 0x18001B788
 * Callers:
 *     ?BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z @ 0x18000B404 (-BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z.c)
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x18001BF90 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 * Callees:
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x18001D720 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180025E70 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180030FEC (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::MoveTransitionAndTouchVisualToFront(CWindowList *this)
{
  int v2; // esi
  struct CAnimationEngine *v3; // rbx
  bool v4; // di
  __int64 v5; // rdi
  CVisual *v6; // rcx
  __int64 v7; // rcx
  PVOID v8; // rax
  __int64 v9; // rdi
  _QWORD Buffer[2]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v12; // [rsp+30h] [rbp-58h]
  __int128 v13; // [rsp+40h] [rbp-48h]
  __int128 v14; // [rsp+50h] [rbp-38h]
  __int64 v15; // [rsp+60h] [rbp-28h]
  char v16; // [rsp+68h] [rbp-20h]

  v2 = 0;
  v3 = CDesktopManager::AcquireAnimationEngine();
  if ( v3 )
  {
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v4 = !*((_DWORD *)v3 + 16) || !*((_BYTE *)v3 + 120);
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( !v4 )
    {
      v5 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 31);
      if ( v5 )
      {
        v6 = *(CVisual **)(v5 + 8);
        if ( v6 )
        {
          v2 = CVisual::MoveToFront(v6, 0);
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 8) + 104LL))(*(_QWORD *)(v5 + 8));
          if ( v2 >= 0 )
          {
            v7 = *(_QWORD *)(v5 + 96);
            Buffer[1] = 0LL;
            v15 = -1LL;
            Buffer[0] = v7;
            v12 = 0LL;
            v16 = 0;
            v13 = 0LL;
            v14 = 0LL;
            v8 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
            if ( v8 )
            {
              v9 = *((_QWORD *)v8 + 5);
              if ( v9 )
              {
                CVisual::MoveToFront(*((CVisual **)v8 + 5), 0);
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 104LL))(v9);
              }
            }
          }
        }
      }
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v3 + 29, 0xFFFFFFFF) == 1 )
    {
      *(_QWORD *)v3 = &CAnimationEngine::`vftable';
      DynArrayImpl<0>::~DynArrayImpl<0>((char *)v3 + 72);
      DynArrayImpl<0>::~DynArrayImpl<0>((char *)v3 + 40);
      (*(void (__fastcall **)(WPF::HeapBase *, struct CAnimationEngine *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v3);
    }
  }
  return (unsigned int)v2;
}
