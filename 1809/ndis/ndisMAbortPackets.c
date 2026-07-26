/*
 * XREFs of ndisMAbortPackets @ 0x1C0061E4C
 * Callers:
 *     ndisMResetCompleteStage1 @ 0x1C0063D20 (ndisMResetCompleteStage1.c)
 *     ndisMCommonHaltMiniport @ 0x1C0115B88 (ndisMCommonHaltMiniport.c)
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C001F8F4 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     ndisMFreeSGList @ 0x1C004CEB8 (ndisMFreeSGList.c)
 *     ndisFreePaddedMdl @ 0x1C005613C (ndisFreePaddedMdl.c)
 *     ndisMSendCompletePacketToNetBufferLists @ 0x1C0057C0C (ndisMSendCompletePacketToNetBufferLists.c)
 *     ndisMDeQueueWorkItem @ 0x1C0062524 (ndisMDeQueueWorkItem.c)
 */

void __fastcall ndisMAbortPackets(__int64 a1, __int64 a2, struct _NDIS_STACK_RESERVED *a3)
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
  __int64 *v15; // [rsp+20h] [rbp-20h] BYREF
  __int64 **v16; // [rsp+28h] [rbp-18h]
  _QWORD v17[2]; // [rsp+30h] [rbp-10h] BYREF
  struct _NDIS_STACK_RESERVED *v18; // [rsp+70h] [rbp+30h] BYREF

  v18 = a3;
  if ( (unsigned __int8)byte_1C00A0252 >= 4u )
    WPP_SF_qq(0x4Eu, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1, 0LL);
  ndisMDeQueueWorkItem(a1, 1LL, 0LL);
  *(_QWORD *)(a1 + 144) = 0LL;
  v17[1] = v17;
  v4 = (_QWORD **)(a1 + 128);
  v17[0] = v17;
  v16 = &v15;
  v15 = (__int64 *)&v15;
  while ( 1 )
  {
    v5 = *v4;
    if ( *v4 == v4 )
      break;
    if ( (_QWORD **)v5[1] != v4
      || (v6 = (_QWORD *)*v5, *(_QWORD **)(*v5 + 8LL) != v5)
      || (*v4 = v6,
          v6[1] = v4,
          NDIS_STACK_RESERVED_FROM_PACKET((struct _NDIS_PACKET *)(v5 - 8), &v18),
          v8 = v16,
          *v16 != (__int64 *)&v15) )
    {
LABEL_23:
      __fastfail(3u);
    }
    v7[1] = v16;
    *v7 = &v15;
    *v8 = v7;
    v16 = (__int64 **)v7;
  }
  *(_QWORD *)(a1 + 144) = 0LL;
  while ( 1 )
  {
    v9 = v15;
    if ( v15 == (__int64 *)&v15 )
      break;
    if ( (__int64 **)v15[1] != &v15 )
      goto LABEL_23;
    v10 = (__int64 *)*v15;
    if ( *(__int64 **)(*v15 + 8) != v15 )
      goto LABEL_23;
    v15 = (__int64 *)*v15;
    v10[1] = (__int64)&v15;
    v11 = (struct _NDIS_PACKET *)(v9 - 8);
    NDIS_STACK_RESERVED_FROM_PACKET(v11, &v18);
    v12 = *(_QWORD *)v18;
    *(_QWORD *)v18 = 1297040183LL;
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1864) = 0;
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
    *(_DWORD *)(a1 + 1864) = 726329;
  }
  *(_DWORD *)(a1 + 120) |= 0x400000u;
  if ( (unsigned __int8)byte_1C00A0252 >= 4u )
    WPP_SF_qq(0x4Fu, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1, 0LL);
}
