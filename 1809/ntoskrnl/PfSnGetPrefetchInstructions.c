/*
 * XREFs of PfSnGetPrefetchInstructions @ 0x1406699D8
 * Callers:
 *     PfSnBeginScenario @ 0x140668444 (PfSnBeginScenario.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1400161B0 (RtlStringCbPrintfW.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     SmDecompressBuffer @ 0x1400E28BC (SmDecompressBuffer.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     NtClose @ 0x1405E99E0 (NtClose.c)
 *     NtOpenFile @ 0x14060C9C0 (NtOpenFile.c)
 *     NtReadFile @ 0x14063B160 (NtReadFile.c)
 *     NtQueryInformationFile @ 0x14063BA30 (NtQueryInformationFile.c)
 *     PfVerifyScenarioBuffer @ 0x140669CB0 (PfVerifyScenarioBuffer.c)
 */

__int64 __fastcall PfSnGetPrefetchInstructions(__int64 a1, int a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rbx
  UCHAR *v8; // r14
  unsigned int v9; // ebx
  wchar_t *PoolWithTag; // r15
  int v11; // ebx
  HANDLE v12; // rsi
  ULONG Length; // edi
  UCHAR *v14; // rax
  _DWORD *v15; // rdi
  _DWORD *v17; // [rsp+50h] [rbp-89h] BYREF
  HANDLE FileHandle; // [rsp+58h] [rbp-81h] BYREF
  unsigned int v19; // [rsp+60h] [rbp-79h] BYREF
  __int64 v20; // [rsp+68h] [rbp-71h] BYREF
  _BYTE v21[8]; // [rsp+70h] [rbp-69h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-61h] BYREF
  __int64 v23[2]; // [rsp+88h] [rbp-51h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-41h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-31h] BYREF
  _BYTE FileInformation[8]; // [rsp+D8h] [rbp-1h] BYREF
  ULONG NumberOfBytes; // [rsp+E0h] [rbp+7h]
  int NumberOfBytes_4; // [rsp+E4h] [rbp+Bh]

  CurrentThread = KeGetCurrentThread();
  v4 = -1LL;
  v17 = 0LL;
  FileHandle = 0LL;
  --CurrentThread->KernelApcDisable;
  v8 = 0LL;
  ExAcquirePushLockSharedEx((ULONG_PTR)qword_14043D138, 0LL);
  do
    ++v4;
  while ( word_14043CFD0[v4] );
  v9 = 2 * v4 + 102;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v9, 0x46506343u);
  if ( !PoolWithTag )
  {
    v11 = -1073741670;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)qword_14043D138, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)qword_14043D138);
    KeAbPostRelease((ULONG_PTR)qword_14043D138);
    KeLeaveCriticalRegion();
    goto LABEL_25;
  }
  RtlStringCbPrintfW(PoolWithTag, v9, L"%s\\%ws-%08X.%ws", word_14043CFD0, a1, *(_DWORD *)(a1 + 60), L"pf");
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)qword_14043D138, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)qword_14043D138);
  KeAbPostRelease((ULONG_PTR)qword_14043D138);
  KeLeaveCriticalRegion();
  RtlInitUnicodeString(&DestinationString, PoolWithTag);
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v11 = NtOpenFile(&FileHandle, 0x80100000, &ObjectAttributes, &IoStatusBlock, 0, 0x20u);
  if ( v11 < 0 )
  {
LABEL_25:
    v12 = FileHandle;
    goto LABEL_26;
  }
  v12 = FileHandle;
  v11 = NtQueryInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x18u, FileStandardInformation);
  if ( v11 < 0 )
  {
LABEL_26:
    v15 = v17;
    goto LABEL_16;
  }
  Length = NumberOfBytes;
  LODWORD(v20) = 0x10000000;
  if ( NumberOfBytes - 1 > 0xFFFFFFF || NumberOfBytes_4 )
  {
    v11 = -1073741823;
    goto LABEL_26;
  }
  v14 = (UCHAR *)ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x70506343u);
  v8 = v14;
  if ( !v14 )
  {
    v11 = -1073741670;
    goto LABEL_26;
  }
  v11 = NtReadFile(v12, 0LL, 0LL, 0LL, &IoStatusBlock, v14, Length, 0LL, 0LL);
  if ( v11 < 0 )
    goto LABEL_26;
  v23[0] = (__int64)PfSnScenarioAlloc;
  v23[1] = (__int64)SC_ENV::Free;
  v11 = SmDecompressBuffer(v8, Length, &v17, &v19, &v20, (__int64 (__fastcall **)(_QWORD))v23);
  if ( v11 < 0 )
    goto LABEL_26;
  v15 = v17;
  if ( (unsigned __int8)PfVerifyScenarioBuffer(v17, v19, v21) )
  {
    if ( v15[20] == a2 )
    {
      *a3 = v15;
      v15 = 0LL;
      v11 = 0;
    }
    else
    {
      v11 = -1073741823;
    }
  }
  else
  {
    v11 = -1073741701;
  }
LABEL_16:
  if ( v12 )
    NtClose(v12);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  return (unsigned int)v11;
}
