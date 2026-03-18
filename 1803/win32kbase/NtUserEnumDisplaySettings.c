/*
 * XREFs of NtUserEnumDisplaySettings @ 0x1C0041540
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceReleaseUserCrit @ 0x1C0030230 (EtwTraceReleaseUserCrit.c)
 *     UserSessionSwitchEnterCrit @ 0x1C00344B0 (UserSessionSwitchEnterCrit.c)
 *     DrvEnumDisplaySettings @ 0x1C0043200 (DrvEnumDisplaySettings.c)
 */

__int64 __fastcall NtUserEnumDisplaySettings(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v6; // esi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // ebx

  v6 = a2;
  UserSessionSwitchEnterCrit(a1, a2, a3);
  if ( gbVideoInitialized )
    v11 = DrvEnumDisplaySettings(a1, *(_QWORD *)(*(_QWORD *)(gpDispInfo + 96) + 232LL), v6, a3, a4);
  else
    v11 = -1073741823;
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  EtwTraceReleaseUserCrit(v9, v8, v10);
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return v11;
}
