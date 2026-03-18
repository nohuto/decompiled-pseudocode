/*
 * XREFs of ?GetLastPresentCount@CHolographicInteropTarget@@UEAAJPEAI@Z @ 0x1800DC170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicInteropTarget::GetLastPresentCount(CHolographicInteropTarget *this, unsigned int *a2)
{
  *a2 = *((_DWORD *)this + 30);
  return 0LL;
}
