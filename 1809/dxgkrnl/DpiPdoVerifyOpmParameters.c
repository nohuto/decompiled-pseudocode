/*
 * XREFs of DpiPdoVerifyOpmParameters @ 0x1C0272A50
 * Callers:
 *     DpiPdoHandleOpmIoctls @ 0x1C027196C (DpiPdoHandleOpmIoctls.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiPdoVerifyOpmParameters(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v5; // rsi
  __int64 v6; // rax

  v3 = *(_QWORD *)(a1 + 184);
  v4 = 0;
  v5 = *(unsigned int *)(v3 + 24);
  if ( !*(_QWORD *)(v3 + 32) )
    goto LABEL_2;
  if ( *(_DWORD *)(v3 + 16) < a2 )
    goto LABEL_7;
  if ( a3 && !*(_QWORD *)(a1 + 112) )
  {
LABEL_2:
    v4 = -1073741811;
    v6 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v6 + 32) = -1073741811LL;
LABEL_8:
    *(_QWORD *)(v6 + 24) = v5;
    WdLogEvent5_WdError(v6);
    return v4;
  }
  if ( *(_DWORD *)(v3 + 8) < a3 )
  {
LABEL_7:
    v4 = -1073741789;
    v6 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v6 + 32) = -1073741789LL;
    goto LABEL_8;
  }
  return v4;
}
