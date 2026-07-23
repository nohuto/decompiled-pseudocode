/*
 * XREFs of RtlpMuiRegCreateKernelRegistryInfo @ 0x1401829A0
 * Callers:
 *     MUIRegistrySystemRoutine @ 0x14073EAE0 (MUIRegistrySystemRoutine.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     DownLevelLangIDToLanguageName @ 0x140161130 (DownLevelLangIDToLanguageName.c)
 *     _MuiRegAllocArray @ 0x1401826AC (_MuiRegAllocArray.c)
 *     ZwSetValueKey @ 0x1401B8EF0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1401B9D10 (ZwDeleteValueKey.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     NtClose @ 0x1405E99E0 (NtClose.c)
 *     RtlUnicodeStringToInteger @ 0x140696B10 (RtlUnicodeStringToInteger.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x14073EB64 (RtlpMuiRegLoadRegistryInfo.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x14073ECF0 (RtlpMuiRegFreeRegistryInfo.c)
 *     LdrpQueryValueKey @ 0x14073F560 (LdrpQueryValueKey.c)
 *     LdrpOpenKey @ 0x14073F8F8 (LdrpOpenKey.c)
 *     _RtlpMuiRegSerializeRegistryInfo @ 0x14073FA10 (_RtlpMuiRegSerializeRegistryInfo.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x14073FCF0 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpMuiRegCreateRegistryInfo @ 0x1407402BC (RtlpMuiRegCreateRegistryInfo.c)
 */

__int64 __fastcall RtlpMuiRegCreateKernelRegistryInfo(
        _QWORD *a1,
        _DWORD *a2,
        _DWORD *a3,
        int a4,
        _DWORD *a5,
        int a6,
        _DWORD *a7)
{
  WCHAR *v7; // r14
  _WORD *Data; // r15
  void *v9; // rdi
  _QWORD *v10; // rsi
  _DWORD *v11; // r13
  __int64 RegistryInfo; // rax
  int v13; // ebx
  __int64 v14; // r8
  __int64 v15; // rcx
  unsigned __int16 v16; // ax
  _WORD *v17; // rcx
  int v18; // r13d
  unsigned int v19; // ebx
  PVOID v20; // rax
  unsigned int v22; // ebx
  WCHAR *PoolWithTag; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp-38h] BYREF
  int v27; // [rsp+38h] [rbp-30h]
  ULONG Value; // [rsp+3Ch] [rbp-2Ch] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-20h] BYREF

  v27 = 0;
  v7 = 0LL;
  Value = 0;
  Data = 0LL;
  Handle = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( !a1 || !a2 || !a3 || !a5 || (v11 = a7) == 0LL )
  {
    v13 = -1073741811;
    goto LABEL_57;
  }
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
  if ( (int)LdrpOpenKey(&DestinationString, 0LL, 983103LL, &Handle) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"MultiUILanguageId");
    NumberOfBytes = 0x100000000LL;
    if ( (unsigned int)LdrpQueryValueKey(Handle, &DestinationString, (__int64)&NumberOfBytes) == -1073741772 )
    {
LABEL_8:
      NtClose(Handle);
      Handle = 0LL;
      goto LABEL_9;
    }
    if ( (_DWORD)NumberOfBytes )
    {
      v22 = NumberOfBytes;
      PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x72746C6Du);
      v7 = PoolWithTag;
      if ( PoolWithTag )
        memset(PoolWithTag, 0, v22);
      if ( !v7 )
        goto LABEL_53;
      if ( (int)LdrpQueryValueKey(Handle, &DestinationString, (__int64)&NumberOfBytes) >= 0
        && HIDWORD(NumberOfBytes) == 1 )
      {
        Data = MuiRegAllocArray(v24, 0x55u);
        if ( Data )
        {
          RtlInitUnicodeString(&DestinationString, v7);
          if ( RtlUnicodeStringToInteger(&DestinationString, 0x10u, &Value) >= 0
            && (int)DownLevelLangIDToLanguageName(Value, Data, 85, 0) > 1 )
          {
            RtlInitUnicodeString(&DestinationString, L"PreferredUILanguages");
            v25 = -1LL;
            do
              ++v25;
            while ( Data[v25] );
            ZwSetValueKey(Handle, &DestinationString, 0, 7u, Data, 2 * v25 + 2);
          }
          goto LABEL_52;
        }
LABEL_53:
        v13 = -1073741801;
        goto LABEL_35;
      }
    }
LABEL_52:
    RtlInitUnicodeString(&DestinationString, L"MultiUILanguageId");
    ZwDeleteValueKey(Handle, &DestinationString);
    goto LABEL_8;
  }
LABEL_9:
  RegistryInfo = RtlpMuiRegCreateRegistryInfo();
  v10 = (_QWORD *)RegistryInfo;
  if ( RegistryInfo )
  {
    v9 = 0LL;
    v13 = RtlpMuiRegLoadRegistryInfo(RegistryInfo);
    if ( v13 < 0 )
      goto LABEL_31;
    v15 = v10[3];
    v16 = *(_WORD *)(v15 + 6);
    if ( v16 )
    {
      v17 = *(_WORD **)(v15 + 16);
      v18 = 0;
      v14 = v16;
      do
      {
        if ( (*v17 & 0x9020) == 0x20 && (*v17 & 3) != 0 )
          ++v18;
        v17 += 14;
        --v14;
      }
      while ( v14 );
      v27 = v18;
      v11 = a7;
    }
    *a3 = v27;
    *a5 = 0;
    if ( a4 )
    {
      LOBYTE(v14) = 1;
      if ( (int)RtlpMuiRegGetInstalledLanguageIndexByLangId(v10, (unsigned __int16)a4, v14, 0LL) >= 0 )
        *a5 = 1;
    }
    *v11 = 0;
    if ( a6 )
    {
      LOBYTE(v14) = 1;
      if ( (int)RtlpMuiRegGetInstalledLanguageIndexByLangId(v10, (unsigned __int16)a6, v14, 0LL) >= 0 )
        *v11 = 1;
    }
    LODWORD(NumberOfBytes) = 0;
    v13 = RtlpMuiRegSerializeRegistryInfo(v10, 0LL, &NumberOfBytes);
    if ( v13 < 0 )
      goto LABEL_31;
    if ( (_DWORD)NumberOfBytes )
    {
      v19 = NumberOfBytes;
      v20 = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x72746C6Du);
      v9 = v20;
      if ( v20 )
        memset(v20, 0, v19);
    }
    if ( !v9 )
    {
      v13 = -1073741801;
LABEL_31:
      if ( v10 )
      {
        RtlpMuiRegFreeRegistryInfo(v10, 4095LL);
        ExFreePoolWithTag(v10, 0);
      }
      goto LABEL_33;
    }
    v13 = RtlpMuiRegSerializeRegistryInfo(v10, v9, &NumberOfBytes);
    if ( v13 >= 0 )
    {
      *a1 = v9;
      *a2 = NumberOfBytes;
      goto LABEL_31;
    }
LABEL_57:
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
    goto LABEL_31;
  }
  v13 = -1073741801;
LABEL_33:
  if ( Data )
    ExFreePoolWithTag(Data, 0);
LABEL_35:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v13;
}
