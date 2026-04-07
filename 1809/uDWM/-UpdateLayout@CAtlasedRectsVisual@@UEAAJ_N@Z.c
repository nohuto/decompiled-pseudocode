/*
 * XREFs of ?UpdateLayout@CAtlasedRectsVisual@@UEAAJ_N@Z @ 0x180025690
 * Callers:
 *     ?UpdateLayout@CButton@@UEAAJ_N@Z @ 0x180025420 (-UpdateLayout@CButton@@UEAAJ_N@Z.c)
 * Callees:
 *     ?UpdateLayout@CVisual@@UEAAJ_N@Z @ 0x1800256E0 (-UpdateLayout@CVisual@@UEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRectsVisual::UpdateLayout(CAtlasedRectsVisual *this)
{
  int updated; // eax
  unsigned int v3; // ebx

  updated = CVisual::UpdateLayout(this, 1);
  v3 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x8Bu);
  else
    (*(void (__fastcall **)(CAtlasedRectsVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 4096LL);
  return v3;
}
