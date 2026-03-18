/*
 * XREFs of NtUserGetKeyboardState @ 0x1C00AFB50
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     IsKeyStateCached @ 0x1C00AFF60 (IsKeyStateCached.c)
 *     IsGpqForegroundAccessible @ 0x1C00AFFBC (IsGpqForegroundAccessible.c)
 */

__int64 __fastcall NtUserGetKeyboardState(ULONG64 a1)
{
  __int64 v1; // rdx
  __int64 ThreadWin32Thread; // rbx
  BOOL v3; // r15d
  _BYTE *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r14
  unsigned int v10; // eax
  int v11; // ebx
  _BYTE *v12; // rdi
  char v13; // r10

  EnterSharedCrit(0LL, 1LL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v1);
  v3 = *(_QWORD *)(ThreadWin32Thread + 456) == grpdeskRitInput;
  if ( !(unsigned int)IsGpqForegroundAccessible(1LL) )
  {
    EtwTraceUIPIInputError(ThreadWin32Thread, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 428LL), 3);
    v3 = 0;
  }
  v4 = (_BYTE *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (_BYTE *)MmUserProbeAddress;
  *v4 = *v4;
  v4[255] = v4[255];
  v9 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), MmUserProbeAddress) + 432);
  v10 = 0;
  v11 = 0;
  v12 = (_BYTE *)a1;
  while ( v11 < 256 )
  {
    *v12 = 0;
    if ( v3 || (unsigned int)IsKeyStateCached(v10) )
    {
      v8 = v11 & 3;
      v7 = (unsigned __int64)(unsigned __int8)v11 >> 2;
      v13 = 0;
      if ( ((unsigned __int8)(1 << (2 * v8)) & *(_BYTE *)(v7 + v9 + 228)) != 0 )
      {
        *v12 = 0x80;
        v13 = 0x80;
      }
      v6 = (unsigned int)(2 * v8 + 1);
      v5 = (unsigned int)(1 << (2 * v8 + 1));
      if ( ((unsigned __int8)v5 & *(_BYTE *)(v7 + v9 + 228)) != 0 )
        *v12 = v13 | 1;
    }
    v10 = v11 + 1;
    ++v12;
    ++v11;
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return 1LL;
}
