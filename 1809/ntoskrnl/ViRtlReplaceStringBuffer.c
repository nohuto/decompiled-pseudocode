/*
 * XREFs of ViRtlReplaceStringBuffer @ 0x140943C5C
 * Callers:
 *     VerifierRtlAnsiStringToUnicodeString @ 0x140943690 (VerifierRtlAnsiStringToUnicodeString.c)
 *     VerifierRtlCreateUnicodeString @ 0x140943700 (VerifierRtlCreateUnicodeString.c)
 *     VerifierRtlDowncaseUnicodeString @ 0x140943780 (VerifierRtlDowncaseUnicodeString.c)
 *     VerifierRtlDuplicateUnicodeString @ 0x1409437D0 (VerifierRtlDuplicateUnicodeString.c)
 *     VerifierRtlOemStringToCountedUnicodeString @ 0x1409438B0 (VerifierRtlOemStringToCountedUnicodeString.c)
 *     VerifierRtlOemStringToUnicodeString @ 0x140943900 (VerifierRtlOemStringToUnicodeString.c)
 *     VerifierRtlUnicodeStringToAnsiString @ 0x1409439A0 (VerifierRtlUnicodeStringToAnsiString.c)
 *     VerifierRtlUnicodeStringToCountedOemString @ 0x1409439F0 (VerifierRtlUnicodeStringToCountedOemString.c)
 *     VerifierRtlUnicodeStringToOemString @ 0x140943A40 (VerifierRtlUnicodeStringToOemString.c)
 *     VerifierRtlUpcaseUnicodeString @ 0x140943AE0 (VerifierRtlUpcaseUnicodeString.c)
 *     VerifierRtlUpcaseUnicodeStringToAnsiString @ 0x140943B30 (VerifierRtlUpcaseUnicodeStringToAnsiString.c)
 *     VerifierRtlUpcaseUnicodeStringToCountedOemString @ 0x140943B80 (VerifierRtlUpcaseUnicodeStringToCountedOemString.c)
 *     VerifierRtlUpcaseUnicodeStringToOemString @ 0x140943BD0 (VerifierRtlUpcaseUnicodeStringToOemString.c)
 * Callees:
 *     memmove @ 0x1401D1440 (memmove.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     VeAllocatePoolWithTagPriority @ 0x140924F50 (VeAllocatePoolWithTagPriority.c)
 */

void __fastcall ViRtlReplaceStringBuffer(__int64 a1, _DWORD *a2, __int64 a3)
{
  unsigned __int16 v5; // ax
  unsigned int v6; // ebp
  PVOID PoolWithTagPriority; // rax
  PVOID v8; // rdi

  if ( (MmVerifierData & 9) != 0 )
  {
    v5 = *(_WORD *)(a1 + 2);
    if ( v5 )
    {
      v6 = v5;
      PoolWithTagPriority = VeAllocatePoolWithTagPriority((POOL_TYPE)129, v5, 0x72745356u, HighPoolPriority, a3);
      v8 = PoolWithTagPriority;
      if ( PoolWithTagPriority )
        memmove(PoolWithTagPriority, *(const void **)(a1 + 8), v6);
      else
        *a2 = -1073741801;
      ExFreePoolWithTag(*(PVOID *)(a1 + 8), 0);
      *(_QWORD *)(a1 + 8) = v8;
    }
  }
}
