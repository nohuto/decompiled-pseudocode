/*
 * XREFs of _GetSendMessageReceiver @ 0x1C01F5F10
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

__int64 __fastcall GetSendMessageReceiver(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // r10
  __int64 v6; // r11
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  int v9; // eax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 result; // rax

  v1 = PtiFromThreadId(a1);
  v4 = v1;
  if ( !v1 || (v2 = *(_QWORD *)(gptiCurrent + 456LL), *(_QWORD *)(v1 + 456) != v2) )
  {
    v12 = 87LL;
    goto LABEL_22;
  }
  v5 = *(_QWORD *)(v1 + 424);
  v6 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( gbEnforceUIPI )
  {
    v7 = *(_QWORD *)(v5 + 880);
    v8 = *(_QWORD *)(v6 + 880);
    if ( (unsigned int)v8 > (unsigned int)v7
      || (_DWORD)v8 == (_DWORD)v7
      && ((v10 = HIDWORD(v7), v11 = HIDWORD(v8), (_DWORD)v11 == (_DWORD)v10)
       || (v3 = 0xFFFFFFFFLL, (_DWORD)v11 == -1)
       || (_DWORD)v10 == -1) )
    {
      v9 = 1;
      goto LABEL_14;
    }
  }
  else if ( *(_DWORD *)(v6 + 780) == *(_DWORD *)(v5 + 780) && *(_DWORD *)(v6 + 784) == *(_DWORD *)(v5 + 784) )
  {
    goto LABEL_17;
  }
  v9 = 0;
LABEL_14:
  if ( v9 )
  {
LABEL_17:
    v13 = *(_QWORD *)(v4 + 504);
    if ( !v13 )
      return 0LL;
    result = *(_QWORD *)(v13 + 112);
    if ( !result )
      return 0LL;
    if ( *(_QWORD *)(*(_QWORD *)(result + 16) + 456LL) == v2 )
      return result;
    goto LABEL_16;
  }
  EtwTraceUIPIMsgError(v6, v5, 0LL, 0LL, 0LL);
LABEL_16:
  v12 = 5LL;
LABEL_22:
  UserSetLastError(v12, v4, v2, v3);
  return 0LL;
}
