/*
 * XREFs of NtUserShowWindowAsync @ 0x1C012EF10
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     PostEventMessageEx @ 0x1C00D4C3C (PostEventMessageEx.c)
 */

__int64 __fastcall NtUserShowWindowAsync(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r9
  int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD v13[5]; // [rsp+40h] [rbp-28h] BYREF

  v2 = a2;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v8 = 0;
  v9 = v4;
  if ( v4 )
  {
    v6 = *(_QWORD *)(v4 + 40);
    v5 = (*(_WORD *)(v6 + 42) & 0x2FFFu) - 669;
    if ( (v5 & 0xFFFFFFFD) != 0 )
    {
      v13[0] = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = v13;
      v13[1] = v4;
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
      if ( (unsigned int)v2 > 0xB )
        UserSetLastError(87LL, gptiCurrent, v4, v7);
      else
        v8 = PostEventMessageEx(
               *(struct tagTHREADINFO **)(v4 + 16),
               *(_QWORD *)(*(_QWORD *)(v4 + 16) + 432LL),
               1u,
               (InputTransform *)v4,
               2u,
               0LL,
               (LARGE_INTEGER)(v2 | gdwPUDFlags & 0x10000),
               0LL);
      ThreadUnlock1(v11, v10);
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5, v9, v7);
  return v8;
}
