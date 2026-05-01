/*
 * XREFs of __delayLoadHelper2 @ 0x180041F20
 * Callers:
 *     __tailMerge_ext_ms_win_com_ole32_l1_1_1_dll @ 0x180043824 (__tailMerge_ext_ms_win_com_ole32_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_win_core_resourcepolicy_l1_1_0_dll @ 0x1800438AF (__tailMerge_ext_ms_win_core_resourcepolicy_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_shell_shell32_l1_2_0_dll @ 0x18004394C (__tailMerge_ext_ms_win_shell_shell32_l1_2_0_dll.c)
 *     __tailMerge_ext_ms_win_winrt_storage_l1_1_0_dll @ 0x180043A2C (__tailMerge_ext_ms_win_winrt_storage_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_resourcemanager_gamemode_l1_2_0_dll @ 0x180043AB7 (__tailMerge_ext_ms_win_resourcemanager_gamemode_l1_2_0_dll.c)
 *     __tailMerge_api_ms_win_shcore_stream_l1_1_0_dll @ 0x180043B54 (__tailMerge_api_ms_win_shcore_stream_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_shell_shellfolders_l1_1_0_dll @ 0x180043C15 (__tailMerge_api_ms_win_shell_shellfolders_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_security_capability_l1_1_0_dll @ 0x180043CB8 (__tailMerge_api_ms_win_security_capability_l1_1_0_dll.c)
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
