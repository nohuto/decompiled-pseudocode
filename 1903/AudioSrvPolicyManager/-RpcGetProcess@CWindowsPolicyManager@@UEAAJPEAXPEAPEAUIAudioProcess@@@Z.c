/*
 * XREFs of ?RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z @ 0x180005980
 * Callers:
 *     ?RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z @ 0x1800067D0 (-RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z.c)
 *     ?GetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAHXZ @ 0x180006A10 (-GetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAHXZ.c)
 *     ?HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA?AW4AccessibilityStateChange@@XZ @ 0x180006AA0 (-HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA-AW4AccessibilityStateChange@@XZ.c)
 *     ?RpcRegisterAudioStateMonitor@CWindowsPolicyManager@@UEAAJPEAXPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEA_K@Z @ 0x180007440 (-RpcRegisterAudioStateMonitor@CWindowsPolicyManager@@UEAAJPEAXPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_.c)
 *     ?RpcUnregisterAudioStateMonitor@CWindowsPolicyManager@@UEAAJPEAXPEA_K@Z @ 0x180007520 (-RpcUnregisterAudioStateMonitor@CWindowsPolicyManager@@UEAAJPEAXPEA_K@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueryInterface@CProcess@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180011DA0 (-QueryInterface@CProcess@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180019494 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180035AC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowsPolicyManager::RpcGetProcess(
        CWindowsPolicyManager *this,
        void *a2,
        struct IAudioProcess **a3)
{
  int Process; // eax
  CProcess *v5; // rbx
  unsigned int v6; // edi
  __int64 v7; // rdx
  CProcess *v8; // rbx
  CProcess *v10; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v10 = 0LL;
  Process = CApplicationManager::RpcGetProcess(this, a2, &v10);
  v5 = v10;
  v6 = Process;
  if ( Process >= 0 )
  {
    Process = CProcess::QueryInterface(v10, &GUID_a0da1994_c8cf_4956_b4eb_7882030bf9d5, (void **)a3);
    v6 = Process;
    if ( Process >= 0 )
    {
      v6 = 0;
      goto LABEL_7;
    }
    v7 = 282LL;
  }
  else
  {
    v7 = 281LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
    (const char *)(unsigned int)Process);
LABEL_7:
  if ( v5 && _InterlockedExchangeAdd((volatile signed __int32 *)v5 + 2, 0xFFFFFFFF) == 1 )
  {
    v8 = v10;
    (*(void (__fastcall **)(CProcess *))(*(_QWORD *)v10 + 32LL))(v10);
    (*(void (__fastcall **)(CProcess *, __int64))(*(_QWORD *)v8 + 24LL))(v8, 1LL);
  }
  return v6;
}
