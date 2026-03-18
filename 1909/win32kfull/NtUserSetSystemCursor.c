/*
 * XREFs of NtUserSetSystemCursor @ 0x1C0234ED0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0024F2C (HMValidateHandle.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C01CC2F8 (-zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 */

__int64 __fastcall NtUserSetSystemCursor(unsigned __int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  struct tagCURSOR *v9; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v15; // [rsp+20h] [rbp-28h] BYREF
  struct tagCURSOR *v16; // [rsp+28h] [rbp-20h]
  __int64 v17; // [rsp+30h] [rbp-18h]

  EnterCrit(0LL, 1LL);
  v4 = HMValidateHandle(a1, 3);
  v8 = 0LL;
  v9 = (struct tagCURSOR *)v4;
  if ( v4 )
  {
    v15 = 0LL;
    v16 = 0LL;
    v17 = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v7);
    v15 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v15;
    v16 = v9;
    HMLockObject(v9);
    v8 = (unsigned __int8)zzzSetSystemCursor(v9, a2);
    ThreadUnlock1(v12, v11, v13);
  }
  UserSessionSwitchLeaveCrit(v6);
  return v8;
}
