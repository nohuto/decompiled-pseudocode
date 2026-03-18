/*
 * XREFs of VrpCleanupBufferParameter @ 0x140841C84
 * Callers:
 *     VrpPostEnumerateKey @ 0x140844004 (VrpPostEnumerateKey.c)
 *     VrpPostQueryKey @ 0x140844BE0 (VrpPostQueryKey.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VrpCleanupBufferParameter(char a1, PVOID *a2)
{
  if ( a1 == 1 && *a2 )
  {
    ExFreePoolWithTag(*a2, 0x67655256u);
    *a2 = 0LL;
  }
  return 0LL;
}
