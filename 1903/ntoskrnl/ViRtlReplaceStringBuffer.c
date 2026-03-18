/*
 * XREFs of ViRtlReplaceStringBuffer @ 0x14098362C
 * Callers:
 *     VerifierRtlAnsiStringToUnicodeString @ 0x140983060 (VerifierRtlAnsiStringToUnicodeString.c)
 *     VerifierRtlCreateUnicodeString @ 0x1409830D0 (VerifierRtlCreateUnicodeString.c)
 *     VerifierRtlDowncaseUnicodeString @ 0x140983150 (VerifierRtlDowncaseUnicodeString.c)
 *     VerifierRtlDuplicateUnicodeString @ 0x1409831A0 (VerifierRtlDuplicateUnicodeString.c)
 *     VerifierRtlOemStringToCountedUnicodeString @ 0x140983280 (VerifierRtlOemStringToCountedUnicodeString.c)
 *     VerifierRtlOemStringToUnicodeString @ 0x1409832D0 (VerifierRtlOemStringToUnicodeString.c)
 *     VerifierRtlUnicodeStringToAnsiString @ 0x140983370 (VerifierRtlUnicodeStringToAnsiString.c)
 *     VerifierRtlUnicodeStringToCountedOemString @ 0x1409833C0 (VerifierRtlUnicodeStringToCountedOemString.c)
 *     VerifierRtlUnicodeStringToOemString @ 0x140983410 (VerifierRtlUnicodeStringToOemString.c)
 *     VerifierRtlUpcaseUnicodeString @ 0x1409834B0 (VerifierRtlUpcaseUnicodeString.c)
 *     VerifierRtlUpcaseUnicodeStringToAnsiString @ 0x140983500 (VerifierRtlUpcaseUnicodeStringToAnsiString.c)
 *     VerifierRtlUpcaseUnicodeStringToCountedOemString @ 0x140983550 (VerifierRtlUpcaseUnicodeStringToCountedOemString.c)
 *     VerifierRtlUpcaseUnicodeStringToOemString @ 0x1409835A0 (VerifierRtlUpcaseUnicodeStringToOemString.c)
 * Callees:
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     VeAllocatePoolWithTagPriority @ 0x140971F50 (VeAllocatePoolWithTagPriority.c)
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
