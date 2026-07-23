/*
 * XREFs of MiDeletePfnBitMaps @ 0x140860770
 * Callers:
 *     MiDeletePartitionResources @ 0x1402D119C (MiDeletePartitionResources.c)
 *     MiCreatePfnBitMaps @ 0x14072BAB0 (MiCreatePfnBitMaps.c)
 * Callees:
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiSetPfnLink @ 0x140065C94 (MiSetPfnLink.c)
 *     MiGetPteAddress @ 0x140065DD8 (MiGetPteAddress.c)
 *     MiLockAndDecrementShareCount @ 0x140118118 (MiLockAndDecrementShareCount.c)
 *     MiReturnPfnList @ 0x140185D7C (MiReturnPfnList.c)
 *     MiReturnSplitPageCharges @ 0x140192914 (MiReturnSplitPageCharges.c)
 */

void __fastcall MiDeletePfnBitMaps(ULONG_PTR *a1)
{
  __int64 v1; // r12
  __int64 *v2; // r15
  unsigned int v3; // esi
  ULONG_PTR *v4; // r13
  unsigned __int64 v5; // r14
  unsigned __int64 *v6; // rdi
  unsigned __int64 PteAddress; // rbp
  unsigned __int64 ValidPte; // rbx
  unsigned __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // r9
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // [rsp+20h] [rbp-58h]
  __int64 v18; // [rsp+88h] [rbp+10h]
  __int64 v19; // [rsp+90h] [rbp+18h] BYREF
  unsigned __int64 v20; // [rsp+98h] [rbp+20h]

  v1 = 0LL;
  v2 = MiLargePageSizes;
  v3 = 0;
  v4 = a1;
  do
  {
    if ( v3 >= 2 )
    {
      if ( v4 != &MiSystemPartition )
        goto LABEL_14;
      v5 = 512LL;
      v6 = v4 + 795;
    }
    else
    {
      v5 = *v2;
      v6 = &v4[2 * v3 + 626];
    }
    if ( *v6 )
    {
      PteAddress = MiGetPteAddress(*v6);
      ValidPte = MiMakeValidPte(PteAddress, qword_14043BEA0, 1);
      v9 = (((0x1000000000LL / v5 + 7 + (0x1000000000LL % v5 != 0)) >> 3) + 4095) >> 12;
      v10 = (unsigned int)v9;
      v16 = (unsigned int)v9;
      v20 = v9;
      if ( (_DWORD)v9 )
      {
        v18 = (unsigned int)v9;
        do
        {
          v19 = MI_READ_PTE_LOCK_FREE(PteAddress);
          if ( v19 != ValidPte )
          {
            v12 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v19);
            MiSetPfnLink((_QWORD *)(48 * ((v12 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL), v1);
            v1 = v13;
            MiLockAndDecrementShareCount(48 * v14 - 0x58000000000LL, 0);
            v11 = v18;
          }
          PteAddress += 8LL;
          v18 = v11 - 1;
        }
        while ( v11 != 1 );
        LODWORD(v9) = v20;
        v4 = a1;
        v10 = v16;
      }
      MiReleasePtes((__int64)&qword_14043C060, PteAddress - 8 * v10, v9);
      *v6 = 0LL;
    }
LABEL_14:
    ++v3;
    ++v2;
  }
  while ( v3 < 3 );
  if ( v1 )
  {
    v15 = MiReturnPfnList(v1);
    MiReturnSplitPageCharges((__int64)&MiSystemPartition, v15, 9);
  }
}
