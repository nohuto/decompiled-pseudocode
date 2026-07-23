/*
 * XREFs of ExpSystemErrorHandler2 @ 0x1405AE830
 * Callers:
 *     ExpSystemErrorHandler @ 0x1401CD5F0 (ExpSystemErrorHandler.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1400064D0 (PsGetCurrentServerSilo.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x1400E5090 (RtlInitAnsiString.c)
 *     RtlStringCbPrintfA @ 0x14018BBD4 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     strcat_s @ 0x1401A5F90 (strcat_s.c)
 *     strcpy_s @ 0x1401A6030 (strcpy_s.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PsQuerySystemDllInfo @ 0x1405C992C (PsQuerySystemDllInfo.c)
 *     RtlAnsiStringToUnicodeString @ 0x14063CAA0 (RtlAnsiStringToUnicodeString.c)
 *     RtlUnicodeStringToAnsiString @ 0x140653F20 (RtlUnicodeStringToAnsiString.c)
 *     RtlFindMessage @ 0x1406C58E0 (RtlFindMessage.c)
 *     RtlUnicodeStringToOemString @ 0x1406C8B10 (RtlUnicodeStringToOemString.c)
 *     RtlxUnicodeStringToOemSize @ 0x1406C9110 (RtlxUnicodeStringToOemSize.c)
 *     MmLockPagableSectionByHandle @ 0x1406D4160 (MmLockPagableSectionByHandle.c)
 *     RtlxUnicodeStringToAnsiSize @ 0x14070FB40 (RtlxUnicodeStringToAnsiSize.c)
 *     PoShutdownBugCheck @ 0x1408A87D0 (PoShutdownBugCheck.c)
 *     PsTerminateServerSilo @ 0x1408C4E30 (PsTerminateServerSilo.c)
 */

__int64 __fastcall ExpSystemErrorHandler2(
        ULONG_PTR BugCheckParameter1,
        unsigned int a2,
        int a3,
        _MESSAGE_RESOURCE_ENTRY *a4,
        char a5)
{
  ULONG v7; // r15d
  int v8; // eax
  unsigned int v9; // edi
  __int64 i; // rbx
  char *v11; // r14
  char *v12; // rsi
  char *v13; // rbx
  __int64 SystemDllInfo; // rax
  void *v15; // r10
  unsigned __int16 v16; // di
  char *PoolWithTag; // rax
  char *v18; // rax
  __int64 v19; // rdi
  BYTE *Text; // r13
  __int64 v21; // rax
  unsigned int v22; // r14d
  char *v23; // rax
  char *v24; // rax
  int j; // edi
  char *v26; // rbx
  unsigned __int64 CurrentServerSilo; // rax
  __int64 v28; // rcx
  int v30; // [rsp+40h] [rbp-208h]
  PMESSAGE_RESOURCE_ENTRY MessageResourceEntry; // [rsp+68h] [rbp-1E0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-1D8h] BYREF
  const char *v33; // [rsp+80h] [rbp-1C8h]
  _STRING SourceString; // [rsp+88h] [rbp-1C0h] BYREF
  _STRING v35; // [rsp+98h] [rbp-1B0h] BYREF
  _STRING DestinationString; // [rsp+A8h] [rbp-1A0h] BYREF
  ULONG_PTR BugCheckParameter2[5]; // [rsp+B8h] [rbp-190h] BYREF
  char pszFormat[32]; // [rsp+E0h] [rbp-168h] BYREF
  char pszDest[256]; // [rsp+100h] [rbp-148h] BYREF

  v7 = BugCheckParameter1;
  MessageResourceEntry = a4;
  *(_QWORD *)&DestinationString.Length = 0LL;
  *(_QWORD *)&SourceString.Length = 0LL;
  SourceString.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&v35.Length = 0LL;
  v35.Buffer = 0LL;
  v8 = 5;
  if ( a2 <= 5 )
    v8 = a2;
  v9 = v8;
  LODWORD(v33) = v8;
  pszFormat[0] = 0;
  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  memmove(BugCheckParameter2, a4, 8LL * v9);
  DestinationString.Buffer = 0LL;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v30 = i;
    if ( (unsigned int)i >= v9 )
      break;
    if ( _bittest(&a3, i) )
    {
      strcat_s(pszFormat, 0x20uLL, " %s");
      if ( RtlUnicodeStringToAnsiString(&DestinationString, *((PCUNICODE_STRING *)&a4->Length + i), 1u) < 0 )
        BugCheckParameter2[(unsigned int)i] = (ULONG_PTR)L"???";
      else
        BugCheckParameter2[(unsigned int)i] = (ULONG_PTR)DestinationString.Buffer;
    }
    else
    {
      strcat_s(pszFormat, 0x20uLL, " %x");
    }
  }
  strcat_s(pszFormat, 0x20uLL, "\n");
  v11 = pszFormat;
  v12 = "Unknown Hard Error";
  v13 = "Unknown Hard Error";
  SystemDllInfo = PsQuerySystemDllInfo(0LL);
  if ( SystemDllInfo )
  {
    v15 = *(void **)(SystemDllInfo + 24);
    if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess )
      v15 = *(void **)(SystemDllInfo + 32);
    if ( RtlFindMessage(v15, 0xBu, (_BYTE)NlsMbCodePageTag != 0 ? 0x409 : 0, v7, &MessageResourceEntry) < 0 )
    {
      v13 = "Unknown Hard Error";
      v11 = "Unknown Hard Error";
      goto LABEL_42;
    }
    if ( (MessageResourceEntry->Flags & 1) != 0 )
    {
      RtlInitUnicodeString(&UnicodeString, (PCWSTR)MessageResourceEntry->Text);
      v16 = RtlxUnicodeStringToAnsiSize(&UnicodeString);
      SourceString.Length = v16;
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v16 + 16LL, 0x20727245u);
      v13 = PoolWithTag;
      if ( !PoolWithTag )
      {
LABEL_20:
        v13 = "Unknown Hard Error";
        v18 = "Unknown Hard Error";
        v19 = -1LL;
        goto LABEL_28;
      }
      SourceString.MaximumLength = v16 + 16;
      SourceString.Buffer = PoolWithTag;
      if ( RtlUnicodeStringToAnsiString(&SourceString, &UnicodeString, 0) < 0 )
      {
        ExFreePoolWithTag(v13, 0);
        goto LABEL_20;
      }
      v19 = -1LL;
    }
    else
    {
      Text = MessageResourceEntry->Text;
      v19 = -1LL;
      v21 = -1LL;
      do
        ++v21;
      while ( Text[v21] );
      v22 = v21 + 16;
      v23 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(v21 + 16), 0x20727245u);
      v13 = v23;
      if ( !v23 )
      {
        v18 = "Unknown Hard Error";
        v13 = "Unknown Hard Error";
LABEL_28:
        if ( v13 == "Unknown Hard Error" )
        {
          j = v30;
        }
        else
        {
          v24 = v13;
          do
            ++v19;
          while ( v13[v19] );
          while ( (_DWORD)v19 && *v24 >= 32 )
          {
            ++v24;
            LODWORD(v19) = v19 - 1;
          }
          *v24 = 0;
          v18 = v24 + 1;
          for ( j = v19 - 1; j && *v18 && *v18 <= 32; --j )
            ++v18;
        }
        v11 = (char *)qword_1405A3200;
        if ( j )
          v11 = v18;
        goto LABEL_42;
      }
      strcpy_s(v23, v22, (const char *)Text);
    }
    v18 = pszFormat;
    goto LABEL_28;
  }
