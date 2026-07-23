/*
 * XREFs of IopCreateArcNamesCd @ 0x1409D7910
 * Callers:
 *     IopCreateArcNames @ 0x1409D7694 (IopCreateArcNames.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     IofCallDriver @ 0x1400B8D30 (IofCallDriver.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     IopVerifierExAllocatePool_0 @ 0x1400DD8DC (IopVerifierExAllocatePool_0.c)
 *     IopBuildDeviceIoControlRequest @ 0x1400DDD70 (IopBuildDeviceIoControlRequest.c)
 *     RtlInitAnsiString @ 0x1400EEE10 (RtlInitAnsiString.c)
 *     RtlStringCchPrintfA @ 0x14018E100 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlAnsiStringToUnicodeString @ 0x1405ABDA0 (RtlAnsiStringToUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     IoGetDeviceObjectPointer @ 0x140663050 (IoGetDeviceObjectPointer.c)
 *     IoBuildSynchronousFsdRequest @ 0x1406640D0 (IoBuildSynchronousFsdRequest.c)
 *     IoCreateSymbolicLink @ 0x1406CCA90 (IoCreateSymbolicLink.c)
 *     IoGetConfigurationInformation @ 0x1407107C0 (IoGetConfigurationInformation.c)
 *     IopFetchConfigurationInformation @ 0x1409D7A3C (IopFetchConfigurationInformation.c)
 */

