/*
 * XREFs of KdpWritePhysicalMemory @ 0x140918E88
 * Callers:
 *     KdpSendWaitContinue @ 0x140918100 (KdpSendWaitContinue.c)
 * Callees:
 *     KdpCopyMemoryChunks @ 0x1409199A8 (KdpCopyMemoryChunks.c)
 */

__int64 __fastcall KdpWritePhysicalMemory(__int64 a1)
{
  _DWORD *v2; // rcx
  int v3; // r9d
  __int16 v5; // [rsp+30h] [rbp-18h] BYREF
  __int64 v6; // [rsp+38h] [rbp-10h]

  v6 = a1;
  v5 = 56;
  v2 = (_DWORD *)(a1 + 28);
  v3 = 7;
  switch ( *v2 )
  {
    case 1:
      v3 = 15;
      break;
    case 2:
      v3 = 23;
      break;
    case 3:
      v3 = 39;
      break;
  }
  *(_DWORD *)(a1 + 8) = KdpCopyMemoryChunks(*(PVOID *)(a1 + 16), v3, (__int64)v2);
  return KdSendPacket(2LL, &v5, 0LL, &KdpContext);
}
