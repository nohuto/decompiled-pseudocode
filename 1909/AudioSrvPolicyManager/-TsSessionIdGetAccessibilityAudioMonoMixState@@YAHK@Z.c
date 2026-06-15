/*
 * XREFs of ?TsSessionIdGetAccessibilityAudioMonoMixState@@YAHK@Z @ 0x180026C38
 * Callers:
 *     ?RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z @ 0x180006760 (-RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z.c)
 *     ?GetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAHXZ @ 0x1800069A0 (-GetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAHXZ.c)
 *     ?HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA?AW4AccessibilityStateChange@@XZ @ 0x180006A30 (-HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA-AW4AccessibilityStateChange@@XZ.c)
 * Callees:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x1800250A4 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TsSessionIdGetAccessibilityAudioMonoMixState(DWORD a1)
{
  unsigned int v2; // esi
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  struct TSSession *v5; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+50h] [rbp+18h]

  v2 = 0;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v6 = v3;
  if ( !(unsigned int)TsSessionFromSessionId(a1, 1, 0LL, &v5) && *((_DWORD *)v5 + 76) )
    v2 = *((_DWORD *)v5 + 77);
  if ( v3 )
    LeaveCriticalSection(v3);
  return v2;
}
