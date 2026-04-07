/*
 * XREFs of ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x18001D720
 * Callers:
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x180009198 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z @ 0x18000B404 (-BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z.c)
 *     ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ @ 0x18001B788 (-MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ.c)
 *     ?UpdateScene@CWindowList@@UEAAJXZ @ 0x18001CE40 (-UpdateScene@CWindowList@@UEAAJXZ.c)
 *     ?DrawStateW@CButton@@AEAAJPEAVCAtlasButton@@W4ButtonStates@1@@Z @ 0x180025104 (-DrawStateW@CButton@@AEAAJPEAVCAtlasButton@@W4ButtonStates@1@@Z.c)
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x180031AA0 (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x1800325F4 (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x1800475EC (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?Initialize@CTextTetherVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180096660 (-Initialize@CTextTetherVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Capture@CScreenRotation@@QEAAJXZ @ 0x1800A08E8 (-Capture@CScreenRotation@@QEAAJXZ.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001F020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800347E0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::MoveToFront(CVisual *this, char a2)
{
  __int64 v2; // rax
  unsigned int v3; // esi
  char v4; // bp
  VisualCollection *v6; // r14
  volatile signed __int32 *v7; // rdi
  int v8; // eax
  int inserted; // eax

  v2 = *((_QWORD *)this + 3);
  v3 = 0;
  v4 = 0;
  if ( !v2
    || (*((_BYTE *)this + 84) &= ~0x10u,
        v6 = (VisualCollection *)(v2 + 32),
        *((_BYTE *)this + 84) |= 16 * a2,
        !*(_DWORD *)(v2 + 72))
    || *(CVisual **)(*(_QWORD *)(v2 + 48) + 8LL * (unsigned int)(*(_DWORD *)(v2 + 72) - 1)) == this )
  {
LABEL_6:
    v7 = (volatile signed __int32 *)((char *)this + 8);
    if ( !v4 )
      return v3;
    goto LABEL_7;
  }
  v7 = (volatile signed __int32 *)((char *)this + 8);
  _InterlockedIncrement((volatile signed __int32 *)this + 2);
  v4 = 1;
  v8 = VisualCollection::Remove(v6, this);
  v3 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x1B6u);
  }
  else
  {
    inserted = VisualCollection::InsertRelative(v6, this, 0LL, 0, 1);
    v3 = inserted;
    if ( inserted >= 0 )
      goto LABEL_6;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x1B9u);
  }
LABEL_7:
  if ( _InterlockedExchangeAdd(v7, 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(CVisual *, __int64))this)(this, 1LL);
  return v3;
}
