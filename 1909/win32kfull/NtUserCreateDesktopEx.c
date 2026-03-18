/*
 * XREFs of NtUserCreateDesktopEx @ 0x1C007CA80
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     xxxCreateDesktopEx @ 0x1C007E33C (xxxCreateDesktopEx.c)
 */

__int64 __fastcall NtUserCreateDesktopEx(int a1, __int64 a2, __int64 a3, unsigned int a4, int a5, int a6)
{
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  NTSTATUS Desktop; // eax
  __int64 v15; // rcx
  __int64 v17; // rcx
  _QWORD v18[3]; // [rsp+40h] [rbp-18h] BYREF

  v18[0] = 0LL;
  EnterCrit(0LL, 1LL);
  if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x20000000) != 0 )
    v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 760LL) + 24LL) & 0x40;
  else
    v13 = 0;
  if ( v13 )
  {
    v17 = 5LL;
LABEL_14:
    UserSetLastError(v17, v10, v11, v12);
    goto LABEL_10;
  }
  if ( a4 >= 2 || a2 || a3 )
  {
    v17 = 87LL;
    goto LABEL_14;
  }
  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  Desktop = xxxCreateDesktopEx(a1, a4, a5, a6, (__int64)v18, 0);
  if ( Desktop < 0 )
  {
    v18[0] = 0LL;
    v17 = RtlNtStatusToDosError(Desktop);
    goto LABEL_14;
  }
LABEL_10:
  UserSessionSwitchLeaveCrit(v15);
  return v18[0];
}
