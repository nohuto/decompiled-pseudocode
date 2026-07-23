/*
 * XREFs of PipInitComputerIds @ 0x1409C9C60
 * Callers:
 *     IopInitializeBootDrivers @ 0x1409CC0BC (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x1400922E8 (RtlStringCchPrintfW.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     MmMapIoSpaceEx @ 0x1400E5DE0 (MmMapIoSpaceEx.c)
 *     MmUnmapIoSpace @ 0x1401232F0 (MmUnmapIoSpace.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwSetValueKey @ 0x1401B8EF0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1401B9D10 (ZwDeleteValueKey.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlStringFromGUIDEx @ 0x14058C238 (RtlStringFromGUIDEx.c)
 *     PnpUnicodeStringToWstrFree @ 0x1405990AC (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x14059ACA8 (PnpUnicodeStringToWstr.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     RtlUpcaseUnicodeString @ 0x14064C260 (RtlUpcaseUnicodeString.c)
 *     _PnpSetObjectProperty @ 0x1406E68C4 (_PnpSetObjectProperty.c)
 *     IopCreateRegistryKeyEx @ 0x14070A964 (IopCreateRegistryKeyEx.c)
 *     _PnpCtxRegDeleteTree @ 0x14073D2F4 (_PnpCtxRegDeleteTree.c)
 *     _PnpCtxRegCloseKey @ 0x14073D52C (_PnpCtxRegCloseKey.c)
 *     PipHardwareConfigOpenKey @ 0x14073D5A8 (PipHardwareConfigOpenKey.c)
 *     PipCreateComputerId @ 0x1409CAB84 (PipCreateComputerId.c)
 *     PipSmBiosGetString @ 0x1409CADA0 (PipSmBiosGetString.c)
 *     PipSmBiosFindStruct @ 0x1409CAEE8 (PipSmBiosFindStruct.c)
 */

