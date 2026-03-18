/*
 * XREFs of NtUserSetWindowLongPtr @ 0x1C00665B0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetWindowLongPtr @ 0x1C00666A0 (xxxSetWindowLongPtr.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     DesktopVerifyHeapRange @ 0x1C01D5670 (DesktopVerifyHeapRange.c)
 */

__int64 __fastcall NtUserSetWindowLongPtr(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD v14[5]; // [rsp+30h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwndEx(a1, 1LL, 1LL);
  v9 = 0LL;
  v10 = v4;
  if ( v4 )
  {
    v14[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v14;
    v14[1] = v4;
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    if ( (unsigned int)PsGetWin32KFilterSet(gptiCurrent, v5, v7) == 5 )
    {
      if ( a2 != -21 )
      {
        UserSetLastError(87LL);
        goto LABEL_4;
      }
      DesktopVerifyHeapRange(*(_QWORD *)(v10 + 24), *(_QWORD *)(v10 + 40), 320LL);
    }
    v9 = xxxSetWindowLongPtr((struct tagWND *)v10, 1);
LABEL_4:
    ThreadUnlock1(v12, v11);
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
