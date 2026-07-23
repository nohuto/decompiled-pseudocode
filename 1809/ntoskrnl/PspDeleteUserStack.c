/*
 * XREFs of PspDeleteUserStack @ 0x1406CC310
 * Callers:
 *     PspAllocateThread @ 0x1405F8E84 (PspAllocateThread.c)
 *     PspInsertThread @ 0x140622450 (PspInsertThread.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x1401B86B0 (ZwFreeVirtualMemory.c)
 *     MmFreeVirtualMemory @ 0x1405F04F0 (MmFreeVirtualMemory.c)
 */

__int64 __fastcall PspDeleteUserStack(_KPROCESS *a1, __int64 a2, _QWORD *a3, char *a4)
{
  char v6; // al
  void *v7; // rax
  ULONG_PTR v9; // rax
  ULONG_PTR v10; // rax
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-50h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v13[48]; // [rsp+40h] [rbp-40h] BYREF

  KiStackAttachProcess(a1, 0LL, (__int64)v13);
  v6 = *a4;
  if ( (*a4 & 2) != 0 )
  {
    v7 = (void *)a3[4];
    RegionSize = 0LL;
    BaseAddress = v7;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    v6 = *a4;
  }
  if ( (v6 & 4) != 0 )
  {
    v9 = a3[7];
    BaseAddress = 0LL;
    RegionSize = v9;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)&RegionSize, (PSIZE_T)&BaseAddress, 0x8000u);
    v6 = *a4;
  }
  if ( (v6 & 8) != 0 )
  {
    v10 = a3[8];
    BaseAddress = 0LL;
    RegionSize = v10;
    MmFreeVirtualMemory(0xFFFFFFFFFFFFFFFFuLL, &RegionSize, (unsigned __int64 *)&BaseAddress, 0x8000u, 0, 0x40000000);
  }
  return KiUnstackDetachProcess((__int64)v13, 0LL);
}
