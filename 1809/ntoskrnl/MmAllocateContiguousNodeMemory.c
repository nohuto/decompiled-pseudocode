/*
 * XREFs of MmAllocateContiguousNodeMemory @ 0x1400E6500
 * Callers:
 *     MmAllocateContiguousMemorySpecifyCacheNode @ 0x1401936A0 (MmAllocateContiguousMemorySpecifyCacheNode.c)
 *     HvlpAllocateOverlayPages @ 0x1402796E4 (HvlpAllocateOverlayPages.c)
 *     IopInitializeInMemoryDumpData @ 0x140281938 (IopInitializeInMemoryDumpData.c)
 *     ViAllocateContiguousMemory @ 0x14092D590 (ViAllocateContiguousMemory.c)
 * Callees:
 *     MiMakeProtectionMask @ 0x140074490 (MiMakeProtectionMask.c)
 *     MiAllocateContiguousMemory @ 0x1400E659C (MiAllocateContiguousMemory.c)
 */

__int64 __fastcall MmAllocateContiguousNodeMemory(int a1, __int64 a2, __int64 a3, __int16 a4, unsigned int a5, int a6)
{
  unsigned int ProtectionMask; // eax
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r11
  unsigned int v11; // r10d
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r9
  unsigned int v15; // eax

  if ( (a4 & 0xFFF) != 0 )
    return 0LL;
  ProtectionMask = MiMakeProtectionMask(a5);
  v11 = ProtectionMask;
  if ( (a5 & 0x100) != 0 )
    return 0LL;
  if ( ProtectionMask == -1 )
    return 0LL;
  if ( (ProtectionMask & 5) != 4 )
    return 0LL;
  if ( (ProtectionMask & 2) != 0 )
  {
    v15 = ProtectionMask >> 3;
    if ( v15 == 1 || v15 == 3 && (v11 & 7) != 0 )
      return 0LL;
  }
  v12 = v8 >> 12;
  v13 = v9 >> 12;
  if ( v12 > 0xFFFFFFFFFLL )
    v12 = 0xFFFFFFFFFLL;
  if ( v10 > v12 )
    return 0LL;
  else
    return MiAllocateContiguousMemory(a1, v10, v12, v13, v11, a6);
}
