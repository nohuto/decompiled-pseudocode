/*
 * XREFs of MiInitializeBootLoadedDriverPfns @ 0x140A14BE0
 * Callers:
 *     MiInitializeDriverImages @ 0x1409EE68C (MiInitializeDriverImages.c)
 * Callees:
 *     MiChargeCommit @ 0x1400521D0 (MiChargeCommit.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14005EF80 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiMarkPfnVerified @ 0x140098744 (MiMarkPfnVerified.c)
 *     MiChargeResident @ 0x1400A75A8 (MiChargeResident.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsPfnFromSlabAllocation @ 0x1400D9CC0 (MiIsPfnFromSlabAllocation.c)
 *     MiValidateBootDriverLargePagePfns @ 0x140A3D3AC (MiValidateBootDriverLargePagePfns.c)
 */

__int64 __fastcall MiInitializeBootLoadedDriverPfns(__int64 a1)
{
  __int64 *v1; // r15
  __int64 *i; // rdi
  unsigned __int64 v3; // rbp
  __int64 v4; // r9
  int v5; // edx
  unsigned __int64 v6; // rbx
  __int64 v7; // rcx
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r13
  unsigned __int64 v12; // r14
  __int64 v13; // [rsp+68h] [rbp+10h] BYREF

  v1 = (__int64 *)(a1 + 16);
  for ( i = *(__int64 **)(a1 + 16); ; i = (__int64 *)*i )
  {
    if ( i == v1 )
    {
      MiFlags |= 0x1000u;
      return 1LL;
    }
    v8 = i[6];
    v6 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS(v8) )
      break;
    if ( (MiFlags & 0x10000) != 0 )
      MiValidateBootDriverLargePagePfns(i);
LABEL_12:
    ;
  }
  v12 = 0LL;
  v9 = ((unsigned __int64)*((unsigned int *)i + 16) + 4095) >> 12;
  v7 = (unsigned int)v9;
  v10 = v6 + 8LL * (unsigned int)v9;
  if ( v6 >= v10 )
  {
LABEL_9:
    if ( (PVOID)v8 != PsNtosImageBase && (PVOID)v8 != PsHalImageBase )
    {
      _InterlockedExchangeAdd(&dword_140466A50, v9);
      qword_140466A30 -= v7;
    }
    goto LABEL_12;
  }
  do
  {
    v13 = MI_READ_PTE_LOCK_FREE(v6);
    v3 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v13) >> 12) & 0xFFFFFFFFFLL)
       - 0x58000000000LL;
    if ( MiIsPfnFromSlabAllocation(v3) )
      ++v12;
    if ( v4 >= 0 )
    {
      v5 = BYTE2(MiFlags) & 1;
      *(_QWORD *)(v3 + 16) = *(_QWORD *)(v3 + 16) & 0xFFFFFFFFFFFFFC1FuLL | ((-(__int64)(v5 != 0) & 0xFFFFFFFFFFFFFFA0uLL)
                                                                           + 192);
      if ( v5 )
      {
        if ( ((*(_QWORD *)(v3 + 40) >> 54) & 7) != 3 )
          MiMarkPfnVerified(v3, 0);
      }
    }
    *(_BYTE *)(v3 + 35) |= 8u;
    v6 += 8LL;
  }
  while ( v6 < v10 );
  if ( !v12 )
  {
LABEL_8:
    v7 = (unsigned int)v9;
    goto LABEL_9;
  }
  if ( (unsigned int)MiChargeCommit((__int64)&MiSystemPartition, v12, 0)
    && (unsigned int)MiChargeResident(&MiSystemPartition, v12, 0LL) )
  {
    qword_140466A30 += v12;
    goto LABEL_8;
  }
  return 0LL;
}
