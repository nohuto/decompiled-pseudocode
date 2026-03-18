/*
 * XREFs of MiPerformCombineScan @ 0x140140600
 * Callers:
 *     MiSharePages @ 0x14013F5C0 (MiSharePages.c)
 *     MiCombinePte @ 0x1402E5C70 (MiCombinePte.c)
 *     MiCombineAllPhysicalMemory @ 0x1406F5EB0 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MiHashIsCommon @ 0x140143030 (MiHashIsCommon.c)
 *     MiComputeHash64 @ 0x140146310 (MiComputeHash64.c)
 */

_BOOL8 __fastcall MiPerformCombineScan(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  BOOL v6; // esi
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rbx
  int v10; // r11d

  v6 = 1;
  v7 = MiComputeHash64((__int64)(*(_QWORD *)(a2 + 56) << 25) >> 16, a2, (__int64)(*(_QWORD *)(a2 + 56) << 25) >> 16);
  v9 = v7;
  if ( v10 )
    v6 = MiHashIsCommon(a1, v7, v8) != 0;
  *a4 = v9;
  return v6;
}
