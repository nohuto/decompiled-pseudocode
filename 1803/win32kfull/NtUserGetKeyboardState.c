/*
 * XREFs of NtUserGetKeyboardState @ 0x1C005DB30
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     IsKeyStateCached @ 0x1C005DF00 (IsKeyStateCached.c)
 *     IsGpqForegroundAccessible @ 0x1C005DF64 (IsGpqForegroundAccessible.c)
 */

__int64 __fastcall NtUserGetKeyboardState(ULONG64 a1)
{
  int v1; // esi
  __int64 v2; // rdx
  __int64 ThreadWin32Thread; // rbx
  BOOL v4; // r12d
  _BYTE *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r15
  _BYTE *v11; // rdi
  char v12; // r10

  v1 = 0;
  EnterSharedCrit(0LL, 1LL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v2);
  v4 = *(_QWORD *)(ThreadWin32Thread + 448) == grpdeskRitInput;
  if ( !(unsigned int)IsGpqForegroundAccessible(1LL) )
  {
    EtwTraceUIPIInputError(ThreadWin32Thread, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 428LL), 3);
    v4 = 0;
  }
  v5 = (_BYTE *)a1;
  if ( a1 >= MmUserProbeAddress )
    v5 = (_BYTE *)MmUserProbeAddress;
  *v5 = *v5;
  v5[255] = v5[255];
  v10 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), MmUserProbeAddress) + 424);
  v11 = (_BYTE *)a1;
  while ( v1 < 256 )
  {
    *v11 = 0;
    if ( v4 || (unsigned int)IsKeyStateCached((unsigned int)v1) )
    {
      v9 = v1 & 3;
      v8 = (unsigned __int64)(unsigned __int8)v1 >> 2;
      v12 = 0;
      if ( ((unsigned __int8)(1 << (2 * v9)) & *(_BYTE *)(v8 + v10 + 228)) != 0 )
      {
        *v11 = 0x80;
        v12 = 0x80;
      }
      v7 = (unsigned int)(2 * v9 + 1);
      v6 = (unsigned int)(1 << (2 * v9 + 1));
      if ( ((unsigned __int8)v6 & *(_BYTE *)(v8 + v10 + 228)) != 0 )
        *v11 = v12 | 1;
    }
    ++v1;
    ++v11;
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return 1LL;
}
