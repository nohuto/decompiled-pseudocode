/*
 * XREFs of NtIsOneCoreTransformMode @ 0x1C00649F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtIsOneCoreTransformMode(__int64 a1)
{
  return HIBYTE(*(_DWORD *)(PsGetCurrentProcessWin32Process(a1) + 812)) & 1;
}
