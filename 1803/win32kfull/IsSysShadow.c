/*
 * XREFs of IsSysShadow @ 0x1C013B390
 * Callers:
 *     xxxFreeWindow @ 0x1C0036A54 (xxxFreeWindow.c)
 *     xxxAddShadow @ 0x1C0119F60 (xxxAddShadow.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsSysShadow(__int64 a1)
{
  return **(_WORD **)(*(_QWORD *)(a1 + 112) + 8LL) == (unsigned __int16)gatomShadow;
}
