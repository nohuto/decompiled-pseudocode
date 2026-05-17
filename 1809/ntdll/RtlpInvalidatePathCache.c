/*
 * XREFs of RtlpInvalidatePathCache @ 0x1800836A0
 * Callers:
 *     RtlSetSearchPathMode @ 0x1800027B0 (RtlSetSearchPathMode.c)
 *     LdrSetDllDirectory @ 0x1800835A0 (LdrSetDllDirectory.c)
 *     LdrAddDllDirectory @ 0x18008F910 (LdrAddDllDirectory.c)
 *     LdrRemoveDllDirectory @ 0x18008FB10 (LdrRemoveDllDirectory.c)
 *     RtlpSignalSystemDirsModification @ 0x1800E09A0 (RtlpSignalSystemDirsModification.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpInvalidatePathCache(__int64 *a1)
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
