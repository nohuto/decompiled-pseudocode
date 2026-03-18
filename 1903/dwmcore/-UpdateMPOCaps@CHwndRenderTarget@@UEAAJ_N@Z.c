/*
 * XREFs of ?UpdateMPOCaps@CHwndRenderTarget@@UEAAJ_N@Z @ 0x1800B0790
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateMPOCaps@COverlayContext@@QEAAJ_NPEA_N@Z @ 0x1800B07E4 (-UpdateMPOCaps@COverlayContext@@QEAAJ_NPEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::UpdateMPOCaps(CHwndRenderTarget *this, bool a2)
{
  unsigned int v3; // ebx
  COverlayContext *v4; // rcx
  signed int updated; // eax
  __int64 v6; // rcx
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
