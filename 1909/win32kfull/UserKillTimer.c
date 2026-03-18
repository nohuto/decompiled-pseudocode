/*
 * XREFs of UserKillTimer @ 0x1C024459C
 * Callers:
 *     ?vDisableTimers@@YAXK@Z @ 0x1C010CBE0 (-vDisableTimers@@YAXK@Z.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0021E34 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     FindTimer @ 0x1C007A674 (FindTimer.c)
 */

__int64 __fastcall UserKillTimer(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = a1;
  v1 = gidSynchronizeTimer;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v4);
  result = FindTimer(0LL, v1, 4u, 1, 0LL);
  if ( !(_DWORD)v4 )
    return UserSessionSwitchLeaveCrit(v3);
  return result;
}
