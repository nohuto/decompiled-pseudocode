/*
 * XREFs of KdpPrintString @ 0x140957D2C
 * Callers:
 *     KdRefreshDebuggerNotPresent @ 0x140181F30 (KdRefreshDebuggerNotPresent.c)
 *     KdpPrint @ 0x140956C84 (KdpPrint.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KdpPollBreakInWithPortLock @ 0x1402A2E60 (KdpPollBreakInWithPortLock.c)
 *     KdpCopyMemoryChunks @ 0x140957144 (KdpCopyMemoryChunks.c)
 */

bool __fastcall KdpPrintString(unsigned __int16 *a1)
{
  unsigned int v1; // r8d
  char *v2; // rcx
  __int64 v4; // [rsp+30h] [rbp-40h] BYREF
  __int64 v5; // [rsp+38h] [rbp-38h] BYREF
  _BYTE *v6; // [rsp+40h] [rbp-30h]
  __int64 v7; // [rsp+48h] [rbp-28h] BYREF
  __int64 *v8; // [rsp+50h] [rbp-20h]
  __int64 v9; // [rsp+58h] [rbp-18h] BYREF
  __int64 v10; // [rsp+60h] [rbp-10h]

  v1 = *a1;
  v2 = (char *)*((_QWORD *)a1 + 1);
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  KdpCopyMemoryChunks(v2, KdpMessageBuffer, v1, 0, 4u, &v4);
  if ( (unsigned __int64)(unsigned int)v4 + 16 > (unsigned int)KdTransportMaxPacketSize )
    LODWORD(v4) = KdTransportMaxPacketSize - 16;
  WORD2(v9) = KeProcessorLevel;
  LODWORD(v9) = 12848;
  HIWORD(v9) = KeGetPcr()->Prcb.Number;
  LOWORD(v7) = 16;
  v8 = &v9;
  LODWORD(v10) = v4;
  LOWORD(v5) = v4;
  v6 = KdpMessageBuffer;
  KdSendPacket(3LL, &v7, &v5, &KdpContext);
  return KdpPollBreakInWithPortLock();
}
