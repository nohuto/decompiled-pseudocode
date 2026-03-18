/*
 * XREFs of memset_0 @ 0x140003C76
 * Callers:
 *     ?Run@CDwmAppHost@@QEAAJXZ @ 0x140001B00 (-Run@CDwmAppHost@@QEAAJXZ.c)
 *     ?InitializeWindow@CDwmAppHost@@AEAAJXZ @ 0x140001FF0 (-InitializeWindow@CDwmAppHost@@AEAAJXZ.c)
 *     McGenControlCallbackV2 @ 0x140002790 (McGenControlCallbackV2.c)
 *     ?SendSimpleAsyncRequestWow64@CPortClient@@AEAAJK@Z @ 0x140002970 (-SendSimpleAsyncRequestWow64@CPortClient@@AEAAJK@Z.c)
 *     ??0CDwmAppHost@@QEAA@XZ @ 0x1400029F0 (--0CDwmAppHost@@QEAA@XZ.c)
 *     __scrt_fastfail @ 0x140003780 (__scrt_fastfail.c)
 *     __scrt_get_show_window_mode @ 0x1400038D4 (__scrt_get_show_window_mode.c)
 *     ModuleFailFastForHRESULT @ 0x1400051F8 (ModuleFailFastForHRESULT.c)
 *     ?SendSimpleAsyncRequestNative@CPortClient@@AEAAJK@Z @ 0x140005E10 (-SendSimpleAsyncRequestNative@CPortClient@@AEAAJK@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memset_0(void *a1, int Val, size_t Size)
{
  return memset(a1, Val, Size);
}
