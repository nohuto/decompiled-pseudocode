/*
 * XREFs of ?_InsideArray@JsonWriter@@AEAAHXZ @ 0x180141980
 * Callers:
 *     ?Commit@JsonWriter@@QEAAJXZ @ 0x180141540 (-Commit@JsonWriter@@QEAAJXZ.c)
 *     ?EndArray@JsonWriter@@QEAAJXZ @ 0x180141590 (-EndArray@JsonWriter@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall JsonWriter::_InsideArray(JsonWriter *this)
{
  __int64 result; // rax

  if ( *((int *)this + 34) <= 0 )
    return 0LL;
  result = 1LL;
  if ( *((_DWORD *)this + *((int *)this + 34) + 1) != 1 )
    return 0LL;
  return result;
}
