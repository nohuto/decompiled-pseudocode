/*
 * XREFs of ?UpdateLayout@CRenderDataVisual@@UEAAJ_N@Z @ 0x1800225F0
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x18000FFB0 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 * Callees:
 *     ?UpdateLayout@CVisual@@UEAAJ_N@Z @ 0x1800226B0 (-UpdateLayout@CVisual@@UEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderDataVisual::UpdateLayout(CRenderDataVisual *this, bool a2)
{
  int updated; // eax
  unsigned int v4; // ebx
  void *v6; // [rsp+28h] [rbp-10h]

  updated = CVisual::UpdateLayout(this, a2);
  v4 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x52u, v6);
  else
    (*(void (__fastcall **)(CRenderDataVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 4LL);
  return v4;
}
