/*
 * XREFs of memset_0 @ 0x1400040EC
 * Callers:
 *     ?Run@CDwmAppHost@@QEAAJXZ @ 0x140001B50 (-Run@CDwmAppHost@@QEAAJXZ.c)
 *     ??0CDwmAppHost@@QEAA@XZ @ 0x140002120 (--0CDwmAppHost@@QEAA@XZ.c)
 *     McGenControlCallbackV2 @ 0x1400029A0 (McGenControlCallbackV2.c)
 *     ?SendSimpleAsyncRequestWow64@CPortClient@@AEAAJK@Z @ 0x140002B70 (-SendSimpleAsyncRequestWow64@CPortClient@@AEAAJK@Z.c)
 *     __scrt_fastfail @ 0x140003980 (__scrt_fastfail.c)
 *     __scrt_get_show_window_mode @ 0x140003AD4 (__scrt_get_show_window_mode.c)
 *     ModuleFailFastForHRESULT @ 0x140005BC0 (ModuleFailFastForHRESULT.c)
 *     ?SendSimpleAsyncRequestNative@CPortClient@@AEAAJK@Z @ 0x1400067D0 (-SendSimpleAsyncRequestNative@CPortClient@@AEAAJK@Z.c)
 *     ??0?$vector@EV?$allocator@E@std@@@std@@QEAA@_KAEBV?$allocator@E@1@@Z @ 0x140006ADC (--0-$vector@EV-$allocator@E@std@@@std@@QEAA@_KAEBV-$allocator@E@1@@Z.c)
 *     ??0?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@QEAA@_KAEBV?$allocator@UDISPLAYCONFIG_MODE_INFO@@@1@@Z @ 0x140006B58 (--0-$vector@UDISPLAYCONFIG_MODE_INFO@@V-$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@QEAA@_K.c)
 *     ??0?$vector@UDISPLAYCONFIG_PATH_INFO@@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@QEAA@_KAEBV?$allocator@UDISPLAYCONFIG_PATH_INFO@@@1@@Z @ 0x140006BE4 (--0-$vector@UDISPLAYCONFIG_PATH_INFO@@V-$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@QEAA@_K.c)
 *     BlackScreenDiagnostics::GetCurrentProcessVersionInfo @ 0x140006CA0 (BlackScreenDiagnostics--GetCurrentProcessVersionInfo.c)
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z @ 0x140007618 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x1400082C8 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ?TryInit@CWatsonErrorReporting@BlackScreenDiagnostics@@AEAA_NXZ @ 0x14000877C (-TryInit@CWatsonErrorReporting@BlackScreenDiagnostics@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memset_0(void *a1, int Val, size_t Size)
{
  return memset(a1, Val, Size);
}
