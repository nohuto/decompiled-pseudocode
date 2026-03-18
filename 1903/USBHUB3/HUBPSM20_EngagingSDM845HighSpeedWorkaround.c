/*
 * XREFs of HUBPSM20_EngagingSDM845HighSpeedWorkaround @ 0x1C000FEA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     HUBACPI_ExecuteDSM @ 0x1C007F670 (HUBACPI_ExecuteDSM.c)
 */

__int64 __fastcall HUBPSM20_EngagingSDM845HighSpeedWorkaround(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  int v4; // eax
  int v6; // [rsp+28h] [rbp-10h]

  v3 = *(_QWORD **)(a1 + 960);
  v4 = HUBACPI_ExecuteDSM(*v3, a2, a3, 1LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = v4;
    WPP_RECORDER_SF_d(v3[179], 4u, 5u, 0x7Du, (__int64)&WPP_699d44e6015a36edc2e41426686ae77e_Traceguids, v6);
  }
  return 3013LL;
}
