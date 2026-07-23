/*
 * XREFs of VrpJobContextDelete @ 0x1408091C0
 * Callers:
 *     <none>
 * Callees:
 *     VrpCleanupNamespace @ 0x140808BB0 (VrpCleanupNamespace.c)
 *     VrpDecrementSiloCount @ 0x140808C1C (VrpDecrementSiloCount.c)
 */

void __fastcall VrpJobContextDelete(__int64 a1)
{
  if ( !*(_DWORD *)(a1 + 84) )
    VrpCleanupNamespace(a1);
  if ( *(_DWORD *)(a1 + 88) )
    VrpDecrementSiloCount();
}
