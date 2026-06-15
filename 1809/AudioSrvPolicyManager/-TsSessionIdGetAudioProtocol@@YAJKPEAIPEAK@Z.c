/*
 * XREFs of ?TsSessionIdGetAudioProtocol@@YAJKPEAIPEAK@Z @ 0x1800288EC
 * Callers:
 *     ?HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA?AW4AccessibilityStateChange@@XZ @ 0x18000A320 (-HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA-AW4AccessibilityStateChange@@XZ.c)
 *     TS_SessionGetAudioProtocol @ 0x18002AA60 (TS_SessionGetAudioProtocol.c)
 * Callees:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x180028878 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TsSessionIdGetAudioProtocol(DWORD a1, unsigned int *a2, unsigned int *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  unsigned int v7; // ebx
  struct TSSession *v8; // r8
  struct TSSession *v10; // [rsp+58h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+68h] [rbp+20h]

  *a2 = 0xFFFF;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v11 = v6;
  v7 = TsSessionFromSessionId(a1, 0, 0LL, &v10);
  if ( !v7 )
  {
    v8 = v10;
    *a2 = *((_DWORD *)v10 + 1);
    *a3 = *((_DWORD *)v8 + 2);
  }
  if ( v6 )
    LeaveCriticalSection(v6);
  return v7;
}
