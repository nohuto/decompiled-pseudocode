/*
 * XREFs of sub_18007F040 @ 0x18007F040
 * Callers:
 *     LdrSetDllDirectory @ 0x18007EF40 (LdrSetDllDirectory.c)
 *     LdrAddDllDirectory @ 0x18008C200 (LdrAddDllDirectory.c)
 *     LdrRemoveDllDirectory @ 0x18008C400 (LdrRemoveDllDirectory.c)
 *     RtlSetSearchPathMode @ 0x1800DDC00 (RtlSetSearchPathMode.c)
 *     sub_1800DE268 @ 0x1800DE268 (sub_1800DE268.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18007F040(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
  {
    if ( (*(_QWORD *)(result + 80))-- != 1LL )
      return 0LL;
  }
  return result;
}
