/*
 * XREFs of MiSetRetpolineRoutines @ 0x1409F0574
 * Callers:
 *     MiApplyRetpolineFixupsToKernelAndHal @ 0x1409F0194 (MiApplyRetpolineFixupsToKernelAndHal.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14005EDB0 (RtlImageNtHeader.c)
 *     RtlLookupImageSectionByName @ 0x140187DA4 (RtlLookupImageSectionByName.c)
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
  qword_140464868 = &a1[*((unsigned int *)v3 + 3)];
  result = (v4 >> 12) + ((v4 & 0xFFF) != 0);
  dword_140464888 = (v4 >> 12) + ((v4 & 0xFFF) != 0);
  return result;
}
