/*
 * XREFs of RtlpFreeUserBlockToHeap @ 0x18004AEDC
 * Callers:
 *     RtlpFreeUserBlock @ 0x18004AD04 (RtlpFreeUserBlock.c)
 *     RtlpLowFragHeapFlushCaches @ 0x18004D0C4 (RtlpLowFragHeapFlushCaches.c)
 * Callees:
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlpGetHeapProtection @ 0x18004733C (RtlpGetHeapProtection.c)
 *     ZwProtectVirtualMemory @ 0x18009D890 (ZwProtectVirtualMemory.c)
 */

LOGICAL __fastcall RtlpFreeUserBlockToHeap(_DWORD *HeapHandle, _BYTE *BaseAddress, ULONG a3)
{
  char v6; // cl
  __int64 v7; // r8
  ULONG HeapProtection; // eax
  ULONG_PTR RegionSize; // [rsp+48h] [rbp+10h] BYREF
  ULONG OldProtect; // [rsp+50h] [rbp+18h] BYREF
  PVOID BaseAddressa; // [rsp+58h] [rbp+20h] BYREF

  OldProtect = a3;
  if ( BaseAddress[17] )
  {
    v6 = BaseAddress[16];
    RegionSize = 4096LL;
    v7 = 1LL << v6;
    if ( (unsigned __int64)(1LL << v6) > 0xF0000 )
      v7 = 983040LL;
    BaseAddressa = &BaseAddress[v7 + *((unsigned __int16 *)BaseAddress + 9)];
    HeapProtection = RtlpGetHeapProtection(HeapHandle, 1);
    ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, &RegionSize, HeapProtection, &OldProtect);
  }
  return RtlFreeHeap(HeapHandle, 0x800000u, BaseAddress);
}
