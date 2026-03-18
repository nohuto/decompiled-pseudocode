/*
 * XREFs of NtUserSetLayeredWindowAttributes @ 0x1C008C0D0
 * Callers:
 *     <none>
 * Callees:
 *     _SetLayeredWindowAttributes @ 0x1C002BD00 (_SetLayeredWindowAttributes.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     WindowHasShadow @ 0x1C008C214 (WindowHasShadow.c)
 *     UserSetLastStatus @ 0x1C0132458 (UserSetLastStatus.c)
 *     zzzUpdateShadowAlpha @ 0x1C0146168 (zzzUpdateShadowAlpha.c)
 */

__int64 __fastcall NtUserSetLayeredWindowAttributes(__int64 a1, unsigned int a2, BYTE a3, int a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  NTSTATUS v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdi
  __int64 v21; // [rsp+20h] [rbp-38h] BYREF
  __int64 v22; // [rsp+28h] [rbp-30h]
  __int64 v23; // [rsp+30h] [rbp-28h]

  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  v10 = 0LL;
  v11 = v8;
  if ( v8 )
  {
    v21 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v21;
    v22 = v8;
    HMLockObject(v8);
    if ( (a4 & 0xFFFFFFFC) != 0
      || (unsigned int)IsWindowDesktopComposed(v11) && (*(_DWORD *)(*(_QWORD *)(v11 + 40) + 232LL) & 0x20) != 0 )
    {
      UserSetLastError(87LL, v12, v13, v14);
    }
    else
    {
      v15 = SetLayeredWindowAttributes((struct tagWND *)v11, a2, a3, a4);
      if ( v15 >= 0 )
      {
        v19 = 1LL;
        if ( (a4 & 2) != 0 && (unsigned int)WindowHasShadow(v11) )
          zzzUpdateShadowAlpha(v11);
        goto LABEL_9;
      }
      UserSetLastStatus(v15);
    }
    v19 = 0LL;
LABEL_9:
    ThreadUnlock1(v17, v16, v18);
    v10 = v19;
  }
  UserSessionSwitchLeaveCrit(v9);
  return v10;
}
