/*
 * XREFs of ?Lock@CWindowsPolicyManager@@UEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x1800064F0
 * Callers:
 *     ?UnregisterSession@CWindowsPolicyManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x180006528 (-UnregisterSession@CWindowsPolicyManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z.c)
 *     ?RegisterStreamPreStart@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamInfo@@PEAPEAUIAudioStreamPreStartContext@@@Z @ 0x180006BD0 (-RegisterStreamPreStart@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamInfo@@PEAPEAUIAudioStreamPre.c)
 *     ?OnEndpointRemoved@CWindowsPolicyManager@@UEAAJPEBG@Z @ 0x180006D00 (-OnEndpointRemoved@CWindowsPolicyManager@@UEAAJPEBG@Z.c)
 *     ?HandleVirtualStreamStateChange@CWindowsPolicyManager@@QEAAJPEAUIAudioProcess@@PEBGW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KW4_AudioStreamState@@3@Z @ 0x180007124 (-HandleVirtualStreamStateChange@CWindowsPolicyManager@@QEAAJPEAUIAudioProcess@@PEBGW4__MIDL___MI.c)
 *     ?RpcRegisterAudioStateMonitor@CWindowsPolicyManager@@UEAAJPEAXPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEA_K@Z @ 0x180007440 (-RpcRegisterAudioStateMonitor@CWindowsPolicyManager@@UEAAJPEAXPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_.c)
 *     ?RpcUnregisterAudioStateMonitor@CWindowsPolicyManager@@UEAAJPEAXPEA_K@Z @ 0x180007520 (-RpcUnregisterAudioStateMonitor@CWindowsPolicyManager@@UEAAJPEAXPEA_K@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CWindowsPolicyManager::Lock(__int64 a1, _QWORD *a2)
{
  char *v3; // rbx

  v3 = (char *)g_ApplicationManager + 32;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  *a2 = v3;
  return a2;
}
