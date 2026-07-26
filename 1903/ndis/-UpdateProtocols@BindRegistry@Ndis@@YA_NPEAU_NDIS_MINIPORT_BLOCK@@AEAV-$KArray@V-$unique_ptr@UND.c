/*
 * XREFs of ?UpdateProtocols@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C0101EBC
 * Callers:
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C01080E0 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Zq @ 0x1C0028658 (WPP_RECORDER_SF_Zq.c)
 *     ??$AddBindingToSet@UNDIS_BIND_PROTOCOL_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@_KAEAV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Z @ 0x1C0102124 (--$AddBindingToSet@UNDIS_BIND_PROTOCOL_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@A.c)
 *     ?SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z @ 0x1C0102304 (-SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z.c)
 *     ?reserve@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x1C0105600 (-reserve@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL_.c)
 */

char __fastcall Ndis::BindRegistry::UpdateProtocols(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int v8; // edx
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rdi
  __int64 v11; // r9
  __int64 v12; // r14
  Ndis::BindState *v13; // rcx
  void *m_AdditionalContext; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // rdi

  if ( !(unsigned __int8)Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>,1>::reserve(
                           a2,
                           *(unsigned int *)(a3 + 4)) )
    return 0;
  v8 = *(_DWORD *)(a3 + 4);
  v9 = 0LL;
  v10 = 0LL;
  if ( v8 )
  {
    while ( 1 )
    {
      if ( v10 >= v8 )
        goto LABEL_28;
      v11 = *(_QWORD *)(a3 + 8) + 8 * v10;
      if ( v9 >= *(unsigned int *)(a2 + 4) )
        goto LABEL_16;
      v12 = *(_QWORD *)(a2 + 8);
      v13 = *(Ndis::BindState **)(v12 + 8 * v9);
      m_AdditionalContext = v13[1].m_AdditionalContext;
      if ( m_AdditionalContext != *(void **)(*(_QWORD *)v11 + 80LL) )
        break;
      if ( Ndis::BindState::SetSource(v13, AddBindSource, Registry)
        && (unsigned __int8)byte_1C00E673B >= 4u
        && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_Zq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 8 * v9) + 80LL) + 24LL),
          0x1Cu,
          0xBu,
          (struct _GUID *)&WPP_8985ee5290703829cf3bcea0d1a921be_Traceguids,
          *(unsigned __int16 **)(*(_QWORD *)(*(_QWORD *)(v12 + 8 * v9) + 80LL) + 24LL),
          **(_QWORD **)(v12 + 8 * v9));
      }
LABEL_17:
      ++v10;
LABEL_18:
      ++v9;
      v8 = *(_DWORD *)(a3 + 4);
      if ( v10 >= v8 )
        goto LABEL_19;
    }
    if ( (unsigned __int64)m_AdditionalContext < *(_QWORD *)(*(_QWORD *)v11 + 80LL) )
    {
      if ( (a4 & 1) == 0
        && Ndis::BindState::SetSource(v13, RemoveBindSource, Registry)
        && (unsigned __int8)byte_1C00E673B >= 4u
        && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_Zq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 8 * v9) + 80LL) + 24LL),
          0x1Cu,
          0xCu,
          (struct _GUID *)&WPP_8985ee5290703829cf3bcea0d1a921be_Traceguids,
          *(unsigned __int16 **)(*(_QWORD *)(*(_QWORD *)(v12 + 8 * v9) + 80LL) + 24LL),
          **(_QWORD **)(v12 + 8 * v9));
      }
      goto LABEL_18;
    }
LABEL_16:
    if ( !(unsigned __int8)Ndis::BindRegistry::AddBindingToSet<NDIS_BIND_PROTOCOL_LINK>(a1, a2, v9, v11) )
      return 0;
    goto LABEL_17;
  }
LABEL_19:
  if ( (a4 & 1) == 0 )
  {
    v15 = *(unsigned int *)(a2 + 4);
    if ( v9 < v15 )
    {
      while ( v9 < (unsigned int)v15 )
      {
        v16 = *(_QWORD *)(a2 + 8);
        if ( Ndis::BindState::SetSource(*(Ndis::BindState **)(v16 + 8 * v9), RemoveBindSource, Registry)
          && (unsigned __int8)byte_1C00E673B >= 4u
          && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 8 * v9) + 80LL) + 24LL),
            0x1Cu,
            0xDu,
            (struct _GUID *)&WPP_8985ee5290703829cf3bcea0d1a921be_Traceguids,
            *(unsigned __int16 **)(*(_QWORD *)(*(_QWORD *)(v16 + 8 * v9) + 80LL) + 24LL),
            **(_QWORD **)(v16 + 8 * v9));
        }
        ++v9;
        LODWORD(v15) = *(_DWORD *)(a2 + 4);
        if ( v9 >= (unsigned int)v15 )
          return 1;
      }
LABEL_28:
      __fastfail(5u);
    }
  }
  return 1;
}
