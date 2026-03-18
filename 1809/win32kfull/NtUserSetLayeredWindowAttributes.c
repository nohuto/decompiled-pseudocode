/*
 * XREFs of NtUserSetLayeredWindowAttributes @ 0x1C0079CD0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     _SetLayeredWindowAttributes @ 0x1C0077A14 (_SetLayeredWindowAttributes.c)
 *     WindowHasShadow @ 0x1C0079DF8 (WindowHasShadow.c)
 *     UserSetLastStatus @ 0x1C00C8D04 (UserSetLastStatus.c)
 *     zzzUpdateShadowAlpha @ 0x1C0222DBC (zzzUpdateShadowAlpha.c)
 */

__int64 __fastcall NtUserSetLayeredWindowAttributes(__int64 a1, unsigned int a2, BYTE a3, int a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rsi
  NTSTATUS v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdi
  _QWORD v20[7]; // [rsp+20h] [rbp-38h] BYREF

  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  v13 = 0LL;
  v14 = v8;
  if ( v8 )
  {
    v20[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v20;
    v20[1] = v8;
    _InterlockedAdd((volatile signed __int32 *)(v8 + 8), 1u);
    if ( (a4 & 0xFFFFFFFC) != 0
      || (unsigned int)IsWindowDesktopComposed(v8) && (*(_DWORD *)(*(_QWORD *)(v14 + 40) + 232LL) & 0x20) != 0 )
    {
      UserSetLastError(87LL, v9, v11, v12);
    }
    else
    {
      v15 = SetLayeredWindowAttributes((struct tagWND *)v14, a2, a3, a4);
      if ( v15 >= 0 )
      {
        v18 = 1LL;
        if ( (a4 & 2) != 0 && (unsigned int)WindowHasShadow(v14) )
          zzzUpdateShadowAlpha(v14);
        goto LABEL_9;
      }
      UserSetLastStatus(v15);
    }
    v18 = 0LL;
LABEL_9:
    ThreadUnlock1(v17, v16);
    v13 = v18;
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v13;
}
