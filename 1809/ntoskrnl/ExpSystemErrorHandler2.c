/*
 * XREFs of ExpSystemErrorHandler2 @ 0x14057F930
 * Callers:
 *     ExpSystemErrorHandler @ 0x1401C7180 (ExpSystemErrorHandler.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x14004D270 (PsGetCurrentServerSilo.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x1400EEE10 (RtlInitAnsiString.c)
 *     RtlStringCbPrintfA @ 0x14017DFF4 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     strcat_s @ 0x14019B860 (strcat_s.c)
 *     strcpy_s @ 0x14019B900 (strcpy_s.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlAnsiStringToUnicodeString @ 0x1405ABDA0 (RtlAnsiStringToUnicodeString.c)
 *     MmLockPagableSectionByHandle @ 0x140620240 (MmLockPagableSectionByHandle.c)
 *     RtlUnicodeStringToAnsiString @ 0x14067CC90 (RtlUnicodeStringToAnsiString.c)
 *     RtlFindMessage @ 0x14067CF90 (RtlFindMessage.c)
 *     RtlxUnicodeStringToOemSize @ 0x14067D050 (RtlxUnicodeStringToOemSize.c)
 *     PsQuerySystemDllInfo @ 0x14068327C (PsQuerySystemDllInfo.c)
 *     RtlUnicodeStringToOemString @ 0x1406D1730 (RtlUnicodeStringToOemString.c)
 *     PoShutdownBugCheck @ 0x14086D120 (PoShutdownBugCheck.c)
 *     PsTerminateServerSilo @ 0x140887CD0 (PsTerminateServerSilo.c)
 */

__int64 __fastcall ExpSystemErrorHandler2(
        ULONG MessageId,
        unsigned int a2,
        int a3,
        _MESSAGE_RESOURCE_ENTRY *a4,
        char a5)
{
  int v8; // eax
  unsigned int v9; // edi
  __int64 i; // rbx
  char *Buffer; // rax
  char *v12; // r14
  char *v13; // rsi
  char *v14; // rdi
  __int64 SystemDllInfo; // rax
  void *v16; // r10
  unsigned __int16 v17; // bx
  char *PoolWithTag; // rax
  char *v19; // rax
  __int64 v20; // rbx
  BYTE *Text; // r13
  __int64 v22; // rax
  unsigned int v23; // r14d
  char *v24; // rax
  char *v25; // rax
  int j; // ebx
  char *v27; // rbx
  __int64 CurrentServerSilo; // rax
  __int64 v29; // rcx
  int v31; // [rsp+40h] [rbp-218h]
  NTSTATUS v32; // [rsp+50h] [rbp-208h]
  PMESSAGE_RESOURCE_ENTRY MessageResourceEntry; // [rsp+68h] [rbp-1F0h] BYREF
  const char *v34; // [rsp+70h] [rbp-1E8h]
  UNICODE_STRING UnicodeString; // [rsp+78h] [rbp-1E0h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+88h] [rbp-1D0h]
  _STRING SourceString; // [rsp+90h] [rbp-1C8h] BYREF
  _STRING v38; // [rsp+A0h] [rbp-1B8h] BYREF
  _STRING DestinationString; // [rsp+B0h] [rbp-1A8h] BYREF
  ULONG_PTR BugCheckParameter2[5]; // [rsp+C0h] [rbp-198h] BYREF
  char pszFormat[40]; // [rsp+E8h] [rbp-170h] BYREF
  char pszDest[256]; // [rsp+110h] [rbp-148h] BYREF

  LODWORD(BugCheckParameter1) = MessageId;
  MessageResourceEntry = a4;
  v8 = 5;
  if ( a2 <= 5 )
    v8 = a2;
  v9 = v8;
  LODWORD(v34) = v8;
  pszFormat[0] = 0;
  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  memmove(BugCheckParameter2, a4, 8LL * v9);
  DestinationString.Buffer = 0LL;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v31 = i;
    if ( (unsigned int)i >= v9 )
      break;
    if ( _bittest(&a3, i) )
    {
      strcat_s(pszFormat, 0x20uLL, " %s");
      v32 = RtlUnicodeStringToAnsiString(&DestinationString, *((PCUNICODE_STRING *)&a4->Length + i), 1u);
      Buffer = (char *)L"???";
      if ( v32 >= 0 )
        Buffer = DestinationString.Buffer;
      BugCheckParameter2[(unsigned int)i] = (ULONG_PTR)Buffer;
    }
    else
    {
      strcat_s(pszFormat, 0x20uLL, " %x");
    }
  }
  strcat_s(pszFormat, 0x20uLL, "\n");
  v12 = pszFormat;
  v13 = "Unknown Hard Error";
  v14 = "Unknown Hard Error";
  SystemDllInfo = PsQuerySystemDllInfo(0LL);
  if ( SystemDllInfo )
  {
    v16 = *(void **)(SystemDllInfo + 24);
    if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess )
      v16 = *(void **)(SystemDllInfo + 32);
    if ( RtlFindMessage(v16, 0xBu, (_BYTE)NlsMbCodePageTag != 0 ? 0x409 : 0, MessageId, &MessageResourceEntry) < 0 )
    {
      v14 = "Unknown Hard Error";
      v12 = "Unknown Hard Error";
      goto LABEL_43;
    }
    if ( (MessageResourceEntry->Flags & 1) != 0 )
    {
      RtlInitUnicodeString(&UnicodeString, (PCWSTR)MessageResourceEntry->Text);
      v17 = RtlxUnicodeStringToOemSize(&UnicodeString);
      SourceString.Length = v17;
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v17 + 16LL, 0x20727245u);
      v14 = PoolWithTag;
      if ( !PoolWithTag )
      {
LABEL_20:
        v19 = "Unknown Hard Error";
        v20 = -1LL;
LABEL_28:
        v14 = "Unknown Hard Error";
LABEL_29:
        if ( v14 == "Unknown Hard Error" )
        {
          j = v31;
        }
        else
        {
          v25 = v14;
          do
            ++v20;
          while ( v14[v20] );
          while ( (_DWORD)v20 && *v25 >= 32 )
          {
            ++v25;
            LODWORD(v20) = v20 - 1;
          }
          *v25 = 0;
          v19 = v25 + 1;
          for ( j = v20 - 1; j && *v19 && *v19 <= 32; --j )
            ++v19;
        }
        v12 = algn_140574B30;
        if ( j )
          v12 = v19;
        goto LABEL_43;
      }
      SourceString.MaximumLength = v17 + 16;
      SourceString.Buffer = PoolWithTag;
      if ( RtlUnicodeStringToAnsiString(&SourceString, &UnicodeString, 0) < 0 )
      {
        ExFreePoolWithTag(v14, 0);
        goto LABEL_20;
      }
      v20 = -1LL;
    }
    else
    {
      Text = MessageResourceEntry->Text;
      v20 = -1LL;
      v22 = -1LL;
      do
        ++v22;
      while ( Text[v22] );
      v23 = v22 + 16;
      v24 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(v22 + 16), 0x20727245u);
      v14 = v24;
      if ( !v24 )
      {
        v19 = "Unknown Hard Error";
        goto LABEL_28;
      }
      strcpy_s(v24, v23, (const char *)Text);
    }
    v19 = pszFormat;
    goto LABEL_29;
  }