__int64 __fastcall PipInitComputerIds(__int64 a1)
{
  void *v2; // rsi
  void *v3; // r15
  unsigned __int8 v4; // r13
  unsigned __int8 v5; // r12
  __int64 v6; // rcx
  int v7; // eax
  HANDLE v8; // rdi
  int v9; // r14d
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // esi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 Struct; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int8 *v18; // rbx
  unsigned __int8 *v19; // rdi
  int String; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rbx
  unsigned __int8 *v27; // rdi
  int v28; // eax
  int v29; // eax
  __int64 v30; // rax
  unsigned __int8 *v31; // rcx
  unsigned __int8 *v32; // rbx
  unsigned __int8 *v33; // rdi
  int v34; // eax
  int v35; // eax
  int v36; // eax
  unsigned __int64 v37; // rdx
  __int64 v38; // rax
  int v39; // ecx
  HANDLE v40; // r15
  unsigned int v41; // edi
  UNICODE_STRING *v42; // rbx
  unsigned int v43; // edi
  UNICODE_STRING *v44; // rsi
  PCWSTR *v45; // r14
  PVOID v46; // rbx
  __int64 v47; // rax
  wchar_t *Buffer; // rax
  __int64 v50; // rbx
  int v51; // r15d
  int v52; // eax
  int v53; // r15d
  int v54; // eax
  unsigned int v55; // r15d
  int v56; // eax
  int v57; // eax
  int v58; // eax
  int v59; // eax
  int v60; // eax
  int v61; // eax
  int v62; // eax
  int v63; // eax
  int v64; // eax
  int v65; // eax
  int v66; // eax
  int v67; // eax
  wchar_t *PoolWithTag; // rax
  wchar_t *v69; // r13
  unsigned __int16 v70; // cx
  unsigned int v71; // edi
  wchar_t *v72; // rbx
  unsigned __int64 v73; // r11
  __int64 v74; // r9
  const wchar_t *v75; // rax
  __int64 v76; // rdx
  unsigned __int64 v77; // r8
  UNICODE_STRING *v78; // rbx
  __int64 v79; // rdi
  __int64 v80; // rcx
  PVOID Data; // [rsp+20h] [rbp-E0h]
  int v83; // [rsp+50h] [rbp-B0h]
  void *v84; // [rsp+58h] [rbp-A8h]
  unsigned int NumberOfBytes; // [rsp+60h] [rbp-A0h]
  UNICODE_STRING ValueName; // [rsp+68h] [rbp-98h] BYREF
  int v87; // [rsp+78h] [rbp-88h]
  int v88; // [rsp+7Ch] [rbp-84h] BYREF
  HANDLE KeyHandle; // [rsp+80h] [rbp-80h] BYREF
  void *v90; // [rsp+88h] [rbp-78h] BYREF
  __int64 v91; // [rsp+90h] [rbp-70h] BYREF
  PVOID v92; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING v94; // [rsp+B0h] [rbp-50h] BYREF
  UNICODE_STRING *v95; // [rsp+C0h] [rbp-40h] BYREF
  UNICODE_STRING *v96; // [rsp+C8h] [rbp-38h]
  UNICODE_STRING *v97; // [rsp+D0h] [rbp-30h]
  UNICODE_STRING *v98; // [rsp+D8h] [rbp-28h]
  UNICODE_STRING *v99; // [rsp+E0h] [rbp-20h]
  UNICODE_STRING *v100; // [rsp+E8h] [rbp-18h]
  UNICODE_STRING *p_DestinationString; // [rsp+F0h] [rbp-10h]
  UNICODE_STRING UnicodeString[10]; // [rsp+100h] [rbp+0h] BYREF
  _OWORD v103[15]; // [rsp+1A0h] [rbp+A0h] BYREF
  wchar_t SourceString; // [rsp+290h] [rbp+190h] BYREF
  wchar_t pszDest[8]; // [rsp+298h] [rbp+198h] BYREF

  KeyHandle = 0LL;
  v90 = 0LL;
  v91 = 0LL;
  v2 = 0LL;
  NumberOfBytes = 0;
  v3 = 0LL;
  v88 = 0;
  v87 = 0;
  v4 = 0;
  v5 = 0;
  memset(UnicodeString, 0, sizeof(UnicodeString));
  v7 = PipHardwareConfigOpenKey(v6, 0xF003Fu, &KeyHandle);
  v8 = KeyHandle;
  v9 = v7;
  if ( v7 >= 0 )
  {
    PnpCtxRegDeleteTree(*(__int64 *)&PiPnpRtlCtx, (char *)KeyHandle, L"ComputerIds");
    *(_DWORD *)&ValueName.Length = 1572886;
    ValueName.Buffer = L"ComputerIds";
    v9 = IopCreateRegistryKeyEx(&v90, v8, &ValueName, 0xF003Fu, 0, 0LL);
    if ( v9 < 0 )
      goto LABEL_148;
    PnpCtxRegDeleteTree(*(__int64 *)&PiPnpRtlCtx, (char *)v8, L"ProductIds");
    *(_DWORD *)&ValueName.Length = 1441812;
    ValueName.Buffer = L"ProductIds";
    v83 = IopCreateRegistryKeyEx(&v91, v8, &ValueName, 0xF003Fu, 0, 0LL);
    v9 = v83;
    if ( v83 < 0 )
      goto LABEL_148;
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 240) + 56LL);
    if ( !v10 )
    {
      v9 = -1073741637;
      goto LABEL_148;
    }
    v11 = *(_QWORD *)(v10 + 16);
    if ( !v11 )
    {
      v2 = v90;
      v9 = -1073741637;
      goto LABEL_136;
    }
    v12 = *(_DWORD *)(v10 + 12);
    NumberOfBytes = v12;
    v13 = MmMapIoSpaceEx(v11, v12, 2u);
    v84 = (void *)v13;
    v3 = (void *)v13;
    if ( !v13 )
    {
      v2 = v90;
      v9 = -1073741670;
      v3 = 0LL;
      goto LABEL_136;
    }
    LOBYTE(v14) = 1;
    Struct = PipSmBiosFindStruct(v14, 0LL, v13, v12);
    v18 = (unsigned __int8 *)Struct;
    if ( Struct )
    {
      v19 = (unsigned __int8 *)(Struct + 5);
      if ( Struct + 5 <= Struct + (unsigned __int64)*(unsigned __int8 *)(Struct + 1) )
      {
        String = PipSmBiosGetString(Struct, *(unsigned __int8 *)(Struct + 4), v3, v12, UnicodeString);
        v83 = String;
        v9 = String;
        if ( String == -1073741275 )
        {
          v83 = 0;
        }
        else if ( String < 0 )
        {
          goto LABEL_148;
        }
      }
      if ( v18 + 27 <= &v18[v18[1]] )
      {
        v21 = PipSmBiosGetString(v18, v18[26], v3, v12, &UnicodeString[1]);
        v83 = v21;
        v9 = v21;
        if ( v21 == -1073741275 )
        {
          v83 = 0;
        }
        else if ( v21 < 0 )
        {
          goto LABEL_148;
        }
      }
      if ( v18 + 6 <= &v18[v18[1]] )
      {
        v22 = PipSmBiosGetString(v18, *v19, v3, v12, &UnicodeString[2]);
        v83 = v22;
        v9 = v22;
        if ( v22 == -1073741275 )
        {
          v83 = 0;
        }
        else if ( v22 < 0 )
        {
          goto LABEL_148;
        }
      }
      if ( v18 + 26 <= &v18[v18[1]] )
      {
        v23 = PipSmBiosGetString(v18, v18[25], v3, v12, &UnicodeString[3]);
        v83 = v23;
        v9 = v23;
        if ( v23 == -1073741275 )
        {
          v83 = 0;
        }
        else if ( v23 < 0 )
        {
          goto LABEL_148;
        }
      }
      v17 = (unsigned __int64)&v18[v18[1]];
      if ( (unsigned __int64)(v18 + 7) <= v17 )
      {
        v24 = PipSmBiosGetString(v18, v18[6], v3, v12, &UnicodeString[9]);
        v83 = v24;
        v9 = v24;
        if ( v24 == -1073741275 )
        {
          v83 = 0;
        }
        else if ( v24 < 0 )
        {
          goto LABEL_148;
        }
      }
    }
    LOBYTE(v16) = 10;
    LOBYTE(v17) = 2;
    v25 = PipSmBiosFindStruct(v17, v16, v3, v12);
    v26 = v25;
    if ( v25 )
    {
      v27 = (unsigned __int8 *)(v25 + 5);
      if ( v25 + 5 <= v25 + (unsigned __int64)*(unsigned __int8 *)(v25 + 1) )
      {
        v28 = PipSmBiosGetString(v25, *(unsigned __int8 *)(v25 + 4), v3, v12, &UnicodeString[6]);
        v83 = v28;
        v9 = v28;
        if ( v28 == -1073741275 )
        {
          v83 = 0;
        }
        else if ( v28 < 0 )
        {
          goto LABEL_148;
        }
      }
      if ( v26 + 6 <= v26 + (unsigned __int64)*(unsigned __int8 *)(v26 + 1) )
      {
        v29 = PipSmBiosGetString(v26, *v27, v3, v12, &UnicodeString[7]);
        v83 = v29;
        v9 = v29;
        if ( v29 == -1073741275 )
        {
          v83 = 0;
        }
        else if ( v29 < 0 )
        {
          goto LABEL_148;
        }
      }
    }
    v30 = PipSmBiosFindStruct(0LL, 0LL, v3, v12);
    v32 = (unsigned __int8 *)v30;
    if ( !v30 )
      goto LABEL_44;
    v33 = (unsigned __int8 *)(v30 + 5);
    if ( v30 + 5 <= v30 + (unsigned __int64)*(unsigned __int8 *)(v30 + 1) )
    {
      v34 = PipSmBiosGetString(v30, *(unsigned __int8 *)(v30 + 4), v3, v12, &UnicodeString[4]);
      v83 = v34;
      v9 = v34;
      if ( v34 == -1073741275 )
      {
        v83 = 0;
      }
      else if ( v34 < 0 )
      {
        goto LABEL_148;
      }
    }
    if ( v32 + 6 <= &v32[v32[1]] )
    {
      v35 = PipSmBiosGetString(v32, *v33, v3, v12, &UnicodeString[5]);
      v83 = v35;
      v9 = v35;
      if ( v35 == -1073741275 )
      {
        v83 = 0;
      }
      else if ( v35 < 0 )
      {
        goto LABEL_148;
      }
    }
    if ( v32 + 9 > &v32[v32[1]] )
      goto LABEL_40;
    v36 = PipSmBiosGetString(v32, v32[8], v3, v12, &UnicodeString[8]);
    v83 = v36;
    v9 = v36;
    if ( v36 == -1073741275 )
    {
      v83 = 0;
      goto LABEL_40;
    }
    if ( v36 >= 0 )
    {
LABEL_40:
      v31 = v32 + 21;
      v37 = (unsigned __int64)&v32[v32[1]];
      if ( (unsigned __int64)(v32 + 21) <= v37 )
        v4 = v32[20];
      if ( (unsigned __int64)(v32 + 22) <= v37 )
        v5 = *v31;
LABEL_44:
      LOBYTE(v31) = 3;
      v38 = PipSmBiosFindStruct(v31, 0LL, v3, v12);
      if ( v38 && v38 + 6 <= v38 + (unsigned __int64)*(unsigned __int8 *)(v38 + 1) )
      {
        v39 = *(_BYTE *)(v38 + 5) & 0x7F;
        v88 = v39;
      }
      else
      {
        v39 = v88;
      }
      v40 = KeyHandle;
      if ( v39 )
      {
        ValueName.Buffer = L"EnclosureType";
        *(_DWORD *)&ValueName.Length = 1835034;
        ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &v88, 4u);
      }
      v41 = 0;
      v42 = UnicodeString;
      do
      {
        if ( v42->Buffer && !v42->Length )
          RtlFreeAnsiString(&UnicodeString[v41]);
        ++v41;
        ++v42;
      }
      while ( v41 < 0xA );
      v43 = 0;
      v44 = UnicodeString;
      v45 = (PCWSTR *)off_1403563F0;
      do
      {
        RtlInitUnicodeString(&ValueName, *v45);
        if ( v44->Length )
        {
          if ( (int)PnpUnicodeStringToWstr((__int16 **)&v92, 0LL, &UnicodeString[v43].Length) >= 0 )
          {
            v46 = v92;
            v47 = -1LL;
            while ( *((_WORD *)v92 + ++v47) != 0 )
              ;
            ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, v92, 2 * v47 + 2);
            PnpUnicodeStringToWstrFree(v46, (__int64)&UnicodeString[v43]);
          }
          v40 = KeyHandle;
        }
        else
        {
          ZwDeleteValueKey(v40, &ValueName);
        }
        ++v43;
        ++v45;
        ++v44;
      }
      while ( v43 < 0xA );
      Buffer = UnicodeString[0].Buffer;
      v2 = v90;
      if ( !UnicodeString[0].Buffer )
      {
        v9 = v83;
        v55 = v87;
        goto LABEL_112;
      }
      v50 = v91;
      if ( UnicodeString[2].Buffer && UnicodeString[4].Buffer && UnicodeString[5].Buffer )
      {
        LODWORD(Data) = v5;
        v9 = RtlStringCchPrintfW(pszDest, 8uLL, L"%02x&%02x", v4, Data);
        if ( v9 < 0 )
          goto LABEL_135;
        RtlInitUnicodeString(&DestinationString, pszDest);
        if ( UnicodeString[3].Buffer )
        {
          v95 = UnicodeString;
          v96 = &UnicodeString[1];
          v97 = &UnicodeString[2];
          v98 = &UnicodeString[3];
          v99 = &UnicodeString[4];
          v100 = &UnicodeString[5];
          p_DestinationString = &DestinationString;
          v9 = PipCreateComputerId(v2, v50, &v95, 7LL, v103);
          v51 = 1;
          if ( v9 < 0 )
            goto LABEL_135;
        }
        else
        {
          v51 = v87;
        }
        v95 = UnicodeString;
        v96 = &UnicodeString[1];
        v97 = &UnicodeString[2];
        v98 = &UnicodeString[4];
        v99 = &UnicodeString[5];
        v100 = &DestinationString;
        v52 = PipCreateComputerId(v2, v50, &v95, 6LL, &v103[v51]);
        v53 = v51 + 1;
        v9 = v52;
        if ( v52 < 0 )
          goto LABEL_135;
        v95 = UnicodeString;
        v96 = &UnicodeString[2];
        v97 = &UnicodeString[4];
        v98 = &UnicodeString[5];
        v99 = &DestinationString;
        v54 = PipCreateComputerId(v2, v50, &v95, 5LL, &v103[v53]);
        v55 = v53 + 1;
        v9 = v54;
        if ( v54 < 0 )
          goto LABEL_135;
        Buffer = UnicodeString[0].Buffer;
      }
      else
      {
        v9 = v83;
        v55 = v87;
      }
      if ( !Buffer )
        goto LABEL_112;
      if ( UnicodeString[2].Buffer )
      {
        if ( UnicodeString[3].Buffer )
        {
          if ( UnicodeString[6].Buffer )
          {
            if ( UnicodeString[7].Buffer )
            {
              v95 = UnicodeString;
              v96 = &UnicodeString[1];
              v97 = &UnicodeString[2];
              v98 = &UnicodeString[3];
              v99 = &UnicodeString[6];
              v100 = &UnicodeString[7];
              v56 = PipCreateComputerId(v2, v50, &v95, 6LL, &v103[v55++]);
              v9 = v56;
              if ( v56 < 0 )
                goto LABEL_135;
            }
          }
          v95 = UnicodeString;
          v96 = &UnicodeString[1];
          v97 = &UnicodeString[2];
          v98 = &UnicodeString[3];
          v57 = PipCreateComputerId(v2, v50, &v95, 4LL, &v103[v55++]);
          v9 = v57;
          if ( v57 < 0 )
            goto LABEL_135;
        }
        v95 = UnicodeString;
        v96 = &UnicodeString[1];
        v97 = &UnicodeString[2];
        v58 = PipCreateComputerId(v2, v50, &v95, 3LL, &v103[v55++]);
        v9 = v58;
        if ( v58 < 0 )
          goto LABEL_135;
        Buffer = UnicodeString[0].Buffer;
      }
      if ( !Buffer )
        goto LABEL_112;
      if ( UnicodeString[3].Buffer )
      {
        if ( UnicodeString[6].Buffer )
        {
          if ( UnicodeString[7].Buffer )
          {
            v95 = UnicodeString;
            v96 = &UnicodeString[3];
            v97 = &UnicodeString[6];
            v98 = &UnicodeString[7];
            v59 = PipCreateComputerId(v2, v50, &v95, 4LL, &v103[v55++]);
            v9 = v59;
            if ( v59 < 0 )
              goto LABEL_135;
          }
        }
        v95 = UnicodeString;
        v96 = &UnicodeString[3];
        v60 = PipCreateComputerId(v2, v50, &v95, 2LL, &v103[v55++]);
        v9 = v60;
        if ( v60 < 0 )
          goto LABEL_135;
        Buffer = UnicodeString[0].Buffer;
      }
      if ( !Buffer )
        goto LABEL_112;
      if ( UnicodeString[2].Buffer )
      {
        if ( UnicodeString[6].Buffer )
        {
          if ( UnicodeString[7].Buffer )
          {
            v95 = UnicodeString;
            v96 = &UnicodeString[2];
            v97 = &UnicodeString[6];
            v98 = &UnicodeString[7];
            v61 = PipCreateComputerId(v2, v50, &v95, 4LL, &v103[v55++]);
            v9 = v61;
            if ( v61 < 0 )
              goto LABEL_135;
          }
        }
        v95 = UnicodeString;
        v96 = &UnicodeString[2];
        v62 = PipCreateComputerId(v2, v50, &v95, 2LL, &v103[v55++]);
        v9 = v62;
        if ( v62 < 0 )
          goto LABEL_135;
        Buffer = UnicodeString[0].Buffer;
      }
      if ( !Buffer )
        goto LABEL_112;
      if ( UnicodeString[1].Buffer )
      {
        if ( UnicodeString[7].Buffer )
        {
          if ( UnicodeString[6].Buffer )
          {
            v95 = UnicodeString;
            v96 = &UnicodeString[1];
            v97 = &UnicodeString[6];
            v98 = &UnicodeString[7];
            v63 = PipCreateComputerId(v2, v50, &v95, 4LL, &v103[v55++]);
            v9 = v63;
            if ( v63 < 0 )
              goto LABEL_135;
          }
        }
        v95 = UnicodeString;
        v96 = &UnicodeString[1];
        v64 = PipCreateComputerId(v2, v50, &v95, 2LL, &v103[v55++]);
        v9 = v64;
        if ( v64 < 0 )
          goto LABEL_135;
        Buffer = UnicodeString[0].Buffer;
      }
      if ( !Buffer )
        goto LABEL_112;
      if ( v88 )
      {
        v9 = RtlStringCchPrintfW(&SourceString, 4uLL, L"%x");
        if ( v9 < 0 )
          goto LABEL_135;
        RtlInitUnicodeString(&v94, &SourceString);
        v95 = UnicodeString;
        v96 = &v94;
        v65 = PipCreateComputerId(v2, 0LL, &v95, 2LL, &v103[v55++]);
        v9 = v65;
        if ( v65 < 0 )
          goto LABEL_135;
        Buffer = UnicodeString[0].Buffer;
      }
      if ( !Buffer )
        goto LABEL_112;
      if ( !UnicodeString[7].Buffer
        || !UnicodeString[6].Buffer
        || (v95 = UnicodeString,
            v96 = &UnicodeString[6],
            v97 = &UnicodeString[7],
            v66 = PipCreateComputerId(v2, 0LL, &v95, 3LL, &v103[v55]),
            ++v55,
            v9 = v66,
            v66 >= 0) )
      {
        v95 = UnicodeString;
        v67 = PipCreateComputerId(v2, 0LL, &v95, 1LL, &v103[v55++]);
        v9 = v67;
        if ( v67 >= 0 )
        {
LABEL_112:
          PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 112 * v55 + 2, 0x6E697050u);
          v69 = PoolWithTag;
          if ( PoolWithTag )
          {
            ValueName.Buffer = PoolWithTag;
            v70 = 112 * v55 + 2;
            v71 = 0;
            ValueName.MaximumLength = v70;
            if ( v55 )
            {
              while ( 1 )
              {
                ValueName.Length = 0;
                v72 = 0LL;
                v73 = 0LL;
                v9 = 0;
                if ( (ValueName.MaximumLength & 1) != 0 || v70 == 0xFFFF || !PoolWithTag && v70 )
                {
                  v9 = -1073741811;
                }
                else
                {
                  v72 = PoolWithTag;
                  v73 = (unsigned __int64)v70 >> 1;
                }
                if ( v9 < 0 )
                  break;
                v74 = 0LL;
                if ( v73 )
                {
                  v9 = 0;
                  v75 = L"ComputerMetadata\\";
                  v76 = 0x7FFFLL;
                  v2 = v90;
                  v77 = v73;
                  while ( v76 && *v75 )
                  {
                    *(const wchar_t *)((char *)v75 + (char *)v72 - (char *)L"ComputerMetadata\\") = *v75;
                    --v76;
                    ++v75;
                    ++v74;
                    if ( !--v77 )
                    {
                      if ( v76 && *v75 )
                        v9 = -2147483643;
                      break;
                    }
                  }
                  LOWORD(v73) = v73 - v74;
                  v72 += v74;
                }
                else
                {
                  if ( !v72 )
                  {
                    v9 = -1073741811;
                    ValueName.Length = 0;
                    break;
                  }
                  v9 = -2147483643;
                }
                ValueName.Length = 2 * v74;
                if ( ((v9 + 0x80000000) & 0x80000000) != 0 || v9 == -2147483643 )
                {
                  ValueName.Length = 0;
                  ValueName.MaximumLength = 2 * v73;
                  ValueName.Buffer = v72;
                }
                if ( v9 < 0 )
                  break;
                v9 = RtlStringFromGUIDEx((PGUID)&v103[v71], &ValueName, 0);
                if ( v9 < 0 )
                  break;
                v9 = RtlUpcaseUnicodeString(&ValueName, &ValueName, 0);
                if ( v9 < 0 )
                  break;
                PoolWithTag = ValueName.Buffer + 39;
                v70 = ValueName.MaximumLength - 78;
                ValueName.Buffer += 39;
                ++v71;
                ValueName.MaximumLength -= 78;
                if ( v71 >= v55 )
                  goto LABEL_132;
              }
            }
            else
            {
LABEL_132:
              if ( v9 >= 0 )
              {
                *PoolWithTag = 0;
                ++ValueName.Buffer;
                v9 = PnpSetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       (__int64)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}",
                       5u,
                       0LL,
                       0LL,
                       (__int64)&DEVPKEY_Device_HardwareIds,
                       8210,
                       (__int64)v69,
                       112 * v55 + 2,
                       0);
              }
            }
            ExFreePoolWithTag(v69, 0);
          }
          else
          {
            v9 = -1073741670;
          }
        }
      }
LABEL_135:
      v3 = v84;
      goto LABEL_136;
    }
LABEL_148:
    v2 = v90;
  }
LABEL_136:
  v78 = UnicodeString;
  v79 = 10LL;
  do
  {
    RtlFreeAnsiString(v78++);
    --v79;
  }
  while ( v79 );
  if ( v3 )
    MmUnmapIoSpace(v3, NumberOfBytes);
  if ( v2 )
    ZwClose(v2);
  if ( KeyHandle )
    PnpCtxRegCloseKey(v80, KeyHandle);
  return (unsigned int)v9;
}
