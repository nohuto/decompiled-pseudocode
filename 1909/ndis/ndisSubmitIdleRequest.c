/*
 * XREFs of ndisSubmitIdleRequest @ 0x1C00BA044
 * Callers:
 *     ndisSSIdleTimerWorkItem @ 0x1C00B9120 (ndisSSIdleTimerWorkItem.c)
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BC818 (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C0002B20 (ndisReferenceMiniport.c)
 *     ndisLogMiniportEvent @ 0x1C0019E70 (ndisLogMiniportEvent.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C001A2B4 (WPP_RECORDER_SF_Lq.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C003D314 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ql @ 0x1C005F288 (WPP_RECORDER_SF_ql_ea_1C005F288.c)
 *     McTemplateK0q @ 0x1C0066348 (McTemplateK0q.c)
 *     McTemplateK0qq @ 0x1C007D754 (McTemplateK0qq.c)
 *     ?ndisNicAutoPowerSaverControlIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00B5D58 (-ndisNicAutoPowerSaverControlIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisShouldEngageNicAutoPowerSaver@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00B60F8 (-ndisShouldEngageNicAutoPowerSaver@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisClearIdleTimer @ 0x1C00B842C (ndisClearIdleTimer.c)
 */

__int64 __fastcall ndisSubmitIdleRequest(__int64 a1, unsigned __int8 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rsi
  char v5; // bp
  KIRQL v9; // r15
  int v10; // r12d
  __int64 v11; // rdx
  unsigned int Arg1; // r14d
  struct _MCGEN_TRACE_CONTEXT *v13; // rcx
  KIRQL v14; // al
  KIRQL v15; // bl
  int v16; // edx
  _UNKNOWN **v17; // rcx
  bool v18; // bl

  v4 = *(_QWORD *)(a1 + 4448);
  v5 = 0;
  if ( a2 || (*(_BYTE *)(a1 + 1004) & 4) == 0 )
    goto LABEL_7;
  if ( ndisIsScreenOnNapsEnabled )
    wil_details_FeaturePropertyCache_ReportUsageToService(
      &Feature_ScreenON_NAPS__private_propertyCache,
      0xF558F8u,
      &stru_1C00D4A88,
      a4);
  if ( ndisShouldEngageNicAutoPowerSaver((struct _NDIS_MINIPORT_BLOCK *)a1) )
  {
LABEL_7:
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v4);
    if ( (*(_DWORD *)(v4 + 504) & 0x404) != 0 || !(unsigned __int8)ndisReferenceMiniport(a1) )
    {
      v18 = (*(_DWORD *)(v4 + 504) & 4) != 0;
      KeReleaseSpinLock((PKSPIN_LOCK)v4, v9);
      return v18 ? 259 : -1073676271;
    }
    else
    {
      v10 = a2;
      *(_DWORD *)(v4 + 504) = *(_DWORD *)(v4 + 504) ^ (*(_DWORD *)(v4 + 504) ^ (a2 << 8)) & 0x100 | 4;
      KeClearEvent((PRKEVENT)(v4 + 200));
      KeClearEvent((PRKEVENT)(v4 + 224));
      KeReleaseSpinLock((PKSPIN_LOCK)v4, v9);
      ndisLogMiniportEvent(a1, 0x12u);
      LOBYTE(v11) = a2;
      Arg1 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(a1 + 3760) + 840LL))(*(_QWORD *)(a1 + 24), v11);
      KeSetEvent((PRKEVENT)(v4 + 224), 0, 0);
      if ( Arg1 == 259 )
      {
        v17 = &WPP_RECORDER_INITIALIZED;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_ql(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0xFu,
            0xEu,
            (struct _GUID *)&WPP_5c92d274ba7c3cfc77b41af92408ef8f_Traceguids,
            a1,
            v10);
        if ( (byte_1C00E8081 & 8) != 0 )
          McTemplateK0q(
            (__int64)v17,
            &SSIdleDetected,
            (const GUID *)(a1 + 4008),
            (*(_QWORD *)(a1 + 4024) >> 24) & 0xFFFFFF);
        ndisClearIdleTimer(a1);
        return 259LL;
      }
      else
      {
        v13 = (struct _MCGEN_TRACE_CONTEXT *)&WPP_RECORDER_INITIALIZED;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Lq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0xFu,
            0xDu,
            (struct _GUID *)&WPP_5c92d274ba7c3cfc77b41af92408ef8f_Traceguids,
            Arg1,
            a1);
        if ( (byte_1C00E8081 & 8) != 0 )
          McTemplateK0qq(
            v13,
            &SSIdleDeclined,
            (const GUID *)(a1 + 4008),
            (*(_QWORD *)(a1 + 4024) >> 24) & 0xFFFFFF,
            Arg1);
        v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v4);
        *(_DWORD *)(v4 + 504) &= ~0x100u;
        v15 = v14;
        v16 = *(_DWORD *)(v4 + 504);
        if ( (v16 & 4) != 0 )
        {
          *(_DWORD *)(v4 + 504) = v16 & 0xFFFFFFFB;
          KeSetEvent((PRKEVENT)(v4 + 200), 0, 0);
          *(_DWORD *)(v4 + 504) &= ~0x80u;
          v5 = 1;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)v4, v15);
        if ( v5 )
          ndisDereferenceMiniport(a1, 0x15u);
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
