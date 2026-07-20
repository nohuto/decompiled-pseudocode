/*
 * XREFs of BaseFindFirstDevice @ 0x14000F948
 * Callers:
 *     FindFirstFileExW @ 0x14000FB4C (FindFirstFileExW.c)
 * Callees:
 *     memmove_0 @ 0x1400101E3 (memmove_0.c)
 *     memset_0 @ 0x1400101EF (memset_0.c)
 */

__int64 __fastcall BaseFindFirstDevice(const void **a1, _WORD *a2)
{
  size_t v4; // r8

  memset_0(a2, 0, 0x250uLL);
  v4 = 520LL;
  *(_DWORD *)a2 = 32;
  if ( *(_WORD *)a1 < 0x208u )
    v4 = *(unsigned __int16 *)a1;
  memmove_0(a2 + 22, a1[1], v4);
  a2[281] = 0;
  return 1LL;
}
