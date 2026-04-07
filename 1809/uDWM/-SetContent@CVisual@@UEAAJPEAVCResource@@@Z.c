/*
 * XREFs of ?SetContent@CVisual@@UEAAJPEAVCResource@@@Z @ 0x1800202D0
 * Callers:
 *     ??_GCCanvasVisual@@MEAAPEAXI@Z @ 0x1800201A0 (--_GCCanvasVisual@@MEAAPEAXI@Z.c)
 *     ?SetOverlayRenderTarget@CWindowList@@AEAAJPEAUHWND__@@NH@Z @ 0x18008CA64 (-SetOverlayRenderTarget@CWindowList@@AEAAJPEAUHWND__@@NH@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::SetContent(CVisual *this, struct CResource *a2)
{
  unsigned int v3; // edi
  volatile signed __int32 *v4; // rcx
  __int64 v7; // rax
  __int64 v8; // r8
  int v9; // eax

  v3 = 0;
  v4 = (volatile signed __int32 *)*((_QWORD *)this + 12);
  if ( v4 != (volatile signed __int32 *)a2 )
  {
    if ( v4 && _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v4)(v4, 1LL);
    *((_QWORD *)this + 12) = a2;
    if ( a2 && (_InterlockedIncrement((volatile signed __int32 *)a2 + 2), (v7 = *((_QWORD *)this + 12)) != 0) )
      v8 = *(unsigned int *)(v7 + 24);
    else
      v8 = 0LL;
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 424LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           v8);
    v3 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x13Au);
  }
  return v3;
}
