/*
 * XREFs of ValidateGestureCaller @ 0x1C0214384
 * Callers:
 *     NtUserInjectGesture @ 0x1C0230690 (NtUserInjectGesture.c)
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 */

__int64 __fastcall ValidateGestureCaller(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9

  v5 = *(_QWORD *)(a1 + 448);
  if ( v5 == grpdeskRitInput && v5 == *(_QWORD *)(a2 + 24) )
  {
    if ( (unsigned __int8)CheckAccess(*(_QWORD *)(a1 + 416) + 872LL, *(_QWORD *)(*(_QWORD *)(a2 + 16) + 416LL) + 872LL) )
      return 1LL;
    UserSetLastError(5LL, v7, v8, v9);
    EtwTraceUIPIMsgError(*(_QWORD *)(a1 + 416), *(_QWORD *)(*(_QWORD *)(a2 + 16) + 416LL), 281LL, 0LL, 0LL);
  }
  else
  {
    UserSetLastError(5LL, v5, a3, a4);
  }
  return 0LL;
}
