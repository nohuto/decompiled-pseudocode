/*
 * XREFs of KdpPromptString @ 0x140957E28
 * Callers:
 *     KdpPrompt @ 0x140956DFC (KdpPrompt.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KdpCopyMemoryChunks @ 0x140957144 (KdpCopyMemoryChunks.c)
 */

char __fastcall KdpPromptString(unsigned __int16 *a1, __int64 a2)
{
  unsigned int v2; // r8d
  char *v3; // rcx
  int v5; // eax
  unsigned int v6; // r8d
  char *v7; // rcx
  __int64 v9; // [rsp+30h] [rbp-40h] BYREF
  __int64 v10; // [rsp+38h] [rbp-38h] BYREF
  _BYTE *v11; // [rsp+40h] [rbp-30h]
  __int64 v12; // [rsp+48h] [rbp-28h] BYREF
  __int64 *v13; // [rsp+50h] [rbp-20h]
  __int64 v14; // [rsp+58h] [rbp-18h] BYREF
  __int64 v15; // [rsp+60h] [rbp-10h]

  v2 = *a1;
  v3 = (char *)*((_QWORD *)a1 + 1);
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  KdpCopyMemoryChunks(v3, KdpMessageBuffer, v2, 0, 4u, &v9);
  if ( (unsigned __int64)(unsigned int)v9 + 16 > (unsigned int)KdTransportMaxPacketSize )
    LODWORD(v9) = KdTransportMaxPacketSize - 16;
  WORD2(v14) = KeProcessorLevel;
  LODWORD(v14) = 12849;
  HIWORD(v14) = KeGetPcr()->Prcb.Number;
  HIDWORD(v15) = *(unsigned __int16 *)(a2 + 2);
  LODWORD(v15) = v9;
  LOWORD(v10) = v9;
  v13 = &v14;
  LOWORD(v12) = 16;
  v11 = KdpMessageBuffer;
  KdSendPacket(3LL, &v12, &v10, (char *)&KdDebuggerNotPresent + 5);
  WORD1(v12) = 16;
  WORD1(v10) = 4096;
  do
  {
    v5 = KdReceivePacket(3LL, &v12, &v10, &v9, (char *)&KdDebuggerNotPresent + 5);
    if ( v5 == 2 )
      return 1;
  }
  while ( v5 );
  v6 = v9;
  v7 = *(char **)(a2 + 8);
  if ( (unsigned int)v9 > *(unsigned __int16 *)(a2 + 2) )
    v6 = *(unsigned __int16 *)(a2 + 2);
  LODWORD(v9) = v6;
  KdpCopyMemoryChunks(v7, KdpMessageBuffer, v6, 0, 5u, &v9);
  *(_WORD *)a2 = v9;
  return 0;
}
