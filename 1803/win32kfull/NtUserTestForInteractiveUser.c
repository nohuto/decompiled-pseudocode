/*
 * XREFs of NtUserTestForInteractiveUser @ 0x1C01F69E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserTestForInteractiveUser(_QWORD *a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned int v4; // ebx

  EnterSharedCrit(0LL, 1LL);
  if ( a1 + 1 < a1 || (unsigned __int64)(a1 + 1) > MmUserProbeAddress )
    a1 = (_QWORD *)MmUserProbeAddress;
  if ( *a1 == *(_QWORD *)(grpWinStaList + 152LL) )
    v4 = 0;
  else
    v4 = -1073741790;
  UserSessionSwitchLeaveCrit(grpWinStaList, grpWinStaList, v2, v3);
  return v4;
}
