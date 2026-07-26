/*
 * XREFs of Ndis::BindRegistry::RemoveBindingsInSpan @ 0x1C00F92D0
 * Callers:
 *     Ndis::BindRegistry::UpdateFiltersInner @ 0x1C00F940C (Ndis--BindRegistry--UpdateFiltersInner.c)
 * Callees:
 *     WPP_RECORDER_SF_Zq @ 0x1C0028658 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ?SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z @ 0x1C0102304 (-SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01278A0 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRegistry::RemoveBindingsInSpan(_QWORD *a1, char a2, char a3)
{
  unsigned __int64 i; // rbx
  __int64 v6; // rsi
  Ndis::BindState *v7; // rcx
  int v8; // edx
  char v9[160]; // [rsp+40h] [rbp-B8h] BYREF

  if ( (a3 & 1) == 0 )
  {
    for ( i = a1[1]; i < a1[2]; ++i )
    {
      if ( i >= *(unsigned int *)(*a1 + 4LL) )
        __fastfail(5u);
      v6 = *(_QWORD *)(*a1 + 8LL);
      v7 = *(Ndis::BindState **)(v6 + 8 * i);
      if ( ((*((_DWORD *)v7[1].m_AdditionalContext + 10) & 0xC) != 0) == a2
        && Ndis::BindState::SetSource(v7, RemoveBindSource, Registry) )
      {
        memset(v9, 0, sizeof(v9));
        if ( (unsigned __int8)byte_1C00E673B >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * i),
            (struct NDIS_PNPTRACE_LOCALS *)v9);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v8,
              0x1Cu,
              0xEu,
              (struct _GUID *)&WPP_8985ee5290703829cf3bcea0d1a921be_Traceguids,
              *(unsigned __int16 **)&v9[8],
              *(_QWORD *)v9);
        }
      }
    }
  }
}
