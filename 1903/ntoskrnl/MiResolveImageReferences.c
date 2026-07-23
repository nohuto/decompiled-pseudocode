/*
 * XREFs of MiResolveImageReferences @ 0x14070EE20
 * Callers:
 *     MmLoadSystemImageEx @ 0x14070DAB0 (MmLoadSystemImageEx.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     RtlImageDirectoryEntryToData @ 0x1400AFB30 (RtlImageDirectoryEntryToData.c)
 *     RtlInitAnsiString @ 0x1400E5090 (RtlInitAnsiString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400E7910 (RtlAppendUnicodeStringToString.c)
 *     ApiSetResolveToHost @ 0x14015441C (ApiSetResolveToHost.c)
 *     MiSessionReferenceImage @ 0x140181B9C (MiSessionReferenceImage.c)
 *     _strnicmp @ 0x14019FC00 (_strnicmp.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x14063CAA0 (RtlAnsiStringToUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x140653D20 (RtlEqualUnicodeString.c)
 *     RtlDuplicateUnicodeString @ 0x1406F2E70 (RtlDuplicateUnicodeString.c)
 *     MiSnapThunk @ 0x14070F2B8 (MiSnapThunk.c)
 *     PsQueryCurrentApiSetSchema @ 0x14070F570 (PsQueryCurrentApiSetSchema.c)
 *     MiPrepareImportList @ 0x14070F6C4 (MiPrepareImportList.c)
 *     MiCompressImportList @ 0x14071090C (MiCompressImportList.c)
 *     MiLoadImportDll @ 0x14074414C (MiLoadImportDll.c)
 *     MiDereferenceImports @ 0x1407455EC (MiDereferenceImports.c)
 *     MiFormFullImageName @ 0x140745D48 (MiFormFullImageName.c)
 *     MiLogFailedDriverLoad @ 0x14088AA58 (MiLogFailedDriverLoad.c)
 *     MiSnapUnresolvedImport @ 0x14088AE40 (MiSnapUnresolvedImport.c)
 */

