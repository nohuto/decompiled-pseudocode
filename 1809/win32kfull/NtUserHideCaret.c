/*
 * XREFs of NtUserHideCaret @ 0x1C0073BF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     zzzInternalHideCaret @ 0x1C0073DD4 (zzzInternalHideCaret.c)
 */

__int64 __fastcall NtUserHideCaret(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rsi
  unsigned int ThreadId; // eax
  __int64 v11; // rax

  EnterCrit(0LL, 1LL);
  v2 = 0LL;
  if ( a1 )
  {
    v5 = ValidateHwnd(a1);
    if ( !v5 )
      goto LABEL_5;
  }
  else
  {
    v5 = 0LL;
  }
  v8 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( *(_QWORD *)(v8 + 296)
    && ((ThreadId = (unsigned int)PsGetThreadId((PETHREAD)*gptiCurrent),
         v4 = *(unsigned int *)(v8 + 352),
         (_DWORD)v4 == ThreadId)
     || (v11 = PtiFromThreadId(v4)) != 0 && *(_QWORD *)(gptiCurrent + 424LL) == *(_QWORD *)(v11 + 424)) )
  {
    if ( !v5 || v5 == *(_QWORD *)(v8 + 296) )
    {
      zzzInternalHideCaret();
      v2 = 1LL;
    }
  }
  else
  {
    UserSetLastError(5LL);
  }
LABEL_5:
  UserSessionSwitchLeaveCrit(v4, v3, v6, v7);
  return v2;
}
