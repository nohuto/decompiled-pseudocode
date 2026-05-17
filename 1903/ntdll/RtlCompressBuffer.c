/*
 * XREFs of RtlCompressBuffer @ 0x180080E20
 * Callers:
 *     sub_18010E4F4 @ 0x18010E4F4 (sub_18010E4F4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlCompressBuffer(unsigned __int16 a1)
{
  if ( (unsigned __int8)a1 < 2u )
    return 3221225485LL;
  if ( (unsigned __int8)a1 > 4u )
    return 3221226079LL;
  return qword_180118D90[(unsigned __int8)a1](a1 & 0xFF00);
}
