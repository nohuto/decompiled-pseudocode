/*
 * XREFs of NtUserAddClipboardFormatListener @ 0x1C0117B30
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     CheckClipboardAccess @ 0x1C00591AC (CheckClipboardAccess.c)
 */

__int64 __fastcall NtUserAddClipboardFormatListener(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rsi
  __int64 v16; // rcx
  __int64 v17; // [rsp+20h] [rbp-18h] BYREF
  __int64 v18; // [rsp+28h] [rbp-10h]

  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v5 = 0LL;
  v6 = v2;
  if ( !v2 )
    goto LABEL_9;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4, v3);
  v4 = *(_QWORD *)(v6 + 16);
  if ( *(_QWORD *)(v4 + 416) != CurrentProcessWin32Process )
  {
    v5 = 5LL;
    goto LABEL_9;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v6 + 40) + 232LL) & 1) != 0 )
  {
    v16 = 87LL;
LABEL_13:
    UserSetLastError(v16, v8, v9, v10);
    goto LABEL_9;
  }
  v11 = CheckClipboardAccess();
  if ( !v11 )
    goto LABEL_9;
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 416LL) + 664LL) != v11 )
  {
    UserSetLastError(87LL, v11, v12, v13);
    v16 = 0LL;
    goto LABEL_13;
  }
  v14 = v11 + 120;
  if ( *(_QWORD *)(v11 + 120) )
  {
    v18 = *(_QWORD *)(v11 + 120);
    v17 = v6 + 240;
    HMAssignmentLock(&v17);
  }
  v17 = v14;
  v18 = v6;
  HMAssignmentLock(&v17);
  v5 = 1LL;
  *(_DWORD *)(*(_QWORD *)(v6 + 40) + 232LL) |= 1u;
LABEL_9:
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}
