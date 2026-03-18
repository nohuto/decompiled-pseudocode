/*
 * XREFs of DxgkEngGetWindowRect @ 0x1C011CA60
 * Callers:
 *     <none>
 * Callees:
 *     UserGetWindowRect @ 0x1C011CA74 (UserGetWindowRect.c)
 */

__int64 __fastcall DxgkEngGetWindowRect(__int64 a1, __int64 a2)
{
  return UserGetWindowRect(a1, a2);
}
