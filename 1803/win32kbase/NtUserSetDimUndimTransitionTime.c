/*
 * XREFs of NtUserSetDimUndimTransitionTime @ 0x1C00B8E60
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceReleaseUserCrit @ 0x1C0030230 (EtwTraceReleaseUserCrit.c)
 *     UserSessionSwitchEnterCrit @ 0x1C00344B0 (UserSessionSwitchEnterCrit.c)
 */

__int64 __fastcall NtUserSetDimUndimTransitionTime(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8

  v3 = a2;
  v4 = a1;
  UserSessionSwitchEnterCrit(a1, a2, a3);
  gUndimTransitionTime = v3;
  gDimTransitionTime = v4;
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  EtwTraceReleaseUserCrit(v6, v5, v7);
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return 0LL;
}
