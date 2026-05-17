/*
 * XREFs of RtlpInvalidatePathCache @ 0x18007F6E0
 * Callers:
 *     LdrSetDllDirectory @ 0x18007F5E0 (LdrSetDllDirectory.c)
 *     LdrAddDllDirectory @ 0x18008C8A0 (LdrAddDllDirectory.c)
 *     LdrRemoveDllDirectory @ 0x18008CAA0 (LdrRemoveDllDirectory.c)
 *     RtlSetSearchPathMode @ 0x1800DDCC0 (RtlSetSearchPathMode.c)
 *     RtlpSignalSystemDirsModification @ 0x1800DE328 (RtlpSignalSystemDirsModification.c)
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
