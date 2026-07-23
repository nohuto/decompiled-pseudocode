/*
 * XREFs of IopCreateArcNamesCd @ 0x1409F51F8
 * Callers:
 *     IopCreateArcNames @ 0x1409F5418 (IopCreateArcNames.c)
 * Callees:
 *     IofCallDriver @ 0x140037100 (IofCallDriver.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     IopVerifierExAllocatePool_0 @ 0x1400884F4 (IopVerifierExAllocatePool_0.c)
 *     IopBuildDeviceIoControlRequest @ 0x1400BB0E0 (IopBuildDeviceIoControlRequest.c)
 *     RtlInitAnsiString @ 0x1400E5090 (RtlInitAnsiString.c)
 *     RtlStringCchPrintfA @ 0x140189608 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x14063CAA0 (RtlAnsiStringToUnicodeString.c)
 *     IoGetDeviceObjectPointer @ 0x140661AF0 (IoGetDeviceObjectPointer.c)
 *     IoBuildSynchronousFsdRequest @ 0x1406D0C40 (IoBuildSynchronousFsdRequest.c)
 *     IoCreateSymbolicLink @ 0x14071B4E0 (IoCreateSymbolicLink.c)
 *     IoGetConfigurationInformation @ 0x14073B230 (IoGetConfigurationInformation.c)
 *     IopFetchConfigurationInformation @ 0x1409F5368 (IopFetchConfigurationInformation.c)
 */

