/*
 * XREFs of NtUserSetSystemCursor @ 0x1C02354F0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C002F96C (HMValidateHandle.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C01CC488 (-zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 */

__int64 __fastcall NtUserSetSystemCursor(unsigned __int64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  struct tagCURSOR *v13; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // [rsp+20h] [rbp-28h] BYREF
  struct tagCURSOR *v20; // [rsp+28h] [rbp-20h]
  __int64 v21; // [rsp+30h] [rbp-18h]

  EnterCrit(0LL, 1LL);
  LOBYTE(v4) = 3;
  v7 = HMValidateHandle(a1, v4, v5, v6);
  v12 = 0LL;
  v13 = (struct tagCURSOR *)v7;
  if ( v7 )
  {
    v19 = 0LL;
    v20 = 0LL;
    v21 = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v10, v11);
    v19 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v19;
    v20 = v13;
    HMLockObject(v13);
    v12 = (unsigned __int8)zzzSetSystemCursor(v13, a2);
    ThreadUnlock1(v16, v15, v17);
  }
  UserSessionSwitchLeaveCrit(v9);
  return v12;
}