__int64 __fastcall MiResolveImageReferences(char *a1, __int64 a2, _QWORD *a3, const UNICODE_STRING *a4, _QWORD *a5)
{
  _QWORD *v5; // r14
  unsigned __int64 v6; // r12
  unsigned int *v7; // rax
  unsigned int *v8; // r13
  int v9; // ebx
  UNICODE_STRING *v10; // rsi
  int v11; // eax
  _QWORD *v12; // r15
  int ImportDll; // edi
  __int64 v14; // rax
  const CHAR *v15; // rsi
  __int64 CurrentApiSetSchema; // rax
  ULONG v17; // esi
  PVOID *v18; // rdi
  BOOLEAN v19; // al
  __int64 v20; // r8
  unsigned __int64 v21; // r12
  int v22; // edx
  int SystemRegionType; // eax
  unsigned int v24; // ecx
  int v25; // eax
  char *v26; // rsi
  unsigned int i; // r14d
  int v28; // eax
  int v30; // eax
  int v31; // eax
  char v32[8]; // [rsp+38h] [rbp-81h] BYREF
  UNICODE_STRING *p_String1; // [rsp+40h] [rbp-79h]
  __int64 v34; // [rsp+48h] [rbp-71h]
  unsigned int v35; // [rsp+50h] [rbp-69h]
  ULONG Size; // [rsp+54h] [rbp-65h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-61h] BYREF
  PVOID P; // [rsp+68h] [rbp-51h] BYREF
  UNICODE_STRING StringIn; // [rsp+70h] [rbp-49h] BYREF
  UNICODE_STRING String1; // [rsp+88h] [rbp-31h] BYREF
  _QWORD *v41; // [rsp+98h] [rbp-21h]
  char v42[8]; // [rsp+A0h] [rbp-19h] BYREF
  _QWORD v43[2]; // [rsp+A8h] [rbp-11h] BYREF
  _STRING DestinationString; // [rsp+B8h] [rbp-1h] BYREF

  v5 = a5;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v6 = (unsigned __int64)a1;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&StringIn.Length = 0LL;
  StringIn.Buffer = 0LL;
  v43[1] = L"\\SystemRoot\\System32\\drivers\\";
  *(_QWORD *)&String1.Length = 0LL;
  v43[0] = 3932218LL;
  if ( a5 )
    *a5 = -2LL;
  v7 = (unsigned int *)RtlImageDirectoryEntryToData(a1, 1u, 1u, &Size);
  v8 = v7;
  if ( !v7 )
    return 0LL;
  P = 0LL;
  v34 = 0LL;
  v9 = 0;
  v35 = 0;
  v10 = 0LL;
  String1.Buffer = 0LL;
  v11 = MiPrepareImportList(v7, &P);
  v12 = P;
  ImportDll = v11;
  v14 = 0LL;
  if ( ImportDll < 0 )
    goto LABEL_75;
LABEL_11:
  if ( !v8[3] || !*v8 )
  {
    if ( v5 )
      *v5 = MiCompressImportList(v12);
    else
      ExFreePoolWithTag(v12, 0);
    return 0LL;
  }
  v15 = (const CHAR *)(v6 + v8[3]);
  p_String1 = 0LL;
  RtlInitAnsiString(&DestinationString, v15);
  ImportDll = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
  v14 = 0LL;
  if ( ImportDll < 0 )
    goto LABEL_74;
  if ( !UnicodeString.Buffer )
  {
    ImportDll = -1073741670;
    goto LABEL_74;
  }
  CurrentApiSetSchema = PsQueryCurrentApiSetSchema();
  ImportDll = ApiSetResolveToHost(CurrentApiSetSchema, &UnicodeString.Length, a2, v32, (__int64)&StringIn);
  v14 = 0LL;
  if ( ImportDll < 0 )
    goto LABEL_74;
  if ( v32[0] )
  {
    RtlFreeAnsiString(&UnicodeString);
    if ( !StringIn.Length )
      goto LABEL_10;
    v41 = v43;
    Size = 0x80000000;
    ImportDll = RtlDuplicateUnicodeString(0, &StringIn, &UnicodeString);
    v14 = 0LL;
    if ( ImportDll < 0 )
      goto LABEL_74;
  }
  else
  {
    v41 = a3;
    Size = 0;
  }
  if ( !a4 || !strnicmp(v15, "ntoskrnl", 8uLL) || !strnicmp(v15, "hal", 3uLL) )
  {
    String1 = UnicodeString;
LABEL_20:
    v17 = Size;
    p_String1 = &String1;
    for ( v9 &= ~1u; ; v9 |= 1u )
    {
      v18 = (PVOID *)PsLoadedModuleList;
      if ( PsLoadedModuleList != &PsLoadedModuleList )
      {
        while ( 1 )
        {
          v19 = RtlEqualUnicodeString(&String1, (PCUNICODE_STRING)(v18 + 11), 1u);
          v20 = 0LL;
          if ( v19 )
            break;
          v18 = (PVOID *)*v18;
          if ( v18 == &PsLoadedModuleList )
            goto LABEL_24;
        }
        v21 = (unsigned __int64)v18[6];
        v22 = 1;
        if ( (v9 & 1) == 0 && ((_DWORD)v18[13] & 0x1000) == 0 )
        {
          SystemRegionType = MiGetSystemRegionType((unsigned __int64)v18[6]);
          if ( SystemRegionType == v22 )
          {
            v31 = MiSessionReferenceImage(v21);
            v22 = 1;
            if ( !v31 )
              v21 = v20;
          }
          else if ( v5 || (v30 = MiGetSystemRegionType((unsigned __int64)a1), v30 == v22) )
          {
            *((_WORD *)v18 + 54) += v22;
          }
        }
        if ( v21 )
        {
          if ( ((_DWORD)v18[13] & 0x1000) == 0 )
          {
            v24 = v35;
            v12[v35 + 1] = v18;
            v35 = v22 + v24;
          }
          if ( *v8 )
          {
            v25 = (int)a1;
            v26 = &a1[*v8];
            for ( i = (_DWORD)a1 + v8[4]; ; i += 8 )
            {
              if ( *(_QWORD *)v26 == v20 )
              {
                v5 = a5;
                goto LABEL_7;
              }
              v28 = MiSnapThunk(v21, v25, (_DWORD)v26, i, v20);
              v20 = 0LL;
              ImportDll = v28;
              if ( v28 < 0 )
                break;
              v25 = (int)a1;
              v26 += 8;
            }
            v14 = MiSnapUnresolvedImport(a1, v26, v21);
            goto LABEL_74;
          }
LABEL_7:
          RtlFreeAnsiString(&UnicodeString);
          if ( (v9 & 2) != 0 )
          {
            ExFreePoolWithTag(String1.Buffer, 0);
            v9 &= ~2u;
          }
          v6 = (unsigned __int64)a1;
LABEL_10:
          v8 += 5;
          goto LABEL_11;
        }
        v6 = (unsigned __int64)a1;
      }
LABEL_24:
      if ( !(unsigned int)MiFormFullImageName(v41, &UnicodeString, &StringIn) )
        goto LABEL_62;
      ImportDll = MiLoadImportDll((unsigned int)&StringIn, (_DWORD)a4, v17, (unsigned int)&P, (__int64)v42);
      if ( ImportDll == -1073741800 )
      {
        if ( (unsigned int)MiGetSystemRegionType(v6) != 1 )
          goto LABEL_27;
        ImportDll = MiLoadImportDll((unsigned int)&StringIn, (_DWORD)a4, v17 | 1, (unsigned int)&P, (__int64)v42);
      }
      if ( ImportDll == -1073741772 )
      {
        ExFreePoolWithTag(StringIn.Buffer, 0);
        if ( v41 == v43 )
        {
          if ( !v32[0] )
          {
            ImportDll = -1073741772;
            goto LABEL_71;
          }
          if ( !(unsigned int)MiFormFullImageName(a3, &UnicodeString, &StringIn) )
            goto LABEL_69;
        }
        else if ( !(unsigned int)MiFormFullImageName(v43, &UnicodeString, &StringIn) )
        {
LABEL_62:
          ImportDll = -1073741670;
          v14 = 0LL;
          goto LABEL_74;
        }
        ImportDll = MiLoadImportDll((unsigned int)&StringIn, (_DWORD)a4, v17, (unsigned int)&P, (__int64)v42);
        if ( v32[0] && ImportDll == -1073741800 && (unsigned int)MiGetSystemRegionType(v6) == 1 )
          ImportDll = MiLoadImportDll((unsigned int)&StringIn, (_DWORD)a4, v17 | 1, (unsigned int)&P, (__int64)v42);
      }
LABEL_27:
      ExFreePoolWithTag(StringIn.Buffer, 0);
      v14 = 0LL;
      if ( ImportDll < 0 )
        goto LABEL_74;
    }
  }
  String1.MaximumLength = UnicodeString.Length + a4->Length;
  String1.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, String1.MaximumLength, 0x54446D4Du);
  if ( String1.Buffer )
  {
    String1.Length = 0;
    RtlAppendUnicodeStringToString(&String1, a4);
    RtlAppendUnicodeStringToString(&String1, &UnicodeString);
    v9 |= 2u;
    goto LABEL_20;
  }
LABEL_69:
  ImportDll = -1073741670;
LABEL_71:
  v14 = v34;
LABEL_74:
  v10 = p_String1;
LABEL_75:
  MiLogFailedDriverLoad(a2, v10, v14, (unsigned int)ImportDll);
  if ( (v9 & 2) != 0 )
    ExFreePoolWithTag(String1.Buffer, 0);
  RtlFreeAnsiString(&UnicodeString);
  if ( v12 )
  {
    if ( v35 != *v12 )
      *v12 = v35;
    MiDereferenceImports(v12);
    ExFreePoolWithTag(v12, 0);
  }
  return (unsigned int)ImportDll;
}
