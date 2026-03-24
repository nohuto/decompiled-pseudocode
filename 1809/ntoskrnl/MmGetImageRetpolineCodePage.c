/*
 * XREFs of MmGetImageRetpolineCodePage @ 0x1406D0580
 * Callers:
 *     <none>
 * Callees:
 *     MiIsRetpolineEnabled @ 0x1400DA570 (MiIsRetpolineEnabled.c)
 *     MiLookupDataTableEntry @ 0x1400DA590 (MiLookupDataTableEntry.c)
 */

__int64 __fastcall MmGetImageRetpolineCodePage(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rdx
  PVOID v4; // rcx
  _QWORD *v5; // rax
  __int64 result; // rax

  if ( !MiIsRetpolineEnabled() || v4 == (PVOID)PsNtosImageBase || v4 == PsHalImageBase )
  {
    *v3 = 0LL;
    return 0LL;
  }
  else
  {
    v5 = MiLookupDataTableEntry((unsigned __int64)v4, 1);
    result = v5[6] + *((unsigned int *)v5 + 16) + (unsigned int)dword_140438E74;
    *a2 = (unsigned int)(dword_140438E60 << 12);
  }
  return result;
}
