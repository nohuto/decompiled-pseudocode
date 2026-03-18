/*
 * XREFs of MiHandleBootImage @ 0x1409EF61C
 * Callers:
 *     MiReloadBootLoadedDrivers @ 0x1409EF52C (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14005EE50 (RtlImageNtHeader.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14005F020 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsPfnFromSlabAllocation @ 0x1400B9B40 (MiIsPfnFromSlabAllocation.c)
 *     DbgLoadImageSymbolsUnicode @ 0x1401553EC (DbgLoadImageSymbolsUnicode.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x140181554 (DbgUnLoadImageSymbolsUnicode.c)
 *     MiGetBootImagePageProtection @ 0x140187820 (MiGetBootImagePageProtection.c)
 *     MiAllocateDriverPage @ 0x140650F8C (MiAllocateDriverPage.c)
 *     MiUseLargeDriverPage @ 0x14071EE20 (MiUseLargeDriverPage.c)
 *     MiMapSystemImageWithLargePage @ 0x14089993C (MiMapSystemImageWithLargePage.c)
 *     MiTradeBootImagePage @ 0x1409EF854 (MiTradeBootImagePage.c)
 *     MiFreeBootDriverPages @ 0x1409EFA54 (MiFreeBootDriverPages.c)
 *     MiImportOptimizationVetosDriverRelocation @ 0x1409EFC14 (MiImportOptimizationVetosDriverRelocation.c)
 *     MiBootImageRelocated @ 0x140A3CFE0 (MiBootImageRelocated.c)
 *     MiReleaseSystemImageVa @ 0x140A3D078 (MiReleaseSystemImageVa.c)
 */

__int64 __fastcall MiHandleBootImage(int a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdi
  int v4; // ebx
  unsigned int v7; // r13d
  PIMAGE_NT_HEADERS v8; // rbp
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // r14
  BOOL v11; // eax
  unsigned int v12; // ebx
  __int64 result; // rax
  void *v14; // r15
  char v15; // bl
  unsigned int VirtualAddress; // ecx
  unsigned int v17; // edi
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // rax
  __int64 v20; // r8
  int BootImagePageProtection; // eax
  __int64 DriverPage; // rax
  __int64 v24; // [rsp+88h] [rbp+10h] BYREF
  __int64 v25; // [rsp+90h] [rbp+18h]
  __int64 v26; // [rsp+98h] [rbp+20h] BYREF

  v25 = a3;
  v3 = *(_QWORD *)(a2 + 48);
  v4 = dword_14046454C;
  LODWORD(v24) = dword_14046454C;
  v7 = ((dword_1404645B0 & 0xFFF) != 0) + ((unsigned int)dword_1404645B0 >> 12);
  v8 = RtlImageNtHeader((PVOID)v3);
  v9 = ((unsigned __int64)*(unsigned int *)(a2 + 64) + 4095) >> 12;
  v10 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = (PVOID)v3 == PsNtosImageBase || (PVOID)v3 == PsHalImageBase;
  v12 = v7 + v4;
  if ( v11 )
    v12 = v7;
  result = MI_IS_PHYSICAL_ADDRESS(v3);
  if ( !(_DWORD)result && v12 )
    result = MiFreeBootDriverPages(v3, ((v3 >> 9) & 0xFFFFFFF8) + 8 * v9, v12, 1, a3);
  if ( (PVOID)v3 != PsNtosImageBase && (PVOID)v3 != PsHalImageBase )
  {
    v14 = 0LL;
    v8->OptionalHeader.ImageBase = v3;
    if ( (*(_DWORD *)(a2 + 104) & 0x800000) == 0 )
    {
      v15 = 4;
      if ( (v8->FileHeader.Characteristics & 1) != 0
        || v8->OptionalHeader.NumberOfRvaAndSizes <= 5
        || (VirtualAddress = v8->OptionalHeader.DataDirectory[5].VirtualAddress) != 0
        && v8->OptionalHeader.DataDirectory[5].Size + VirtualAddress > *(_DWORD *)(a2 + 64) )
      {
        v15 = 0;
      }
      else
      {
        result = MiImportOptimizationVetosDriverRelocation(a2);
        if ( !(_DWORD)result && !v7 )
        {
          result = MiUseLargeDriverPage((PCUNICODE_STRING)(a2 + 88));
          if ( (_DWORD)result )
          {
            DbgUnLoadImageSymbolsUnicode((PCUNICODE_STRING)(a2 + 88), v3, 0xFFFFFFFFLL);
            v15 = 6;
            result = (__int64)MiMapSystemImageWithLargePage(0LL, v9, (const void *)v3);
            v14 = (void *)result;
            if ( result )
            {
              v15 = 7;
              MiBootImageRelocated(a1, a2, v3, result, (__int64)v8, v9);
              MiFreeBootDriverPages(v3, (v3 >> 9) & 0xFFFFFFF8, v9, 0, v25);
              result = MiReleaseSystemImageVa(v3, (unsigned int)(v9 + v24));
            }
          }
        }
      }
      if ( (v15 & 1) == 0 )
      {
        v26 = 0LL;
        v14 = (void *)v3;
        result = (unsigned int)v9;
        v17 = 0;
        v18 = v10 + 8LL * (unsigned int)v9;
        while ( v10 < v18 )
        {
          v24 = MI_READ_PTE_LOCK_FREE(v10);
          v19 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v24);
          result = MiIsPfnFromSlabAllocation(48 * ((v19 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
          if ( !(_DWORD)result )
          {
            BootImagePageProtection = MiGetBootImagePageProtection(v17, (__int64)v8, v20, &v26);
            DriverPage = MiAllocateDriverPage(&MiSystemPartition, BootImagePageProtection);
            result = MiTradeBootImagePage(v10, DriverPage);
          }
          v10 += 8LL;
          v17 += 4096;
        }
      }
      if ( (v15 & 2) != 0 )
      {
        result = DbgLoadImageSymbolsUnicode((PCUNICODE_STRING)(a2 + 88), v14);
        if ( (_DWORD)result == 1 )
          *(_DWORD *)(a2 + 104) |= 0x100000u;
      }
    }
  }
  return result;
}
