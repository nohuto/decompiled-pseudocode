/*
 * XREFs of KeSignalCallDpcSynchronize @ 0x140294360
 * Callers:
 *     KiInitializeDynamicProcessorDpc @ 0x14057C260 (KiInitializeDynamicProcessorDpc.c)
 *     MiApplyImageHotPatchDpc @ 0x14057D730 (MiApplyImageHotPatchDpc.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall KeSignalCallDpcSynchronize(__int64 a1, __int64 a2, __int64 a3)
{
  signed __int32 v4; // eax
  unsigned int v5; // esi
  unsigned int v6; // ebx
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v4 = _InterlockedDecrement((volatile signed __int32 *)a1);
  v5 = ~v4 & 0x80000000;
  if ( (v4 & 0x7FFFFFFF) != 0 )
  {
    v6 = 0;
    v8 = 0;
    while ( (*(_DWORD *)a1 & 0x80000000) != v5 )
      KeYieldProcessorEx(&v8, a2, a3);
  }
  else
  {
    v6 = 1;
    *(_DWORD *)a1 = v5 | *(_DWORD *)(a1 + 4);
  }
  return v6;
}
