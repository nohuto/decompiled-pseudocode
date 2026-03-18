/*
 * XREFs of ?Present@COverlayRenderTargetEngine@@UEAAJ_NI@Z @ 0x18015EC00
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COverlayRenderTargetEngine::Present(COverlayRenderTargetEngine *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx

  v2 = 0;
  v3 = *((_QWORD *)this + 20);
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 176LL))(v3);
    v2 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x125u);
    else
      *((_BYTE *)this + 133) = 1;
  }
  return v2;
}
