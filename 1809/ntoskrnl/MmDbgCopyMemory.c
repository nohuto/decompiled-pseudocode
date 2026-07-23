/*
 * XREFs of MmDbgCopyMemory @ 0x1402BB7D0
 * Callers:
 *     KiTpWriteMemory @ 0x14029C508 (KiTpWriteMemory.c)
 *     KdpReadPhysicalMemory @ 0x140917510 (KdpReadPhysicalMemory.c)
 *     KdpSearchMemory @ 0x140917C40 (KdpSearchMemory.c)
 *     KdpSearchPhysicalPage @ 0x140917E44 (KdpSearchPhysicalPage.c)
 *     KdpCopyMemoryChunks @ 0x1409199A8 (KdpCopyMemoryChunks.c)
 * Callees:
 *     MiDbgCopyMemory @ 0x1402BA940 (MiDbgCopyMemory.c)
 */

__int64 __fastcall MmDbgCopyMemory(
        struct _SINGLE_LIST_ENTRY *BaseAddress,
        struct _SINGLE_LIST_ENTRY *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned int v6; // edi
  __int64 result; // rax
  ULONG v10; // ebp

  v6 = a3;
  if ( a4 > 2 && a4 != 4 && a4 != 8 )
    return 2147483650LL;
  result = 0LL;
  if ( a3 )
  {
    do
    {
      v10 = v6;
      if ( 4096 - ((unsigned __int16)BaseAddress & 0xFFFu) <= v6 )
        v10 = 4096 - ((unsigned __int16)BaseAddress & 0xFFF);
      result = MiDbgCopyMemory(BaseAddress, a2, v10, a4, a5);
      if ( (int)result < 0 )
        break;
      BaseAddress = (struct _SINGLE_LIST_ENTRY *)((char *)BaseAddress + v10);
      a2 = (struct _SINGLE_LIST_ENTRY *)((char *)a2 + v10);
      v6 -= v10;
    }
    while ( v6 );
  }
  return result;
}
