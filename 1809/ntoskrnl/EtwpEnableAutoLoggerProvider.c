/*
 * XREFs of EtwpEnableAutoLoggerProvider @ 0x140724C98
 * Callers:
 *     EtwpEnumerateKeyProviders @ 0x140724B1C (EtwpEnumerateKeyProviders.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1400161B0 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlGUIDFromString @ 0x14059B5A0 (RtlGUIDFromString.c)
 *     RtlpQueryRegistryValues @ 0x1405C68AC (RtlpQueryRegistryValues.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     RtlNtStatusToDosError @ 0x140624F00 (RtlNtStatusToDosError.c)
 *     RtlWriteRegistryValue @ 0x1406C3500 (RtlWriteRegistryValue.c)
 *     EtwpEnableTrace @ 0x1407190F4 (EtwpEnableTrace.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x1407252B4 (EtwpGetAutoLoggerProviderFilter.c)
 */

__int64 __fastcall EtwpEnableAutoLoggerProvider(
        __int64 a1,
        unsigned int a2,
        const WCHAR *a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  WCHAR *PoolWithTag; // r13
  void *v8; // rsi
  void *v9; // r15
  void *v10; // r12
  void *v11; // r14
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rbx
  NTSTATUS RegistryValues; // eax
  const WCHAR *v17; // rdx
  __int64 v18; // rdi
  WCHAR *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r10
  __int64 v23; // rcx
  UNICODE_STRING *v24; // rdi
  __int64 *v25; // rbx
  __int64 v26; // rdi
  __int64 result; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  SIZE_T v30; // rdi
  NTSTATUS v31; // eax
  HANDLE v32; // rcx
  ULONG v33; // eax
  size_t Size; // [rsp+60h] [rbp-B0h]
  size_t v35; // [rsp+70h] [rbp-A0h]
  size_t v36; // [rsp+80h] [rbp-90h]
  HANDLE Handle; // [rsp+90h] [rbp-80h] BYREF
  int v38; // [rsp+98h] [rbp-78h] BYREF
  unsigned int v39; // [rsp+9Ch] [rbp-74h] BYREF
  int v40; // [rsp+A0h] [rbp-70h] BYREF
  char v41[4]; // [rsp+A4h] [rbp-6Ch] BYREF
  ULONG ValueData; // [rsp+A8h] [rbp-68h] BYREF
  int v43[2]; // [rsp+B0h] [rbp-60h]
  size_t v44; // [rsp+B8h] [rbp-58h] BYREF
  int v45; // [rsp+C0h] [rbp-50h] BYREF
  __int64 v46; // [rsp+C8h] [rbp-48h] BYREF
  void *Src; // [rsp+D0h] [rbp-40h] BYREF
  void *v48; // [rsp+D8h] [rbp-38h] BYREF
  void *v49; // [rsp+E0h] [rbp-30h] BYREF
  __int64 v50; // [rsp+E8h] [rbp-28h] BYREF
  HANDLE KeyHandle; // [rsp+F0h] [rbp-20h] BYREF
  unsigned int v52; // [rsp+F8h] [rbp-18h]
  __int64 v53; // [rsp+100h] [rbp-10h] BYREF
  PCWSTR SourceString; // [rsp+108h] [rbp-8h]
  __int64 v55; // [rsp+110h] [rbp+0h]
  __int64 v56; // [rsp+118h] [rbp+8h]
  int v57[2]; // [rsp+120h] [rbp+10h]
  __int64 v58[2]; // [rsp+128h] [rbp+18h] BYREF
  UNICODE_STRING v59; // [rsp+138h] [rbp+28h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+148h] [rbp+38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+178h] [rbp+68h] BYREF
  GUID cbDest; // [rsp+188h] [rbp+78h] BYREF
  UNICODE_STRING UnicodeString[4]; // [rsp+1A0h] [rbp+90h] BYREF
  int v64; // [rsp+1E0h] [rbp+D0h] BYREF
  int *v65; // [rsp+1E8h] [rbp+D8h]
  int v66; // [rsp+1F0h] [rbp+E0h] BYREF
  int *v67; // [rsp+1F8h] [rbp+E8h]
  int v68; // [rsp+200h] [rbp+F0h] BYREF
  char *v69; // [rsp+208h] [rbp+F8h]
  int v70; // [rsp+210h] [rbp+100h] BYREF
  unsigned int *v71; // [rsp+218h] [rbp+108h]
  int v72; // [rsp+220h] [rbp+110h] BYREF
  __int64 *v73; // [rsp+228h] [rbp+118h]
  int v74; // [rsp+230h] [rbp+120h] BYREF
  __int64 *v75; // [rsp+238h] [rbp+128h]
  _QWORD v76[148]; // [rsp+330h] [rbp+220h] BYREF

  v56 = a5;
  v52 = a2;
  PoolWithTag = 0LL;
  *(_QWORD *)v57 = a1;
  v38 = 0;
  *(_DWORD *)v41 = 0;
  v8 = 0LL;
  v39 = 0;
  v9 = 0LL;
  v40 = 0;
  v10 = 0LL;
  v46 = 0LL;
  v11 = 0LL;
  v53 = 0LL;
  ValueData = 0;
  KeyHandle = 0LL;
  Handle = 0LL;
  Src = 0LL;
  v45 = 0;
  v48 = 0LL;
  v49 = 0LL;
  v44 = 0LL;
  v50 = 0LL;
  v55 = a4;
  *(_QWORD *)v43 = a3;
  RtlInitUnicodeString(&DestinationString, a3);
  memset(v76, 0, 0x498uLL);
  memset(UnicodeString, 0, sizeof(UnicodeString));
  v12 = -1LL;
  v58[0] = 0LL;
  v58[1] = 0LL;
  v13 = -1LL;
  do
    ++v13;
  while ( *(_WORD *)(v55 + 2 * v13) );
  v14 = -1LL;
  do
    ++v14;
  while ( a3[v14] );
  *(_QWORD *)&cbDest.Data1 = (unsigned int)(2 * (v14 + v13) + 4);
  SourceString = (PCWSTR)ExAllocatePoolWithTag(PagedPool, cbDest.Data1, 0x50777445u);
  v15 = 4LL;
  if ( !SourceString )
    goto LABEL_32;
  if ( RtlStringCbPrintfW((NTSTRSAFE_PWSTR)SourceString, *(size_t *)&cbDest.Data1, L"%ws\\%ws", v55, *(_QWORD *)v43) )
    goto LABEL_32;
  RtlInitUnicodeString(&v59, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &v59;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes) < 0 )
    goto LABEL_32;
  if ( v56 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( *(_WORD *)(v56 + 2 * v29) );
    do
      ++v12;
    while ( *(_WORD *)(*(_QWORD *)v43 + 2 * v12) );
    v30 = (unsigned int)(2 * (v12 + v29) + 4);
    PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v30, 0x50777445u);
    if ( !PoolWithTag )
      goto LABEL_32;
    if ( !RtlStringCbPrintfW(PoolWithTag, (unsigned int)v30, L"%ws\\%ws", v56, *(_QWORD *)v43) )
    {
      RtlInitUnicodeString(&v59, PoolWithTag);
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &v59;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v31 = ZwOpenKey(&Handle, 0x2001Fu, &ObjectAttributes);
      v32 = Handle;
      if ( v31 < 0 )
        v32 = 0LL;
      Handle = v32;
    }
  }
  LODWORD(v76[4]) = 4;
  v76[0] = &EtwpQueryRegistryCallback;
  v76[7] = &EtwpQueryRegistryCallback;
  v76[3] = &v64;
  v76[14] = &EtwpQueryRegistryCallback;
  v76[2] = L"Enabled";
  v76[21] = &EtwpQueryRegistryCallback;
  v65 = &v38;
  v76[10] = &v66;
  v76[9] = L"EnableProperty";
  v67 = &v40;
  v76[17] = &v68;
  v76[16] = L"EnableLevel";
  v69 = v41;
  v76[24] = &v70;
  v76[23] = L"EnableFlags";
  v71 = &v39;
  v76[31] = &v72;
  v76[30] = L"MatchAnyKeyword";
  v73 = &v46;
  v76[38] = &v74;
  v76[37] = L"MatchAllKeyword";
  v76[28] = &EtwpQueryRegistryCallback;
  LODWORD(v76[32]) = 11;
  v72 = 11;
  v76[35] = &EtwpQueryRegistryCallback;
  LODWORD(v76[39]) = 11;
  v74 = 11;
  v75 = &v53;
  v64 = 4;
  LODWORD(v76[11]) = 4;
  v66 = 4;
  LODWORD(v76[18]) = 4;
  v68 = 4;
  LODWORD(v76[25]) = 4;
  v70 = 4;
  RegistryValues = RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)KeyHandle, (__int64)v76, 0LL);
  if ( RegistryValues < 0 )
    goto LABEL_75;
  v17 = (const WCHAR *)Handle;
  if ( Handle && !a6 )
  {
    LODWORD(v76[6]) = 4;
    v76[5] = &v38;
    LODWORD(v76[13]) = 4;
    v76[12] = &v40;
    LODWORD(v76[20]) = 4;
    v76[19] = v41;
    LODWORD(v76[27]) = 4;
    v76[26] = &v39;
    v76[33] = &v46;
    v76[40] = &v53;
    LODWORD(v76[34]) = 8;
    LODWORD(v76[41]) = 8;
    RegistryValues = RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)Handle, (__int64)v76, 0LL);
    v17 = (const WCHAR *)Handle;
  }
  if ( RegistryValues < 0 )
    goto LABEL_75;
  if ( v38 )
  {
    *(_QWORD *)v43 = 0LL;
    v18 = v52;
    v19 = PoolWithTag;
    if ( a6 )
      v19 = 0LL;
    if ( v52 )
      LOWORD(v43[0]) = v52;
    else
      LOWORD(v43[0]) = -1;
    EtwpGetAutoLoggerProviderFilter(
      SourceString,
      v19,
      UnicodeString,
      v58,
      &Src,
      &v45,
      &v48,
      (char *)&v44 + 4,
      &v49,
      &v44,
      &v50);
    RegistryValues = RtlGUIDFromString(&DestinationString, &cbDest);
    if ( RegistryValues < 0 )
    {
      v8 = Src;
      v9 = v48;
      v10 = v49;
      v11 = (void *)v50;
      goto LABEL_75;
    }
    v20 = *(_QWORD *)&cbDest.Data1 - 0x4FA775A3E02A841CLL;
    if ( *(_QWORD *)&cbDest.Data1 == 0x4FA775A3E02A841CLL )
      v20 = *(_QWORD *)cbDest.Data4 - 0x237F9BCF09AEC8AFLL;
    if ( !v20 )
      goto LABEL_55;
    v21 = *(_QWORD *)&cbDest.Data1 - s_ProviderThreatInt;
    if ( *(_QWORD *)&cbDest.Data1 == s_ProviderThreatInt )
      v21 = *(_QWORD *)cbDest.Data4 - 0x44D38D4D0F04D8F1LL;
    if ( v21 )
    {
      v22 = *(_QWORD *)v57;
    }
    else
    {
LABEL_55:
      v22 = *(_QWORD *)v57;
      if ( *(_QWORD *)v57 != EtwpHostSiloState )
        goto LABEL_73;
      if ( (unsigned int)v18 >= *(_DWORD *)(*(_QWORD *)v57 + 16LL) )
        v28 = 1LL;
      else
        v28 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v57 + 456LL) + 8 * v18);
      if ( (v28 & 1) != 0 )
        goto LABEL_25;
      if ( *(_QWORD *)(v28 + 176) )
      {
LABEL_73:
        v8 = Src;
        v9 = v48;
        v10 = v49;
        v11 = (void *)v50;
        goto LABEL_32;
      }
      _InterlockedOr((volatile signed __int32 *)(v28 + 832), 0x4000u);
    }
