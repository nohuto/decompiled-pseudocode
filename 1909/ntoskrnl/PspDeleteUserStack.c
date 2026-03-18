/*
 * XREFs of PspDeleteUserStack @ 0x1406EB994
 * Callers:
 *     PspInsertThread @ 0x1405E9524 (PspInsertThread.c)
 *     PspAllocateThread @ 0x14060F754 (PspAllocateThread.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x1401C1010 (ZwFreeVirtualMemory.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MmFreeVirtualMemory @ 0x1406086D0 (MmFreeVirtualMemory.c)
 */

unsigned __int64 __fastcall PspDeleteUserStack(_KPROCESS *BugCheckParameter1, __int64 a2, __int64 a3, char *a4)
{
  char v7; // al
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-50h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v11[48]; // [rsp+40h] [rbp-40h] BYREF

  memset(v11, 0, sizeof(v11));
  KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v11);
  v7 = *a4;
  if ( (*a4 & 2) != 0 )
  {
    BaseAddress = *(PVOID *)(a3 + 32);
    RegionSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    v7 = *a4;
  }
  if ( (v7 & 4) != 0 )
  {
    RegionSize = *(_QWORD *)(a3 + 56);
    BaseAddress = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)&RegionSize, (PSIZE_T)&BaseAddress, 0x8000u);
    v7 = *a4;
  }
  if ( (v7 & 8) != 0 )
  {
    RegionSize = *(_QWORD *)(a3 + 64);
    BaseAddress = 0LL;
    MmFreeVirtualMemory(0xFFFFFFFFFFFFFFFFuLL, &RegionSize, (unsigned __int64 *)&BaseAddress, 0x8000u, 0, 0x40000000);
  }
  return KiUnstackDetachProcess((struct _KTHREAD *)v11, 0);
}
