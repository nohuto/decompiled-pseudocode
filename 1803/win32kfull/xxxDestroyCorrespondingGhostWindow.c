/*
 * XREFs of xxxDestroyCorrespondingGhostWindow @ 0x1C00E6BA8
 * Callers:
 *     xxxDestroyWindow @ 0x1C00711E0 (xxxDestroyWindow.c)
 *     xxxHandleHealthyWindow @ 0x1C00E6B20 (xxxHandleHealthyWindow.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     IsNonImmersiveBand @ 0x1C005F640 (IsNonImmersiveBand.c)
 *     PostShellHookMessages @ 0x1C006E990 (PostShellHookMessages.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C00E73F0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall xxxDestroyCorrespondingGhostWindow(struct tagWND *a1)
{
  unsigned int v2; // ebx
  int v3; // ebp
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rdx
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  v3 = 0;
  v4 = RealInternalRemoveProp(*((_QWORD *)a1 + 15), *(unsigned __int16 *)(gpsi + 900LL), 1LL);
  if ( v4 )
  {
    if ( v4 == -1LL )
    {
      if ( !IsNonImmersiveBand((__int64)a1) )
        PostShellHookMessages(0x34uLL, *(_QWORD *)a1);
      v4 = 0LL;
    }
  }
  else
  {
    v4 = RealInternalRemoveProp(*((_QWORD *)a1 + 15), *(unsigned __int16 *)(gpsi + 1378LL), 1LL);
    if ( !v4 )
      return v2;
    v3 = 1;
  }
  v2 = 1;
  if ( v4 )
  {
    LOBYTE(v5) = 1;
    v7 = HMValidateHandleNoSecure(v4, v5);
    if ( v7 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6);
      v14[0] = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = v14;
      v14[1] = v7;
      _InterlockedAdd((volatile signed __int32 *)(v7 + 8), 1u);
      v11 = *(_WORD *)(*(_QWORD *)(v7 + 40) + 42LL) & 0x3FFF;
      if ( (_DWORD)v11 == 682 )
      {
        if ( v3 )
          v12 = *(unsigned __int16 *)(gpsi + 1378LL);
        else
          v12 = *(unsigned __int16 *)(gpsi + 900LL);
        RealInternalRemoveProp(*(_QWORD *)(v7 + 120), v12, 1LL);
        xxxHideGhostWindow((struct tagWND *)v7, a1);
      }
      else
      {
        v2 = 0;
      }
      ThreadUnlock1(v11, v9, v10);
    }
  }
  return v2;
}
