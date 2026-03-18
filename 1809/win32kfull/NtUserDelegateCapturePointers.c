/*
 * XREFs of NtUserDelegateCapturePointers @ 0x1C0212D00
 * Callers:
 *     <none>
 * Callees:
 *     ?DelegateCapturePointersMitOn@@YAHIPEAI0@Z @ 0x1C0211080 (-DelegateCapturePointersMitOn@@YAHIPEAI0@Z.c)
 */

__int64 __fastcall NtUserDelegateCapturePointers(unsigned int a1, unsigned int *a2, unsigned int *a3)
{
  return (int)DelegateCapturePointersMitOn(a1, a2, a3);
}
