/*
 * XREFs of sub_180111530 @ 0x180111530
 * Callers:
 *     PssNtCaptureSnapshot @ 0x1801101A0 (PssNtCaptureSnapshot.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwAllocateVirtualMemory @ 0x18009C9E0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18009CAA0 (ZwFreeVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x18009CB40 (ZwQueryVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x18009CBE0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x18009CC20 (ZwUnmapViewOfSection.c)
 *     ZwReadVirtualMemory @ 0x18009CEC0 (ZwReadVirtualMemory.c)
 *     ZwCreateSection @ 0x18009D020 (ZwCreateSection.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

NTSTATUS __fastcall sub_180111530(__int64 a1, void *a2, int a3, PVOID *a4)
{
  int v6; // ebx
  NTSTATUS result; // eax
  int v9; // edi
  NTSTATUS v10; // r14d
  PVOID v11; // r14
  PVOID BaseAddress; // [rsp+50h] [rbp-30h] BYREF
  ULONG_PTR RegionSize; // [rsp+58h] [rbp-28h] BYREF
  PVOID Buffer; // [rsp+60h] [rbp-20h] BYREF
  HANDLE SectionHandle; // [rsp+68h] [rbp-18h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+70h] [rbp-10h] BYREF

  v6 = 0;
  if ( !is_mul_ok(0x1000uLL, 1uLL) )
    return -1073741675;
  v9 = a3 & 0x20000000;
  if ( (a3 & 0x20000000) != 0 )
  {
    BaseAddress = 0LL;
    RegionSize = 64LL;
    result = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
    if ( result < 0 )
      return result;
  }
  else
  {
    BaseAddress = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x40uLL);
    if ( !BaseAddress )
      return -1073741670;
  }
  MaximumSize.QuadPart = 4096LL;
  v10 = ZwCreateSection(
          &SectionHandle,
          0xF0007u,
          (POBJECT_ATTRIBUTES)&stru_18013A718,
          &MaximumSize,
          4u,
          0x8000000u,
          0LL);
  if ( v10 < 0 )
    goto LABEL_8;
  Buffer = 0LL;
  RegionSize = 0LL;
  v10 = ZwMapViewOfSection(
          SectionHandle,
          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
          &Buffer,
          0LL,
          0LL,
          0LL,
          &RegionSize,
          ViewShare,
          0,
          4u);
  if ( v10 >= 0 )
  {
    v11 = Buffer;
    memset(BaseAddress, 0, 0x40uLL);
    if ( *a4 == (PVOID)2147352576 )
    {
      memmove(v11, (const void *)0x7FFE0000, 0x710uLL);
    }
    else if ( ZwReadVirtualMemory(a2, *a4, v11, 0x1000uLL, 0LL) < 0 )
    {
LABEL_19:
      ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, Buffer);
      *(_DWORD *)(a1 + 888) = v6;
      *(_DWORD *)(a1 + 4) |= v9 != 0 ? 4 : 2;
      *(_QWORD *)(a1 + 896) = SectionHandle;
      *(_QWORD *)(a1 + 904) = BaseAddress;
      *(_QWORD *)(a1 + 1016) = MEMORY[0x7FFE0014];
      return 0;
    }
    if ( ZwQueryVirtualMemory(a2, *a4, MemoryBasicInformation, (char *)BaseAddress + 8, 0x30uLL, 0LL) >= 0 )
    {
      v6 = 1;
      *(_QWORD *)BaseAddress = *a4;
      *((_QWORD *)BaseAddress + 7) = MEMORY[0x7FFE0014];
    }
    goto LABEL_19;
  }
  ZwClose(SectionHandle);
LABEL_8:
  if ( v9 )
  {
    RegionSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  }
  else
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  }
  return v10;
}
