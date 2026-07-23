/*
 * XREFs of IopInitializeBootLogging @ 0x140853614
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A07524 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C470 (ExAcquireResourceSharedLite.c)
 *     ExInitializeResourceLite @ 0x140047770 (ExInitializeResourceLite.c)
 *     IopVerifierExAllocatePool_0 @ 0x1400897F4 (IopVerifierExAllocatePool_0.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlAnsiStringToUnicodeString @ 0x14063FB50 (RtlAnsiStringToUnicodeString.c)
 *     RtlFindMessage @ 0x140675350 (RtlFindMessage.c)
 *     IopBootLog @ 0x14070B7F0 (IopBootLog.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x140762430 (RtlCreateUnicodeStringFromAsciiz.c)
 */

void __fastcall IopInitializeBootLogging(__int64 a1, __int64 a2)
{
  UNICODE_STRING *Pool_0; // rax
  UNICODE_STRING *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  wchar_t *Buffer; // rax
  PUNICODE_STRING v11; // r8
  unsigned __int16 Length; // ax
  unsigned __int16 v13; // ax
  PVOID *i; // rbx
  ANSI_STRING SourceString; // [rsp+30h] [rbp-10h] BYREF
  PMESSAGE_RESOURCE_ENTRY MessageResourceEntry; // [rsp+70h] [rbp+30h] BYREF

  *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
  if ( !qword_1409AD030 )
  {
    Pool_0 = (UNICODE_STRING *)IopVerifierExAllocatePool_0(NonPagedPoolNx, 0xB0uLL);
    qword_1409AD030 = Pool_0;
    v5 = Pool_0;
    if ( Pool_0 )
    {
      memset(Pool_0, 0, 0xB0uLL);
      ExInitializeResourceLite((PERESOURCE)&v5[4]);
      ExAcquireResourceExclusiveLite((PERESOURCE)&qword_1409AD030[4], 1u);
      v6 = *(_QWORD *)(a1 + 16);
      v7 = -1LL;
      if ( RtlFindMessage(*(PVOID *)(v6 + 48), 0xBu, 0, 0xB5u, &MessageResourceEntry) >= 0 )
      {
        v8 = -1LL;
        SourceString.Buffer = (char *)MessageResourceEntry->Text;
        do
          ++v8;
        while ( MessageResourceEntry->Text[v8] );
        SourceString.Length = v8;
        SourceString.MaximumLength = v8 + 1;
        RtlAnsiStringToUnicodeString(qword_1409AD030, &SourceString, 1u);
        if ( qword_1409AD030->Length > 4u )
        {
          v9 = (unsigned __int16)(qword_1409AD030->Length - 4);
          Buffer = qword_1409AD030->Buffer;
          qword_1409AD030->Length = v9;
          Buffer[v9 >> 1] = 0;
        }
      }
      if ( RtlFindMessage(*(PVOID *)(v6 + 48), 0xBu, 0, 0xB6u, &MessageResourceEntry) < 0 )
      {
        v11 = qword_1409AD030;
      }
      else
      {
        SourceString.Buffer = (char *)MessageResourceEntry->Text;
        do
          ++v7;
        while ( MessageResourceEntry->Text[v7] );
        SourceString.Length = v7;
        SourceString.MaximumLength = v7 + 1;
        RtlAnsiStringToUnicodeString(qword_1409AD030 + 1, &SourceString, 1u);
        v11 = qword_1409AD030;
        Length = qword_1409AD030[1].Length;
        if ( Length > 4u )
        {
          v13 = Length - 4;
          qword_1409AD030[1].Length = v13;
          v11[1].Buffer[(unsigned __int64)v13 >> 1] = 0;
        }
      }
      RtlCreateUnicodeStringFromAsciiz(v11 + 3, (PCSZ)(a2 + 1));
      ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
      for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
        IopBootLog((PCUNICODE_STRING)(i + 9), 1);
      ExReleaseResourceLite(&PsLoadedModuleResource);
      ExReleaseResourceLite((PERESOURCE)&qword_1409AD030[4]);
    }
  }
}
