/*
 * XREFs of ?ValidateChangeMessageFilter@@YAHPEAUtagPROCESSINFO@@I@Z @ 0x1C00D0864
 * Callers:
 *     _ChangeWindowMessageFilter @ 0x1C00D0430 (_ChangeWindowMessageFilter.c)
 *     _ChangeWindowMessageFilterEx @ 0x1C00D0644 (_ChangeWindowMessageFilterEx.c)
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

__int64 __fastcall ValidateChangeMessageFilter(struct tagPROCESSINFO *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx

  if ( *((_DWORD *)a1 + 220) <= 0x1000u )
  {
    UserSetLastError(5LL, a2, a3, a4);
    EtwTraceUIPISystemError(a1, 0LL, 3LL);
  }
  else
  {
    v5 = WORD1(a2);
    if ( !(_WORD)v5 )
      return 1LL;
    UserSetLastError(87LL, v5, a3, a4);
  }
  return 0LL;
}
