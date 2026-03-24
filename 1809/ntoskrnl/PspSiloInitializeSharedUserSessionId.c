/*
 * XREFs of PspSiloInitializeSharedUserSessionId @ 0x1406D0D8C
 * Callers:
 *     PspInitializeSiloStructures @ 0x1409B01B8 (PspInitializeSiloStructures.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspSiloInitializeSharedUserSessionId(__int64 a1)
{
  *(_DWORD *)(a1 + 24) = -1;
  return 0LL;
}
