/*
 * XREFs of NtUserVkKeyScanEx @ 0x1C00FF400
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall NtUserVkKeyScanEx(unsigned __int16 a1, __int64 a2, int a3)
{
  __int64 v6; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int16 v13; // bx

  EnterSharedCrit(0LL, 1LL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6);
  if ( a3 )
    v12 = HKLtoPKL(ThreadWin32Thread, a2, v10, v11);
  else
    v12 = *(_QWORD *)(ThreadWin32Thread + 432);
  if ( v12 )
    v13 = InternalVkKeyScanEx(a1, *(_QWORD *)(*(_QWORD *)(v12 + 48) + 32LL));
  else
    v13 = -1;
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v13;
}
