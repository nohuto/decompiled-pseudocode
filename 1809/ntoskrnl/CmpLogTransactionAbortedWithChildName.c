/*
 * XREFs of CmpLogTransactionAbortedWithChildName @ 0x1406D0908
 * Callers:
 *     CmpCreateChild @ 0x1405AC7A4 (CmpCreateChild.c)
 *     CmDeleteValueKey @ 0x1405B7634 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x1405CCE28 (CmSetValueKey.c)
 *     CmpPerformUnloadKey @ 0x140693550 (CmpPerformUnloadKey.c)
 *     CmpLogTransactionAbortedForRollbackPacket @ 0x1406D1470 (CmpLogTransactionAbortedForRollbackPacket.c)
 *     CmpSaveBootControlSet @ 0x1407E9AD0 (CmpSaveBootControlSet.c)
 *     CmRenameKey @ 0x1407EECF4 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1407F061C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1407F0AAC (CmSetLastWriteTimeKey.c)
 *     CmRestoreKey @ 0x1408025AC (CmRestoreKey.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1400129D8 (TraceLoggingProviderEnabled.c)
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x140013040 (CmpAllocateTransientPoolWithTag.c)
 *     CmpFreeTransientPoolWithTag @ 0x140017768 (CmpFreeTransientPoolWithTag.c)
 *     RtlUnicodeStringCopy @ 0x140017780 (RtlUnicodeStringCopy.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringCat @ 0x14012B59C (RtlUnicodeStringCat.c)
 *     RtlUnicodeStringCatString @ 0x140179EA4 (RtlUnicodeStringCatString.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x1407F1E34 (CmpConstructNameFromKcbNameBlocks.c)
 *     CmpLogTransactionAbortedByName @ 0x1407F9900 (CmpLogTransactionAbortedByName.c)
 */

void __fastcall CmpLogTransactionAbortedWithChildName(
        __int64 a1,
        const UNICODE_STRING *a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5)
{
  wchar_t *Buffer; // rbx
  int v9; // eax
  __int64 v10; // r8
  UNICODE_STRING *v11; // rdi
  unsigned __int64 v12; // r8
  PCUNICODE_STRING p_DestinationString; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-10h] BYREF
  PCUNICODE_STRING SourceString; // [rsp+68h] [rbp+38h] BYREF

  SourceString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( !a5 || !TraceLoggingProviderEnabled(&stru_140400AA0, 4u, 1uLL) )
  {
    Buffer = DestinationString.Buffer;
    goto LABEL_3;
  }
  v9 = CmpConstructNameFromKcbNameBlocks(a1, &SourceString);
  v11 = (UNICODE_STRING *)SourceString;
  if ( v9 < 0 )
    goto LABEL_13;
  if ( !a2 )
  {
    p_DestinationString = SourceString;
LABEL_12:
    CmpLogTransactionAbortedByName(p_DestinationString, a3, v10, a5);
    goto LABEL_13;
  }
  v12 = SourceString->Length + 2LL + a2->Length;
  if ( v12 <= 0xFFFF )
  {
    DestinationString.MaximumLength = SourceString->Length + 2 + a2->Length;
    DestinationString.Buffer = (wchar_t *)CmpAllocateTransientPoolWithTag(PagedPool, (unsigned __int16)v12, 0x624E4D43u);
    Buffer = DestinationString.Buffer;
    if ( !DestinationString.Buffer )
      goto LABEL_14;
    RtlUnicodeStringCopy(&DestinationString, v11);
    RtlUnicodeStringCatString(&DestinationString, L"\\");
    RtlUnicodeStringCat(&DestinationString, a2);
    p_DestinationString = &DestinationString;
    goto LABEL_12;
  }
LABEL_13:
  Buffer = DestinationString.Buffer;
LABEL_14:
  if ( v11 )
    CmpFreeTransientPoolWithTag(v11, 0x624E4D43u);
LABEL_3:
  if ( Buffer )
    CmSiFreeMemory((PPRIVILEGE_SET)Buffer);
}