LABEL_42:
  if ( RtlStringCbPrintfA(pszDest, 0x100uLL, "\nSTOP: %lx %s\n", v7, v13) < 0 )
    RtlStringCbPrintfA(pszDest, 0x100uLL, "\nHardError %lx\n", v7);
  MmLockPagableSectionByHandle(ExPageLockHandle);
  v33 = "Unknown Hard Error";
  v26 = "Unknown Hard Error";
  MessageResourceEntry = (PMESSAGE_RESOURCE_ENTRY)"Unknown Hard Error";
  RtlInitAnsiString(&SourceString, pszDest);
  if ( RtlAnsiStringToUnicodeString(&UnicodeString, &SourceString, 1u) >= 0 )
  {
    v35.Length = RtlxUnicodeStringToOemSize(&UnicodeString);
    v35.MaximumLength = v35.Length;
    v12 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v35.Length, 0x20727245u);
    v35.Buffer = v12;
    v33 = v12;
    if ( v12 )
      RtlUnicodeStringToOemString(&v35, &UnicodeString, 0);
  }
  if ( RtlStringCbPrintfA(
         pszDest,
         0x100uLL,
         v11,
         BugCheckParameter2[0],
         BugCheckParameter2[1],
         BugCheckParameter2[2],
         BugCheckParameter2[3]) < 0 )
    RtlStringCbPrintfA(
      pszDest,
      0x100uLL,
      "Exception Processing Message %lx Parameters %Ix %Ix %Ix %Ix",
      v7,
      LODWORD(BugCheckParameter2[0]),
      LODWORD(BugCheckParameter2[1]),
      LODWORD(BugCheckParameter2[2]),
      LODWORD(BugCheckParameter2[3]));
  RtlInitAnsiString(&SourceString, pszDest);
  if ( RtlAnsiStringToUnicodeString(&UnicodeString, &SourceString, 1u) >= 0 )
  {
    v35.Length = RtlxUnicodeStringToOemSize(&UnicodeString);
    v35.MaximumLength = v35.Length;
    v26 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v35.Length, 0x20727245u);
    v35.Buffer = v26;
    if ( v26 )
      RtlUnicodeStringToOemString(&v35, &UnicodeString, 0);
  }
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( !CurrentServerSilo )
  {
    if ( a5 )
    {
      LOBYTE(v28) = 1;
      PoShutdownBugCheck(v28, 76LL, v7, BugCheckParameter2, v12, v26);
    }
    KeBugCheckEx(0x4Cu, v7, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v12, (ULONG_PTR)v26);
  }
  return PsTerminateServerSilo(CurrentServerSilo);
}
