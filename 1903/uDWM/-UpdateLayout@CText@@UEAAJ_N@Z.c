/*
 * XREFs of ?UpdateLayout@CText@@UEAAJ_N@Z @ 0x1800221B0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateLayout@CVisual@@UEAAJ_N@Z @ 0x1800222D0 (-UpdateLayout@CVisual@@UEAAJ_N@Z.c)
 *     ?ValidateResources@CText@@AEAAJXZ @ 0x18002246C (-ValidateResources@CText@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CText::UpdateLayout(CText *this, bool a2)
{
  int updated; // eax
  int v4; // ebx
  int v5; // eax
  void *v7; // [rsp+28h] [rbp-10h]

  updated = CVisual::UpdateLayout(this, a2);
  v4 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x52u, v7);
  else
    (*(void (__fastcall **)(CText *, __int64))(*(_QWORD *)this + 24LL))(this, 4LL);
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x1B7u, v7);
  }
  else
  {
    v5 = CText::ValidateResources(this);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x1B8u, v7);
  }
  return (unsigned int)v4;
}
