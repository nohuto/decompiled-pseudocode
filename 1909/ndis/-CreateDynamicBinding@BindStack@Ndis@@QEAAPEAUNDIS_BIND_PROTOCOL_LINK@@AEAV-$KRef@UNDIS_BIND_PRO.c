/*
 * XREFs of ?CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_NDIS_MINIPORT_BLOCK@@W4Flags@BindSource@2@@Z @ 0x1C01279F8
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C0093C18 (ndisOpenAdapterLegacyProtocol.c)
 *     _lambda_a13a88d06c7c63155a98f7d7ba7090a7_::_lambda_invoker_cdecl_ @ 0x1C0127B80 (_lambda_a13a88d06c7c63155a98f7d7ba7090a7_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?IsAlive@BindState@Ndis@@QEBA_NXZ @ 0x1C00FD7AC (-IsAlive@BindState@Ndis@@QEBA_NXZ.c)
 *     ?append@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N$$QEAV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Z @ 0x1C0101E70 (-append@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL_L.c)
 *     ?insertAt@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K$$QEAV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Z @ 0x1C01021D4 (-insertAt@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL.c)
 *     ?LinkToDriver@NDIS_BIND_LINK_BASE@@QEAAXPEAUNDIS_BIND_DRIVER_BASE@@@Z @ 0x1C0102290 (-LinkToDriver@NDIS_BIND_LINK_BASE@@QEAAXPEAUNDIS_BIND_DRIVER_BASE@@@Z.c)
 *     ?SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z @ 0x1C0102304 (-SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z.c)
 *     ?BuildProtocolLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z @ 0x1C0102C18 (-BuildProtocolLink@BindStack@Ndis@@AEAA-AV-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-_ea_1C0102C18.c)
 *     Ndis::sortProtocolsByPointer @ 0x1C010A6E0 (Ndis--sortProtocolsByPointer.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1C0116DC8 (--_GKRefHolder@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z.c)
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C0127284 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 */

unsigned __int64 __fastcall Ndis::BindStack::CreateDynamicBinding(
        __int64 a1,
        NDIS_BIND_LINK_BASE *a2,
        _NDIS_MINIPORT_BLOCK *a3,
        enum Ndis::BindSource::Flags a4)
{
  NDIS_BIND_LINK_BASE *v8; // rbx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  __int64 v11; // r14
  Ndis::BindState *v12; // rcx
  unsigned __int64 v13; // rbx
  char v14; // al
  _NDIS_MINIPORT_BLOCK *Miniport; // rcx
  PVOID P[2]; // [rsp+20h] [rbp-10h] BYREF

  Ndis::BindStack::BuildProtocolLink(a1, (NDIS_BIND_LINK_BASE **)P, a2);
  v8 = (NDIS_BIND_LINK_BASE *)P[0];
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
        if ( v12[1].m_AdditionalContext == v8[1].BindState.Miniport )
        {
          Ndis::BindState::SetSource(v12, AddBindSource, a4);
          v9 = *(_QWORD *)(v11 + 8 * v9);
          goto LABEL_19;
        }
      }
      ++v9;
    }
    v8->BindState.Miniport = a3;
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
      a3->BindEngine.m_isDirty = 1;
    }
    else
    {
      v9 = 0LL;
    }
LABEL_19:
    v8 = (NDIS_BIND_LINK_BASE *)P[0];
  }
  P[0] = 0LL;
  if ( v8 )
  {
    Miniport = v8[1].BindState.Miniport;
    if ( Miniport && _InterlockedExchangeAdd((volatile signed __int32 *)&Miniport->48, 0xFFFFFFFF) == 1 )
      KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'(Miniport);
    NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(v8);
    ExFreePoolWithTag(v8, 0x4C745042u);
  }
  return v9;
}
