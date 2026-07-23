/*
 * XREFs of MiPerformCombineScan @ 0x140101DE0
 * Callers:
 *     MiSharePages @ 0x1400846D0 (MiSharePages.c)
 *     MiCombinePte @ 0x140088F00 (MiCombinePte.c)
 *     MiCombineAllPhysicalMemory @ 0x1406D5450 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MiComputeHash64 @ 0x140101E70 (MiComputeHash64.c)
 */

__int64 __fastcall MiPerformCombineScan(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  _BOOL8 v4; // rdx
  __int64 *v6; // r11
  unsigned int v7; // r8d
  __int64 v8; // [rsp+20h] [rbp-18h]

  v3 = (__int64)(*(_QWORD *)(a2 + 56) << 25) >> 16;
  v4 = (*(_DWORD *)(a1 + 52) & 4) != 0;
  if ( v4 && (unsigned __int64)(*(_QWORD *)v3 - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
    return 0LL;
  v8 = MiComputeHash64(v3, v4, 1LL, a1);
  *v6 = v8;
  return v7;
}
