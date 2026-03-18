/*
 * XREFs of GreChangeGhostFont @ 0x1C02793E0
 * Callers:
 *     NtGdiChangeGhostFont @ 0x1C02A6F50 (NtGdiChangeGhostFont.c)
 * Callees:
 *     ?ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z @ 0x1C026F4D8 (-ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z.c)
 */

__int64 __fastcall GreChangeGhostFont(void *a1, int a2)
{
  unsigned int v2; // r8d
  struct PFT **v4; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v4 = gpPFTPrivate;
  if ( gpPFTPrivate && *((_DWORD *)gpPFTPrivate + 7) )
    return (unsigned int)PUBLIC_PFTOBJ::ChangeGhostFont(&v4, a1, a2);
  return v2;
}
