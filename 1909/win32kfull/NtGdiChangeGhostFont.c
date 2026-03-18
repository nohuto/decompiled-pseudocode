/*
 * XREFs of NtGdiChangeGhostFont @ 0x1C02A6F50
 * Callers:
 *     <none>
 * Callees:
 *     GreChangeGhostFont @ 0x1C02793E0 (GreChangeGhostFont.c)
 */

__int64 __fastcall NtGdiChangeGhostFont(void **a1, int a2)
{
  unsigned int v3; // ebx
  ULONG64 v4; // rcx

  v3 = 1;
  v4 = (ULONG64)(a1 + 1);
  if ( v4 < (unsigned __int64)a1 || v4 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  if ( !(unsigned int)GreChangeGhostFont(*a1, a2) )
    return 0;
  return v3;
}
