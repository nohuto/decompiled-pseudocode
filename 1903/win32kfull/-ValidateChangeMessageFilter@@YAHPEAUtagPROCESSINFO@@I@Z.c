/*
 * XREFs of ?ValidateChangeMessageFilter@@YAHPEAUtagPROCESSINFO@@I@Z @ 0x1C0087D0C
 * Callers:
 *     _ChangeWindowMessageFilter @ 0x1C0087660 (_ChangeWindowMessageFilter.c)
 *     _ChangeWindowMessageFilterEx @ 0x1C0087AE8 (_ChangeWindowMessageFilterEx.c)
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 */

__int64 __fastcall ValidateChangeMessageFilter(struct tagPROCESSINFO *a1, int a2)
{
  if ( *((_DWORD *)a1 + 218) <= 0x1000u )
  {
    UserSetLastError(5LL);
    EtwTraceUIPISystemError(a1, 0LL, 3LL);
  }
  else
  {
    if ( !HIWORD(a2) )
      return 1LL;
    UserSetLastError(87LL);
  }
  return 0LL;
}
