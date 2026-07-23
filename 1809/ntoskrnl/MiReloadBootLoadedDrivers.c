/*
 * XREFs of MiReloadBootLoadedDrivers @ 0x1409B8C6C
 * Callers:
 *     MiInitializeDriverImages @ 0x1409B7BDC (MiInitializeDriverImages.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 *     MiIsPfnFromSlabAllocation @ 0x14003120C (MiIsPfnFromSlabAllocation.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14009D850 (MI_IS_PHYSICAL_ADDRESS.c)
 *     RtlImageNtHeader @ 0x14009DA20 (RtlImageNtHeader.c)
 *     DbgLoadImageSymbolsUnicode @ 0x1400F4C8C (DbgLoadImageSymbolsUnicode.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x14016C8B4 (DbgUnLoadImageSymbolsUnicode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     MmReleaseLoadLock @ 0x140652BE0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x140652C20 (MmAcquireLoadLock.c)
 *     MiAllocateDriverPage @ 0x140654BD4 (MiAllocateDriverPage.c)
 *     MiProcessLoadConfigForDriver @ 0x140683008 (MiProcessLoadConfigForDriver.c)
 *     MiUseLargeDriverPage @ 0x140684420 (MiUseLargeDriverPage.c)
 *     VslReserveProtectedPages @ 0x140819F5C (VslReserveProtectedPages.c)
 *     MiImportOptimizationVetosDriverRelocation @ 0x1409ABEA0 (MiImportOptimizationVetosDriverRelocation.c)
 *     MiInitializeSystemImagePage @ 0x1409B9190 (MiInitializeSystemImagePage.c)
 *     MiRelocateBootImage @ 0x1409B92CC (MiRelocateBootImage.c)
 *     MiFreeBootDriverPage @ 0x1409B93FC (MiFreeBootDriverPage.c)
 *     MiGetNewAddressForBootImage @ 0x1409B95F4 (MiGetNewAddressForBootImage.c)
 *     MiTradeBootImagePage @ 0x1409B96AC (MiTradeBootImagePage.c)
 *     MiApplyRetpolineToBootDrivers @ 0x1409B98C4 (MiApplyRetpolineToBootDrivers.c)
 *     MiInitializeDriverPtes @ 0x1409B9AAC (MiInitializeDriverPtes.c)
 *     MiApplyImportOptimizationToBootDrivers @ 0x1409F7F40 (MiApplyImportOptimizationToBootDrivers.c)
 *     MiReleaseNewAddressForBootImage @ 0x1409F874C (MiReleaseNewAddressForBootImage.c)
 *     MiReturnDriverLoadPages @ 0x1409F87A0 (MiReturnDriverLoadPages.c)
 */

