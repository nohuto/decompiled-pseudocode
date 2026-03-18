/*
 * XREFs of IntelPptFilter_DecreaseEndpointCount @ 0x1C0064080
 * Callers:
 *     IntelPptFilter_FilterCommandCompletion @ 0x1C00641E0 (IntelPptFilter_FilterCommandCompletion.c)
 *     IntelPptFilter_FilterEndpointConfigureCommand @ 0x1C006429C (IntelPptFilter_FilterEndpointConfigureCommand.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00092C8 (WPP_RECORDER_SF_dd.c)
 */

__int64 __fastcall IntelPptFilter_DecreaseEndpointCount(__int64 a1, int a2)
{
  __int64 result; // rax
  int v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+30h] [rbp-18h]

  v6 = *(_DWORD *)(a1 + 48) - a2;
  v5 = *(_DWORD *)(a1 + 48);
  result = WPP_RECORDER_SF_dd(
             *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
             4u,
             0x10u,
             0xCu,
             (__int64)&WPP_6c48406684fc3add5f2371f4d5718836_Traceguids,
             v5,
             v6);
  *(_DWORD *)(a1 + 48) -= a2;
  return result;
}
