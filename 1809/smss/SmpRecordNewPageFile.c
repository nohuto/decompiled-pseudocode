/*
 * XREFs of SmpRecordNewPageFile @ 0x1400098A8
 * Callers:
 *     SmpCreatePagingFile @ 0x14000982C (SmpCreatePagingFile.c)
 * Callees:
 *     SmpDeallocSavedRegistryEntry @ 0x1400097B8 (SmpDeallocSavedRegistryEntry.c)
 */

void __fastcall SmpRecordNewPageFile(PCUNICODE_STRING String2)
{
  struct _UNICODE_STRING *v1; // rbx
  LONG v3; // eax
  __int64 v4; // rdi
  _QWORD *Buffer; // rax

  v1 = (struct _UNICODE_STRING *)SmpExistingPageFilesList;
  if ( SmpExistingPageFilesList != &SmpExistingPageFilesList )
  {
    do
    {
      v3 = RtlCompareUnicodeString(v1 + 1, String2, 1u);
      v4 = *(_QWORD *)&v1->Length;
      if ( !v3 )
      {
        if ( *(struct _UNICODE_STRING **)(v4 + 8) != v1
          || (Buffer = v1->Buffer, (struct _UNICODE_STRING *)*Buffer != v1) )
        {
          __fastfail(3u);
        }
        *Buffer = v4;
        *(_QWORD *)(v4 + 8) = Buffer;
        SmpDeallocSavedRegistryEntry(v1);
      }
      v1 = (struct _UNICODE_STRING *)v4;
    }
    while ( (PVOID *)v4 != &SmpExistingPageFilesList );
  }
}
