/*
 * XREFs of ?ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z @ 0x1C00E9FD0
 * Callers:
 *     ndisHandleUModePnPOp @ 0x1C00CBC50 (ndisHandleUModePnPOp.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     WPP_SF_Zq @ 0x1C004F838 (WPP_SF_Zq.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00C0590 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00C1204 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00C2A58 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ndisReferenceMiniportByName @ 0x1C010A008 (ndisReferenceMiniportByName.c)
 */

void __fastcall ndisHandleLegacyBindIoctl(PCUNICODE_STRING SourceString, int a2, const struct _UNICODE_STRING *a3)
{
  struct _NDIS_MINIPORT_BLOCK *v6; // rdx
  __int64 v7; // r14
  unsigned __int64 i; // rbx
  __int64 v9; // rsi
  Ndis::BindState *v10; // rcx
  __int64 v11; // [rsp+58h] [rbp+20h]

  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_(0x15u, &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids);
  ndisReferenceMiniportByName(SourceString);
  if ( v11 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v11 + 5168, 0LL);
    v7 = *(unsigned int *)(v11 + 5044);
    for ( i = 0LL; i != v7; ++i )
    {
      if ( i >= *(unsigned int *)(v11 + 5044) )
        __fastfail(5u);
      v9 = *(_QWORD *)(v11 + 5048);
      if ( RtlEqualUnicodeString(*(PCUNICODE_STRING *)(*(_QWORD *)(*(_QWORD *)(v9 + 8 * i) + 80LL) + 24LL), a3, 1u) )
      {
        v10 = *(Ndis::BindState **)(v9 + 8 * i);
        if ( a2 == 1 )
        {
          if ( Ndis::BindState::SetBinding(v10, BindingEnabled, Reason_DisabledByLegacyIoctl)
            && (unsigned __int8)byte_1C00A026B >= 4u )
          {
            WPP_SF_Zq(
              0x16u,
              &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids,
              *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v9 + 8 * i) + 80LL) + 24LL),
              **(_QWORD **)(v9 + 8 * i));
          }
        }
        else if ( Ndis::BindState::SetBinding(v10, BindingDisabled, Reason_DisabledByLegacyIoctl)
               && (unsigned __int8)byte_1C00A026B >= 4u )
        {
          WPP_SF_Zq(
            0x17u,
            &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids,
            *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v9 + 8 * i) + 80LL) + 24LL),
            **(_QWORD **)(v9 + 8 * i));
        }
      }
    }
    Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(v11 + 5144), v6);
    Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(v11 + 5144), RunSynchronous, 0);
    ndisDereferenceMiniport(v11, 0x30u);
  }
}
