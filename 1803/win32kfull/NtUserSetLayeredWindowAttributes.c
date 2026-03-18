/*
 * XREFs of NtUserSetLayeredWindowAttributes @ 0x1C007CBE0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C000AD50 (UserSetLastStatus.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     _SetLayeredWindowAttributes @ 0x1C007B700 (_SetLayeredWindowAttributes.c)
 *     WindowHasShadow @ 0x1C007CCEC (WindowHasShadow.c)
 *     zzzUpdateShadowAlpha @ 0x1C0119E48 (zzzUpdateShadowAlpha.c)
 */

__int64 __fastcall NtUserSetLayeredWindowAttributes(__int64 a1, unsigned int a2, BYTE a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  NTSTATUS v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int v17; // ebx
  _QWORD v19[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v10 = ValidateHwnd(a1);
  if ( v10 )
  {
    v19[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v19;
    v19[1] = v10;
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    if ( (a4 & 0xFFFFFFFC) != 0
      || (unsigned int)IsWindowDesktopComposed(v10) && (*(_DWORD *)(*(_QWORD *)(v10 + 40) + 232LL) & 0x20) != 0 )
    {
      UserSetLastError(87LL, v8);
      v17 = 0;
    }
    else
    {
      v13 = SetLayeredWindowAttributes((struct tagWND *)v10, a2, a3, a4);
      if ( v13 < 0 )
      {
        v17 = 0;
        UserSetLastStatus(v13, 1);
      }
      else
      {
        v17 = 1;
        if ( (a4 & 2) != 0 && (unsigned int)WindowHasShadow(v10) )
          zzzUpdateShadowAlpha(v10);
      }
    }
    ThreadUnlock1(v15, v14, v16);
  }
  else
  {
    v17 = 0;
  }
  UserSessionSwitchLeaveCrit(v9, v8, v11, v12);
  return v17;
}