LABEL_43:
  if ( RtlStringCbPrintfA(pszDest, 0x100uLL, "\nSTOP: %lx %s\n", MessageId, v14) < 0 )
    RtlStringCbPrintfA(pszDest, 0x100uLL, "\nHardError %lx\n", MessageId);
  MmLockPagableSectionByHandle(ExPageLockHandle);
  v34 = "Unknown Hard Error";
  v27 = "Unknown Hard Error";
  MessageResourceEntry = (PMESSAGE_RESOURCE_ENTRY)"Unknown Hard Error";
  RtlInitAnsiString(&SourceString, pszDest);
  if ( RtlAnsiStringToUnicodeString(&UnicodeString, &SourceString, 1u) >= 0 )
  {
    v38.Length = RtlxUnicodeStringToOemSize(&UnicodeString);
    v38.MaximumLength = v38.Length;
    v13 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v38.Length, 0x20727245u);
    v38.Buffer = v13;
    v34 = v13;
    if ( v13 )
      RtlUnicodeStringToOemString(&v38, &UnicodeString, 0);
  }
  if ( RtlStringCbPrintfA(
         pszDest,
         0x100uLL,
         v12,
         BugCheckParameter2[0],
         BugCheckParameter2[1],
         BugCheckParameter2[2],
         BugCheckParameter2[3]) < 0 )
    RtlStringCbPrintfA(
      pszDest,
      0x100uLL,
      "Exception Processing Message %lx Parameters %Ix %Ix %Ix %Ix",
      MessageId,
      LODWORD(BugCheckParameter2[0]),
      LODWORD(BugCheckParameter2[1]),
      LODWORD(BugCheckParameter2[2]),
      LODWORD(BugCheckParameter2[3]));
  RtlInitAnsiString(&SourceString, pszDest);
  if ( RtlAnsiStringToUnicodeString(&UnicodeString, &SourceString, 1u) >= 0 )
  {
    v38.Length = RtlxUnicodeStringToOemSize(&UnicodeString);
    v38.MaximumLength = v38.Length;
    v27 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v38.Length, 0x20727245u);
    v38.Buffer = v27;
    if ( v27 )
      RtlUnicodeStringToOemString(&v38, &UnicodeString, 0);
  }
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( !CurrentServerSilo )
  {
    if ( a5 )
    {
      LOBYTE(v29) = 1;
      PoShutdownBugCheck(v29, 76LL, (unsigned int)BugCheckParameter1, BugCheckParameter2, v13, v27);
    }
    KeBugCheckEx(0x4Cu, (unsigned int)BugCheckParameter1, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v13, (ULONG_PTR)v27);
  }
  return PsTerminateServerSilo(CurrentServerSilo);
}