__int64 __fastcall IopCreateArcNamesCd(__int64 a1)
{
  _QWORD *v1; // rdi
  int v2; // r13d
  ULONG CdRomCount; // r14d
  int ConfigurationInformation; // eax
  PVOID v6; // rbx
  const WCHAR *v7; // r12
  bool v8; // si
  _QWORD *v9; // rcx
  __int64 v10; // r10
  unsigned __int8 *v11; // rax
  __int64 v12; // r9
  _QWORD *v13; // r11
  int v14; // r8d
  int v15; // edx
  char *Pool_0; // rdi
  int v18; // r15d
  int v19; // esi
  __int64 v20; // rax
  NTSTATUS DeviceObjectPointer; // esi
  struct _DEVICE_OBJECT *v22; // r15
  IRP *v23; // rax
  IRP *v24; // rax
  NTSTATUS Status; // eax
  unsigned __int64 v26; // rax
  __m128i v27; // xmm1
  __m128i v28; // xmm0
  __m128i v29; // xmm0
  __m128i v30; // xmm1
  int v31; // ecx
  int v32; // [rsp+58h] [rbp-B0h]
  struct _KEVENT Object; // [rsp+60h] [rbp-A8h] BYREF
  PVOID P; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-88h] BYREF
  PFILE_OBJECT FileObject; // [rsp+90h] [rbp-78h] BYREF
  _QWORD *v37; // [rsp+98h] [rbp-70h]
  _STRING SourceString; // [rsp+A0h] [rbp-68h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B0h] [rbp-58h] BYREF
  UNICODE_STRING SymbolicLinkName; // [rsp+C0h] [rbp-48h] BYREF
  LARGE_INTEGER StartingOffset[2]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v42; // [rsp+E8h] [rbp-20h]
  _STRING v43; // [rsp+F0h] [rbp-18h] BYREF
  LARGE_INTEGER v44; // [rsp+100h] [rbp-8h] BYREF
  int v45; // [rsp+108h] [rbp+0h]
  char pszDest[128]; // [rsp+118h] [rbp+10h] BYREF
  CHAR v47[128]; // [rsp+198h] [rbp+90h] BYREF

  v1 = *(_QWORD **)(a1 + 232);
  v2 = 0;
  *(_QWORD *)&SourceString.Length = 0LL;
  SourceString.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&v43.Length = 0LL;
  v43.Buffer = 0LL;
  *(_QWORD *)&SymbolicLinkName.Length = 0LL;
  SymbolicLinkName.Buffer = 0LL;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(&Object, 0, sizeof(Object));
  v42 = a1;
  P = 0LL;
  CdRomCount = IoGetConfigurationInformation()->CdRomCount;
  v44.QuadPart = 0LL;
  v45 = 0;
  *(GUID *)&StartingOffset[0].LowPart = GUID_DEVINTERFACE_CDROM;
  ConfigurationInformation = IopFetchConfigurationInformation((PZZWSTR *)&P, (GUID *)StartingOffset);
  v6 = P;
  v7 = (const WCHAR *)P;
  v8 = ConfigurationInformation < 0;
  v9 = (_QWORD *)*v1;
  if ( (_QWORD *)*v1 == v1 )
    goto LABEL_9;
  v10 = *(_QWORD *)(a1 + 184);
  do
  {
    v11 = (unsigned __int8 *)v9[3];
    v12 = v10 - (_QWORD)v11;
    v37 = v9;
    v13 = v9;
    do
    {
      v14 = v11[v12];
      v15 = *v11 - v14;
      if ( v15 )
        break;
      ++v11;
    }
    while ( v14 );
    if ( !v15 )
      break;
    v9 = (_QWORD *)*v9;
    v13 = 0LL;
    v37 = 0LL;
  }
  while ( v9 != v1 );
  if ( !v13 )
    goto LABEL_9;
  Pool_0 = (char *)IopVerifierExAllocatePool_0(NonPagedPoolNxCacheAligned, 0x800uLL);
  if ( !Pool_0 )
    goto LABEL_9;
  v18 = 0;
  v32 = 0;
  if ( v8 )
    CdRomCount += 5;
  v19 = 0;
  if ( !CdRomCount )
    goto LABEL_49;
  while ( 1 )
  {
    if ( v7 && *v7 )
    {
      RtlInitUnicodeString(&DestinationString, v7);
      v20 = -1LL;
      do
        ++v20;
      while ( v7[v20] );
      v7 += v20 + 1;
      DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0x80u, &FileObject, (PDEVICE_OBJECT *)&P);
      if ( DeviceObjectPointer < 0 )
        goto LABEL_40;
      v22 = (struct _DEVICE_OBJECT *)P;
      v23 = (IRP *)IopBuildDeviceIoControlRequest(
                     2953344,
                     (int)P,
                     0LL,
                     0,
                     &v44,
                     0xCu,
                     0,
                     (__int64)&Object,
                     (__int64)&IoStatusBlock);
      if ( !v23 )
        goto LABEL_52;
      LOWORD(Object.Header.Lock) = 0;
      Object.Header.WaitListHead.Blink = &Object.Header.WaitListHead;
      Object.Header.Size = 6;
      Object.Header.WaitListHead.Flink = &Object.Header.WaitListHead;
      Object.Header.SignalState = 0;
      DeviceObjectPointer = IofCallDriver(v22, v23);
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
      v19 = 0;
    }
    else
    {
      RtlStringCchPrintfA(pszDest, 0x80uLL, "\\Device\\CdRom%d", v18);
      v32 = v18 + 1;
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
      v22 = (struct _DEVICE_OBJECT *)P;
    }
    StartingOffset[0].QuadPart = 0x8000LL;
    v24 = IoBuildSynchronousFsdRequest(3u, v22, Pool_0, 0x800u, StartingOffset, &Object, &IoStatusBlock);
    if ( v24 )
    {
      LOWORD(Object.Header.Lock) = 0;
      Object.Header.SignalState = 0;
      Object.Header.WaitListHead.Blink = &Object.Header.WaitListHead;
      Object.Header.WaitListHead.Flink = &Object.Header.WaitListHead;
      Object.Header.Size = 6;
      Status = IofCallDriver(v22, v24);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status >= 0 )
      {
        v26 = 0LL;
        v27 = 0LL;
        do
        {
          v28 = _mm_loadu_si128((const __m128i *)&Pool_0[4 * v26]);
          v26 += 4LL;
          v29 = _mm_add_epi32(v28, v27);
          v27 = v29;
        }
        while ( v26 < 0x200 );
        v30 = _mm_add_epi32(v29, _mm_srli_si128(v29, 8));
        v19 = _mm_cvtsi128_si32(_mm_add_epi32(v30, _mm_srli_si128(v30, 4)));
      }
    }
    ObfDereferenceObjectWithTag(FileObject, 0x746C6644u);
    v31 = v19 + *((_DWORD *)v37 + 8);
    v19 = 0;
    if ( !v31 )
      break;
    RtlFreeAnsiString(&DestinationString);
    if ( ++v2 >= CdRomCount )
      goto LABEL_49;
    v18 = v32;
  }
  RtlStringCchPrintfA(v47, 0x80uLL, "\\ArcName\\%s", *(const char **)(v42 + 184));
  RtlInitAnsiString(&v43, v47);
  DeviceObjectPointer = RtlAnsiStringToUnicodeString(&SymbolicLinkName, &v43, 1u);
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
