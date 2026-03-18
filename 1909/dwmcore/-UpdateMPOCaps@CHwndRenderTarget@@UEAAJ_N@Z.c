/*
 * XREFs of ?UpdateMPOCaps@CHwndRenderTarget@@UEAAJ_N@Z @ 0x18002A9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateMPOCaps@COverlayContext@@QEAAJ_NPEA_N@Z @ 0x18002AA44 (-UpdateMPOCaps@COverlayContext@@QEAAJ_NPEA_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::UpdateMPOCaps(CHwndRenderTarget *this, bool a2)
{
  unsigned int v3; // ebx
  COverlayContext *v4; // rcx
  int updated; // eax
  unsigned int v6; // ecx
  bool v8; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v4 = (COverlayContext *)*((_QWORD *)this + 106);
  if ( v4 )
  {
    v8 = 0;
    updated = COverlayContext::UpdateMPOCaps(v4, a2, &v8);
    v3 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, updated, 0x270u, 0LL);
    }
    else if ( v8 )
    {
      (*(void (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)this + 224LL))(this);
    }
  }
  return v3;
}
