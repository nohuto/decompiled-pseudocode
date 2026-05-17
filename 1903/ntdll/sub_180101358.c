/*
 * XREFs of sub_180101358 @ 0x180101358
 * Callers:
 *     RtlCreateHeap @ 0x180049100 (RtlCreateHeap.c)
 *     sub_18004C420 @ 0x18004C420 (sub_18004C420.c)
 *     sub_1800F1080 @ 0x1800F1080 (sub_1800F1080.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180101358(__int64 (__fastcall *a1)())
{
  __int64 result; // rax
  unsigned __int16 v2; // dx
  bool v3; // zf

  LOWORD(result) = 0;
  while ( 1 )
  {
    v2 = result + 1;
    v3 = funcs_1800EFD70[(unsigned __int16)result] == a1;
    result = (unsigned __int16)(result + 1);
    if ( v3 )
      break;
    if ( v2 >= 2u )
      return 0LL;
  }
  return result;
}
