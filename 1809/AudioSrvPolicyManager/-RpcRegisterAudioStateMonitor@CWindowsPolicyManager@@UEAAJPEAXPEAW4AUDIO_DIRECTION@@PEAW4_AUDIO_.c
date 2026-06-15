/*
 * XREFs of ?RpcRegisterAudioStateMonitor@CWindowsPolicyManager@@UEAAJPEAXPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEA_K@Z @ 0x18000A750
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F84 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z @ 0x1800091F0 (-RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z.c)
 *     ?Lock@CWindowsPolicyManager@@UEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x180009D70 (-Lock@CWindowsPolicyManager@@UEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowsPolicyManager::RpcRegisterAudioStateMonitor(
        CWindowsPolicyManager *this,
        void *a2,
        enum AUDIO_DIRECTION *a3,
        enum _AUDIO_STREAM_CATEGORY *a4,
        const unsigned __int16 *a5,
        unsigned __int64 *a6)
{
  int Process; // eax
  struct IAudioProcess *v11; // rbx
  unsigned int v12; // edi
  __int64 v13; // rdx
  struct IAudioProcess *v15; // [rsp+30h] [rbp-18h] BYREF
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  CWindowsPolicyManager::Lock((__int64)this, lpCriticalSection);
  v15 = 0LL;
  Process = CWindowsPolicyManager::RpcGetProcess(this, a2, &v15);
  v11 = v15;
  v12 = Process;
  if ( Process < 0 )
  {
    v13 = 655LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      (const char *)(unsigned int)Process);
    goto LABEL_7;
  }
  Process = (*(__int64 (__fastcall **)(struct IAudioProcess *, enum AUDIO_DIRECTION *, enum _AUDIO_STREAM_CATEGORY *, const unsigned __int16 *, unsigned __int64 *))(*(_QWORD *)v15 + 408LL))(
              v15,
              a3,
              a4,
              a5,
              a6);
  v12 = Process;
  if ( Process < 0 )
  {
    v13 = 656LL;
    goto LABEL_5;
  }
  v12 = 0;
LABEL_7:
  if ( v11 )
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v11 + 16LL))(v11);
  if ( lpCriticalSection[0] )
    LeaveCriticalSection(lpCriticalSection[0]);
  return v12;
}
