/*
 * XREFs of ?CoalesceFilterAttachDuringBoot@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z @ 0x1C00FE494
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00FD50C (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_LL @ 0x1C001D55C (WPP_RECORDER_SF_LL.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C0028648 (WPP_RECORDER_SF_Zq.c)
 *     WPP_RECORDER_SF__guid_D @ 0x1C00C75CC (WPP_RECORDER_SF__guid_D_ea_1C00C75CC.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00FF02C (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C0105B3C (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 */

void __fastcall Ndis::BindRules::CoalesceFilterAttachDuringBoot(
        Ndis::BindRules *this,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct Ndis::BindStack *a3)
{
  char v5; // al
  unsigned __int64 BaseMiniport_high; // r9
  unsigned __int64 i; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  Ndis::BindState *v10; // rbx
  unsigned int m_unbindReasons; // r8d
  int v12; // ecx
  int v13; // eax
  unsigned int v14; // edx
  unsigned int m_pauseReasons; // r8d
  unsigned int v16; // edx
  unsigned int v17; // edx
  unsigned int v18; // r8d
  bool v19; // al
  int v20; // edx
  unsigned __int16 *v21; // rax
  unsigned __int16 v22; // r9
  bool v23; // cf
  char v24[8]; // [rsp+30h] [rbp-28h]

  v5 = 0;
  if ( *((_BYTE *)this + 1995) )
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
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
      WPP_RECORDER_SF__guid_D(*((_QWORD *)WPP_GLOBAL_Control + 8), v9 + 24, v8, 34);
    v5 = 1;
  }
  v10 = (Ndis::BindState *)&a2->32;
  if ( v5 )
  {
    v19 = Ndis::BindState::SetBinding(v10, BindingDisabled, Reason_MandatoryMissingDuringBoot);
    if ( v19
      && (unsigned __int8)byte_1C00E677B >= 4u
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_Zq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v20,
        0x1Cu,
        0x23u,
        (struct _GUID *)&WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids,
        *((unsigned __int16 **)this + 482),
        this);
    }
    if ( Ndis::BindState::SetPause(v10, DatapathPaused, PauseReason_MandatoryMissingDuringBoot)
      && (unsigned __int8)byte_1C00E677B >= 4u )
    {
      v21 = (unsigned __int16 *)*((_QWORD *)this + 482);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v22 = 36;
LABEL_63:
        WPP_RECORDER_SF_Zq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v16,
          0x1Cu,
          v22,
          (struct _GUID *)&WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids,
          v21,
          this);
      }
    }
  }
  else
  {
LABEL_12:
    m_unbindReasons = v10->m_unbindReasons;
    v12 = 0;
    v13 = 0;
    if ( *((_BYTE *)this + 1995) )
    {
      v14 = m_unbindReasons & 0xFFFFFEFF;
      v10->m_unbindReasons = m_unbindReasons & 0xFFFFFEFF;
      LOBYTE(v12) = (m_unbindReasons & 0xFFFFFEFF) != 0;
      LOBYTE(v13) = m_unbindReasons != 0;
      if ( v13 != v12 || !v10->Miniport )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
          WPP_RECORDER_SF_LL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xEu,
            (struct _GUID *)&WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids,
            m_unbindReasons,
            v14);
        v23 = (unsigned __int8)byte_1C00E677B < 4u;
        v10->Miniport->BindEngine.m_isDirty = 1;
        if ( !v23 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v14,
            0x1Cu,
            0x25u,
            (struct _GUID *)&WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids,
            *((unsigned __int16 **)this + 482),
            this);
      }
      m_pauseReasons = v10->m_pauseReasons;
      v16 = m_pauseReasons & 0xFFFFFFBF;
      v10->m_pauseReasons = m_pauseReasons & 0xFFFFFFBF;
      if ( (m_pauseReasons != 0) != ((m_pauseReasons & 0xFFFFFFBF) != 0) || !v10->Miniport )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v24 = m_pauseReasons & 0xFFFFFFBF;
          WPP_RECORDER_SF_LL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xFu,
            (struct _GUID *)&WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids,
            m_pauseReasons,
            *(_QWORD *)v24);
        }
        v23 = (unsigned __int8)byte_1C00E677B < 4u;
        v10->Miniport->BindEngine.m_isDirty = 1;
        if ( !v23 )
        {
          v21 = (unsigned __int16 *)*((_QWORD *)this + 482);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v22 = 38;
            goto LABEL_63;
          }
        }
      }
    }
    else
    {
      v17 = m_unbindReasons & 0xFFFFFEFF;
      v10->m_unbindReasons = m_unbindReasons & 0xFFFFFEFF;
      LOBYTE(v12) = (m_unbindReasons & 0xFFFFFEFF) != 0;
      LOBYTE(v13) = m_unbindReasons != 0;
      if ( v13 != v12 || !v10->Miniport )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
          WPP_RECORDER_SF_LL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xEu,
            (struct _GUID *)&WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids,
            m_unbindReasons,
            v17);
        v23 = (unsigned __int8)byte_1C00E677B < 4u;
        v10->Miniport->BindEngine.m_isDirty = 1;
        if ( !v23 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v17,
            0x1Cu,
            0x27u,
            (struct _GUID *)&WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids,
            *((unsigned __int16 **)this + 482),
            this);
      }
      v18 = v10->m_pauseReasons;
      v16 = v18 & 0xFFFFFFBF;
      v10->m_pauseReasons = v18 & 0xFFFFFFBF;
      if ( (v18 != 0) != ((v18 & 0xFFFFFFBF) != 0) || !v10->Miniport )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v24 = v18 & 0xFFFFFFBF;
          WPP_RECORDER_SF_LL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xFu,
            (struct _GUID *)&WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids,
            v18,
            *(_QWORD *)v24);
        }
        v23 = (unsigned __int8)byte_1C00E677B < 4u;
        v10->Miniport->BindEngine.m_isDirty = 1;
        if ( !v23 )
        {
          v21 = (unsigned __int16 *)*((_QWORD *)this + 482);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v22 = 40;
            goto LABEL_63;
          }
        }
      }
    }
  }
}
