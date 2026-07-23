/*
 * XREFs of KdpReadControlSpace @ 0x14091745C
 * Callers:
 *     KdpSendWaitContinue @ 0x140918100 (KdpSendWaitContinue.c)
 * Callees:
 *     KdpSysReadControlSpace @ 0x140919718 (KdpSysReadControlSpace.c)
 */

__int64 __fastcall KdpReadControlSpace(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  bool v11; // cf
  __int16 v13; // [rsp+30h] [rbp-18h] BYREF
  __int64 v14; // [rsp+38h] [rbp-10h]
  __int64 v15; // [rsp+60h] [rbp+18h] BYREF

  v15 = a3;
  v14 = a1;
  v13 = 56;
  v5 = *(unsigned int *)(a1 + 24);
  if ( v5 > (unsigned __int64)(unsigned int)KdTransportMaxPacketSize - 56 )
    LODWORD(v5) = KdTransportMaxPacketSize - 56;
  v6 = *(unsigned __int16 *)(a2 + 2);
  v7 = *(_QWORD *)(a2 + 8);
  if ( (unsigned int)v5 <= v6 )
    v6 = v5;
  v8 = *(_QWORD *)(a1 + 16);
  v9 = *(unsigned __int16 *)(a1 + 6);
  LODWORD(v15) = v6;
  v10 = KdpSysReadControlSpace(v9, v8, v7, v6, &v15);
  v11 = (unsigned int)v15 < v6;
  *(_DWORD *)(a1 + 8) = v10;
  if ( v11 )
    v6 = v15;
  *(_WORD *)a2 = v6;
  *(_DWORD *)(a1 + 28) = v6;
  return KdSendPacket(2LL, &v13, a2, &KdpContext);
}
