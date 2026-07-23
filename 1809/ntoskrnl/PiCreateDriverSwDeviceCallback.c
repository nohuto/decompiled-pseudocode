/*
 * XREFs of PiCreateDriverSwDeviceCallback @ 0x140841E00
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringPrintf @ 0x14015D81C (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _wcsicmp @ 0x140195A70 (_wcsicmp.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlHashUnicodeString @ 0x140599BE0 (RtlHashUnicodeString.c)
 *     RtlGUIDFromString @ 0x14059B5A0 (RtlGUIDFromString.c)
 *     _PnpGetGenericStoreProperty @ 0x14059B7F8 (_PnpGetGenericStoreProperty.c)
 *     RtlpQueryRegistryValues @ 0x1405C68AC (RtlpQueryRegistryValues.c)
 *     _CmGetDeviceRegProp @ 0x1405C799C (_CmGetDeviceRegProp.c)
 *     RtlPrefixUnicodeString @ 0x1405C8460 (RtlPrefixUnicodeString.c)
 *     _SysCtxRegOpenKey @ 0x1405C8AFC (_SysCtxRegOpenKey.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     RtlCreateUnicodeString @ 0x14065BBD0 (RtlCreateUnicodeString.c)
 *     IopGetRegistryValue @ 0x140681694 (IopGetRegistryValue.c)
 *     ExpAllocateStringRoutine @ 0x1406B33A0 (ExpAllocateStringRoutine.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1406FB7E8 (_PnpGetGenericStorePropertyKeys.c)
 *     PnpGenerateDeviceIdsHash @ 0x1406FEE48 (PnpGenerateDeviceIdsHash.c)
 *     PipMakeGloballyUniqueId @ 0x14070D190 (PipMakeGloballyUniqueId.c)
 *     PiSwStartCreate @ 0x140837190 (PiSwStartCreate.c)
 *     PnpCompareMultiSz @ 0x14083B468 (PnpCompareMultiSz.c)
 */

