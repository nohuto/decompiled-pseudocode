/*
 * XREFs of ?TsSessionIdInitAccessibilityAudioSettings@@YAXKH@Z @ 0x180026BB0
 * Callers:
 *     ?InitAccessibilityAudioSettings@CWindowsPolicyManager@@IEAAJK@Z @ 0x1800065C8 (-InitAccessibilityAudioSettings@CWindowsPolicyManager@@IEAAJK@Z.c)
 *     ?RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z @ 0x180006760 (-RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z.c)
 * Callees:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x1800250A4 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TsSessionIdInitAccessibilityAudioSettings(DWORD a1, int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  struct TSSession *v5; // rax
  struct TSSession *v6; // [rsp+50h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+58h] [rbp+20h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v7 = v4;
  if ( !(unsigned int)TsSessionFromSessionId(a1, 1, 0LL, &v6) )
  {
    v5 = v6;
    *((_DWORD *)v6 + 77) = a2;
    *((_DWORD *)v5 + 76) = 1;
  }
  if ( v4 )
    LeaveCriticalSection(v4);
}
