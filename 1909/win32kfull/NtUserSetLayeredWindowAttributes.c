/*
 * XREFs of NtUserSetLayeredWindowAttributes @ 0x1C001A6E0
 * Callers:
 *     <none>
 * Callees:
 *     WindowHasShadow @ 0x1C001A824 (WindowHasShadow.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     _SetLayeredWindowAttributes @ 0x1C0032170 (_SetLayeredWindowAttributes.c)
 *     UserSetLastStatus @ 0x1C010CF58 (UserSetLastStatus.c)
 *     zzzUpdateShadowAlpha @ 0x1C0146F18 (zzzUpdateShadowAlpha.c)
 */

__int64 __fastcall NtUserSetLayeredWindowAttributes(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rsi
  NTSTATUS v10; // eax
  __int64 v11; // rdi
  __int64 v13; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+28h] [rbp-30h]
  __int64 v15; // [rsp+30h] [rbp-28h]

  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v8 = 0LL;
  v9 = v6;
  if ( v6 )
  {
    v13 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v13;
    v14 = v6;
    HMLockObject(v6);
    if ( (a4 & 0xFFFFFFFC) != 0
      || (unsigned int)IsWindowDesktopComposed(v9) && (*(_DWORD *)(*(_QWORD *)(v9 + 40) + 232LL) & 0x20) != 0 )
    {
      UserSetLastError(87LL);
    }
    else
    {
      v10 = SetLayeredWindowAttributes((struct tagWND *)v9);
      if ( v10 >= 0 )
      {
        v11 = 1LL;
        if ( (a4 & 2) != 0 && (unsigned int)WindowHasShadow(v9) )
          zzzUpdateShadowAlpha(v9);
        goto LABEL_9;
      }
      UserSetLastStatus(v10);
    }
    v11 = 0LL;
LABEL_9:
    ThreadUnlock1();
    v8 = v11;
  }
  UserSessionSwitchLeaveCrit(v7);
  return v8;
}