__int64 __fastcall MiReloadBootLoadedDrivers(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 v3; // rdx
  unsigned __int64 v4; // r8
  __int64 v5; // r9
  __int64 ***v6; // r13
  __int64 v7; // rdi
  int v8; // esi
  unsigned int v9; // r12d
  unsigned __int64 v10; // rsi
  char v11; // bl
  PIMAGE_NT_HEADERS v12; // r14
  PVOID v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 NewAddressForBootImage; // r15
  unsigned int VirtualAddress; // ecx
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r12
  unsigned int v20; // r14d
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // r12
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // r13
  int v25; // r9d
  __int64 DriverPage; // rax
  unsigned int v27; // r14d
  __int64 **i; // rbx
  unsigned int v29; // [rsp+40h] [rbp-C0h]
  unsigned int v30; // [rsp+44h] [rbp-BCh]
  unsigned int v31; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v32; // [rsp+58h] [rbp-A8h]
  __int64 v33; // [rsp+60h] [rbp-A0h] BYREF
  PIMAGE_NT_HEADERS v34; // [rsp+68h] [rbp-98h]
  __int64 v35; // [rsp+70h] [rbp-90h]
  __int64 v36; // [rsp+78h] [rbp-88h]
  __int64 ***v37; // [rsp+80h] [rbp-80h]
  int v38; // [rsp+90h] [rbp-70h] BYREF
  __int16 v39; // [rsp+94h] [rbp-6Ch]
  __int64 v40; // [rsp+98h] [rbp-68h]
  __int64 v41; // [rsp+A0h] [rbp-60h]
  __int64 v42; // [rsp+A8h] [rbp-58h]

  v35 = a1;
  BugCheckParameter3 = 0LL;
  v1 = a1;
  v38 = 0;
  v39 = 0;
  v41 = 0LL;
  v42 = 0LL;
  v40 = 20LL;
  result = MiInitializeDriverPtes();
  if ( !(_DWORD)result )
    return result;
  MmAcquireLoadLock();
  v6 = (__int64 ***)(v1 + 16);
  v7 = *(_QWORD *)(v1 + 16);
  v8 = dword_140439EF4;
  v29 = dword_140439EF4;
  v9 = ((unsigned int)dword_140439F34 >> 12) + ((dword_140439F34 & 0xFFF) != 0);
  v37 = (__int64 ***)(v1 + 16);
  v30 = v9;
  if ( v7 == v1 + 16 )
    goto LABEL_54;
  do
  {
    v10 = *(_QWORD *)(v7 + 48);
    v11 = 0;
    v12 = RtlImageNtHeader((PVOID)v10);
    v13 = *(PVOID *)(v7 + 48);
    v14 = ((unsigned __int64)*(unsigned int *)(v7 + 64) + 4095) >> 12;
    v34 = v12;
    v31 = v14;
    if ( PsNtosImageBase != v13 )
    {
      MiProcessLoadConfigForDriver(v7, 0, 0LL);
      LODWORD(v14) = v31;
    }
    NewAddressForBootImage = v10;
    if ( (v12->FileHeader.Characteristics & 1) == 0 && v12->OptionalHeader.NumberOfRvaAndSizes > 5 )
    {
      VirtualAddress = v12->OptionalHeader.DataDirectory[5].VirtualAddress;
      if ( VirtualAddress )
      {
        if ( v12->OptionalHeader.DataDirectory[5].Size + VirtualAddress <= *(_DWORD *)(v7 + 64) )
          v11 = 2;
      }
    }
    v36 = (v10 >> 9) & 0x7FFFFFFFF8LL;
    v32 = (unsigned int)v14;
    v17 = v36 + 8LL * (unsigned int)v14 - 0x98000000000LL;
    if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS(v10) )
    {
      v18 = v9 + (unsigned __int64)v29;
      if ( v17 < v17 + 8 * v18 )
      {
        v19 = v17 + 8 * v18;
        do
        {
          MiFreeBootDriverPage(v17, &v38, 0LL);
          v17 += 8LL;
        }
        while ( v17 < v19 );
        v9 = v30;
      }
    }
    if ( (PVOID)v10 != PsNtosImageBase && (PVOID)v10 != PsHalImageBase )
    {
      v11 |= 4u;
      NewAddressForBootImage = 0LL;
      v34->OptionalHeader.ImageBase = v10;
      if ( (*(_DWORD *)(v7 + 104) & 0x800000) == 0 )
        v11 |= 8u;
      if ( (unsigned int)MiImportOptimizationVetosDriverRelocation(v7) )
        v11 &= ~8u;
      if ( (v11 & 8) != 0 )
      {
        DbgUnLoadImageSymbolsUnicode((PCUNICODE_STRING)(v7 + 88), v10, 0xFFFFFFFFLL);
        v20 = v31;
        v11 |= 0x10u;
        if ( !v9 )
        {
          NewAddressForBootImage = (unsigned __int64)MiUseLargeDriverPage(
                                                       0LL,
                                                       v31,
                                                       (const void *)v10,
                                                       (const UNICODE_STRING *)(v7 + 88));
          if ( NewAddressForBootImage )
            v11 = v11 & 0xFA | 1;
        }
      }
      else
      {
        v20 = v31;
        NewAddressForBootImage = v10;
      }
      if ( (v11 & 1) == 0 && (v11 & 8) != 0 )
      {
        NewAddressForBootImage = MiGetNewAddressForBootImage(v10, v9 + v20 + v29);
        if ( !NewAddressForBootImage )
        {
          NewAddressForBootImage = v10;
          v11 &= ~8u;
        }
      }
      if ( (v11 & 4) != 0 )
      {
        v3 = 0xFFFFF68000000000uLL;
        v21 = ((NewAddressForBootImage >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v4 = v21 + 8 * v32;
        v22 = v36 - 0x98000000000LL;
        if ( v21 < v4 )
        {
          v23 = v22 + ((NewAddressForBootImage >> 9) & 0x7FFFFFFFF8LL) - ((v10 >> 9) & 0x7FFFFFFFF8LL);
          v24 = v21 + 8 * v32;
          do
          {
            v33 = MI_READ_PTE_LOCK_FREE(v22);
            v4 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v33) >> 12) & 0xFFFFFFFFFLL)
               - 0x58000000000LL;
            if ( v25 || !MiIsPfnFromSlabAllocation(v4) )
            {
              DriverPage = MiAllocateDriverPage(&MiSystemPartition, (*(_DWORD *)(v4 + 16) >> 5) & 0x1F);
              if ( (v11 & 8) != 0 )
                MiInitializeSystemImagePage(DriverPage, v23, v22);
              else
                MiTradeBootImagePage(v22, DriverPage);
              v5 = v11 & 8;
            }
            v22 += 8LL;
            v23 += 8LL;
          }
          while ( v23 < v24 );
          v6 = v37;
        }
        v9 = v30;
      }
      if ( (v11 & 8) != 0 )
      {
        v27 = v9 + v29;
        if ( (int)MiRelocateBootImage(v35, v7, v10, NewAddressForBootImage, v34, v31, v9 + v29, &v38) < 0 )
        {
          MiReturnDriverLoadPages(
            ((NewAddressForBootImage >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
            ((NewAddressForBootImage >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL + 8 * (v32 - 1));
          MiReleaseNewAddressForBootImage(NewAddressForBootImage, v27 + v31);
          NewAddressForBootImage = v10;
          goto LABEL_49;
        }
        if ( (MiFlags & 0x8000) != 0 )
          VslReserveProtectedPages(0LL, v10, v27 + v31, 1u);
      }
      if ( (v11 & 1) != 0 )
      {
        MiReturnResidentAvailable(v32);
        MiReturnCommit((__int64)&MiSystemPartition, v32);
      }
    }
LABEL_49:
    if ( (v11 & 0x10) != 0
      && (unsigned int)DbgLoadImageSymbolsUnicode((PCUNICODE_STRING)(v7 + 88), (PVOID)NewAddressForBootImage) == 1 )
    {
      *(_DWORD *)(v7 + 104) |= 0x100000u;
    }
    v7 = *(_QWORD *)v7;
  }
  while ( (__int64 ***)v7 != v6 );
  v1 = v35;
  v8 = v29;
LABEL_54:
  MiFlushTbList(&v38, v3, v4, v5);
  MiApplyRetpolineToBootDrivers(v1);
  MiApplyImportOptimizationToBootDrivers(v1);
  if ( (MiFlags & 0x8000) != 0 )
  {
    for ( i = *v6; i != (__int64 **)v6; i = (__int64 **)*i )
      VslReserveProtectedPages(
        0LL,
        (__int64)i[6],
        v9 + v8 + (((unsigned __int64)*((unsigned int *)i + 16) + 4095) >> 12),
        2u);
  }
  MmReleaseLoadLock((__int64)KeGetCurrentThread());
  return 1LL;
}
