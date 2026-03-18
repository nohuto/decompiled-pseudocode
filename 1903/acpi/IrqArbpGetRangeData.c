/*
 * XREFs of IrqArbpGetRangeData @ 0x1C009F764
 * Callers:
 *     IrqArbPackResource @ 0x1C009F6C0 (IrqArbPackResource.c)
 * Callees:
 *     memset @ 0x1C0031D40 (memset.c)
 */

__int64 __fastcall IrqArbpGetRangeData(__int64 a1, PVOID *a2)
{
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+20h] [rbp-28h] BYREF
  PRTL_RANGE Range; // [rsp+60h] [rbp+18h] BYREF

  memset(&Iterator, 0, sizeof(Iterator));
  RtlGetFirstRange(qword_1C00815F0, &Iterator, &Range);
  while ( 1 )
  {
    if ( !Range )
      return 3221226021LL;
    if ( Range->Start == a1 )
      break;
    RtlGetNextRange(&Iterator, &Range, 1u);
  }
  *a2 = Range->UserData;
  return 0LL;
}
