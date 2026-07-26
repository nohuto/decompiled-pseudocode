/*
 * XREFs of Ndis::BindRegistry::RemoveBindingsInSpan @ 0x1C00B3410
 * Callers:
 *     Ndis::BindRegistry::UpdateFiltersInner @ 0x1C00B3508 (Ndis--BindRegistry--UpdateFiltersInner.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     WPP_SF_Zq @ 0x1C004F838 (WPP_SF_Zq.c)
 *     ?SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z @ 0x1C00C0918 (-SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01074D8 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRegistry::RemoveBindingsInSpan(_QWORD *a1, char a2, char a3)
{
  unsigned __int64 i; // rbx
  __int64 v6; // rsi
  Ndis::BindState *v7; // rcx
  _QWORD v8[20]; // [rsp+20h] [rbp-B8h] BYREF

  if ( (a3 & 1) == 0 )
  {
    for ( i = a1[1]; i < a1[2]; ++i )
    {
      if ( i >= *(unsigned int *)(*a1 + 4LL) )
        __fastfail(5u);
      v6 = *(_QWORD *)(*a1 + 8LL);
      v7 = *(Ndis::BindState **)(v6 + 8 * i);
      if ( ((*((_DWORD *)v7[1].m_AdditionalContext + 10) & 0xC) != 0) == a2
        && Ndis::BindState::SetSource(v7, RemoveBindSource, Registry)
        && (unsigned __int8)byte_1C00A026B >= 4u )
      {
        ndisGetBindLinkNameForTracing(*(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * i), (struct NDIS_PNPTRACE_LOCALS *)v8);
        if ( (unsigned __int8)byte_1C00A026B >= 4u )
          WPP_SF_Zq(0xEu, &WPP_8985ee5290703829cf3bcea0d1a921be_Traceguids, (const wchar_t *)v8[1], v8[0]);
      }
    }
  }
}
