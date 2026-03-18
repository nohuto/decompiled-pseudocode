/*
 * XREFs of KiApplyProcessorErrata @ 0x1401B48C8
 * Callers:
 *     KiRestoreFeatureBits @ 0x140143784 (KiRestoreFeatureBits.c)
 *     KiSetFeatureBits @ 0x1405707EC (KiSetFeatureBits.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x140176B90 (HviIsAnyHypervisorPresent.c)
 */

void __fastcall KiApplyProcessorErrata(_BYTE *a1)
{
  char v2; // al
  unsigned __int8 v3; // cl

  if ( a1[141] == 1 )
  {
    v2 = a1[64];
    if ( v2 > 15 && v2 != 17 && !HviIsAnyHypervisorPresent() )
      __writemsr(0xC0011029, __readmsr(0xC0011029) | 2);
  }
  if ( a1[141] == 1 && a1[64] == 23 )
  {
    v3 = a1[67];
    if ( ((unsigned __int8)(v3 - 48) <= 0x1Fu || v3 >= 0x60u) && !HviIsAnyHypervisorPresent() )
      __writemsr(0xC001102E, __readmsr(0xC001102E) | 0x200000000LL);
  }
}
