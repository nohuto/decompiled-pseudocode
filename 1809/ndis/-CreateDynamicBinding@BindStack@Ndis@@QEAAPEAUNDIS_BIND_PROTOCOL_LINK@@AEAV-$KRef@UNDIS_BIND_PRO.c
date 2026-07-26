/*
 * XREFs of ?CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_NDIS_MINIPORT_BLOCK@@W4Flags@BindSource@2@@Z @ 0x1C0107630
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005EBE8 (ndisOpenAdapterLegacyProtocol.c)
 *     _lambda_a13a88d06c7c63155a98f7d7ba7090a7_::_lambda_invoker_cdecl_ @ 0x1C01077B0 (_lambda_a13a88d06c7c63155a98f7d7ba7090a7_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?BuildProtocolLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z @ 0x1C00BFD84 (-BuildProtocolLink@BindStack@Ndis@@AEAA-AV-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-_ea_1C00BFD84.c)
 *     ?insertAt@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K$$QEAV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Z @ 0x1C00C02F4 (-insertAt@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL.c)
 *     ?LinkToDriver@NDIS_BIND_LINK_BASE@@QEAAXPEAUNDIS_BIND_DRIVER_BASE@@@Z @ 0x1C00C03B0 (-LinkToDriver@NDIS_BIND_LINK_BASE@@QEAAXPEAUNDIS_BIND_DRIVER_BASE@@@Z.c)
 *     ?SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z @ 0x1C00C0918 (-SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z.c)
 *     Ndis::sortProtocolsByPointer @ 0x1C00D092C (Ndis--sortProtocolsByPointer.c)
 *     ?append@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N$$QEAV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Z @ 0x1C00D165C (-append@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL_L.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00ED8F0 (--_GKRefHolder@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z.c)
 *     ?IsAlive@BindState@Ndis@@QEBA_NXZ @ 0x1C0106D64 (-IsAlive@BindState@Ndis@@QEBA_NXZ.c)
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C0106F14 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 */

unsigned __int64 __fastcall Ndis::BindStack::CreateDynamicBinding(
        __int64 a1,
        NDIS_BIND_LINK_BASE *a2,
        __int64 a3,
        enum Ndis::BindSource::Flags a4)
{
  _QWORD *v8; // rbx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  __int64 v11; // r14
  Ndis::BindState *v12; // rcx
  unsigned __int64 v13; // rbx
  char v14; // al
  NDIS_BIND_LINK_BASE *v15; // rbx
  __int64 v16; // rcx
  PVOID P[5]; // [rsp+20h] [rbp-28h] BYREF

  Ndis::BindStack::BuildProtocolLink(a1, (NDIS_BIND_LINK_BASE **)P, a2);
  v8 = P[0];
  v9 = 0LL;
  if ( P[0] )
  {
    v10 = *(unsigned int *)(a1 + 4);
    while ( v9 != v10 )
    {
      if ( v9 >= v10 )
        __fastfail(5u);
      v11 = *(_QWORD *)(a1 + 8);
      if ( a4 != UnsolicitedOpen || !Ndis::BindState::IsAlive(*(Ndis::BindState **)(v11 + 8 * v9)) )
      {
        v12 = *(Ndis::BindState **)(v11 + 8 * v9);
        if ( v12[1].m_AdditionalContext == (void *)v8[10] )
        {
          Ndis::BindState::SetSource(v12, AddBindSource, a4);
          v9 = *(_QWORD *)(v11 + 8 * v9);
          goto LABEL_19;
        }
      }
      ++v9;
    }
    *v8 = a3;
    NDIS_BIND_LINK_BASE::LinkToDriver(
      (NDIS_BIND_LINK_BASE *)P[0],
      (struct NDIS_BIND_DRIVER_BASE *)a2->BindState.Miniport);
    Ndis::BindState::SetSource((Ndis::BindState *)P[0], AddBindSource, a4);
    v9 = (unsigned __int64)P[0];
    v13 = 0LL;
    if ( *(_DWORD *)(a1 + 4) )
    {
      while ( Ndis::sortProtocolsByPointer(*(_QWORD *)(a1 + 8) + 8 * v13, (__int64)P) )
      {
        if ( ++v13 >= *(unsigned int *)(a1 + 4) )
          goto LABEL_14;
      }
      v14 = Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>,1>::insertAt(
              a1,
              v13,
              (__int64 *)P);
    }
    else
    {
LABEL_14:
      v14 = Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>,1>::append(
              a1,
              (__int64 *)P);
    }
    if ( v14 )
    {
      ++*(_DWORD *)(a1 + 96);
      *(_BYTE *)(a3 + 5248) = 1;
    }
    else
    {
      v9 = 0LL;
    }
LABEL_19:
    v15 = (NDIS_BIND_LINK_BASE *)P[0];
    if ( P[0] )
    {
      v16 = *((_QWORD *)P[0] + 10);
      if ( v16 && _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 48), 0xFFFFFFFF) == 1 )
        KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'((_QWORD *)v16);
      NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(v15);
      ExFreePoolWithTag(v15, 0x4C745042u);
    }
  }
  return v9;
}
