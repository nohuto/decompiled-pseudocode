/*
 * XREFs of sub_18004CFFC @ 0x18004CFFC
 * Callers:
 *     sub_18004CF00 @ 0x18004CF00 (sub_18004CF00.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18004CFFC(__int64 a1, __int64 a2)
{
  if ( *(_QWORD *)a1 )
    return 0LL;
  else
    return RtlRunOnceExecuteOnce(
             (volatile signed __int64 *)(a1 + 8),
             (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, unsigned __int64 *))sub_18004EF60,
             a2,
             0LL);
}
