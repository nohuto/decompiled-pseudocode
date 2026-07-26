/*
 * XREFs of ndisMAbortPackets @ 0x1C009978C
 * Callers:
 *     ?ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z @ 0x1C009797C (-ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z.c)
 *     ndisMCommonHaltMiniport @ 0x1C0136B28 (ndisMCommonHaltMiniport.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0032754 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     ndisMFreeSGList @ 0x1C0079AD4 (ndisMFreeSGList.c)
 *     ndisFreePaddedMdl @ 0x1C008A0A0 (ndisFreePaddedMdl.c)
 *     ndisMSendCompletePacketToNetBufferLists @ 0x1C008B1EC (ndisMSendCompletePacketToNetBufferLists.c)
 *     ndisMDeQueueWorkItem @ 0x1C009A118 (ndisMDeQueueWorkItem.c)
 */

_UNKNOWN **__fastcall ndisMAbortPackets(__int64 a1, __int64 a2, struct _NDIS_STACK_RESERVED *a3)
{
  _QWORD **v4; // r10
  _QWORD *v5; // r9
  _QWORD *v6; // rax
  __int64 ***v7; // r9
  _QWORD *v8; // rcx
  __int64 *v9; // rdi
  __int64 *v10; // rax
  struct _NDIS_PACKET *v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 NdisPacketOobOffset; // rax
  _UNKNOWN **result; // rax
  __int64 *v16; // [rsp+40h] [rbp-20h] BYREF
  __int64 **v17; // [rsp+48h] [rbp-18h]
  __int64 v18; // [rsp+50h] [rbp-10h] BYREF
  __int64 *v19; // [rsp+58h] [rbp-8h]
  struct _NDIS_STACK_RESERVED *v20; // [rsp+90h] [rbp+30h] BYREF

  v20 = a3;
  v18 = 0LL;
  v19 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      3,
      76,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      a1,
      0);
  ndisMDeQueueWorkItem(a1, 1LL, 0LL, 0LL);
  *(_QWORD *)(a1 + 144) = 0LL;
  v19 = &v18;
  v4 = (_QWORD **)(a1 + 128);
  v18 = (__int64)&v18;
  v17 = &v16;
  v16 = (__int64 *)&v16;
  while ( 1 )
  {
    v5 = *v4;
    if ( *v4 == v4 )
      break;
    if ( (_QWORD **)v5[1] != v4
      || (v6 = (_QWORD *)*v5, *(_QWORD **)(*v5 + 8LL) != v5)
      || (*v4 = v6,
          v6[1] = v4,
          NDIS_STACK_RESERVED_FROM_PACKET((struct _NDIS_PACKET *)(v5 - 8), &v20),
          v8 = v17,
          *v17 != (__int64 *)&v16) )
    {
LABEL_23:
      __fastfail(3u);
    }
    v7[1] = v17;
    *v7 = &v16;
    *v8 = v7;
    v17 = (__int64 **)v7;
  }
  *(_QWORD *)(a1 + 144) = 0LL;
  while ( 1 )
  {
    v9 = v16;
    if ( v16 == (__int64 *)&v16 )
      break;
    if ( (__int64 **)v16[1] != &v16 )
      goto LABEL_23;
    v10 = (__int64 *)*v16;
    if ( *(__int64 **)(*v16 + 8) != v16 )
      goto LABEL_23;
    v16 = (__int64 *)*v16;
    v10[1] = (__int64)&v16;
    v11 = (struct _NDIS_PACKET *)(v9 - 8);
    NDIS_STACK_RESERVED_FROM_PACKET(v11, &v20);
    v12 = *(_QWORD *)v20;
    *(_QWORD *)v20 = 1297040183LL;
    *(_QWORD *)(a1 + 520) = 0LL;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
    if ( (*(_DWORD *)(a1 + 120) & 0x40) != 0
      && *(unsigned __int64 *)((char *)v11->Reserved + v11->Private.NdisPacketOobOffset) )
    {
      ndisMFreeSGList(a1, (__int64)v11, v13);
    }
    if ( (*(_BYTE *)(a1 + 928) & 8) != 0 && *(void **)((char *)&v11[1].Private.Pool + v11->Private.NdisPacketOobOffset) )
      ndisFreePaddedMdl((__int64)v11);
    NdisPacketOobOffset = v11->Private.NdisPacketOobOffset;
    v11->Private.NdisPacketFlags &= 0xC0u;
    if ( *(_MDL **)((char *)&v11[1].Private.Head + NdisPacketOobOffset) )
      ndisMSendCompletePacketToNetBufferLists(a1, v11, 0xC001000C);
    else
      (*(void (__fastcall **)(__int64, struct _NDIS_PACKET *, __int64))(v12 + 112))(v12, v11, 3221291020LL);
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
    *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  }
  *(_DWORD *)(a1 + 120) |= 0x400000u;
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return (_UNKNOWN **)WPP_RECORDER_SF_qq(
                          *((_QWORD *)WPP_GLOBAL_Control + 8),
                          4,
                          3,
                          77,
                          (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
                          a1,
                          0);
  return result;
}
