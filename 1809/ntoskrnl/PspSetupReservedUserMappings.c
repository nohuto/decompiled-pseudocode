/*
 * XREFs of PspSetupReservedUserMappings @ 0x1406C32A0
 * Callers:
 *     PspAllocateProcess @ 0x14064CE78 (PspAllocateProcess.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ZwAllocateVirtualMemory @ 0x1401B85F0 (ZwAllocateVirtualMemory.c)
 */

__int64 __fastcall PspSetupReservedUserMappings(_KPROCESS *a1, __int64 a2, _QWORD *a3)
{
  int v5; // ebx
  NTSTATUS VirtualMemory; // esi
  unsigned __int64 v8; // rbx
  __int64 v9; // rbp
  ULONG_PTR RegionSize; // [rsp+60h] [rbp+18h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp+20h] BYREF

  v5 = *(_DWORD *)(a3[26] + 8LL) & 0x60;
  if ( !v5 && !a3[32] )
    return 0LL;
  VirtualMemory = 0;
  KiStackAttachProcess(a1, 0LL, a2);
  if ( !v5 )
    goto LABEL_10;
  BaseAddress = (PVOID)4;
  if ( v5 == 32 )
  {
    RegionSize = 1048320LL;
  }
  else if ( v5 == 64 )
  {
    RegionSize = 16776960LL;
  }
  VirtualMemory = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u);
  if ( VirtualMemory >= 0 )
  {
LABEL_10:
    v8 = 0LL;
    if ( a3[32] )
    {
      v9 = 0LL;
      do
      {
        VirtualMemory = ZwAllocateVirtualMemory(
                          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                          (PVOID *)(v9 + a3[35]),
                          0LL,
                          (PSIZE_T)(v9 + a3[35] + 8),
                          0x2000u,
                          4u);
        if ( VirtualMemory < 0 )
          break;
        ++v8;
        v9 += 16LL;
      }
      while ( v8 < a3[32] );
    }
  }
  KiUnstackDetachProcess(a2, 0LL);
  return (unsigned int)VirtualMemory;
}
