/*
 * XREFs of ??1EngModeState@@QEAA@XZ @ 0x1C013B448
 * Callers:
 *     W32kCddClipRegion @ 0x1C0243DA0 (W32kCddClipRegion.c)
 * Callees:
 *     <none>
 */

void __fastcall EngModeState::~EngModeState(EngModeState *this)
{
  if ( *(_QWORD *)this )
    *(_BYTE *)(*(_QWORD *)this + 331LL) = 0;
}
