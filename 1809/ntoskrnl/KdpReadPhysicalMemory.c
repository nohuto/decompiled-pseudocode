/*
 * XREFs of KdpReadPhysicalMemory @ 0x140917510
 * Callers:
 *     KdpReadPhysicalMemoryLong @ 0x140917658 (KdpReadPhysicalMemoryLong.c)
 *     KdpSendWaitContinue @ 0x140918100 (KdpSendWaitContinue.c)
 * Callees:
 *     RunLengthEncode @ 0x14028CA08 (RunLengthEncode.c)
 *     MmDbgCopyMemory @ 0x1402BB7D0 (MmDbgCopyMemory.c)
 *     KdpCopyMemoryChunks @ 0x1409199A8 (KdpCopyMemoryChunks.c)
 */

__int64 __fastcall KdpReadPhysicalMemory(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  unsigned int v8; // eax
  unsigned int v9; // edx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  __int16 v16; // [rsp+30h] [rbp-18h] BYREF
  __int64 v17; // [rsp+38h] [rbp-10h]
  __int64 v18; // [rsp+60h] [rbp+18h] BYREF

  v18 = a3;
  v4 = *(unsigned int *)(a1 + 24);
  v17 = a1;
  v16 = 56;
  if ( v4 > (unsigned __int64)(unsigned int)KdTransportMaxPacketSize - 56 )
    LODWORD(v4) = KdTransportMaxPacketSize - 56;
  v8 = *(unsigned __int16 *)(a2 + 2);
  v9 = 6;
  v10 = *(_DWORD *)(a1 + 28);
  if ( (unsigned int)v4 > v8 )
    LODWORD(v4) = v8;
  LODWORD(v18) = v4;
  v11 = v10 - 1;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v12 )
    {
      if ( v12 == 1 )
        v9 = 38;
    }
    else
    {
      v9 = 22;
    }
  }
  else
  {
    v9 = 14;
  }
  if ( *(_DWORD *)a1 == 12642 )
  {
    if ( (unsigned int)v4 > 4096 - (*(_DWORD *)(a1 + 16) & 0xFFFu) )
      LODWORD(v4) = 4096 - (*(_DWORD *)(a1 + 16) & 0xFFF);
    v13 = MmDbgCopyMemory(*(struct _SINGLE_LIST_ENTRY **)(a1 + 16), *(struct _SINGLE_LIST_ENTRY **)(a2 + 8), v4, 0, v9);
    *(_DWORD *)(a1 + 8) = v13;
    if ( v13 < 0 )
      LODWORD(v4) = 0;
  }
  else
  {
    v14 = KdpCopyMemoryChunks(*(PVOID *)(a1 + 16), v9, (__int64)&v18);
    LODWORD(v4) = v18;
    *(_DWORD *)(a1 + 8) = v14;
  }
  *(_DWORD *)(a1 + 28) = v4;
  if ( *(_DWORD *)a1 == 12642 && (unsigned int)v4 >= 4 && RunLengthEncode(*(int **)(a2 + 8), v4) )
  {
    *(_DWORD *)(a1 + 28) = ((unsigned int)v4 >> 2) | 0x40000000;
    LOWORD(v4) = 4;
  }
  *(_WORD *)a2 = v4;
  return KdSendPacket(2LL, &v16, a2, a4);
}
