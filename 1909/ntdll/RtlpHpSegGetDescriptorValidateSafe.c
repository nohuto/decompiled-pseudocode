/*
 * XREFs of RtlpHpSegGetDescriptorValidateSafe @ 0x18010B280
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x18003AAA0 (RtlpAllocateHeapInternal.c)
 *     RtlpHpSizeHeap @ 0x180040320 (RtlpHpSizeHeap.c)
 *     RtlpHpFreeHeap @ 0x180040830 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x180040B50 (RtlpFreeHeapInternal.c)
 *     RtlpHpSegDescriptorValidate @ 0x180044E1C (RtlpHpSegDescriptorValidate.c)
 *     RtlpHpSegLfhVsCommit @ 0x180047370 (RtlpHpSegLfhVsCommit.c)
 * Callees:
 *     RtlpHeapExceptionFilter @ 0x18010A6B0 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlpHpSegGetDescriptorValidateSafe(__int64 a1, __int64 a2)
{
  __int64 v2; // r8

  v2 = a2 & *(_QWORD *)a1;
  if ( (a1 ^ v2 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v2 + 0x10)) == 0xA2E64EADA2E64EADuLL )
    return v2 + 32LL * ((unsigned int)(a2 - v2) >> *(_BYTE *)(a1 + 8));
  else
    return 0LL;
}
