/*
 * XREFs of ?UpdateTransition@CTetherVisual@@MEAAJXZ @ 0x180099A10
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Stop@CTetherVisual@@UEAAXXZ @ 0x1800995D0 (-Stop@CTetherVisual@@UEAAXXZ.c)
 *     ?StopDelayTimer@CTetherVisual@@IEAAXXZ @ 0x180099620 (-StopDelayTimer@CTetherVisual@@IEAAXXZ.c)
 *     ?UpdateInstructions@CTetherVisual@@IEAAJXZ @ 0x1800996E4 (-UpdateInstructions@CTetherVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CTetherVisual::UpdateTransition(CTetherVisual *this)
{
  __int64 v1; // rax
  int updated; // eax
  int v4; // edi
  __int64 v5; // rax

  v1 = *((_QWORD *)this + 50);
  if ( v1 && *(_BYTE *)(v1 + 72) )
    CTetherVisual::StopDelayTimer(this);
  updated = CTetherVisual::UpdateInstructions(this);
  v4 = updated;
  if ( updated >= 0 )
  {
    v5 = *((_QWORD *)this + 49);
    if ( v5 && *(_BYTE *)(v5 + 72) )
      CTetherVisual::Stop(this);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x15Bu);
  }
  if ( v4 < 0 )
    CTetherVisual::Stop(this);
  return (unsigned int)v4;
}
