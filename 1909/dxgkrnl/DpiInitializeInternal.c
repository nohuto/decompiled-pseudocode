/*
 * XREFs of DpiInitializeInternal @ 0x1C00226F8
 * Callers:
 *     DpiInitialize @ 0x1C0022620 (DpiInitialize.c)
 *     DpiInitializeWin8 @ 0x1C0022640 (DpiInitializeWin8.c)
 * Callees:
 *     DpiInitializeEx @ 0x1C017E684 (DpiInitializeEx.c)
 */

__int64 __fastcall DpiInitializeInternal(void *a1, const UNICODE_STRING *a2, _QWORD *a3, char a4)
{
  __int64 v5; // rax

  if ( *(_DWORD *)a3 >= 0x104Eu
    && a3[1]
    && a3[2]
    && a3[3]
    && a3[4]
    && a3[5]
    && a3[6]
    && a3[7]
    && a3[8]
    && (a3[9] || a3[125])
    && a3[10]
    && a3[11]
    && a3[13]
    && a3[14] )
  {
    return DpiInitializeEx(a1, a2, a3, a4);
  }
  v5 = WdLogNewEntry5_WdError(a1, a2, a3);
  *(_QWORD *)(v5 + 24) = -1073741735LL;
  WdLogEvent5_WdError(v5);
  return 3221225561LL;
}
