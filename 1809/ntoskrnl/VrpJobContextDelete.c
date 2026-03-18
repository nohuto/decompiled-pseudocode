/*
 * XREFs of VrpJobContextDelete @ 0x140807FE0
 * Callers:
 *     <none>
 * Callees:
 *     VrpCleanupNamespace @ 0x1408079D0 (VrpCleanupNamespace.c)
 *     VrpDecrementSiloCount @ 0x140807A3C (VrpDecrementSiloCount.c)
 */

void __fastcall VrpJobContextDelete(__int64 a1)
{
  if ( !*(_DWORD *)(a1 + 84) )
    VrpCleanupNamespace(a1);
  if ( *(_DWORD *)(a1 + 88) )
    VrpDecrementSiloCount();
}
