/*
 * XREFs of ValidateGestureCaller @ 0x1C01FCE1C
 * Callers:
 *     NtUserInjectGesture @ 0x1C0218920 (NtUserInjectGesture.c)
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

__int64 __fastcall ValidateGestureCaller(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r8
  __int64 v7; // r8
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx

  v5 = *(_QWORD *)(a1 + 456);
  if ( v5 == grpdeskRitInput && v5 == *(_QWORD *)(a2 + 24) )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 424LL);
    v8 = *(_QWORD *)(v7 + 880);
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 424) + 880LL);
    if ( !gbEnforceUIPI )
      return 1LL;
    if ( (unsigned int)v9 > (unsigned int)v8 )
      return 1LL;
    if ( (_DWORD)v9 == (_DWORD)v8 )
    {
      v8 >>= 32;
      v10 = HIDWORD(v9);
      if ( (_DWORD)v10 == (_DWORD)v8 || (_DWORD)v10 == -1 || (_DWORD)v8 == -1 )
        return 1LL;
    }
    UserSetLastError(5LL, a2, v7, v8);
    EtwTraceUIPIMsgError(*(_QWORD *)(a1 + 424), *(_QWORD *)(*(_QWORD *)(a2 + 16) + 424LL), 281LL, 0LL, 0LL);
  }
  else
  {
    UserSetLastError(5LL, a2, v5, a4);
  }
  return 0LL;
}
