/*
 * XREFs of NtUserSetWindowRgn @ 0x1C00EC5E0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetWindowRgn @ 0x1C00EC6CC (xxxSetWindowRgn.c)
 */

__int64 __fastcall NtUserSetWindowRgn(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // edi
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+28h] [rbp-20h]
  __int64 v16; // [rsp+30h] [rbp-18h]

  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v8 = 0;
  v9 = v6;
  if ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 40);
    if ( (((*(_WORD *)(v7 + 42) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      v14 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v14;
      v15 = v6;
      HMLockObject(v6);
      v8 = xxxSetWindowRgn(v9, a2, a3);
      ThreadUnlock1(v11, v10, v12);
    }
  }
  UserSessionSwitchLeaveCrit(v7);
  return v8;
}
