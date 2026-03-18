/*
 * XREFs of NtUserSetWindowLongPtr @ 0x1C00AB4F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ?xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z @ 0x1C00AB5F8 (-xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z.c)
 *     DesktopVerifyHeapRange @ 0x1C01EAC3C (DesktopVerifyHeapRange.c)
 */

unsigned __int64 __fastcall NtUserSetWindowLongPtr(__int64 a1, int a2, unsigned __int64 a3, int a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // [rsp+30h] [rbp-28h] BYREF
  __int64 v20; // [rsp+38h] [rbp-20h]
  __int64 v21; // [rsp+40h] [rbp-18h]

  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  EnterCrit(0LL, 1LL);
  v8 = ValidateHwndEx(a1, 1LL, 1LL);
  v10 = 0LL;
  v11 = v8;
  if ( v8 )
  {
    v19 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v19;
    v20 = v8;
    HMLockObject(v8);
    if ( (unsigned int)PsGetWin32KFilterSet() == 5 )
    {
      if ( a2 != -21 )
      {
        UserSetLastError(87LL, v12, v13, v14);
        goto LABEL_4;
      }
      DesktopVerifyHeapRange(*(_QWORD *)(v11 + 24), *(_QWORD *)(v11 + 40), 320LL);
    }
    v10 = xxxSetWindowLongPtr((struct tagWND *)v11, a2, a3, a4, 1);
LABEL_4:
    ThreadUnlock1(v16, v15, v17);
  }
  UserSessionSwitchLeaveCrit(v9);
  return v10;
}
