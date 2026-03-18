/*
 * XREFs of KeSetGroupMaskProcess @ 0x1400EA214
 * Callers:
 *     KeInitializeProcess @ 0x1406855A8 (KeInitializeProcess.c)
 * Callees:
 *     <none>
 */

void __fastcall KeSetGroupMaskProcess(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 444) = a2;
}
