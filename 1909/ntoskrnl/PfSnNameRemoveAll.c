/*
 * XREFs of PfSnNameRemoveAll @ 0x14066AE00
 * Callers:
 *     PfFileInfoNotify @ 0x1400D10B0 (PfFileInfoNotify.c)
 * Callees:
 *     PfSnActiveTraceGetNext @ 0x1400D3254 (PfSnActiveTraceGetNext.c)
 *     PfSnNameRemove @ 0x1400D406C (PfSnNameRemove.c)
 *     PfSnLogStreamDelete @ 0x1406EF624 (PfSnLogStreamDelete.c)
 */

__int64 *__fastcall PfSnNameRemoveAll(__int64 a1)
{
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 *result; // rax
  struct _EX_RUNDOWN_REF *v4; // rbx

  for ( i = 0LL; ; i = v4 )
  {
    result = PfSnActiveTraceGetNext(i);
    v4 = (struct _EX_RUNDOWN_REF *)result;
    if ( !result )
      break;
    if ( (unsigned int)PfSnNameRemove((__int64)result, *(_RTL_BALANCED_NODE **)(a1 + 16)) )
      PfSnLogStreamDelete(a1, v4);
  }
  return result;
}
