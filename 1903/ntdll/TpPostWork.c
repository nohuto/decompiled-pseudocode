/*
 * XREFs of TpPostWork @ 0x180036570
 * Callers:
 *     sub_1800709A4 @ 0x1800709A4 (sub_1800709A4.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x1800FB910 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     sub_1800364D8 @ 0x1800364D8 (sub_1800364D8.c)
 *     sub_180038510 @ 0x180038510 (sub_180038510.c)
 */

__int64 __fastcall TpPostWork(struct _PEB_LDR_DATA *a1)
{
  __int64 result; // rax

  result = sub_1800364D8(a1, 0LL, 1LL);
  if ( (_DWORD)result )
    return sub_180038510(a1);
  return result;
}
