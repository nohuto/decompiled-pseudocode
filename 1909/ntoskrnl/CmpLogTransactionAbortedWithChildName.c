/*
 * XREFs of CmpLogTransactionAbortedWithChildName @ 0x1406F010C
 * Callers:
 *     CmpCreateChild @ 0x140634398 (CmpCreateChild.c)
 *     CmpLogTransactionAbortedForRollbackPacket @ 0x1406BAB84 (CmpLogTransactionAbortedForRollbackPacket.c)
 *     CmpLogTransactionAborted @ 0x140831214 (CmpLogTransactionAborted.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     TraceLoggingProviderEnabled @ 0x14008B944 (TraceLoggingProviderEnabled.c)
 *     CmSiFreeMemory @ 0x14008CFE0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14008D0A0 (CmpAllocateTransientPoolWithTag.c)
 *     CmpFreeTransientPoolWithTag @ 0x1400CFDB0 (CmpFreeTransientPoolWithTag.c)
 *     RtlUnicodeStringCopy @ 0x1400CFDD0 (RtlUnicodeStringCopy.c)
 *     RtlUnicodeStringCat @ 0x14012C358 (RtlUnicodeStringCat.c)
 *     RtlUnicodeStringCatString @ 0x140191E04 (RtlUnicodeStringCatString.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x140729870 (CmpConstructNameFromKcbNameBlocks.c)
 *     CmpLogTransactionAbortedByName @ 0x140831234 (CmpLogTransactionAbortedByName.c)
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
  struct _LOOKASIDE_LIST_EX *v11; // r9
  UNICODE_STRING *v12; // rdi
  unsigned __int64 v13; // r8
  PCUNICODE_STRING p_DestinationString; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-10h] BYREF
  PCUNICODE_STRING SourceString; // [rsp+68h] [rbp+38h] BYREF

  SourceString = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( !a5 || !TraceLoggingProviderEnabled(&stru_140425BC0, 4u, 1uLL) )
  {
    Buffer = DestinationString.Buffer;
    goto LABEL_3;
  }
  v9 = CmpConstructNameFromKcbNameBlocks(a1, &SourceString);
  v12 = (UNICODE_STRING *)SourceString;
  if ( v9 < 0 )
    goto LABEL_13;
  if ( !a2 )
  {
    p_DestinationString = SourceString;
LABEL_12:
    CmpLogTransactionAbortedByName(p_DestinationString, a3, v10, a5);
    goto LABEL_13;
  }
  v13 = SourceString->Length + 2LL + a2->Length;
  if ( v13 <= 0xFFFF )
  {
    DestinationString.MaximumLength = SourceString->Length + 2 + a2->Length;
    DestinationString.Buffer = (wchar_t *)CmpAllocateTransientPoolWithTag(
                                            PagedPool,
                                            (unsigned __int16)v13,
                                            0x624E4D43u,
                                            v11);
    Buffer = DestinationString.Buffer;
    if ( !DestinationString.Buffer )
      goto LABEL_14;
    RtlUnicodeStringCopy(&DestinationString, v12);
    RtlUnicodeStringCatString(&DestinationString, L"\\");
    RtlUnicodeStringCat(&DestinationString, a2);
    p_DestinationString = &DestinationString;
    goto LABEL_12;
  }
LABEL_13:
  Buffer = DestinationString.Buffer;
LABEL_14:
  if ( v12 )
    CmpFreeTransientPoolWithTag(v12, 0x624E4D43u);
LABEL_3:
  if ( Buffer )
    CmSiFreeMemory((PPRIVILEGE_SET)Buffer);
}
