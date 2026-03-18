/*
 * XREFs of ?bOwnedBy@ENTRYOBJ@@QEBAHK@Z @ 0x1C00709E0
 * Callers:
 *     HmgNextOwned @ 0x1C006C600 (HmgNextOwned.c)
 *     HmgIsObjectOwnedByW32Pid @ 0x1C0070980 (HmgIsObjectOwnedByW32Pid.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C00AB720 (-vCleanupDCs@@YAXK@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ENTRYOBJ::bOwnedBy(ENTRYOBJ *this, int a2)
{
  return *((_BYTE *)this + 14) && ((*((_DWORD *)this + 2) ^ a2 & 0xFFFFFFFD) & 0xFFFFFFFE) == 0;
}
