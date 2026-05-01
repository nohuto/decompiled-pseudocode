/*
 * XREFs of __delayLoadHelper2 @ 0x180006CE0
 * Callers:
 *     __tailMerge_ext_ms_win_com_psmregister_l1_1_0_dll @ 0x180009902 (__tailMerge_ext_ms_win_com_psmregister_l1_1_0_dll.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _delayLoadHelper2(__int64 a1, __int64 a2)
{
  return ResolveDelayLoadedAPI(
           &_ImageBase,
           a1,
           _pfnDefaultDliFailureHook2,
           DelayLoadFailureHook,
           a2,
           _ResolveDelayLoadedAPIFlags);
}
