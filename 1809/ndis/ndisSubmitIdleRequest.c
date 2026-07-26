/*
 * XREFs of ndisSubmitIdleRequest @ 0x1C0076428
 * Callers:
 *     ndisSSIdleTimerWorkItem @ 0x1C0075600 (ndisSSIdleTimerWorkItem.c)
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00787C4 (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0009B70 (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     ndisLogMiniportEvent @ 0x1C0016888 (ndisLogMiniportEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     McTemplateK0q @ 0x1C0041144 (McTemplateK0q.c)
 *     WPP_SF_dq @ 0x1C0041A40 (WPP_SF_dq.c)
 *     McTemplateK0qq @ 0x1C004F3F0 (McTemplateK0qq.c)
 *     ?ndisNicAutoPowerSaverControlIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0072530 (-ndisNicAutoPowerSaverControlIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisShouldEngageNicAutoPowerSaver@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0072BE8 (-ndisShouldEngageNicAutoPowerSaver@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0073674 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ndisClearIdleTimer @ 0x1C0074A4C (ndisClearIdleTimer.c)
 */

__int64 __fastcall ndisSubmitIdleRequest(
        union wil_details_FeaturePropertyCache *a1,
        unsigned __int8 a2,
        const struct FEATURE_LOGGED_TRAITS *a3)
{
  _NDIS_SELECTIVE_SUSPEND *v3; // rsi
  char v4; // bp
  KIRQL v8; // r15
  int v9; // r12d
  __int64 v10; // rdx
  unsigned int Arg1; // r14d
  struct _MCGEN_TRACE_CONTEXT *v12; // rcx
  KIRQL v13; // al
  KIRQL v14; // bl
  unsigned int Value; // edx
  bool v16; // bl

  v3 = *(_NDIS_SELECTIVE_SUSPEND **)&a1[1122].cache;
  v4 = 0;
  if ( a2 || (*(_BYTE *)&a1[251].cache & 4) == 0 )
    goto LABEL_7;
  if ( ndisIsScreenOnNapsEnabled )
    wil_details_FeaturePropertyCache_ReportUsageToService(a1, a2, a3);
  if ( ndisShouldEngageNicAutoPowerSaver((struct _NDIS_MINIPORT_BLOCK *)a1) )
  {
LABEL_7:
    v8 = KeAcquireSpinLockRaiseToDpc(&v3->Lock);
    if ( (v3->Flags.Value & 0x404) != 0 || !ndisReferenceMiniport((__int64)a1) )
    {
      v16 = (v3->Flags.Value & 4) != 0;
      KeReleaseSpinLock(&v3->Lock, v8);
      return v16 ? 259 : -1073676271;
    }
    else
    {
      v9 = a2;
      v3->Flags.Value = v3->Flags.Value ^ (v3->Flags.Value ^ (a2 << 8)) & 0x100 | 4;
      KeClearEvent(&v3->IdleNotificationCompleteEvent);
      KeClearEvent(&v3->IdleNotificationDoneEvent);
      KeReleaseSpinLock(&v3->Lock, v8);
      ndisLogMiniportEvent((__int64)a1, 0x12u);
      LOBYTE(v10) = a2;
      Arg1 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)&a1[948].cache + 840LL))(
               *(_QWORD *)&a1[6].cache,
               v10);
      KeSetEvent(&v3->IdleNotificationDoneEvent, 0, 0);
      if ( Arg1 == 259 )
      {
        if ( (unsigned __int8)byte_1C00A025E >= 4u )
          WPP_SF_qD(0xEu, &WPP_0cf0eaabdf4f3c4b779dfb88bb6a846b_Traceguids, (__int64)a1, v9);
        if ( (byte_1C00A2081 & 8) != 0 )
          McTemplateK0q(
            (__int64)v12,
            &SSIdleDetected,
            (const GUID *)&a1[1010],
            (*(_QWORD *)&a1[1014].cache >> 24) & 0xFFFFFF);
        ndisClearIdleTimer((__int64)a1);
        return 259LL;
      }
      else
      {
        if ( (unsigned __int8)byte_1C00A025E >= 2u )
          WPP_SF_dq(0xDu, &WPP_0cf0eaabdf4f3c4b779dfb88bb6a846b_Traceguids, Arg1, a1);
        if ( (byte_1C00A2081 & 8) != 0 )
          McTemplateK0qq(
            v12,
            &SSIdleDeclined,
            (const GUID *)&a1[1010],
            (*(_QWORD *)&a1[1014].cache >> 24) & 0xFFFFFF,
            Arg1);
        v13 = KeAcquireSpinLockRaiseToDpc(&v3->Lock);
        v3->Flags.Value &= ~0x100u;
        v14 = v13;
        Value = v3->Flags.Value;
        if ( (Value & 4) != 0 )
        {
          v3->Flags.Value = Value & 0xFFFFFFFB;
          KeSetEvent(&v3->IdleNotificationCompleteEvent, 0, 0);
          v3->Flags.Value &= ~0x80u;
          v4 = 1;
        }
        KeReleaseSpinLock(&v3->Lock, v14);
        if ( v4 )
          ndisDereferenceMiniport((__int64)a1, 0x15u);
        return Arg1;
      }
    }
  }
  else
  {
    ndisNicAutoPowerSaverControlIdleTimer((struct _NDIS_MINIPORT_BLOCK *)a1);
    return 3221291025LL;
  }
}
