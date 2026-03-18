/*
 * XREFs of KeSetGroupMaskProcess @ 0x1400E5274
 * Callers:
 *     KeInitializeProcess @ 0x140692038 (KeInitializeProcess.c)
 * Callees:
 *     <none>
 */

void __fastcall KeSetGroupMaskProcess(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 444) = a2;
}
