/*
 * XREFs of ndisSriovQueryLuid @ 0x1C00FC120
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 */

__int64 __fastcall ndisSriovQueryLuid(__int64 a1, _QWORD *a2)
{
  if ( (unsigned __int8)byte_1C00A0269 >= 4u )
    WPP_SF_q(0x6Bu, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids, a1);
  *a2 = *(_QWORD *)(a1 + 4916);
  if ( (unsigned __int8)byte_1C00A0269 >= 4u )
    WPP_SF_qD(0x6Cu, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids, a1, 0);
  return 0LL;
}
