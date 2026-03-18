/*
 * XREFs of _GetSendMessageReceiver @ 0x1C020CEA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 */

__int64 __fastcall GetSendMessageReceiver(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rbp
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 result; // rax

  v1 = PtiFromThreadId(a1);
  v5 = v1;
  if ( !v1 || (v6 = *(_QWORD *)(gptiCurrent + 448LL), *(_QWORD *)(v1 + 448) != v6) )
  {
    v10 = 87LL;
    goto LABEL_16;
  }
  v7 = *(_QWORD *)(v1 + 416);
  v8 = *(_QWORD *)(gptiCurrent + 416LL);
  if ( (unsigned __int8)Enforced(v6) )
  {
    v9 = (unsigned __int8)CheckAccess(v8 + 872, v7 + 872);
  }
  else
  {
    if ( *(_DWORD *)(v8 + 772) == *(_DWORD *)(v7 + 772) && *(_DWORD *)(v8 + 776) == *(_DWORD *)(v7 + 776) )
      goto LABEL_11;
    v9 = 0;
  }
  if ( v9 )
  {
LABEL_11:
    v11 = *(_QWORD *)(v5 + 496);
    if ( !v11 )
      return 0LL;
    result = *(_QWORD *)(v11 + 112);
    if ( !result )
      return 0LL;
    v2 = *(_QWORD *)(result + 16);
    if ( *(_QWORD *)(v2 + 448) == *(_QWORD *)(gptiCurrent + 448LL) )
      return result;
    goto LABEL_10;
  }
  EtwTraceUIPIMsgError(*(_QWORD *)(gptiCurrent + 416LL), *(_QWORD *)(v5 + 416), 0LL, 0LL, 0LL);
LABEL_10:
  v10 = 5LL;
LABEL_16:
  UserSetLastError(v10, v2, v3, v4);
  return 0LL;
}
