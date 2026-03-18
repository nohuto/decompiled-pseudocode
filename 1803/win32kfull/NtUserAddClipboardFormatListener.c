/*
 * XREFs of NtUserAddClipboardFormatListener @ 0x1C00B5640
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     CheckClipboardAccess @ 0x1C00B69B0 (CheckClipboardAccess.c)
 */

__int64 __fastcall NtUserAddClipboardFormatListener(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // rsi
  __int64 v12; // rcx
  __int64 v13; // [rsp+20h] [rbp-18h] BYREF
  __int64 v14; // [rsp+28h] [rbp-10h]

  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v7 = 0LL;
  v8 = v2;
  if ( !v2 )
    goto LABEL_9;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
  v4 = *(_QWORD *)(v8 + 16);
  if ( *(_QWORD *)(v4 + 416) != CurrentProcessWin32Process )
  {
    v7 = 5LL;
    goto LABEL_9;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v8 + 40) + 232LL) & 1) != 0 )
  {
    v12 = 87LL;
LABEL_13:
    UserSetLastError(v12, v3);
    goto LABEL_9;
  }
  v3 = CheckClipboardAccess();
  if ( !v3 )
    goto LABEL_9;
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 416LL) + 664LL) != v3 )
  {
    UserSetLastError(87LL, v3);
    v12 = 0LL;
    goto LABEL_13;
  }
  v10 = v3 + 120;
  if ( *(_QWORD *)(v3 + 120) )
  {
    v14 = *(_QWORD *)(v3 + 120);
    v13 = v8 + 224;
    HMAssignmentLock(&v13);
  }
  v13 = v10;
  v14 = v8;
  HMAssignmentLock(&v13);
  v7 = 1LL;
  *(_DWORD *)(*(_QWORD *)(v8 + 40) + 232LL) |= 1u;
LABEL_9:
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}
