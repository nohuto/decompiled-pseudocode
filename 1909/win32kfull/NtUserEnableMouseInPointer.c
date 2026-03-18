/*
 * XREFs of NtUserEnableMouseInPointer @ 0x1C00F0E30
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     GetAppCompatFlags2QuadWord @ 0x1C00F0F30 (GetAppCompatFlags2QuadWord.c)
 */

__int64 __fastcall NtUserEnableMouseInPointer(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rbx
  unsigned int v6; // ecx
  __int64 v7; // rcx
  __int64 v9; // rcx

  EnterCrit(0LL, 1LL);
  v5 = 0LL;
  if ( (a1 != 0) != a1 )
  {
    v9 = 87LL;
    goto LABEL_9;
  }
  if ( a1 && (GetAppCompatFlags2QuadWord(gptiCurrent) & 0x80000000000LL) != 0
    || (v2 = *(_QWORD *)(gptiCurrent + 416LL), v6 = *(_DWORD *)(v2 + 812), a1 != ((v6 >> 2) & 1)) && (v6 & 8) != 0 )
  {
    v9 = 5LL;
LABEL_9:
    UserSetLastError(v9, v2, v3, v4);
    goto LABEL_6;
  }
  v7 = v6 & 0xFFFFFFFB;
  v5 = 1LL;
  *(_DWORD *)(v2 + 812) = v7 | (4 * (a1 & 1 | 2));
LABEL_6:
  UserSessionSwitchLeaveCrit(v7);
  return v5;
}
