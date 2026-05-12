/*
 * XREFs of StorBuildScatterGatherListProxy @ 0x1C003BC1C
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000E6C0 (StorPortExtendedFunction.c)
 * Callees:
 *     StorpBuildScatterGatherList @ 0x1C003DA34 (StorpBuildScatterGatherList.c)
 */

__int64 __fastcall StorBuildScatterGatherListProxy(int a1, __int64 a2)
{
  return StorpBuildScatterGatherList(
           a1,
           *(_QWORD *)a2,
           *(_QWORD *)(a2 + 8),
           *(_DWORD *)(a2 + 16),
           *(_QWORD *)(a2 + 24),
           *(_QWORD *)(a2 + 32),
           *(_BYTE *)(a2 + 40),
           *(_QWORD *)(a2 + 48),
           *(_DWORD *)(a2 + 56));
}
