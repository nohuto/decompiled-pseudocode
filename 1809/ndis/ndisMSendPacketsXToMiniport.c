/*
 * XREFs of ndisMSendPacketsXToMiniport @ 0x1C0058D20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 *     ndisMAllocSGList @ 0x1C004C4FC (ndisMAllocSGList.c)
 *     ndisMCheckPacketAndPad @ 0x1C005620C (ndisMCheckPacketAndPad.c)
 *     ndisMLoopbackPacketX @ 0x1C0057A3C (ndisMLoopbackPacketX.c)
 *     ndisMSendCompleteX @ 0x1C0057ED0 (ndisMSendCompleteX.c)
 */

void __fastcall ndisMSendPacketsXToMiniport(struct _NDIS_MINIPORT_BLOCK *a1, _NDIS_PACKET **a2, unsigned int a3)
{
  __int64 v3; // rdi
  unsigned int v6; // esi
  _NDIS_PACKET **v7; // r13
  struct _NDIS_PACKET **v8; // r14
  __int64 v9; // r12
  struct _NDIS_PACKET *v10; // rdi
  unsigned int v11; // r15d
  unsigned int Flags; // eax
  bool v13; // r8
  unsigned __int8 NdisPacketFlags; // dl
  unsigned __int8 SendFlags; // al
  unsigned int v16; // eax
  __int64 v17; // [rsp+20h] [rbp-38h]
  bool v18; // [rsp+70h] [rbp+18h]

  v3 = a3;
  v18 = 0;
  if ( (unsigned __int8)byte_1C00A0252 >= 4u )
    WPP_SF_qqd(0xEu, &WPP_9311d8c63e523f0dc817929b0a257a44_Traceguids, a1, a2, a3);
  v6 = 0;
  v7 = a2;
  v8 = a2;
  if ( (_DWORD)v3 )
  {
    v9 = v3;
    do
    {
      v10 = *v8;
      v11 = 0;
      *(unsigned __int64 *)((char *)(*v8)->Reserved + (*v8)->Private.NdisPacketOobOffset) = 0LL;
      if ( (a1->SendFlags & 8) != 0 && (v11 = ndisMCheckPacketAndPad((__int64)a1, (__int64)v10)) != 0
        || ((Flags = a1->Flags, (Flags & 0x4000) == 0) && ((Flags & 0x8800000) == 0 || SLOBYTE(v10->Private.Flags) < 0)
          ? (v13 = v18)
          : (v13 = ndisMLoopbackPacketX((__int64)a1, v10), v18 = v13),
            (NdisPacketFlags = v10->Private.NdisPacketFlags, (NdisPacketFlags & 4) != 0) || v13) )
      {
        ndisMSendCompleteX(a1, v10, v11);
        if ( v6 )
        {
          a1->WSendPacketsHandler(a1->MiniportAdapterContext, v7, v6);
          v6 = 0;
          v7 = v8 + 1;
        }
      }
      else if ( (a1->Flags & 0x40) != 0 )
      {
        ndisMAllocSGList(a1, v10);
      }
      else
      {
        SendFlags = a1->SendFlags;
        v10->Private.NdisPacketFlags = NdisPacketFlags | 0x10;
        if ( (SendFlags & 1) != 0 )
        {
          ++v6;
        }
        else
        {
          v16 = a1->SendHandler(a1->MiniportAdapterContext, v10, v10->Private.Flags);
          if ( v16 != 259 )
            ndisMSendCompleteX(a1, v10, v16);
        }
      }
      ++v8;
      --v9;
    }
    while ( v9 );
    if ( v6 )
      a1->WSendPacketsHandler(a1->MiniportAdapterContext, v7, v6);
  }
  if ( (unsigned __int8)byte_1C00A0252 >= 4u )
  {
    LODWORD(v17) = v6;
    WPP_SF_qqd(0xFu, &WPP_9311d8c63e523f0dc817929b0a257a44_Traceguids, a1, a2, v17);
  }
}
