/*
 * XREFs of NtUserGetKeyboardState @ 0x1C001D9E0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsGpqForegroundAccessibleCurrent@@YAHH@Z @ 0x1C001DB9C (-IsGpqForegroundAccessibleCurrent@@YAHH@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetKeyboardState(ULONG64 a1)
{
  __int64 ThreadWin32Thread; // rdi
  BOOL v2; // r14d
  _BYTE *v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r15
  int v6; // esi
  int v7; // eax
  _BYTE *v8; // rdi
  int v9; // r10d
  unsigned __int64 v10; // r8
  unsigned __int8 v11; // r9

  EnterSharedCrit(0LL, 1LL);
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v2 = *(_QWORD *)(ThreadWin32Thread + 448) == grpdeskRitInput;
  if ( !(unsigned int)IsGpqForegroundAccessibleCurrent(1) )
  {
    EtwTraceUIPIInputError(ThreadWin32Thread, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 436LL), 3);
    v2 = 0;
  }
  v3 = (_BYTE *)a1;
  if ( a1 >= MmUserProbeAddress )
    v3 = (_BYTE *)MmUserProbeAddress;
  *v3 = *v3;
  v3[255] = v3[255];
  v5 = *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 424);
  v6 = 0;
  v7 = 0;
  v8 = (_BYTE *)a1;
  while ( v7 < 256 )
  {
    *v8 = 0;
    if ( v2 || (LOBYTE(v4) = v6, (unsigned int)IsKeyStateCached(v4)) )
    {
      v9 = v6 & 3;
      v10 = (unsigned __int64)(unsigned __int8)v6 >> 2;
      v11 = *(_BYTE *)(v10 + v5 + 236);
      if ( ((unsigned __int8)(1 << (2 * v9)) & v11) != 0 )
      {
        *v8 |= 0x80u;
        v11 = *(_BYTE *)(v10 + v5 + 236);
      }
      v4 = (unsigned int)(2 * v9 + 1);
      if ( ((unsigned __int8)(1 << (2 * v9 + 1)) & v11) != 0 )
        *v8 |= 1u;
    }
    v7 = ++v6;
    ++v8;
  }
  UserSessionSwitchLeaveCrit(v4);
  return 1LL;
}
