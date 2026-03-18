/*
 * XREFs of NtUserGetCurrentDpiInfoForWindow @ 0x1C01142B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserGetCurrentDpiInfoForWindow(__int64 a1, _OWORD *a2)
{
  int v4; // edi
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  ULONG64 v9; // rcx

  EnterSharedCrit(0LL, 1LL);
  v4 = 0;
  gbValidateHandleForIL = 0;
  v5 = (_QWORD *)ValidateHwnd(a1);
  v9 = (ULONG64)v5;
  if ( v5 )
  {
    if ( *(_WORD *)(v5[5] + 286LL) )
      v6 = v5[35];
    else
      v6 = v5[34];
    v9 = MmUserProbeAddress;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_OWORD *)MmUserProbeAddress;
    *a2 = *(_OWORD *)(v6 + 4);
    a2[1] = *(_OWORD *)(v6 + 20);
    a2[2] = *(_OWORD *)(v6 + 36);
    a2[3] = *(_OWORD *)(v6 + 52);
    a2[4] = *(_OWORD *)(v6 + 68);
    a2[5] = *(_OWORD *)(v6 + 84);
    v4 = 1;
  }
  UserSessionSwitchLeaveCrit(v9, v6, v7, v8);
  return v4;
}
