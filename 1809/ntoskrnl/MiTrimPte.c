/*
 * XREFs of MiTrimPte @ 0x140087BC0
 * Callers:
 *     <none>
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiTrimmedEnough @ 0x140087DC8 (MiTrimmedEnough.c)
 *     MiWalkVaCheckCommon @ 0x140087E0C (MiWalkVaCheckCommon.c)
 *     MiTrimThisWsle @ 0x140087EB0 (MiTrimThisWsle.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140088034 (MI_WSLE_LOG_ACCESS.c)
 *     MiGetVaAge @ 0x1400880A0 (MiGetVaAge.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     MiTrimWorkingSetTail @ 0x14011C720 (MiTrimWorkingSetTail.c)
 *     MiTrimWorkingSetBuildup @ 0x14011C788 (MiTrimWorkingSetBuildup.c)
 *     MiComputeNextWalkPte @ 0x1402B2F04 (MiComputeNextWalkPte.c)
 *     MiInsertVmAccessedEntry @ 0x1402B334C (MiInsertVmAccessedEntry.c)
 */

__int64 __fastcall MiTrimPte(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v5; // rdi
  BOOL v6; // esi
  __int64 v7; // rdx
  __int64 v8; // r11
  __int64 v9; // rbx
  unsigned __int64 v10; // rax
  __int64 v11; // rbp
  int v12; // r11d
  __int64 v13; // rcx
  unsigned __int8 VaAge; // al
  __int64 v15; // r13
  unsigned int v16; // r12d
  unsigned int v17; // esi
  unsigned __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 WalkPte; // rax
  __int64 v23; // r11
  __int64 v24; // [rsp+70h] [rbp+8h] BYREF
  int v25; // [rsp+80h] [rbp+18h] BYREF

  v5 = (__int64)(a2 << 25) >> 16;
  v6 = a3 == 0;
  if ( MiPteInShadowRange(a2)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    v19 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v19 )
    {
      v20 = *(_QWORD *)(v19 + 8 * ((a2 >> 3) & 0x1FF));
      v21 = v7 | 0x20;
      if ( (v20 & 0x20) == 0 )
        v21 = v7;
      v7 = v21;
      if ( (v20 & 0x42) != 0 )
        v7 = v21 | 0x42;
    }
  }
  v9 = *(_QWORD *)(a1 + 168);
  v24 = v7;
  if ( (unsigned int)MiTrimmedEnough(v8, v9) )
    return 3LL;
  if ( (*(_DWORD *)v9 & 0x1000) == 0 )
  {
    WalkPte = MiComputeNextWalkPte(a2, v6);
    **(_QWORD **)(v23 + 16) = WalkPte;
  }
  v10 = MI_READ_PTE_LOCK_FREE(a2);
  v11 = 48 * ((v10 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  if ( !(unsigned int)MiWalkVaCheckCommon(v12, a2, 48 * (unsigned int)(v10 >> 12), v6, (__int64)&v24) )
    return 0LL;
  VaAge = MiGetVaAge(v13, v5);
  v15 = *(_QWORD *)(a1 + 24);
  v16 = VaAge;
  v17 = *(_DWORD *)v9 & 0xF;
  if ( (unsigned int)MiTrimThisWsle(v15, v5, v11, v9, (v24 & 0x20) != 0, (__int64)&v25) )
  {
    MiInsertTbFlushEntry(v9 + 56, v5, 1LL);
    if ( (*(_DWORD *)v9 & 0x10) != 0 )
      MI_WSLE_LOG_ACCESS(v15, a2);
    if ( ++*(_QWORD *)(v9 + 16) == *(_QWORD *)(v9 + 8) || *(_DWORD *)(v9 + 68) == *(_DWORD *)(v9 + 64) )
    {
      MiTrimWorkingSetBuildup(a1, v9);
      if ( *(_QWORD *)(v9 + 16) == *(_QWORD *)(v9 + 8) )
        return 3LL;
    }
  }
  if ( v25 && (unsigned int)MiInsertVmAccessedEntry(*(_QWORD *)(v9 + 240), v5) )
  {
    MiTrimWorkingSetTail(a1);
    return 0LL;
  }
  if ( v16 < v17 )
    return 0LL;
  if ( ++*(_QWORD *)(v9 + 32) < *(_QWORD *)(v9 + 40) )
    return 0LL;
  return 3LL;
}
