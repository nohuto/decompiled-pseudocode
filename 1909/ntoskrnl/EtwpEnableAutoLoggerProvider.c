/*
 * XREFs of EtwpEnableAutoLoggerProvider @ 0x14074B208
 * Callers:
 *     EtwpEnumerateKeyProviders @ 0x14074B0B4 (EtwpEnumerateKeyProviders.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140004178 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0E90 (ZwOpenKey.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlGUIDFromString @ 0x1405C1AC0 (RtlGUIDFromString.c)
 *     RtlpQueryRegistryValues @ 0x1405C1D18 (RtlpQueryRegistryValues.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     RtlNtStatusToDosError @ 0x1406B8430 (RtlNtStatusToDosError.c)
 *     RtlWriteRegistryValue @ 0x1406E41C0 (RtlWriteRegistryValue.c)
 *     EtwpEnableTrace @ 0x1407193F4 (EtwpEnableTrace.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x14074B858 (EtwpGetAutoLoggerProviderFilter.c)
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
  __int64 v18; // rsi
  WCHAR *v19; // rdx
  wchar_t *v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r10
  __int64 v24; // rcx
  UNICODE_STRING *v25; // rdi
  __int64 *v26; // rbx
  __int64 v27; // rdi
  __int64 result; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  SIZE_T v31; // rdi
  NTSTATUS v32; // eax
  HANDLE v33; // rcx
  ULONG v34; // eax
  size_t Size; // [rsp+60h] [rbp-B0h]
  size_t v36; // [rsp+70h] [rbp-A0h]
  size_t v37; // [rsp+80h] [rbp-90h]
  wchar_t *SourceString; // [rsp+90h] [rbp-80h]
  HANDLE Handle; // [rsp+98h] [rbp-78h] BYREF
  int v40; // [rsp+A0h] [rbp-70h] BYREF
  unsigned int v41; // [rsp+A4h] [rbp-6Ch] BYREF
  int v42; // [rsp+A8h] [rbp-68h] BYREF
  char v43[4]; // [rsp+ACh] [rbp-64h] BYREF
  ULONG ValueData; // [rsp+B0h] [rbp-60h] BYREF
  int v45[2]; // [rsp+B8h] [rbp-58h]
  size_t v46; // [rsp+C0h] [rbp-50h] BYREF
  int v47; // [rsp+C8h] [rbp-48h] BYREF
  __int64 v48; // [rsp+D0h] [rbp-40h] BYREF
  void *Src; // [rsp+D8h] [rbp-38h] BYREF
  void *v50; // [rsp+E0h] [rbp-30h] BYREF
  void *v51; // [rsp+E8h] [rbp-28h] BYREF
  __int64 v52; // [rsp+F0h] [rbp-20h] BYREF
  HANDLE KeyHandle; // [rsp+F8h] [rbp-18h] BYREF
  unsigned int v54; // [rsp+100h] [rbp-10h]
  __int64 v55; // [rsp+108h] [rbp-8h] BYREF
  __int64 v56; // [rsp+110h] [rbp+0h]
  __int64 v57; // [rsp+118h] [rbp+8h]
  int v58[2]; // [rsp+120h] [rbp+10h]
  UNICODE_STRING v59; // [rsp+128h] [rbp+18h] BYREF
  __int64 v60[2]; // [rsp+138h] [rbp+28h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+148h] [rbp+38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+178h] [rbp+68h] BYREF
  GUID cbDest; // [rsp+188h] [rbp+78h] BYREF
  UNICODE_STRING UnicodeString[4]; // [rsp+1A0h] [rbp+90h] BYREF
  int v65; // [rsp+1E0h] [rbp+D0h] BYREF
  int *v66; // [rsp+1E8h] [rbp+D8h]
  int v67; // [rsp+1F0h] [rbp+E0h] BYREF
  int *v68; // [rsp+1F8h] [rbp+E8h]
  int v69; // [rsp+200h] [rbp+F0h] BYREF
  char *v70; // [rsp+208h] [rbp+F8h]
  int v71; // [rsp+210h] [rbp+100h] BYREF
  unsigned int *v72; // [rsp+218h] [rbp+108h]
  int v73; // [rsp+220h] [rbp+110h] BYREF
  __int64 *v74; // [rsp+228h] [rbp+118h]
  int v75; // [rsp+230h] [rbp+120h] BYREF
  __int64 *v76; // [rsp+238h] [rbp+128h]
  _QWORD v77[148]; // [rsp+330h] [rbp+220h] BYREF

  v57 = a5;
  v54 = a2;
  *(_QWORD *)v58 = a1;
  v56 = a4;
  *(_QWORD *)v45 = a3;
  PoolWithTag = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v40 = 0;
  *(_DWORD *)v43 = 0;
  v41 = 0;
  v42 = 0;
  v48 = 0LL;
  v55 = 0LL;
  ValueData = 0;
  KeyHandle = 0LL;
  Handle = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  Src = 0LL;
  *(_QWORD *)&v59.Length = 0LL;
  v59.Buffer = 0LL;
  v8 = 0LL;
  v47 = 0;
  v9 = 0LL;
  v50 = 0LL;
  v10 = 0LL;
  v51 = 0LL;
  v11 = 0LL;
  v46 = 0LL;
  v52 = 0LL;
  RtlInitUnicodeString(&DestinationString, a3);
  memset(v77, 0, 0x498uLL);
  memset(UnicodeString, 0, sizeof(UnicodeString));
  v12 = -1LL;
  v60[0] = 0LL;
  v60[1] = 0LL;
  v13 = -1LL;
  do
    ++v13;
  while ( *(_WORD *)(v56 + 2 * v13) );
  v14 = -1LL;
  do
    ++v14;
  while ( a3[v14] );
  *(_QWORD *)&cbDest.Data1 = (unsigned int)(2 * (v14 + v13) + 4);
  SourceString = (wchar_t *)ExAllocatePoolWithTag(PagedPool, cbDest.Data1, 0x50777445u);
  v15 = 4LL;
  if ( !SourceString )
  {
    v20 = 0LL;
    goto LABEL_33;
  }
  if ( RtlStringCbPrintfW(SourceString, *(size_t *)&cbDest.Data1, L"%ws\\%ws", v56, *(_QWORD *)v45) )
    goto LABEL_32;
  RtlInitUnicodeString(&v59, SourceString);
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &v59;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes) < 0 )
    goto LABEL_32;
  if ( v57 )
  {
    v30 = -1LL;
    do
      ++v30;
    while ( *(_WORD *)(v57 + 2 * v30) );
    do
      ++v12;
    while ( *(_WORD *)(*(_QWORD *)v45 + 2 * v12) );
    v31 = (unsigned int)(2 * (v12 + v30) + 4);
    PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v31, 0x50777445u);
    if ( PoolWithTag )
    {
      if ( !RtlStringCbPrintfW(PoolWithTag, (unsigned int)v31, L"%ws\\%ws", v57, *(_QWORD *)v45) )
      {
        RtlInitUnicodeString(&v59, PoolWithTag);
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &v59;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v32 = ZwOpenKey(&Handle, 0x2001Fu, &ObjectAttributes);
        v33 = Handle;
        if ( v32 < 0 )
          v33 = 0LL;
        Handle = v33;
      }
      goto LABEL_9;
    }
LABEL_32:
    v20 = SourceString;
    goto LABEL_33;
  }
LABEL_9:
  LODWORD(v77[4]) = 4;
  v77[0] = &EtwpQueryRegistryCallback;
  v77[7] = &EtwpQueryRegistryCallback;
  v77[3] = &v65;
  v77[14] = &EtwpQueryRegistryCallback;
  v77[2] = L"Enabled";
  v77[21] = &EtwpQueryRegistryCallback;
  v66 = &v40;
  v77[10] = &v67;
  v77[9] = L"EnableProperty";
  v68 = &v42;
  v77[17] = &v69;
  v77[16] = L"EnableLevel";
  v70 = v43;
  v77[24] = &v71;
  v77[23] = L"EnableFlags";
  v72 = &v41;
  v77[31] = &v73;
  v77[30] = L"MatchAnyKeyword";
  v74 = &v48;
  v77[38] = &v75;
  v77[37] = L"MatchAllKeyword";
  v77[28] = &EtwpQueryRegistryCallback;
  LODWORD(v77[32]) = 11;
  v73 = 11;
  v77[35] = &EtwpQueryRegistryCallback;
  LODWORD(v77[39]) = 11;
  v75 = 11;
  v76 = &v55;
  v65 = 4;
  LODWORD(v77[11]) = 4;
  v67 = 4;
  LODWORD(v77[18]) = 4;
  v69 = 4;
  LODWORD(v77[25]) = 4;
  v71 = 4;
  RegistryValues = RtlpQueryRegistryValues(0x40000000u, (const WCHAR *)KeyHandle, (__int64)v77, 0LL);
  if ( RegistryValues < 0 )
    goto LABEL_76;
  v17 = (const WCHAR *)Handle;
  if ( Handle && !a6 )
  {
    LODWORD(v77[6]) = 4;
    v77[5] = &v40;
    LODWORD(v77[13]) = 4;
    v77[12] = &v42;
    LODWORD(v77[20]) = 4;
    v77[19] = v43;
    LODWORD(v77[27]) = 4;
    v77[26] = &v41;
    v77[33] = &v48;
    v77[40] = &v55;
    LODWORD(v77[34]) = 8;
    LODWORD(v77[41]) = 8;
    RegistryValues = RtlpQueryRegistryValues(0x40000000u, (const WCHAR *)Handle, (__int64)v77, 0LL);
    v17 = (const WCHAR *)Handle;
  }
  if ( RegistryValues < 0 )
    goto LABEL_76;
  if ( !v40 )
    goto LABEL_28;
  v18 = v54;
  *(_QWORD *)v45 = 0LL;
  v19 = PoolWithTag;
  *(_QWORD *)&cbDest.Data1 = 0LL;
  if ( a6 )
    v19 = 0LL;
  *(_QWORD *)cbDest.Data4 = 0LL;
  if ( v54 )
    LOWORD(v45[0]) = v54;
  else
    LOWORD(v45[0]) = -1;
  v20 = SourceString;
  EtwpGetAutoLoggerProviderFilter(
    SourceString,
    v19,
    UnicodeString,
    v60,
    &Src,
    &v47,
    &v50,
    (char *)&v46 + 4,
    &v51,
    &v46,
    &v52);
  RegistryValues = RtlGUIDFromString(&DestinationString, &cbDest);
  if ( RegistryValues < 0 )
  {
    v8 = Src;
    v9 = v50;
    v10 = v51;
    v11 = (void *)v52;
    goto LABEL_76;
  }
  v21 = *(_QWORD *)&cbDest.Data1 - 0x4FA775A3E02A841CLL;
  if ( *(_QWORD *)&cbDest.Data1 == 0x4FA775A3E02A841CLL )
    v21 = *(_QWORD *)cbDest.Data4 - 0x237F9BCF09AEC8AFLL;
  if ( v21 )
  {
    v22 = *(_QWORD *)&cbDest.Data1 - s_ProviderThreatInt;
    if ( *(_QWORD *)&cbDest.Data1 == s_ProviderThreatInt )
      v22 = *(_QWORD *)cbDest.Data4 - 0x44D38D4D0F04D8F1LL;
    if ( v22 )
    {
      v23 = *(_QWORD *)v58;
LABEL_25:
      v24 = v48;
      if ( !v48 )
      {
        v24 = v41;
        v48 = v41;
      }
      v11 = (void *)v52;
      v10 = v51;
      v9 = v50;
      v8 = Src;
      LODWORD(v36) = HIDWORD(v46);
      LODWORD(v37) = v46;
      LODWORD(Size) = v47;
      RegistryValues = EtwpEnableTrace(
                         v23,
                         (__int128 *)&cbDest,
                         0LL,
                         v45[0],
                         1,
                         v43[0],
                         v24,
                         v55,
                         v42,
                         (const void **)UnicodeString,
                         (const void **)v60,
                         Src,
                         Size,
                         v50,
                         v36,
                         v51,
                         v37,
                         v52);
      v17 = (const WCHAR *)Handle;
LABEL_28:
      if ( RegistryValues >= 0 )
      {
LABEL_29:
        if ( !v17 )
          v17 = (const WCHAR *)KeyHandle;
        RtlWriteRegistryValue(0x40000000u, v17, L"Status", 4u, &ValueData, 4u);
        goto LABEL_32;
      }
LABEL_76:
      v34 = RtlNtStatusToDosError(RegistryValues);
      v17 = (const WCHAR *)Handle;
      ValueData = v34;
      goto LABEL_29;
    }
  }
  v23 = *(_QWORD *)v58;
  if ( *(_QWORD *)v58 == EtwpHostSiloState )
  {
    if ( (unsigned int)v18 >= *(_DWORD *)(*(_QWORD *)v58 + 16LL) )
      v29 = 1LL;
    else
      v29 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v58 + 456LL) + 8 * v18);
    if ( (v29 & 1) != 0 )
      goto LABEL_25;
    if ( !*(_QWORD *)(v29 + 176) )
    {
      _InterlockedOr((volatile signed __int32 *)(v29 + 832), 0x4000u);
      goto LABEL_25;
    }
  }
  v8 = Src;
  v9 = v50;
  v10 = v51;
  v11 = (void *)v52;
LABEL_33:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v20 )
    ExFreePoolWithTag(v20, 0);
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
  v25 = UnicodeString;
  do
  {
    RtlFreeAnsiString(v25++);
    --v15;
  }
  while ( v15 );
  v26 = v60;
  v27 = 2LL;
  result = 0LL;
  do
  {
    if ( *v26 )
    {
      ExFreePoolWithTag((PVOID)*v26, 0);
      result = 0LL;
    }
    ++v26;
    --v27;
  }
  while ( v27 );
  return result;
}
