/*
 * XREFs of UserIsCurrentProcessImmersive @ 0x1C00BCF80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall UserIsCurrentProcessImmersive(__int64 a1)
{
  return (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1) + 812) & 0x30) == 16;
}
