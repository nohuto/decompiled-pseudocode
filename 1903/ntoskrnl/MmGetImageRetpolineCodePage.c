/*
 * XREFs of MmGetImageRetpolineCodePage @ 0x14077F7C0
 * Callers:
 *     <none>
 * Callees:
 *     MiIsRetpolineEnabled @ 0x140097E88 (MiIsRetpolineEnabled.c)
 *     MiLookupDataTableEntry @ 0x1400F78E8 (MiLookupDataTableEntry.c)
 */

__int64 __fastcall MmGetImageRetpolineCodePage(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rdx
  PVOID v4; // rcx
  __int64 v5; // rax
  __int64 result; // rax

  if ( !MiIsRetpolineEnabled() || v4 == PsNtosImageBase || v4 == PsHalImageBase )
  {
    *v3 = 0LL;
    return 0LL;
  }
  else
  {
    v5 = MiLookupDataTableEntry((unsigned __int64)v4, 1LL);
    result = *(_QWORD *)(v5 + 48) + *(unsigned int *)(v5 + 64) + (unsigned int)dword_1404648B0;
    *a2 = (unsigned int)(dword_140464888 << 12);
  }
  return result;
}
