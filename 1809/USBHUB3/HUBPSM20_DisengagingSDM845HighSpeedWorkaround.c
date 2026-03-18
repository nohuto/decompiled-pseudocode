/*
 * XREFs of HUBPSM20_DisengagingSDM845HighSpeedWorkaround @ 0x1C000ED20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     HUBACPI_ExecuteDSM @ 0x1C0077EE0 (HUBACPI_ExecuteDSM.c)
 */

__int64 __fastcall HUBPSM20_DisengagingSDM845HighSpeedWorkaround(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  int v5; // [rsp+28h] [rbp-10h]

  v3 = *(_QWORD **)(a1 + 960);
  v5 = HUBACPI_ExecuteDSM(*v3, a2, a3, 0LL);
  WPP_RECORDER_SF_d(v3[179], 4u, 5u, 0x7Du, (__int64)&WPP_5bc5aabc45393ebf49682d6683797972_Traceguids, v5);
  return 3013LL;
}
