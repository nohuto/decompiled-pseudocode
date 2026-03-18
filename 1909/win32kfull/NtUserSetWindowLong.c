/*
 * XREFs of NtUserSetWindowLong @ 0x1C00A82A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     xxxSetWindowLong @ 0x1C00A8474 (xxxSetWindowLong.c)
 *     DesktopVerifyHeapRange @ 0x1C01EAC3C (DesktopVerifyHeapRange.c)
 */

__int64 __fastcall NtUserSetWindowLong(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v15; // [rsp+30h] [rbp-28h] BYREF
  __int64 v16; // [rsp+38h] [rbp-20h]
  __int64 v17; // [rsp+40h] [rbp-18h]

  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwndEx(a1, 1LL, 1LL);
  v6 = 0;
  v7 = v4;
  if ( v4 )
  {
    v15 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v15;
    v16 = v4;
    HMLockObject(v4);
    if ( (unsigned int)PsGetWin32KFilterSet() == 5 )
    {
      if ( a2 != -21 )
      {
        UserSetLastError(87LL, v8, v9, v10);
        goto LABEL_4;
      }
      DesktopVerifyHeapRange(*(_QWORD *)(v7 + 24), *(_QWORD *)(v7 + 40), 320LL);
    }
    v6 = xxxSetWindowLong((struct tagWND *)v7, 1);
LABEL_4:
    ThreadUnlock1(v12, v11, v13);
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
