/*
 * XREFs of NdisMSetMiniportSecondary @ 0x1C00EF590
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     WPP_SF_Zq @ 0x1C004F838 (WPP_SF_Zq.c)
 *     ?NdisTraceLoggingRareMiniportPath@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4NdisTLMiniportEvent@@H@Z @ 0x1C007E4D0 (-NdisTraceLoggingRareMiniportPath@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4NdisTLMiniportEvent@@H@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00C0590 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00C1204 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00C2A58 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 */

NDIS_STATUS __stdcall NdisMSetMiniportSecondary(NDIS_HANDLE MiniportHandle, NDIS_HANDLE PrimaryMiniportHandle)
{
  NDIS_STATUS v4; // esi
  struct _NDIS_MINIPORT_BLOCK *v5; // rdx

  v4 = 0;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0x6Bu, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, MiniportHandle, PrimaryMiniportHandle);
  if ( *((_QWORD *)MiniportHandle + 474) == *((_QWORD *)PrimaryMiniportHandle + 474)
    && *((NDIS_HANDLE *)MiniportHandle + 22) == MiniportHandle )
  {
    *((_DWORD *)MiniportHandle + 30) |= 0x10000000u;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)MiniportHandle + 5168, 0LL);
    if ( Ndis::BindState::SetBinding(
           (Ndis::BindState *)((char *)MiniportHandle + 5072),
           BindingDisabled,
           Reason_SecondaryMiniport)
      && (unsigned __int8)byte_1C00A026B >= 4u )
    {
      WPP_SF_Zq(
        0x6Cu,
        &WPP_f453a6740ca1326a168191528118e90e_Traceguids,
        *((const wchar_t **)MiniportHandle + 486),
        MiniportHandle);
    }
    Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)((char *)MiniportHandle + 5144), v5);
    Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)((char *)MiniportHandle + 5144), RunSynchronous, 0);
    *((_QWORD *)MiniportHandle + 22) = PrimaryMiniportHandle;
  }
  else
  {
    v4 = -1073741637;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0x6Du, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, MiniportHandle, PrimaryMiniportHandle);
  NdisTraceLoggingRareMiniportPath();
  return v4;
}
