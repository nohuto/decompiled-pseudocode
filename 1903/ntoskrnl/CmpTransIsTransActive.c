/*
 * XREFs of CmpTransIsTransActive @ 0x14027FFCC
 * Callers:
 *     CmpReportNotifyHelper @ 0x14062D560 (CmpReportNotifyHelper.c)
 * Callees:
 *     CmpTransGetTransPtr @ 0x14082F29C (CmpTransGetTransPtr.c)
 */

__int64 __fastcall CmpTransIsTransActive(char a1)
{
  struct _KTRANSACTION *TransPtr; // rax

  if ( (a1 & 1) != 0 )
    return *(_DWORD *)CmpTransGetTransPtr() == 0;
  TransPtr = (struct _KTRANSACTION *)CmpTransGetTransPtr();
  return TmIsTransactionActive(TransPtr);
}
