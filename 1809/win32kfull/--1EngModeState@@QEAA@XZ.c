/*
 * XREFs of ??1EngModeState@@QEAA@XZ @ 0x1C015F7D8
 * Callers:
 *     W32kCddClipRegion @ 0x1C025BEB0 (W32kCddClipRegion.c)
 * Callees:
 *     <none>
 */

void __fastcall EngModeState::~EngModeState(EngModeState *this)
{
  if ( *(_QWORD *)this )
    *(_BYTE *)(*(_QWORD *)this + 331LL) = 0;
}