__int64 __fastcall PiCreateDriverSwDeviceCallback(__int64 a1, __int64 a2, const WCHAR *a3, _DWORD *a4)
{
  ULONG v4; // r15d
  wchar_t *v5; // rdi
  void *v6; // rsi
  unsigned int v7; // r12d
  __int64 PoolWithTag; // r13
  __int64 v9; // rcx
  int RegistryValues; // ebx
  wchar_t *Buffer; // rax
  _DWORD *v12; // r14
  __int64 v13; // rsi
  bool v14; // zf
  unsigned int v15; // r14d
  ULONG v16; // r15d
  wchar_t *v17; // r12
  int *v18; // rdi
  int v19; // r15d
  PCWCH *v20; // r13
  int v21; // r9d
  const wchar_t *v22; // rdi
  __int64 v23; // rax
  NTSTATUS RegistryValue; // eax
  PCWSTR v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  PVOID v28; // r14
  __int64 v29; // rdi
  signed int i; // eax
  unsigned int v31; // eax
  PVOID v32; // rax
  unsigned int v33; // esi
  __int64 v34; // r14
  char *v35; // rdi
  __int64 v36; // rdx
  int v37; // eax
  int v38; // eax
  void *v39; // rcx
  PVOID v40; // rax
  PVOID v41; // rax
  PVOID *v42; // rdi
  __int64 v43; // rsi
  SIZE_T NumberOfBytes; // [rsp+70h] [rbp-90h] BYREF
  _DWORD *v46; // [rsp+78h] [rbp-88h] BYREF
  wchar_t *Str1; // [rsp+80h] [rbp-80h]
  ULONG HashValue; // [rsp+88h] [rbp-78h] BYREF
  ULONG v49; // [rsp+8Ch] [rbp-74h] BYREF
  int v50; // [rsp+90h] [rbp-70h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-68h] BYREF
  int v52; // [rsp+A0h] [rbp-60h]
  int v53; // [rsp+A4h] [rbp-5Ch] BYREF
  ULONG v54; // [rsp+A8h] [rbp-58h]
  unsigned int v55; // [rsp+ACh] [rbp-54h]
  PVOID P; // [rsp+B0h] [rbp-50h]
  _DWORD *v57; // [rsp+B8h] [rbp-48h]
  UNICODE_STRING UnicodeString; // [rsp+C0h] [rbp-40h] BYREF
  UNICODE_STRING v59; // [rsp+D0h] [rbp-30h] BYREF
  int *v60; // [rsp+E0h] [rbp-20h]
  UNICODE_STRING GuidString; // [rsp+E8h] [rbp-18h] BYREF
  UNICODE_STRING v62; // [rsp+F8h] [rbp-8h] BYREF
  unsigned int v63; // [rsp+108h] [rbp+8h]
  PVOID v64; // [rsp+110h] [rbp+10h] BYREF
  UNICODE_STRING v65; // [rsp+118h] [rbp+18h] BYREF
  UNICODE_STRING v66; // [rsp+128h] [rbp+28h] BYREF
  UNICODE_STRING String2; // [rsp+138h] [rbp+38h] BYREF
  _DWORD v68[2]; // [rsp+148h] [rbp+48h] BYREF
  __int64 v69; // [rsp+150h] [rbp+50h]
  PCWSTR SourceString; // [rsp+158h] [rbp+58h]
  __int64 v71; // [rsp+160h] [rbp+60h]
  __int64 v72; // [rsp+168h] [rbp+68h]
  UNICODE_STRING DestinationString; // [rsp+170h] [rbp+70h] BYREF
  _QWORD v74[2]; // [rsp+180h] [rbp+80h] BYREF
  GUID Guid; // [rsp+190h] [rbp+90h] BYREF
  _QWORD v76[50]; // [rsp+1A0h] [rbp+A0h] BYREF

  v57 = a4;
  v71 = a1;
  Handle = 0LL;
  SourceString = a3;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  v4 = 0;
  UnicodeString.Buffer = 0LL;
  v5 = 0LL;
  *(_QWORD *)&v59.Length = 0LL;
  v6 = 0LL;
  v59.Buffer = 0LL;
  v7 = 0;
  *(_QWORD *)&GuidString.Length = 0LL;
  PoolWithTag = 0LL;
  GuidString.Buffer = 0LL;
  v50 = 0;
  *(_QWORD *)&v65.Length = 0LL;
  v65.Buffer = 0LL;
  *(_QWORD *)&v66.Length = 0LL;
  v66.Buffer = 0LL;
  v54 = 0;
  v49 = 0;
  HashValue = 0;
  Str1 = 0LL;
  v53 = 1;
  v52 = 0;
  v46 = 0LL;
  v72 = 0LL;
  v55 = 0;
  *(_QWORD *)&v62.Length = 0LL;
  v62.Buffer = 0LL;
  v64 = 0LL;
  v63 = 0;
  v69 = 0LL;
  P = 0LL;
  if ( a1 )
    v9 = *(_QWORD *)(a1 + 224);
  else
    v9 = 0LL;
  RegistryValues = SysCtxRegOpenKey(v9, a2, (__int64)a3, 0, 0x20019u, (__int64)&Handle);
  if ( RegistryValues < 0 )
    goto LABEL_128;
  memset(v76, 0, 0x188uLL);
  LODWORD(v76[25]) = 0x4000000;
  LODWORD(v76[1]) = 304;
  LODWORD(v76[4]) = 117440512;
  v76[2] = L"HardwareIds";
  LODWORD(v76[8]) = 304;
  v76[3] = &UnicodeString;
  LODWORD(v76[11]) = 117440512;
  v76[9] = L"CompatibleIds";
  LODWORD(v76[15]) = 288;
  v76[10] = &v59;
  LODWORD(v76[18]) = 0x1000000;
  v76[16] = L"ContainerId";
  v76[17] = &GuidString;
  v76[23] = L"Capabilities";
  v76[24] = &v50;
  v76[30] = L"Description";
  v76[31] = &v65;
  v76[37] = L"LocationInfo";
  LODWORD(v76[22]) = 288;
  LODWORD(v76[29]) = 288;
  LODWORD(v76[32]) = 0x1000000;
  LODWORD(v76[36]) = 288;
  LODWORD(v76[39]) = 0x1000000;
  v76[38] = &v66;
  RegistryValues = RtlpQueryRegistryValues(3221225472LL, (const WCHAR *)Handle, (__int64)v76, 0LL);
  if ( RegistryValues < 0 )
    goto LABEL_128;
  if ( UnicodeString.Buffer && UnicodeString.Length <= 2u )
    RtlFreeAnsiString(&UnicodeString);
  if ( v59.Buffer && v59.Length <= 2u )
    RtlFreeAnsiString(&v59);
  Buffer = GuidString.Buffer;
  if ( !GuidString.Buffer )
    goto LABEL_17;
  if ( GuidString.Length < 2u )
  {
    RtlFreeAnsiString(&GuidString);
    Buffer = GuidString.Buffer;
  }
  if ( !Buffer || RtlGUIDFromString(&GuidString, &Guid) < 0 )
  {
LABEL_17:
    *(_QWORD *)&Guid.Data1 = 0LL;
    *(_QWORD *)Guid.Data4 = 0LL;
  }
  if ( v65.Buffer && v65.Length < 2u )
    RtlFreeAnsiString(&v65);
  if ( v66.Buffer && v66.Length < 2u )
    RtlFreeAnsiString(&v66);
  if ( !UnicodeString.Buffer && !v59.Buffer )
  {
    RegistryValues = -1073741637;
    goto LABEL_128;
  }
  v12 = v57;
  v74[0] = UnicodeString.Buffer;
  v74[1] = v59.Buffer;
  v13 = *(_QWORD *)v57;
  v14 = *(_QWORD *)v57 == IopRootDeviceNode;
  v68[0] = 2;
  v68[1] = 3;
  if ( v14 )
    goto LABEL_67;
  while ( 1 )
  {
    if ( *(PDRIVER_OBJECT *)(*(_QWORD *)(v13 + 32) + 8LL) == PiSwDeviceDriverObject )
    {
      RtlInitUnicodeString(&DestinationString, L"SWD\\");
      v15 = 0;
      if ( RtlPrefixUnicodeString(&DestinationString, (PCUNICODE_STRING)(v13 + 40), 1u) )
      {
        RtlInitUnicodeString(
          &String2,
          (PCWSTR)(*(_QWORD *)(v13 + 48) + 2 * ((unsigned __int64)DestinationString.Length >> 1)));
        RtlInitUnicodeString(&DestinationString, L"DRIVERENUM");
        if ( RtlPrefixUnicodeString(&DestinationString, &String2, 1u) )
        {
          if ( String2.Buffer[(unsigned __int64)DestinationString.Length >> 1] == 92 )
          {
            if ( !v4 )
            {
              RegistryValues = PnpGenerateDeviceIdsHash((__int64)UnicodeString.Buffer, (__int64)v59.Buffer, &v49);
              if ( RegistryValues < 0 )
                goto LABEL_72;
              if ( (v50 & 8) != 0 )
              {
                v16 = v49;
              }
              else
              {
                RtlInitUnicodeString(&String2, L"SWD\\GenericRaw");
                RegistryValues = RtlHashUnicodeString(&String2, 1u, 0, &HashValue);
                if ( RegistryValues < 0 )
                  goto LABEL_72;
                v16 = HashValue + v49;
              }
              RtlInitUnicodeString(&String2, L"SWD\\Generic");
              RegistryValues = RtlHashUnicodeString(&String2, 1u, 0, &HashValue);
              if ( RegistryValues < 0 )
                goto LABEL_72;
              v4 = HashValue + v16;
              v54 = v4;
              v49 = v4;
            }
            if ( *(_DWORD *)(v13 + 684) == v4 )
              break;
          }
        }
      }
    }
LABEL_65:
    v13 = *(_QWORD *)(v13 + 16);
    if ( v13 == IopRootDeviceNode )
    {
      PoolWithTag = v69;
      v12 = v57;
      goto LABEL_67;
    }
  }
  if ( !v5 )
  {
    v52 = 2048;
    Str1 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x800uLL, 0x20207050u);
    v5 = Str1;
    if ( !Str1 )
    {
      RegistryValues = -1073741670;
LABEL_72:
      v6 = v46;
      goto LABEL_128;
    }
  }
  v17 = Str1;
  v18 = v68;
  v19 = v52;
  v20 = (PCWCH *)v74;
  v60 = v68;
  do
  {
    v21 = *v18;
    LODWORD(NumberOfBytes) = v19;
    RegistryValues = CmGetDeviceRegProp(
                       *(__int64 *)&PiPnpRtlCtx,
                       *(_QWORD *)(v13 + 48),
                       0LL,
                       v21,
                       (__int64)&v53,
                       (__int64)v17,
                       (__int64)&NumberOfBytes,
                       0);
    if ( RegistryValues < 0 || v53 != 7 || (unsigned int)NumberOfBytes < 2 )
    {
      *v17 = 0;
      RegistryValues = 0;
    }
    if ( v15 == 1 )
    {
      v22 = v17;
      if ( *v17 )
      {
        while ( wcsicmp(v22, L"SWD\\GenericRaw") && wcsicmp(v22, L"SWD\\Generic") )
        {
          v23 = -1LL;
          do
            ++v23;
          while ( v22[v23] );
          v22 += v23 + 1;
          if ( !*v22 )
            goto LABEL_57;
        }
        *v22 = 0;
      }
LABEL_57:
      v18 = v60;
    }
    if ( *v20 )
    {
      if ( !PnpCompareMultiSz(*v20, v17) )
        break;
    }
    else if ( *v17 )
    {
      break;
    }
    ++v18;
    ++v15;
    ++v20;
    v60 = v18;
  }
  while ( v15 < 2 );
  v4 = v54;
  v7 = v63;
  if ( v15 < 2 )
  {
    v5 = Str1;
    goto LABEL_65;
  }
  v12 = v57;
  RegistryValues = -1073740028;
  PoolWithTag = v63;
