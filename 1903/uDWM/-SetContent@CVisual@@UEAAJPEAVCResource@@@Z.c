/*
 * XREFs of ?SetContent@CVisual@@UEAAJPEAVCResource@@@Z @ 0x1800369A0
 * Callers:
 *     ?SetOverlayRenderTarget@CWindowList@@AEAAJPEAUHWND__@@NH@Z @ 0x180092AA8 (-SetOverlayRenderTarget@CWindowList@@AEAAJPEAUHWND__@@NH@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::SetContent(CVisual *this, struct CResource *a2)
{
  unsigned int v3; // esi
  volatile signed __int32 *v4; // rcx
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // ebx
  void *v10; // [rsp+28h] [rbp-10h]

  v3 = 0;
  v4 = (volatile signed __int32 *)*((_QWORD *)this + 12);
  if ( v4 == (volatile signed __int32 *)a2 )
    return 0LL;
  if ( v4 && _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v4)(v4, 1LL);
  *((_QWORD *)this + 12) = a2;
  if ( a2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
    v7 = *((_QWORD *)this + 12);
    if ( v7 )
      v3 = *(_DWORD *)(v7 + 24);
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)
                                                         + 448LL))(
         *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
         *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 24LL),
         v3);
  v9 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x131u, v10);
  return v9;
}
