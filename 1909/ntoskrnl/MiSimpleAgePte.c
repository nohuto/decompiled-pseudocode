/*
 * XREFs of MiSimpleAgePte @ 0x1402C8AF0
 * Callers:
 *     <none>
 * Callees:
 *     MiAgePteWorker @ 0x14004D010 (MiAgePteWorker.c)
 *     MiGetVaAge @ 0x14005B0B0 (MiGetVaAge.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWalkVaCheckCommon @ 0x140157484 (MiWalkVaCheckCommon.c)
 *     MiInsertVmAccessedEntry @ 0x1402C831C (MiInsertVmAccessedEntry.c)
 *     MiSimpleAgeWorkingSetTail @ 0x1402C8CE0 (MiSimpleAgeWorkingSetTail.c)
 */

__int64 __fastcall MiSimpleAgePte(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r15
  __int64 v5; // r14
  int v6; // r10d
  __int64 v7; // rcx
  __int64 v8; // rbx
  BOOL v9; // edi
  unsigned __int64 v10; // r10
  unsigned int *v11; // rcx
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v13 = MI_READ_PTE_LOCK_FREE(a2);
  v5 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v13) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  if ( !(unsigned int)MiWalkVaCheckCommon(v2, a2, v5, v6 == 0, &v13) )
    return 0LL;
  v8 = *(_QWORD *)(a1 + 160);
  v9 = MiGetVaAge(v7, (__int64)(a2 << 25) >> 16) == 0;
  if ( (v13 & 0x20) != 0 )
  {
    v11 = *(unsigned int **)(v8 + 248);
    if ( v11 && v10 <= 0x7FFFFFFEFFFFLL )
    {
      if ( (unsigned int)MiInsertVmAccessedEntry(v11, v10) )
        return MiSimpleAgeWorkingSetTail(a1);
    }
    else
    {
      MiAgePteWorker(v2, a2, v10, v5, (unsigned int *)v8, 3);
    }
  }
  if ( v9 && (++*(_QWORD *)(v8 + 40), *(_QWORD *)(v8 + 40) >= *(_QWORD *)(v8 + 48)) )
    return 3LL;
  else
    return 0LL;
}
