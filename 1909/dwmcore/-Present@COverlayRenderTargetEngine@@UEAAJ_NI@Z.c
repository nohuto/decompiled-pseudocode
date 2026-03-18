/*
 * XREFs of ?Present@COverlayRenderTargetEngine@@UEAAJ_NI@Z @ 0x1801A3540
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COverlayRenderTargetEngine::Present(COverlayRenderTargetEngine *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  signed int v4; // eax
  __int64 v5; // rcx

  v2 = 0;
  v3 = *((_QWORD *)this + 20);
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 176LL))(v3);
    v2 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x129u, 0LL);
    else
      *((_BYTE *)this + 133) = 1;
  }
  return v2;
}
