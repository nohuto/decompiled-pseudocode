/*
 * XREFs of EtwpGetAutoLoggerProviderFilter @ 0x1407252B4
 * Callers:
 *     EtwpEnableAutoLoggerProvider @ 0x140724C98 (EtwpEnableAutoLoggerProvider.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1400161B0 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlpQueryRegistryValues @ 0x1405C68AC (RtlpQueryRegistryValues.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     EtwpGetAutoLoggerEventNameFilter @ 0x1408C1C8C (EtwpGetAutoLoggerEventNameFilter.c)
 *     EtwpGetAutoLoggerLevelKwFilter @ 0x1408C21D0 (EtwpGetAutoLoggerLevelKwFilter.c)
 */

void __fastcall EtwpGetAutoLoggerProviderFilter(
        __int64 a1,
        __int64 a2,
        UNICODE_STRING *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        _QWORD *a9,
        _DWORD *a10,
        __int64 a11)
{
  WCHAR *v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rax
  SIZE_T v17; // r12
  wchar_t *PoolWithTag; // r14
  __int64 v19; // rax
  int RegistryValues; // ebx
  HANDLE v21; // rax
  _DWORD *v22; // r12
  _DWORD *v23; // r13
  _DWORD *v24; // r15
  PVOID *v25; // rsi
  PVOID *v26; // rbx
  __int64 v27; // rsi
  PVOID v28; // rcx
  __int64 v29; // r13
  __int64 v30; // r12
  _QWORD *v31; // rdx
  int **v32; // r8
  int *v33; // rcx
  _QWORD *v34; // r9
  _QWORD *v35; // r10
  char *v36; // r11
  __int64 v37; // rsi
  const WCHAR *v38; // rdx
  wchar_t *v39; // rax
  __int64 v40; // rax
  __int64 v41; // r8
  __int64 v42; // r8
  __int64 *v43; // rcx
  __int64 v44; // rdx
  __int16 v45; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD *v46; // [rsp+38h] [rbp-C8h]
  _DWORD *v47; // [rsp+40h] [rbp-C0h]
  _DWORD *v48; // [rsp+48h] [rbp-B8h]
  int v49; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-A8h] BYREF
  int v51; // [rsp+60h] [rbp-A0h] BYREF
  int v52; // [rsp+64h] [rbp-9Ch] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  __int64 v54; // [rsp+70h] [rbp-90h] BYREF
  __int64 v55; // [rsp+78h] [rbp-88h]
  __int64 v56; // [rsp+80h] [rbp-80h] BYREF
  __int64 v57; // [rsp+88h] [rbp-78h]
  __int64 v58; // [rsp+90h] [rbp-70h] BYREF
  PVOID v59; // [rsp+98h] [rbp-68h]
  __int64 v60; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v61; // [rsp+A8h] [rbp-58h]
  __int64 v62; // [rsp+B0h] [rbp-50h]
  _QWORD *v63; // [rsp+B8h] [rbp-48h]
  __int64 v64; // [rsp+C0h] [rbp-40h]
  __int64 v65; // [rsp+C8h] [rbp-38h]
  __int64 v66; // [rsp+D0h] [rbp-30h]
  __int64 v67; // [rsp+D8h] [rbp-28h]
  UNICODE_STRING DestinationString; // [rsp+E0h] [rbp-20h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+F0h] [rbp-10h] BYREF
  int v70; // [rsp+120h] [rbp+20h] BYREF
  UNICODE_STRING *v71; // [rsp+128h] [rbp+28h]
  int v72; // [rsp+130h] [rbp+30h] BYREF
  UNICODE_STRING *v73; // [rsp+138h] [rbp+38h]
  int v74; // [rsp+140h] [rbp+40h] BYREF
  UNICODE_STRING *v75; // [rsp+148h] [rbp+48h]
  int v76; // [rsp+150h] [rbp+50h] BYREF
  int *v77; // [rsp+158h] [rbp+58h]
  int v78; // [rsp+160h] [rbp+60h] BYREF
  int *v79; // [rsp+168h] [rbp+68h]
  int v80; // [rsp+170h] [rbp+70h] BYREF
  int *v81; // [rsp+178h] [rbp+78h]
  int v82; // [rsp+180h] [rbp+80h] BYREF
  __int64 *v83; // [rsp+188h] [rbp+88h]
  int v84; // [rsp+190h] [rbp+90h] BYREF
  UNICODE_STRING *v85; // [rsp+198h] [rbp+98h]
  int v86; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 *v87; // [rsp+1A8h] [rbp+A8h] BYREF
  char v88; // [rsp+1B0h] [rbp+B0h] BYREF
  char v89; // [rsp+1B8h] [rbp+B8h] BYREF
  _QWORD v90[148]; // [rsp+270h] [rbp+170h] BYREF

  v65 = a5;
  v46 = (_DWORD *)a6;
  v14 = 0LL;
  v66 = a7;
  v47 = (_DWORD *)a8;
  v63 = a9;
  v48 = a10;
  v67 = a11;
  v15 = -1LL;
  v60 = 0LL;
  v61 = 0LL;
  v16 = -1LL;
  v64 = a4;
  KeyHandle = 0LL;
  Handle = 0LL;
  do
    ++v16;
  while ( *(_WORD *)(a1 + 2 * v16) );
  v17 = (unsigned int)(2 * v16 + 18);
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v17, 0x50777445u);
  v19 = 2LL;
  v62 = 2LL;
  if ( !PoolWithTag )
  {
    RegistryValues = -1073741801;
    goto LABEL_11;
  }
  RegistryValues = RtlStringCbPrintfW(PoolWithTag, (unsigned int)v17, L"%ws\\Filters", a1);
  if ( !RegistryValues )
  {
    RtlInitUnicodeString(&DestinationString, PoolWithTag);
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    RegistryValues = ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes);
    v21 = KeyHandle;
    if ( RegistryValues < 0 )
      v21 = 0LL;
    KeyHandle = v21;
    if ( a2 )
    {
      Handle = 0LL;
      do
        ++v15;
      while ( *(_WORD *)(a2 + 2 * v15) );
      v39 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned int)(2 * v15 + 18), 0x50777445u);
      v14 = v39;
      if ( !v39 )
      {
        RegistryValues = -1073741801;
        goto LABEL_10;
      }
      RegistryValues = RtlStringCbPrintfW(v39, (unsigned int)(2 * v15 + 18), L"%ws\\Filters", a2);
      if ( RegistryValues )
        goto LABEL_10;
      RtlInitUnicodeString(&DestinationString, v14);
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = &DestinationString;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      RegistryValues = ZwOpenKey(&Handle, 0x2001Fu, &ObjectAttributes);
      v21 = KeyHandle;
    }
    if ( v21 || Handle )
    {
      memset(v90, 0, 0x498uLL);
      v26 = (PVOID *)&v60;
      v56 = 0LL;
      v57 = 0LL;
      v54 = 0LL;
      v27 = 2LL;
      v55 = 0LL;
      v58 = 0LL;
      v59 = 0LL;
      v49 = 0;
      v45 = 0;
      do
      {
        *v26++ = ExAllocatePoolWithTag(PagedPool, 0x86uLL, 0x46777445u);
        --v27;
      }
      while ( v27 );
      v22 = v48;
      *v48 = 1024;
      v28 = ExAllocatePoolWithTag(PagedPool, 0x400uLL, 0x50777445u);
      *v63 = v28;
      if ( v28 )
      {
        v59 = v28;
        v29 = 4LL;
        v90[0] = &EtwpQueryRegistryCallback;
        LODWORD(v90[4]) = 1;
        v90[3] = &v70;
        v70 = 1;
        v90[2] = L"ExeFilter";
        v90[5] = &v45;
        v90[10] = &v72;
        v90[9] = L"PackageIdFilter";
        v90[12] = &v45;
        v73 = a3 + 1;
        v90[17] = &v74;
        v90[16] = L"PackageRelativeAppIdFilter";
        v90[19] = &v45;
        v75 = a3 + 2;
        v90[24] = &v76;
        v90[23] = L"EventIdFilterIn";
        v77 = &v51;
        v90[31] = &v78;
        v90[30] = L"StackWalkFilterIn";
        v79 = &v52;
        v90[38] = &v80;
        v90[37] = L"Enabled";
        v81 = &v49;
        LODWORD(v58) = *v22;
        v90[45] = &v82;
        v90[44] = L"SchematizedFilters";
        v83 = &v58;
        v90[52] = &v84;
        v90[51] = L"ContainerFilter";
        v71 = a3;
        v90[7] = &EtwpQueryRegistryCallback;
        LODWORD(v90[11]) = 1;
        v72 = 1;
        v90[14] = &EtwpQueryRegistryCallback;
        LODWORD(v90[18]) = 1;
        v74 = 1;
        v90[21] = &EtwpQueryRegistryCallback;
        LODWORD(v90[25]) = 4;
        v76 = 4;
        v90[28] = &EtwpQueryRegistryCallback;
        LODWORD(v90[32]) = 4;
        v78 = 4;
        v90[35] = &EtwpQueryRegistryCallback;
        LODWORD(v90[39]) = 4;
        v80 = 4;
        v90[42] = &EtwpQueryRegistryCallback;
        LODWORD(v90[46]) = 3;
        v82 = 3;
        v90[49] = &EtwpQueryRegistryCallback;
        LODWORD(v90[53]) = 1;
        v30 = v60;
        v90[54] = &v45;
        v85 = a3 + 3;
        v84 = 1;
        if ( v60 )
        {
          v90[56] = &EtwpQueryRegistryCallback;
          v55 = v60 + 4;
          v31 = &v90[63];
          LODWORD(v90[60]) = 3;
          v90[59] = &v86;
          v32 = (int **)&v90[66];
          v86 = 3;
          v90[58] = L"EventIds";
          v33 = (int *)&v88;
          LODWORD(v54) = 128;
          v87 = &v54;
          v34 = &v90[65];
          v35 = &v90[67];
          v36 = &v89;
        }
        else
        {
          v31 = &v90[56];
          v33 = &v86;
          v32 = (int **)&v90[59];
          v34 = &v90[58];
          v35 = &v90[60];
          v36 = (char *)&v87;
        }
        v37 = v61;
        if ( v61 )
        {
          LODWORD(v56) = 128;
          v57 = v61 + 4;
          *v31 = &EtwpQueryRegistryCallback;
          *v34 = L"StackWalkIds";
          *(_DWORD *)v35 = 3;
          *v33 = 3;
          *(_QWORD *)v36 = &v56;
          *v32 = v33;
        }
        RegistryValues = RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)KeyHandle, (__int64)v90, 0LL);
        if ( RegistryValues < 0 )
          goto LABEL_10;
        v38 = (const WCHAR *)Handle;
        if ( Handle )
        {
          v90[5] = a3->Buffer;
          LODWORD(v90[6]) = a3->Length;
          v90[12] = a3[1].Buffer;
          LODWORD(v90[13]) = a3[1].Length;
          v90[19] = a3[2].Buffer;
          LODWORD(v90[20]) = a3[2].Length;
          v90[26] = &v51;
          v90[33] = &v52;
          v90[40] = &v49;
          v90[47] = v59;
          LODWORD(v90[48]) = v58;
          v90[54] = a3[3].Buffer;
          LODWORD(v90[55]) = a3[3].Length;
          v40 = 8LL;
          if ( v30 )
          {
            v90[61] = v55;
            LODWORD(v90[62]) = v54;
            v40 = 9LL;
          }
          if ( v37 )
          {
            v41 = 7 * v40;
            v90[v41 + 5] = v57;
            LODWORD(v90[v41 + 6]) = v56;
          }
          RegistryValues = RtlpQueryRegistryValues(0x40000000LL, v38, (__int64)v90, 0LL);
          if ( RegistryValues < 0 )
            RegistryValues = 0;
        }
        if ( v30 )
        {
          *(_BYTE *)v30 = v51 != 0;
          *(_WORD *)(v30 + 2) = (unsigned int)v54 >> 1;
        }
        if ( v37 )
        {
          *(_BYTE *)v37 = v52 != 0;
          *(_WORD *)(v37 + 2) = (unsigned int)v56 >> 1;
        }
        v22 = v48;
        *v48 = v58;
        if ( v49 )
        {
          v42 = v64 - (_QWORD)&v60;
          v43 = &v60;
          v44 = 2LL;
          do
          {
            *(__int64 *)((char *)v43 + v42) = *v43;
            *v43++ = 0LL;
            --v44;
          }
          while ( v44 );
          v24 = v46;
          EtwpGetAutoLoggerEventNameFilter(
            (_DWORD)PoolWithTag,
            (_DWORD)v14,
            (unsigned int)L"EventNameFilter",
            v65,
            (__int64)v46);
          v23 = v47;
          EtwpGetAutoLoggerEventNameFilter(
            (_DWORD)PoolWithTag,
            (_DWORD)v14,
            (unsigned int)L"StackNameFilter",
            v66,
            (__int64)v47);
          EtwpGetAutoLoggerLevelKwFilter(PoolWithTag, v14, v67);
          v19 = 2LL;
          goto LABEL_13;
        }
        do
        {
          RtlFreeAnsiString(a3++);
          --v29;
        }
        while ( v29 );
        *v22 = 0;
      }
      else
      {
        RegistryValues = -1073741801;
      }
      v19 = 2LL;
      goto LABEL_12;
    }
  }
LABEL_10:
  v19 = 2LL;
LABEL_11:
  v22 = v48;
LABEL_12:
  v23 = v47;
  v24 = v46;
LABEL_13:
  v25 = (PVOID *)&v60;
  do
  {
    if ( *v25 )
    {
      ExFreePoolWithTag(*v25, 0);
      v19 = v62;
    }
    ++v25;
    v62 = --v19;
  }
  while ( v19 );
  if ( RegistryValues < 0 )
  {
    *v24 = 0;
    *v23 = 0;
    *v22 = 0;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
}
