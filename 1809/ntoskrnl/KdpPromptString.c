/*
 * XREFs of KdpPromptString @ 0x14091A3A8
 * Callers:
 *     KdpPrompt @ 0x140919398 (KdpPrompt.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KdpCopyMemoryChunks @ 0x1409199A8 (KdpCopyMemoryChunks.c)
 */

char __fastcall KdpPromptString(struct _SINGLE_LIST_ENTRY **a1, __int64 a2)
{
  int v3; // eax
  unsigned int v4; // r8d
  struct _SINGLE_LIST_ENTRY *v5; // rcx
  __int64 v7; // [rsp+30h] [rbp-40h] BYREF
  _WORD v8[4]; // [rsp+38h] [rbp-38h] BYREF
  void *v9; // [rsp+40h] [rbp-30h]
  _WORD v10[4]; // [rsp+48h] [rbp-28h] BYREF
  int *v11; // [rsp+50h] [rbp-20h]
  int v12; // [rsp+58h] [rbp-18h] BYREF
  __int16 v13; // [rsp+5Ch] [rbp-14h]
  __int16 Number; // [rsp+5Eh] [rbp-12h]
  int v15; // [rsp+60h] [rbp-10h]
  int v16; // [rsp+64h] [rbp-Ch]

  KdpCopyMemoryChunks(a1[1], (struct _SINGLE_LIST_ENTRY *)&KdpMessageBuffer, *(unsigned __int16 *)a1, 0, 4u, &v7);
  if ( (unsigned __int64)(unsigned int)v7 + 16 > (unsigned int)KdTransportMaxPacketSize )
    LODWORD(v7) = KdTransportMaxPacketSize - 16;
  v13 = KeProcessorLevel;
  v12 = 12849;
  Number = KeGetPcr()->Prcb.Number;
  v16 = *(unsigned __int16 *)(a2 + 2);
  v15 = v7;
  v8[0] = v7;
  v11 = &v12;
  v10[0] = 16;
  v9 = &KdpMessageBuffer;
  KdSendPacket(3LL, v10, v8, &KdpContext);
  v10[1] = 16;
  v8[1] = 4096;
  do
  {
    v3 = KdReceivePacket(3LL, v10, v8, &v7, &KdpContext);
    if ( v3 == 2 )
      return 1;
  }
  while ( v3 );
  v4 = v7;
  v5 = *(struct _SINGLE_LIST_ENTRY **)(a2 + 8);
  if ( (unsigned int)v7 > *(unsigned __int16 *)(a2 + 2) )
    v4 = *(unsigned __int16 *)(a2 + 2);
  LODWORD(v7) = v4;
  KdpCopyMemoryChunks(v5, (struct _SINGLE_LIST_ENTRY *)&KdpMessageBuffer, v4, 0, 5u, &v7);
  *(_WORD *)a2 = v7;
  return 0;
}
