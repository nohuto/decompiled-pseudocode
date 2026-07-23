/*
 * XREFs of MiInitializeBootLoadedDriverPfns @ 0x1409B9BD8
 * Callers:
 *     MiInitializeDriverImages @ 0x1409B7BDC (MiInitializeDriverImages.c)
 * Callees:
 *     MiMarkPfnVerified @ 0x14000F960 (MiMarkPfnVerified.c)
 *     MiChargeResident @ 0x14002DF50 (MiChargeResident.c)
 *     MiIsPfnFromSlabAllocation @ 0x14003120C (MiIsPfnFromSlabAllocation.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14009D850 (MI_IS_PHYSICAL_ADDRESS.c)
 */

__int64 __fastcall MiInitializeBootLoadedDriverPfns(__int64 a1)
{
  __int64 *v1; // r14
  __int64 *i; // rdi
  unsigned __int64 v3; // rax
  __int64 v4; // r9
  ULONG_PTR v5; // r10
  int v6; // r8d
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r12
  unsigned __int64 v12; // rbp
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v1 = (__int64 *)(a1 + 16);
  for ( i = *(__int64 **)(a1 + 16); ; i = (__int64 *)*i )
  {
    if ( i == v1 )
    {
      MiFlags |= 0x1000u;
      return 1LL;
    }
    v8 = i[6];
    v7 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS(v8) )
      break;
LABEL_11:
    ;
  }
  v12 = 0LL;
  v9 = ((unsigned __int64)*((unsigned int *)i + 16) + 4095) >> 12;
  v10 = v7 + 8LL * (unsigned int)v9;
  if ( v7 >= v10 )
    goto LABEL_8;
  do
  {
    v13 = MI_READ_PTE_LOCK_FREE(v7);
    v3 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v13);
    if ( MiIsPfnFromSlabAllocation(48 * ((v3 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) )
      ++v12;
    if ( v4 >= 0 )
    {
      v6 = BYTE2(MiFlags) & 1;
      *(_QWORD *)(v5 + 16) = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFC1FuLL | ((-(__int64)(v6 != 0) & 0xFFFFFFFFFFFFFFA0uLL)
                                                                           + 192);
      if ( v6 )
      {
        if ( ((*(_QWORD *)(v5 + 40) >> 54) & 7) != 3 )
          MiMarkPfnVerified(v5, 0);
      }
    }
    v7 += 8LL;
  }
  while ( v7 < v10 );
  if ( !v12 )
  {
LABEL_8:
    if ( (PVOID)v8 != PsNtosImageBase && (PVOID)v8 != PsHalImageBase )
    {
      _InterlockedExchangeAdd(&dword_14043C0F8, v9);
      qword_14043C0D0 -= (unsigned int)v9;
    }
    goto LABEL_11;
  }
  if ( (unsigned int)MiChargeCommit((__int64)&MiSystemPartition, v12, 0)
    && (unsigned int)MiChargeResident(&MiSystemPartition, v12, 0LL) )
  {
    qword_14043C0D0 += v12;
    goto LABEL_8;
  }
  return 0LL;
}
