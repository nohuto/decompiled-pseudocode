/*
 * XREFs of ValidateGestureCaller @ 0x1C01D8020
 * Callers:
 *     NtUserInjectGesture @ 0x1C01F1540 (NtUserInjectGesture.c)
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 */

__int64 __fastcall ValidateGestureCaller(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rcx

  v3 = *(_QWORD *)(a1 + 448);
  if ( v3 == grpdeskRitInput && v3 == *(_QWORD *)(a2 + 24) )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 416LL) + 872LL);
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 416) + 872LL);
    if ( !gbEnforceUIPI )
      return 1LL;
    if ( (unsigned int)v6 > (unsigned int)v5 )
      return 1LL;
    if ( (_DWORD)v6 == (_DWORD)v5 )
    {
      v7 = HIDWORD(v5);
      v8 = HIDWORD(v6);
      if ( (_DWORD)v8 == (_DWORD)v7 || (_DWORD)v8 == -1 || (_DWORD)v7 == -1 )
        return 1LL;
    }
    UserSetLastError(5LL, a2);
    EtwTraceUIPIMsgError(*(_QWORD *)(a1 + 416), *(_QWORD *)(*(_QWORD *)(a2 + 16) + 416LL), 281LL, 0LL, 0LL);
  }
  else
  {
    UserSetLastError(5LL, a2);
  }
  return 0LL;
}
