/*
 * XREFs of MiCreateSlabAllocationsFromKernelHal @ 0x140A3CDA0
 * Callers:
 *     MiInitSystem @ 0x1409F0E88 (MiInitSystem.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14005EDB0 (RtlImageNtHeader.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiGetSlabAllocator @ 0x1402DC398 (MiGetSlabAllocator.c)
 *     MiComputeDriverProtection @ 0x14074EA10 (MiComputeDriverProtection.c)
 *     MiCreateBootSlabEntries @ 0x140A3CC20 (MiCreateBootSlabEntries.c)
 */

__int64 MiCreateSlabAllocationsFromKernelHal()
{
  PVOID v0; // rsi
  PIMAGE_NT_HEADERS v1; // r14
  ULONG_PTR BugCheckParameter4; // r15
  int NumberOfSections; // ebp
  ULONG_PTR *v4; // rdi
  unsigned int SizeOfHeaders; // ecx
  int v6; // ebp
  ULONG_PTR v7; // r9
  unsigned int v8; // r10d
  unsigned int v9; // r10d
  unsigned __int64 v10; // rbx
  __int64 v11; // r9
  int v12; // eax
  __int64 SlabAllocator; // rax
  unsigned __int64 v14; // r11
  __int64 result; // rax
  int v16; // ecx
  __int64 v17; // [rsp+30h] [rbp-58h] BYREF
  ULONG_PTR BugCheckParameter3[5]; // [rsp+38h] [rbp-50h] BYREF

  memset(BugCheckParameter3, 0, sizeof(BugCheckParameter3));
  v0 = PsNtosImageBase;
LABEL_2:
  v1 = RtlImageNtHeader(v0);
  BugCheckParameter4 = (ULONG_PTR)v0;
  NumberOfSections = v1->FileHeader.NumberOfSections;
  memset(BugCheckParameter3, 0, sizeof(BugCheckParameter3));
  HIDWORD(BugCheckParameter3[4]) = 0x40000000;
  v4 = BugCheckParameter3;
  SizeOfHeaders = v1->OptionalHeader.SizeOfHeaders;
  v6 = NumberOfSections + 1;
  BugCheckParameter3[1] = SizeOfHeaders;
  LODWORD(BugCheckParameter3[2]) = SizeOfHeaders;
  while ( 1 )
  {
    v7 = (ULONG_PTR)v0 + *((unsigned int *)v4 + 3);
    if ( BugCheckParameter4 != v7 )
      KeBugCheckEx(0x1Au, 0x3030314uLL, (ULONG_PTR)v0, v7, BugCheckParameter4);
    v8 = *((_DWORD *)v4 + 4);
    if ( v8 < *((_DWORD *)v4 + 2) )
      v8 = *((_DWORD *)v4 + 2);
    if ( !v8 )
      KeBugCheckEx(0x1Au, 0x3030315uLL, (ULONG_PTR)v0, (ULONG_PTR)v4, 0LL);
    v17 = MI_READ_PTE_LOCK_FREE(((v7 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    v10 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v17) >> 12) & 0xFFFFFFFFFLL;
    BugCheckParameter4 = ((v9 + 0x1FFFFFLL) & 0xFFFFFFFFFFE00000uLL) + v11;
    v12 = MiComputeDriverProtection(0, *((_DWORD *)v4 + 9));
    if ( v12 == 24 )
      LOBYTE(v12) = 1;
    SlabAllocator = MiGetSlabAllocator((__int64)&MiSystemPartition, 1, v12);
    result = MiCreateBootSlabEntries(SlabAllocator, v10, v14 >> 12, 1);
    if ( (int)result < 0 )
      return result;
    if ( v4 == BugCheckParameter3 )
      v4 = (ULONG_PTR *)((char *)&v1->OptionalHeader.Magic + v1->FileHeader.SizeOfOptionalHeader);
    else
      v4 += 5;
    if ( !--v6 )
    {
      if ( v0 == PsNtosImageBase )
      {
        v0 = PsHalImageBase;
        goto LABEL_2;
      }
      v16 = dword_140468484 | 0x10;
      dword_140468484 |= 0x10u;
      if ( (MiFlags & 0x8000) != 0 )
        dword_140468484 = v16 | 8;
      return 0LL;
    }
  }
}
