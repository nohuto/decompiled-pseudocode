/*
 * XREFs of NtUserLinkDpiCursor @ 0x1C01F1D30
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0015A84 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     GetCursorForDim @ 0x1C006B2A4 (GetCursorForDim.c)
 */

__int64 __fastcall NtUserLinkDpiCursor(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rax
  int v14; // eax

  EnterCrit(0LL, 1LL);
  v6 = HMValidateHandle(a1, 3);
  v11 = 0LL;
  v12 = v6;
  if ( v6 )
  {
    v13 = HMValidateHandle(a2, 3);
    v9 = v13;
    if ( v13 )
    {
      if ( (*(_DWORD *)(v13 + 80) & 0x1000) != 0
        && (v14 = *(_DWORD *)(v12 + 80), (v14 & 0x1800) == 0)
        && *(_QWORD *)(v9 + 48) == v9
        && ((*(_DWORD *)(v12 + 80) = v14 | 0x4000, a3 == 32) || a3 == 48 || a3 == 64 || a3 == 96 || a3 == 128) )
      {
        if ( !GetCursorForDim(v12, a3) )
        {
          *(_QWORD *)(v9 + 48) = v12;
          v11 = 1LL;
          *(_QWORD *)(v9 + 40) = *(_QWORD *)(v12 + 40);
          *(_QWORD *)(v12 + 40) = v9;
          *(_DWORD *)(v9 + 76) = a3;
        }
      }
      else
      {
        UserSetLastError(87LL, v7);
      }
    }
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v11;
}
