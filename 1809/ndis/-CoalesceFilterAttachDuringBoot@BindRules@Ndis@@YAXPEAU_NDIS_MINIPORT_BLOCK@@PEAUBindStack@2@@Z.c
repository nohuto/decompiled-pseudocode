/*
 * XREFs of ?CoalesceFilterAttachDuringBoot@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z @ 0x1C00C1EE8
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00C1260 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_SF_dd @ 0x1C0041D74 (WPP_SF_dd.c)
 *     WPP_SF_Zq @ 0x1C004F838 (WPP_SF_Zq.c)
 *     WPP_SF__guid_D @ 0x1C0081DE0 (WPP_SF__guid_D_ea_1C0081DE0.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00BD9F0 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00C2A58 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 */

void __fastcall Ndis::BindRules::CoalesceFilterAttachDuringBoot(
        Ndis::BindRules *this,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct Ndis::BindStack *a3)
{
  char v3; // al
  unsigned __int64 BaseMiniport_high; // r9
  unsigned __int64 i; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  Ndis::BindState *v10; // rbx
  int m_unbindReasons; // r8d
  int v12; // ecx
  int m_pauseReasons; // r8d
  int v14; // r8d
  bool v15; // cf

  v3 = 0;
  if ( *((_BYTE *)this + 2003) )
  {
    BaseMiniport_high = HIDWORD(a2->BaseMiniport);
    for ( i = 0LL; ; ++i )
    {
      if ( i == BaseMiniport_high )
      {
        v10 = (Ndis::BindState *)&a2->32;
        goto LABEL_12;
      }
      if ( i >= BaseMiniport_high )
        __fastfail(5u);
      v8 = *((_QWORD *)a2->MiniportAdapterContext + i);
      if ( *(_DWORD *)(v8 + 52) || *(_DWORD *)(v8 + 28) )
      {
        v9 = *(_QWORD *)(v8 + 80);
        if ( (*(_DWORD *)(v9 + 40) & 1) == 0 && !*(_QWORD *)(v9 + 56) && !*(_BYTE *)(v8 + 8) )
          break;
      }
    }
    if ( (unsigned __int8)byte_1C00A026B >= 5u )
      WPP_SF__guid_D(0x22u, v8, v9 + 24, *(_DWORD *)(v8 + 88));
    v3 = 1;
  }
  v10 = (Ndis::BindState *)&a2->32;
  if ( v3 )
  {
    if ( Ndis::BindState::SetBinding(v10, BindingDisabled, Reason_MandatoryMissingDuringBoot)
      && (unsigned __int8)byte_1C00A026B >= 4u )
    {
      WPP_SF_Zq(0x23u, &WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids, *((const wchar_t **)this + 486), this);
    }
    if ( Ndis::BindState::SetPause(v10, DatapathPaused, PauseReason_MandatoryMissingDuringBoot)
      && (unsigned __int8)byte_1C00A026B >= 4u )
    {
      WPP_SF_Zq(0x24u, &WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids, *((const wchar_t **)this + 486), this);
    }
  }
  else
  {
LABEL_12:
    m_unbindReasons = v10->m_unbindReasons;
    v12 = 0;
    if ( *((_BYTE *)this + 2003) )
    {
      v10->m_unbindReasons = m_unbindReasons & 0xFFFFFEFF;
      LOBYTE(v12) = (m_unbindReasons & 0xFFFFFEFF) != 0;
      if ( (m_unbindReasons != 0) != v12 || !v10->Miniport )
      {
        if ( (unsigned __int8)byte_1C00A026B >= 5u )
          WPP_SF_dd(
            0xEu,
            &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids,
            m_unbindReasons,
            m_unbindReasons & 0xFFFFFEFF);
        v15 = (unsigned __int8)byte_1C00A026B < 4u;
        v10->Miniport->BindEngine.m_isDirty = 1;
        if ( !v15 )
          WPP_SF_Zq(0x25u, &WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids, *((const wchar_t **)this + 486), this);
      }
      m_pauseReasons = v10->m_pauseReasons;
      v10->m_pauseReasons = m_pauseReasons & 0xFFFFFFBF;
      if ( (m_pauseReasons != 0) != ((m_pauseReasons & 0xFFFFFFBF) != 0) || !v10->Miniport )
      {
        if ( (unsigned __int8)byte_1C00A026B >= 5u )
          WPP_SF_dd(0xFu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, m_pauseReasons, m_pauseReasons & 0xFFFFFFBF);
        v15 = (unsigned __int8)byte_1C00A026B < 4u;
        v10->Miniport->BindEngine.m_isDirty = 1;
        if ( !v15 )
          WPP_SF_Zq(0x26u, &WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids, *((const wchar_t **)this + 486), this);
      }
    }
    else
    {
      v10->m_unbindReasons = m_unbindReasons & 0xFFFFFEFF;
      LOBYTE(v12) = (m_unbindReasons & 0xFFFFFEFF) != 0;
      if ( (m_unbindReasons != 0) != v12 || !v10->Miniport )
      {
        if ( (unsigned __int8)byte_1C00A026B >= 5u )
          WPP_SF_dd(
            0xEu,
            &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids,
            m_unbindReasons,
            m_unbindReasons & 0xFFFFFEFF);
        v15 = (unsigned __int8)byte_1C00A026B < 4u;
        v10->Miniport->BindEngine.m_isDirty = 1;
        if ( !v15 )
          WPP_SF_Zq(0x27u, &WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids, *((const wchar_t **)this + 486), this);
      }
      v14 = v10->m_pauseReasons;
      v10->m_pauseReasons = v14 & 0xFFFFFFBF;
      if ( (v14 != 0) != ((v14 & 0xFFFFFFBF) != 0) || !v10->Miniport )
      {
        if ( (unsigned __int8)byte_1C00A026B >= 5u )
          WPP_SF_dd(0xFu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v14, v14 & 0xFFFFFFBF);
        v15 = (unsigned __int8)byte_1C00A026B < 4u;
        v10->Miniport->BindEngine.m_isDirty = 1;
        if ( !v15 )
          WPP_SF_Zq(0x28u, &WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids, *((const wchar_t **)this + 486), this);
      }
    }
  }
}
