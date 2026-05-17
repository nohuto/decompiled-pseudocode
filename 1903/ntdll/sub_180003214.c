/*
 * XREFs of sub_180003214 @ 0x180003214
 * Callers:
 *     sub_180002FD8 @ 0x180002FD8 (sub_180002FD8.c)
 *     sub_180003144 @ 0x180003144 (sub_180003144.c)
 *     sub_180009998 @ 0x180009998 (sub_180009998.c)
 *     sub_18008C038 @ 0x18008C038 (sub_18008C038.c)
 *     sub_1800CC464 @ 0x1800CC464 (sub_1800CC464.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EC2E0 (RtlpCleanupRegistryKeys.c)
 *     sub_180114328 @ 0x180114328 (sub_180114328.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180003214(_WORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 i; // r9
  __int64 result; // rax

  for ( i = a2; a2; --a2 )
  {
    if ( !*a1 )
      break;
    ++a1;
  }
  result = a2 == 0 ? 0xC000000D : 0;
  if ( a3 )
  {
    if ( a2 )
      *a3 = i - a2;
    else
      *a3 = 0LL;
  }
  return result;
}
