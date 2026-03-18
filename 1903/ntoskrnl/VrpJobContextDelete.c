/*
 * XREFs of VrpJobContextDelete @ 0x140841870
 * Callers:
 *     <none>
 * Callees:
 *     VrpCleanupNamespace @ 0x140841254 (VrpCleanupNamespace.c)
 *     VrpDecrementSiloCount @ 0x1408412C4 (VrpDecrementSiloCount.c)
 */

void __fastcall VrpJobContextDelete(__int64 a1)
{
  if ( !*(_DWORD *)(a1 + 84) )
    VrpCleanupNamespace(a1);
  if ( *(_DWORD *)(a1 + 88) )
    VrpDecrementSiloCount();
}
