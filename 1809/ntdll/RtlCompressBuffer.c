/*
 * XREFs of RtlCompressBuffer @ 0x180085BF0
 * Callers:
 *     EtwpWriteBufferCompressed @ 0x180001E58 (EtwpWriteBufferCompressed.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A3CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlCompressBuffer(unsigned __int16 a1)
{
  if ( (unsigned __int8)a1 < 2u )
    return 3221225485LL;
  if ( (unsigned __int8)a1 > 4u )
    return 3221226079LL;
  return RtlCompressBufferProcs[(unsigned __int8)a1](a1 & 0xFF00);
}
