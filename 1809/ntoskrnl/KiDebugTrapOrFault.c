/*
 * XREFs of KiDebugTrapOrFault @ 0x1401C8340
 * Callers:
 *     KiDebugTrapOrFaultShadow @ 0x14032F180 (KiDebugTrapOrFaultShadow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiDebugTrapOrFault(int a1, int a2, int a3, int a4, __int64 a5, int a6, __int64 a7, __int64 a8)
{
  bool v8; // zf
  __int64 v9; // rcx
  void *retaddr; // [rsp+0h] [rbp+0h]
  char v13; // [rsp+8h] [rbp+8h]
  __int64 v14; // [rsp+10h] [rbp+10h]
  __int64 v15; // [rsp+20h] [rbp+20h]

  v8 = (v13 & 1) == 0;
  if ( (v13 & 1) != 0 )
  {
LABEL_6:
    if ( v8 || (KiKvaShadow & 1) != 0 )
    {
      _mm_lfence();
    }
    else
    {
      __asm { swapgs }
      _mm_lfence();
      __asm { swapgs }
    }
    return KxDebugTrapOrFault(v15, v14);
  }
  else
  {
    v9 = 8LL;
    while ( retaddr != (void *)KiDebugTraps[v9 - 1] )
    {
      if ( !--v9 )
      {
        v8 = 1;
        goto LABEL_6;
      }
    }
    if ( (KiCpuTracingFlags & 2) != 0 )
      __writemsr(0x1D9u, __readmsr(0x1D9u) | 1);
    if ( (KiKvaShadow & 1) == 0 )
      __asm { iretq }
    return KiKernelIstExit(a1, a2, a3, a4, a5, a6, a7, a8);
  }
}
