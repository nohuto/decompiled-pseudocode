/*
 * XREFs of NtUserCreateDesktopEx @ 0x1C00EE3F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     xxxCreateDesktopEx @ 0x1C00EFCF4 (xxxCreateDesktopEx.c)
 */

__int64 __fastcall NtUserCreateDesktopEx(int a1, __int64 a2, __int64 a3, unsigned int a4, int a5, int a6)
{
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  NTSTATUS Desktop; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v21; // rcx
  _QWORD v22[3]; // [rsp+40h] [rbp-18h] BYREF

  v10 = 0LL;
  v22[0] = 0LL;
  EnterCrit(0LL, 1LL);
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x20000000) != 0 )
    v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 768LL) + 24LL) & 0x40;
  else
    v14 = 0;
  if ( v14 )
  {
    v21 = 5LL;
LABEL_16:
    UserSetLastError(v21, v11, v12, v13);
    goto LABEL_11;
  }
  if ( a4 > 1 || a2 || a3 )
  {
    v21 = 87LL;
    goto LABEL_16;
  }
  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  Desktop = xxxCreateDesktopEx(a1, a4, a5, a6, (__int64)v22, 0);
  if ( Desktop < 0 )
  {
    v21 = RtlNtStatusToDosError(Desktop);
    goto LABEL_16;
  }
  v10 = v22[0];
LABEL_11:
  UserSessionSwitchLeaveCrit(v17, v16, v18, v19);
  return v10;
}
