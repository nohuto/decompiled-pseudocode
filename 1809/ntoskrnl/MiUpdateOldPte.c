/*
 * XREFs of MiUpdateOldPte @ 0x1402B4160
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWalkVaCheckCommon @ 0x140087E0C (MiWalkVaCheckCommon.c)
 *     MiGetVaAge @ 0x1400880A0 (MiGetVaAge.c)
 *     MiInsertVmAccessedEntry @ 0x1402B334C (MiInsertVmAccessedEntry.c)
 *     MiUpdateOldPteWorker @ 0x1402B42D0 (MiUpdateOldPteWorker.c)
 *     MiUpdateOldWorkingSetPagesTail @ 0x1402B4320 (MiUpdateOldWorkingSetPagesTail.c)
 */

__int64 __fastcall MiUpdateOldPte(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v5; // r14
  __int64 v6; // rdi
  __int64 v7; // rcx
  unsigned __int64 v8; // r9
  __int64 v9; // rbx
  unsigned int *v10; // rcx
  unsigned __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  if ( a3 >= 1 )
    return 0LL;
  v5 = *(_QWORD *)(a1 + 24);
  v12 = MI_READ_PTE_LOCK_FREE(a2);
  v6 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v12) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  if ( !(unsigned int)MiWalkVaCheckCommon(v5, a2, v6, 1, (__int64 *)&v12)
    || MiGetVaAge(v7, (__int64)(a2 << 25) >> 16) != 6 )
  {
    return 0LL;
  }
  v9 = *(_QWORD *)(a1 + 168);
  if ( (*(_QWORD *)(v6 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
    && ((*(_DWORD *)v9 & 1) == 0 || (*(_QWORD *)(v6 + 40) & 0x200000000000000LL) == 0) )
  {
    if ( ((v12 >> 5) & 1) != 0 && (v10 = *(unsigned int **)(v9 + 208)) != 0LL && v8 <= 0x7FFFFFFEFFFFLL )
    {
      if ( (unsigned int)MiInsertVmAccessedEntry(v10, v8) )
        return MiUpdateOldWorkingSetPagesTail(a1);
    }
    else if ( ((v12 >> 5) & 1) == 0 )
    {
      MiUpdateOldPteWorker(v5, a2, v6, *(_QWORD *)(a1 + 168));
    }
  }
  if ( ++*(_QWORD *)(v9 + 16) >= *(_QWORD *)(v9 + 8) )
    return 3LL;
  else
    return 0LL;
}
