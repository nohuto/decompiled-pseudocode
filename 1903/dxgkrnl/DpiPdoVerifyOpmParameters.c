/*
 * XREFs of DpiPdoVerifyOpmParameters @ 0x1C0151BEC
 * Callers:
 *     DpiPdoHandleOpmIoctls @ 0x1C015109C (DpiPdoHandleOpmIoctls.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiPdoVerifyOpmParameters(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v5; // rsi
  __int64 v7; // rax

  v3 = *(_QWORD *)(a1 + 184);
  v4 = 0;
  v5 = *(unsigned int *)(v3 + 24);
  if ( !*(_QWORD *)(v3 + 32) )
    goto LABEL_7;
  if ( *(_DWORD *)(v3 + 16) < (unsigned int)a2 )
  {
LABEL_8:
    v4 = -1073741789;
    v7 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v7 + 32) = -1073741789LL;
    goto LABEL_9;
  }
  if ( (_DWORD)a3 && !*(_QWORD *)(a1 + 112) )
  {
LABEL_7:
    v4 = -1073741811;
    v7 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v7 + 32) = -1073741811LL;
LABEL_9:
    *(_QWORD *)(v7 + 24) = v5;
    WdLogEvent5_WdError(v7);
    return v4;
  }
  if ( *(_DWORD *)(v3 + 8) < (unsigned int)a3 )
    goto LABEL_8;
  return v4;
}
