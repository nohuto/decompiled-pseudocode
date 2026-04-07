/*
 * XREFs of ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180020E80
 * Callers:
 *     ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180010BB0 (-DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180011E50 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180012688 (--0CWindowData@@QEAA@XZ.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180020430 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?Hide@CAnimatedGlassSheet@@QEAAXXZ @ 0x18008F154 (-Hide@CAnimatedGlassSheet@@QEAAXXZ.c)
 *     ?StopAnimation@CAnimatedGlassSheet@@QEAAJXZ @ 0x18008F9CC (-StopAnimation@CAnimatedGlassSheet@@QEAAJXZ.c)
 *     ?Stop@CRippleEffect@@QEAAJXZ @ 0x180090444 (-Stop@CRippleEffect@@QEAAJXZ.c)
 */

__int64 __fastcall CWindowList::DestroyWindow(CWindowList *this, struct IDwmWindow *a2)
{
  struct CWindowData *v4; // rbx
  int v5; // edi
  struct CWindowData *v6; // rsi
  void (__fastcall ***v8)(_QWORD, _QWORD); // rcx
  __int64 v9; // rsi
  struct CWindowData *v10; // rax
  struct CWindowData **v11; // rcx
  __int64 v12; // rbx
  CWindowData *v13; // rax
  CWindowData *v14; // rax
  int v15; // eax
  CRippleEffect *v16; // rcx

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0LL;
  v5 = 0;
  v6 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v6 || !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
    goto LABEL_3;
  v13 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         744LL);
  if ( !v13 || (v14 = CWindowData::CWindowData(v13), (v6 = v14) == 0LL) )
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x887u);
    goto LABEL_21;
  }
  *((_QWORD *)v14 + 3) = a2;
  (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v14);
  *((_QWORD *)v6 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
  v15 = CWindowList::SyncWindowData(this, a2, v6);
  v5 = v15;
  if ( v15 >= 0 )
LABEL_3:
    v4 = v6;
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x88Bu);
  if ( v5 < 0 )
  {
LABEL_21:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x904u);
    goto LABEL_6;
  }
  if ( v4 )
  {
    v8 = (void (__fastcall ***)(_QWORD, _QWORD))*((_QWORD *)v4 + 3);
    if ( v8 )
    {
      (**v8)(v8, 0LL);
      *((_QWORD *)v4 + 3) = 0LL;
    }
    v9 = *((_QWORD *)v4 + 5);
    if ( (*((_BYTE *)v4 + 596) & 4) == 0 )
    {
      v10 = *(struct CWindowData **)v4;
      if ( *(struct CWindowData **)(*(_QWORD *)v4 + 8LL) != v4
        || (v11 = (struct CWindowData **)*((_QWORD *)v4 + 1), *v11 != v4) )
      {
        __fastfail(3u);
      }
      *v11 = v10;
      *((_QWORD *)v10 + 1) = v11;
      *((_QWORD *)v4 + 1) = v4;
      *(_QWORD *)v4 = v4;
      CWindowList::ImmediateDestroyWindow(this, v4);
    }
    v12 = *((_QWORD *)this + 64);
    if ( v12 && v9 == *(_QWORD *)(v12 + 16) )
    {
      if ( *(_QWORD *)v12 )
      {
        CAnimatedGlassSheet::StopAnimation(*(CAnimatedGlassSheet **)v12);
        CAnimatedGlassSheet::Hide(*(CAnimatedGlassSheet **)v12);
      }
      v16 = *(CRippleEffect **)(v12 + 8);
      if ( v16 )
        CRippleEffect::Stop(v16);
      *(_QWORD *)(v12 + 16) = 0LL;
    }
  }
LABEL_6:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v5;
}