__int64 __fastcall IopCreateArcNamesCd(__int64 a1)
{
  _QWORD *v1; // rdi
  int v2; // r13d
  ULONG CdRomCount; // r14d
  int ConfigurationInformation; // eax
  PVOID v6; // rbx
  bool v7; // sf
  _QWORD *v8; // rax
  const WCHAR *v9; // r12
  bool v10; // si
  __int64 v11; // r10
  unsigned __int8 *v12; // rcx
  __int64 v13; // r9
  _QWORD *v14; // r11
  int v15; // r8d
  int v16; // edx
  char *Pool_0; // rdi
  int v19; // r15d
  int v20; // esi
  __int64 v21; // rax
  NTSTATUS DeviceObjectPointer; // esi
  struct _DEVICE_OBJECT *v23; // r15
  IRP *v24; // rax
  IRP *v25; // rax
  NTSTATUS Status; // eax
  unsigned __int64 v27; // rax
  __m128i v28; // xmm1
  __m128i v29; // xmm0
  __m128i v30; // xmm0
  __m128i v31; // xmm1
  int v32; // ecx
  int v33; // [rsp+58h] [rbp-B0h]
  PVOID P; // [rsp+60h] [rbp-A8h] BYREF
  struct _KEVENT Object; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-88h] BYREF
  _STRING SourceString; // [rsp+98h] [rbp-70h] BYREF
  PFILE_OBJECT FileObject; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD *v39; // [rsp+B0h] [rbp-58h]
  LARGE_INTEGER StartingOffset; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v41; // [rsp+C0h] [rbp-48h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C8h] [rbp-40h] BYREF
  UNICODE_STRING SymbolicLinkName; // [rsp+D8h] [rbp-30h] BYREF
  LARGE_INTEGER v44; // [rsp+E8h] [rbp-20h] BYREF
  char pszDest[128]; // [rsp+F8h] [rbp-10h] BYREF
  CHAR v46[128]; // [rsp+178h] [rbp+70h] BYREF
  __int64 retaddr; // [rsp+230h] [rbp+128h]

  v1 = *(_QWORD **)(a1 + 232);
  v2 = 0;
  v41 = a1;
  P = 0LL;
  CdRomCount = IoGetConfigurationInformation()->CdRomCount;
  SourceString = (_STRING)GUID_DEVINTERFACE_CDROM;
  ConfigurationInformation = IopFetchConfigurationInformation((PZZWSTR *)&P, (GUID *)&SourceString);
  v6 = P;
  v7 = ConfigurationInformation < 0;
  v8 = (_QWORD *)*v1;
  v9 = (const WCHAR *)P;
  v10 = v7;
  if ( (_QWORD *)*v1 == v1 )
    goto LABEL_9;
  v11 = *(_QWORD *)(a1 + 184);
  do
  {
    v12 = (unsigned __int8 *)v8[3];
    v13 = v11 - (_QWORD)v12;
    v39 = v8;
    v14 = v8;
    do
    {
      v15 = v12[v13];
      v16 = *v12 - v15;
      if ( v16 )
        break;
      ++v12;
    }
    while ( v15 );
    if ( !v16 )
      break;
    v8 = (_QWORD *)*v8;
    v14 = 0LL;
    v39 = 0LL;
  }
  while ( v8 != v1 );
  if ( !v14 )
    goto LABEL_9;
  Pool_0 = (char *)IopVerifierExAllocatePool_0(NonPagedPoolNxCacheAligned, 0x800uLL);
  if ( !Pool_0 )
    goto LABEL_9;
  v19 = 0;
  v33 = 0;
  if ( v10 )
    CdRomCount += 5;
  v20 = 0;
  if ( !CdRomCount )
    goto LABEL_49;
  while ( 1 )
  {
    if ( v9 && *v9 )
    {
      RtlInitUnicodeString(&DestinationString, v9);
      v21 = -1LL;
      do
        ++v21;
      while ( v9[v21] );
      v9 += v21 + 1;
      DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0x80u, &FileObject, (PDEVICE_OBJECT *)&P);
      if ( DeviceObjectPointer < 0 )
        goto LABEL_40;
      v23 = (struct _DEVICE_OBJECT *)P;
      v24 = (IRP *)IopBuildDeviceIoControlRequest(
                     2953344,
                     (__int64)P,
                     0LL,
                     0,
                     &v44,
                     0xCu,
                     0,
                     (__int64)&Object,
                     (__int64)&IoStatusBlock,
                     retaddr);
      if ( !v24 )
        goto LABEL_52;
      LOWORD(Object.Header.Lock) = 0;
      Object.Header.WaitListHead.Blink = &Object.Header.WaitListHead;
      Object.Header.Size = 6;
      Object.Header.WaitListHead.Flink = &Object.Header.WaitListHead;
      Object.Header.SignalState = 0;
      DeviceObjectPointer = IofCallDriver(v23, v24);
      if ( DeviceObjectPointer == 259 )
      {
        KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        DeviceObjectPointer = IoStatusBlock.Status;
      }
      if ( DeviceObjectPointer < 0
        || (RtlStringCchPrintfA(pszDest, 0x80uLL, "\\Device\\CdRom%d", v44.HighPart),
            RtlInitAnsiString(&SourceString, pszDest),
            DeviceObjectPointer = RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 1u),
            DeviceObjectPointer < 0) )
      {
LABEL_40:
        if ( v6 )
          ExFreePoolWithTag(v6, 0);
        goto LABEL_43;
      }
      v20 = 0;
    }
    else
    {
      RtlStringCchPrintfA(pszDest, 0x80uLL, "\\Device\\CdRom%d", v19);
      v33 = v19 + 1;
      RtlInitAnsiString(&SourceString, pszDest);
      if ( RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 1u) < 0 )
      {
LABEL_52:
        if ( v6 )
          ExFreePoolWithTag(v6, 0);
        DeviceObjectPointer = -1073741670;
LABEL_43:
        ExFreePoolWithTag(Pool_0, 0);
        return (unsigned int)DeviceObjectPointer;
      }
      if ( IoGetDeviceObjectPointer(&DestinationString, 0x80u, &FileObject, (PDEVICE_OBJECT *)&P) < 0 )
        goto LABEL_48;
      v23 = (struct _DEVICE_OBJECT *)P;
    }
    StartingOffset.QuadPart = 0x8000LL;
    v25 = IoBuildSynchronousFsdRequest(3u, v23, Pool_0, 0x800u, &StartingOffset, &Object, &IoStatusBlock);
    if ( v25 )
    {
      LOWORD(Object.Header.Lock) = 0;
      Object.Header.SignalState = 0;
      Object.Header.WaitListHead.Blink = &Object.Header.WaitListHead;
      Object.Header.WaitListHead.Flink = &Object.Header.WaitListHead;
      Object.Header.Size = 6;
      Status = IofCallDriver(v23, v25);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status >= 0 )
      {
        v27 = 0LL;
        v28 = 0LL;
        do
        {
          v29 = _mm_loadu_si128((const __m128i *)&Pool_0[4 * v27]);
          v27 += 4LL;
          v30 = _mm_add_epi32(v29, v28);
          v28 = v30;
        }
        while ( v27 < 0x200 );
        v31 = _mm_add_epi32(v30, _mm_srli_si128(v30, 8));
        v20 = _mm_cvtsi128_si32(_mm_add_epi32(v31, _mm_srli_si128(v31, 4)));
      }
    }
    ObfDereferenceObjectWithTag(FileObject, 0x746C6644u);
    v32 = v20 + *((_DWORD *)v39 + 8);
    v20 = 0;
    if ( !v32 )
      break;
    RtlFreeAnsiString(&DestinationString);
    if ( ++v2 >= CdRomCount )
      goto LABEL_49;
    v19 = v33;
  }
  RtlStringCchPrintfA(v46, 0x80uLL, "\\ArcName\\%s", *(const char **)(v41 + 184));
  RtlInitAnsiString(&SourceString, v46);
  DeviceObjectPointer = RtlAnsiStringToUnicodeString(&SymbolicLinkName, &SourceString, 1u);
  if ( DeviceObjectPointer < 0 )
  {
    ExFreePoolWithTag(Pool_0, 0);
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
    RtlFreeAnsiString(&DestinationString);
    return (unsigned int)DeviceObjectPointer;
  }
  IoCreateSymbolicLink(&SymbolicLinkName, &DestinationString);
  RtlFreeAnsiString(&SymbolicLinkName);
LABEL_48:
  RtlFreeAnsiString(&DestinationString);
LABEL_49:
  ExFreePoolWithTag(Pool_0, 0);
LABEL_9:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return 0LL;
}
