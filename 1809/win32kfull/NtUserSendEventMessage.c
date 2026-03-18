/*
 * XREFs of NtUserSendEventMessage @ 0x1C0005AD0
 * Callers:
 *     <none>
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0071900 (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     PostEventMessageEx @ 0x1C00D4C3C (PostEventMessageEx.c)
 */

__int64 __fastcall NtUserSendEventMessage(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // ebx
  __int64 v13; // r9
  __int64 v14; // r9
  _QWORD v16[4]; // [rsp+40h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  v12 = 0;
  v13 = v8;
  if ( v8 )
  {
    v10 = *(_QWORD *)(v8 + 40);
    v9 = (*(_WORD *)(v10 + 42) & 0x2FFFu) - 669;
    if ( (v9 & 0xFFFFFFFD) != 0 )
    {
      v16[0] = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = v16;
      v16[1] = v8;
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
      if ( (unsigned int)IAMThreadAccessGranted() )
        v12 = PostEventMessageEx(*(struct tagTHREADINFO **)(v14 + 16), a2, a3, a4, 0LL);
      else
        UserSetLastError(5LL);
      ThreadUnlock1();
    }
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11, v13);
  return v12;
}
