/*
 * XREFs of VrpJobContextDelete @ 0x140840ED0
 * Callers:
 *     <none>
 * Callees:
 *     VrpCleanupNamespace @ 0x1408408B4 (VrpCleanupNamespace.c)
 *     VrpDecrementSiloCount @ 0x140840924 (VrpDecrementSiloCount.c)
 */

void __fastcall VrpJobContextDelete(__int64 a1)
{
  if ( !*(_DWORD *)(a1 + 84) )
    VrpCleanupNamespace(a1);
  if ( *(_DWORD *)(a1 + 88) )
    VrpDecrementSiloCount();
}
