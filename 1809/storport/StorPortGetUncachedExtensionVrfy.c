/*
 * XREFs of StorPortGetUncachedExtensionVrfy @ 0x1C0077380
 * Callers:
 *     <none>
 * Callees:
 *     StorPortGetUncachedExtension @ 0x1C001FF10 (StorPortGetUncachedExtension.c)
 */

__int64 __fastcall StorPortGetUncachedExtensionVrfy(__int64 a1, __int64 a2, int a3)
{
  _BYTE *v3; // r9

  v3 = *(_BYTE **)(a1 - 16);
  if ( (v3[248] & 1) == 0 || !*(_BYTE *)(a2 + 82) || ((*(_DWORD *)(*(_QWORD *)v3 + 460LL) + 7) & 0xFFFFFFF8) == 0 )
    KeBugCheckEx(0xF1u, 0x2002uLL, 0LL, 0LL, 0LL);
  return StorPortGetUncachedExtension(a1, a2, a3);
}
