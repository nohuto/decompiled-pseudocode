/*
 * XREFs of PspSiloInitializeSharedUserSessionId @ 0x1406F1E20
 * Callers:
 *     PspInitializeSiloStructures @ 0x140A03B50 (PspInitializeSiloStructures.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspSiloInitializeSharedUserSessionId(__int64 a1)
{
  *(_DWORD *)(a1 + 24) = -1;
  return 0LL;
}
