/*
 * XREFs of MiSetRetpolineRoutines @ 0x1409ABF7C
 * Callers:
 *     MiApplyRetpolineFixupsToKernelAndHal @ 0x1409D3744 (MiApplyRetpolineFixupsToKernelAndHal.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14009DA20 (RtlImageNtHeader.c)
 *     RtlLookupImageSectionByName @ 0x1402F4220 (RtlLookupImageSectionByName.c)
 */

__int64 __fastcall MiSetRetpolineRoutines(char *a1)
{
  PIMAGE_NT_HEADERS v2; // rax
  const char *v3; // rax
  unsigned int v4; // ecx
  __int64 result; // rax

  v2 = RtlImageNtHeader(a1);
  v3 = RtlLookupImageSectionByName((__int64)v2, "RETPOL");
  v4 = *((_DWORD *)v3 + 2);
  qword_140439F10 = &a1[*((unsigned int *)v3 + 3)];
  result = (v4 >> 12) + ((v4 & 0xFFF) != 0);
  dword_140439F20 = (v4 >> 12) + ((v4 & 0xFFF) != 0);
  return result;
}
