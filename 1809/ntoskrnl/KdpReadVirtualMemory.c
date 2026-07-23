/*
 * XREFs of KdpReadVirtualMemory @ 0x14091771C
 * Callers:
 *     KdpSendWaitContinue @ 0x140918100 (KdpSendWaitContinue.c)
 * Callees:
 *     KdpCopyMemoryChunks @ 0x1409199A8 (KdpCopyMemoryChunks.c)
 */

__int64 __fastcall KdpReadVirtualMemory(__int64 a1, _WORD *a2, __int64 a3)
{
  unsigned __int64 v3; // r10
  void *v6; // rcx
  int v7; // eax
  __int16 v9; // [rsp+30h] [rbp-18h] BYREF
  __int64 v10; // [rsp+38h] [rbp-10h]
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  v11 = a3;
  v3 = *(unsigned int *)(a1 + 24);
  if ( v3 > (unsigned __int64)(unsigned int)KdTransportMaxPacketSize - 56 )
    LODWORD(v3) = KdTransportMaxPacketSize - 56;
  v6 = *(void **)(a1 + 16);
  if ( (unsigned int)v3 > (unsigned __int16)a2[1] )
    LODWORD(v3) = (unsigned __int16)a2[1];
  LODWORD(v11) = v3;
  *(_DWORD *)(a1 + 8) = KdpCopyMemoryChunks(v6, 4, (__int64)&v11);
  v7 = v11;
  *a2 = v11;
  *(_DWORD *)(a1 + 28) = v7;
  v9 = 56;
  v10 = a1;
  return KdSendPacket(2LL, &v9, a2, &KdpContext);
}
