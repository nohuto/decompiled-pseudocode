/*
 * XREFs of xxxHandleDestroyGhostWindow @ 0x1C010F9BC
 * Callers:
 *     xxxDestroyWindow @ 0x1C00711E0 (xxxDestroyWindow.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C00E73F0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall xxxHandleDestroyGhostWindow(struct tagWND *a1)
{
  int v2; // esi
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  v3 = RealInternalRemoveProp(*((_QWORD *)a1 + 15), *(unsigned __int16 *)(gpsi + 900LL), 1LL);
  if ( !v3 )
  {
    v3 = RealInternalRemoveProp(*((_QWORD *)a1 + 15), *(unsigned __int16 *)(gpsi + 1378LL), 1LL);
    if ( !v3 )
      return 0LL;
    v2 = 1;
  }
  LOBYTE(v4) = 1;
  v7 = HMValidateHandleNoSecure(v3, v4);
  if ( v7 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6);
    v13[0] = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = v13;
    v13[1] = v7;
    _InterlockedAdd((volatile signed __int32 *)(v7 + 8), 1u);
    if ( v2 )
      v9 = *(unsigned __int16 *)(gpsi + 1378LL);
    else
      v9 = *(unsigned __int16 *)(gpsi + 900LL);
    RealInternalRemoveProp(*(_QWORD *)(v7 + 120), v9, 1LL);
    xxxHideGhostWindow(a1, (struct tagWND *)v7);
    ThreadUnlock1(v11, v10, v12);
  }
  return 0LL;
}