LABEL_25:
    v23 = v46;
    if ( !v46 )
    {
      v23 = v39;
      v46 = v39;
    }
    v11 = (void *)v50;
    v10 = v49;
    v9 = v48;
    v8 = Src;
    LODWORD(v35) = HIDWORD(v44);
    LODWORD(v36) = v44;
    LODWORD(Size) = v45;
    RegistryValues = EtwpEnableTrace(
                       v22,
                       (__int128 *)&cbDest,
                       0LL,
                       v43[0],
                       1,
                       v41[0],
                       v23,
                       v53,
                       v40,
                       (const void **)UnicodeString,
                       (const void **)v58,
                       Src,
                       Size,
                       v48,
                       v35,
                       v49,
                       v36,
                       v50);
    v17 = (const WCHAR *)Handle;
  }
  if ( RegistryValues < 0 )
  {
LABEL_75:
    v33 = RtlNtStatusToDosError(RegistryValues);
    v17 = (const WCHAR *)Handle;
    ValueData = v33;
  }
  if ( !v17 )
    v17 = (const WCHAR *)KeyHandle;
  RtlWriteRegistryValue(0x40000000u, v17, L"Status", 4u, &ValueData, 4u);
LABEL_32:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( SourceString )
    ExFreePoolWithTag((PVOID)SourceString, 0);
  if ( Handle )
    ZwClose(Handle);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  v24 = UnicodeString;
  do
  {
    RtlFreeAnsiString(v24++);
    --v15;
  }
  while ( v15 );
  v25 = v58;
  v26 = 2LL;
  result = 0LL;
  do
  {
    if ( *v25 )
    {
      ExFreePoolWithTag((PVOID)*v25, 0);
      result = 0LL;
    }
    ++v25;
    --v26;
  }
  while ( v26 );
  return result;
}
