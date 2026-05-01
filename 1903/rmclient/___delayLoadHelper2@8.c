/*
 * XREFs of ___delayLoadHelper2@8 @ 0x10007551
 * Callers:
 *     __tailMerge_api_ms_win_appmodel_state_l1_2_0_dll @ 0x1000CFA2 (__tailMerge_api_ms_win_appmodel_state_l1_2_0_dll.c)
 *     __tailMerge_ext_ms_win_com_psmregister_l1_1_0_dll @ 0x1000CFD1 (__tailMerge_ext_ms_win_com_psmregister_l1_1_0_dll.c)
 * Callees:
 *     <none>
 */

int __stdcall __delayLoadHelper2(int a1, int a2)
{
  return ResolveDelayLoadedAPI(&_ImageBase, a1, __pfnDliFailureHook2, DelayLoadFailureHook, a2, __pfnDliFailureHook2);
}