LABEL_67:
  if ( RegistryValues < 0 )
  {
    v6 = v46;
    goto LABEL_127;
  }
  RegistryValue = IopGetRegistryValue(Handle, L"Security", 0, &v46);
  v6 = v46;
  RegistryValues = RegistryValue;
  if ( RegistryValue >= 0 )
  {
    if ( v46[1] == 3 )
    {
      v55 = v46[3];
      if ( v55 >= 0x28 )
      {
        v72 = (__int64)v46 + (unsigned int)v46[2];
        goto LABEL_77;
      }
    }
    RegistryValues = -1073741823;
LABEL_116:
    v41 = P;
    if ( P )
    {
      if ( v7 )
      {
        v42 = (PVOID *)((char *)P + 40);
        v43 = v7;
        do
        {
          if ( *v42 )
            ExFreePoolWithTag(*v42, 0);
          v42 += 6;
          --v43;
        }
        while ( v43 );
        v41 = P;
      }
      ExFreePoolWithTag(v41, 0);
    }
LABEL_124:
    if ( PoolWithTag )
      ExFreePoolWithTag((PVOID)PoolWithTag, 0);
    v6 = v46;
    goto LABEL_127;
  }
  if ( RegistryValue != -1073741772 )
    goto LABEL_127;
LABEL_77:
  if ( *(_QWORD *)v12 == IopRootDeviceNode )
  {
    if ( !RtlCreateUnicodeString(&v62, SourceString) )
    {
      RegistryValues = -1073741670;
      goto LABEL_127;
    }
LABEL_86:
    v29 = v71;
    for ( i = PnpGetGenericStorePropertyKeys(v71, (int)Handle, 0LL, 0, 0LL, 0, (unsigned int *)&NumberOfBytes);
          ;
          i = PnpGetGenericStorePropertyKeys(v29, (int)Handle, 0LL, 0, PoolWithTag, v7, (unsigned int *)&NumberOfBytes) )
    {
      RegistryValues = i;
      if ( i != -1073741789 )
      {
        v7 = NumberOfBytes;
        goto LABEL_96;
      }
      v31 = NumberOfBytes;
      if ( (unsigned int)NumberOfBytes <= v7 )
      {
        RegistryValues = -1073741595;
        goto LABEL_124;
      }
      if ( PoolWithTag )
      {
        ExFreePoolWithTag((PVOID)PoolWithTag, 0);
        v31 = NumberOfBytes;
      }
      v7 = v31;
      PoolWithTag = (__int64)ExAllocatePoolWithTag(PagedPool, 20LL * v31, 0x20207050u);
      if ( !PoolWithTag )
        break;
    }
    RegistryValues = -1073741670;
LABEL_96:
    if ( RegistryValues < 0 )
      goto LABEL_124;
    if ( v7 )
    {
      v32 = ExAllocatePoolWithTag(PagedPool, 48LL * v7, 0x20207050u);
      P = v32;
      if ( !v32 )
      {
        RegistryValues = -1073741670;
        goto LABEL_124;
      }
      memset(v32, 0, 48LL * v7);
      v33 = 0;
      v34 = PoolWithTag;
      v35 = (char *)P + 36;
      do
      {
        v36 = *(_QWORD *)(v35 + 4);
        *(_OWORD *)(v35 - 36) = *(_OWORD *)v34;
        v37 = *(_DWORD *)(v34 + 16);
        *((_DWORD *)v35 - 4) = 0;
        *((_DWORD *)v35 - 5) = v37;
        while ( 1 )
        {
          RegistryValues = PnpGetGenericStoreProperty(
                             v71,
                             (__int64)Handle,
                             0LL,
                             PoolWithTag + 20LL * v33,
                             (_DWORD *)v35 - 1,
                             v36,
                             *(_DWORD *)v35,
                             &NumberOfBytes);
          v38 = NumberOfBytes;
          if ( RegistryValues != -1073741789 )
            break;
          if ( (unsigned int)NumberOfBytes <= *(_DWORD *)v35 )
          {
            RegistryValues = -1073741595;
            goto LABEL_116;
          }
          v39 = *(void **)(v35 + 4);
          if ( v39 )
          {
            ExFreePoolWithTag(v39, 0);
            v38 = NumberOfBytes;
          }
          *(_DWORD *)v35 = v38;
          v40 = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x20207050u);
          *(_QWORD *)(v35 + 4) = v40;
          v36 = (__int64)v40;
          if ( !v40 )
          {
            RegistryValues = -1073741670;
            goto LABEL_111;
          }
        }
        *(_DWORD *)v35 = NumberOfBytes;
LABEL_111:
        if ( RegistryValues < 0 )
          goto LABEL_116;
        ++v33;
        v35 += 48;
        v34 += 20LL;
      }
      while ( v33 < v7 );
    }
    RegistryValues = PiSwStartCreate(
                       (unsigned __int64)&Guid & -(__int64)(GuidString.Buffer != 0LL),
                       *(_QWORD *)(*(_QWORD *)v57 + 48LL),
                       (__int64)v62.Buffer,
                       (__int64)UnicodeString.Buffer,
                       (__int64)v59.Buffer,
                       (unsigned __int64)&Guid & -(__int64)(GuidString.Buffer != 0LL),
                       v50,
                       (__int64)v65.Buffer,
                       (__int64)v66.Buffer,
                       v72,
                       v55,
                       (__int64)P,
                       v7);
    goto LABEL_116;
  }
  RegistryValues = PipMakeGloballyUniqueId(*(_QWORD *)(*(_QWORD *)v12 + 32LL), 0LL, (wchar_t **)&v64);
  if ( RegistryValues < 0 )
    goto LABEL_127;
  v25 = SourceString;
  v26 = -1LL;
  v27 = -1LL;
  v62.Length = 0;
  do
    ++v27;
  while ( SourceString[v27] );
  v28 = v64;
  do
    ++v26;
  while ( *((_WORD *)v64 + v26) );
  v62.MaximumLength = 2 * (v26 + v27 + 2);
  v62.Buffer = (wchar_t *)ExpAllocateStringRoutine((unsigned __int16)(2 * (v26 + v27) + 4));
  if ( !v62.Buffer )
  {
    RegistryValues = -1073741670;
    goto LABEL_127;
  }
  RegistryValues = RtlUnicodeStringPrintf(&v62, L"%ws&%ws", v25, v28);
  if ( RegistryValues >= 0 )
    goto LABEL_86;
LABEL_127:
  v5 = Str1;
LABEL_128:
  RtlFreeAnsiString(&v62);
  if ( v64 )
    ExFreePoolWithTag(v64, 0);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v59);
  RtlFreeAnsiString(&GuidString);
  RtlFreeAnsiString(&v65);
  RtlFreeAnsiString(&v66);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( Handle )
    ZwClose(Handle);
  if ( (int)v57[2] >= 0 )
    v57[2] = RegistryValues;
  return 0LL;
}
