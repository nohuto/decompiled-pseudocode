/*
 * XREFs of HUBDSM_GettingMSOSContainerIdDescriptor @ 0x1C001E080
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C000A734 (HUBSM_AddEvent.c)
 *     HUBDTX_GetMsOsFeatureDescriptor @ 0x1C0026910 (HUBDTX_GetMsOsFeatureDescriptor.c)
 */

__int64 __fastcall HUBDSM_GettingMSOSContainerIdDescriptor(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  int MsOsFeatureDescriptor; // eax
  __int64 v6; // [rsp+28h] [rbp-10h]

  v3 = *(_QWORD *)(a1 + 960);
  MsOsFeatureDescriptor = HUBDTX_GetMsOsFeatureDescriptor(v3, 0, a3, 6, v3 + 1732, 24LL);
  if ( MsOsFeatureDescriptor < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v6) = MsOsFeatureDescriptor;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
        2u,
        5u,
        0x2Fu,
        (__int64)&WPP_1e1ac755c39d315bf1a78da78ff32487_Traceguids,
        v6);
    }
    HUBSM_AddEvent(v3 + 504, 4004);
  }
  return 1000LL;
}
