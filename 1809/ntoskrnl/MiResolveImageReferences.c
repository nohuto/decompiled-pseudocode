/*
 * XREFs of MiResolveImageReferences @ 0x14067A170
 * Callers:
 *     MmLoadSystemImageEx @ 0x1406821B8 (MmLoadSystemImageEx.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     RtlInitAnsiString @ 0x1400EEE10 (RtlInitAnsiString.c)
 *     RtlImageDirectoryEntryToData @ 0x1400F2CC0 (RtlImageDirectoryEntryToData.c)
 *     RtlAppendUnicodeStringToString @ 0x1400F5250 (RtlAppendUnicodeStringToString.c)
 *     ApiSetResolveToHost @ 0x140136824 (ApiSetResolveToHost.c)
 *     MiSessionReferenceImage @ 0x1401783DC (MiSessionReferenceImage.c)
 *     _strnicmp @ 0x1401955D0 (_strnicmp.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlAnsiStringToUnicodeString @ 0x1405ABDA0 (RtlAnsiStringToUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     RtlEqualUnicodeString @ 0x140626D60 (RtlEqualUnicodeString.c)
 *     MiSnapThunk @ 0x14067A5F4 (MiSnapThunk.c)
 *     MiCompressImportList @ 0x1406C9A38 (MiCompressImportList.c)
 *     MiPrepareImportList @ 0x1406C9AF0 (MiPrepareImportList.c)
 *     PsQueryCurrentApiSetSchema @ 0x1406CC6D8 (PsQueryCurrentApiSetSchema.c)
 *     RtlDuplicateUnicodeString @ 0x1406D4EA0 (RtlDuplicateUnicodeString.c)
 *     MiDereferenceImports @ 0x14070F18C (MiDereferenceImports.c)
 *     MiLoadImportDll @ 0x14071C8F8 (MiLoadImportDll.c)
 *     MiFormFullImageName @ 0x14071E408 (MiFormFullImageName.c)
 *     MiLogFailedDriverLoad @ 0x14084FBC8 (MiLogFailedDriverLoad.c)
 *     MiSnapUnresolvedImport @ 0x14084FFA8 (MiSnapUnresolvedImport.c)
 */

__int64 __fastcall MiResolveImageReferences(char *a1, __int64 a2, void *a3, const UNICODE_STRING *a4, _QWORD *a5)
{
  _QWORD *v5; // r15
  unsigned __int64 v6; // r12
  unsigned int *v7; // rax
  unsigned int *v8; // r13
  int v9; // ebx
  UNICODE_STRING *v10; // rsi
  int v11; // eax
  _QWORD *v12; // r14
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
  unsigned int i; // r15d
  int v28; // eax
  int v30; // eax
  int v31; // eax
  char v32[8]; // [rsp+38h] [rbp-81h] BYREF
  UNICODE_STRING *p_String1; // [rsp+40h] [rbp-79h]
  __int64 v34; // [rsp+48h] [rbp-71h]
  unsigned int v35; // [rsp+50h] [rbp-69h]
  ULONG Size; // [rsp+54h] [rbp-65h] BYREF
  PVOID P[2]; // [rsp+58h] [rbp-61h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-51h] BYREF
  UNICODE_STRING String1; // [rsp+78h] [rbp-41h] BYREF
  UNICODE_STRING StringIn; // [rsp+88h] [rbp-31h] BYREF
  char v41[8]; // [rsp+98h] [rbp-21h] BYREF
  char v42; // [rsp+A0h] [rbp-19h] BYREF
  int v43; // [rsp+A8h] [rbp-11h] BYREF
  const wchar_t *v44; // [rsp+B0h] [rbp-9h]
  _STRING DestinationString; // [rsp+B8h] [rbp-1h] BYREF

  v5 = a5;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v44 = L"\\SystemRoot\\System32\\drivers\\";
  v6 = (unsigned __int64)a1;
  v43 = 3932218;
  if ( a5 )
    *a5 = -2LL;
  v7 = (unsigned int *)RtlImageDirectoryEntryToData(a1, 1u, 1u, &Size);
  v8 = v7;
  if ( !v7 )
    return 0LL;
  P[0] = 0LL;
  v34 = 0LL;
  v9 = 0;
  v35 = 0;
  v10 = 0LL;
  String1.Buffer = 0LL;
  v11 = MiPrepareImportList(v7, P);
  v12 = P[0];
  ImportDll = v11;
  v14 = 0LL;
  if ( ImportDll < 0 )
    goto LABEL_69;
  while ( 1 )
  {
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
      goto LABEL_68;
    if ( !UnicodeString.Buffer )
    {
      ImportDll = -1073741670;
      goto LABEL_68;
    }
    CurrentApiSetSchema = PsQueryCurrentApiSetSchema();
    ImportDll = ApiSetResolveToHost(CurrentApiSetSchema, &UnicodeString.Length, a2, v32, (__int64)&StringIn);
    v14 = 0LL;
    if ( ImportDll < 0 )
      goto LABEL_68;
    if ( v32[0] )
    {
      RtlFreeAnsiString(&UnicodeString);
      if ( !StringIn.Length )
        goto LABEL_10;
      P[0] = &v43;
      Size = 0x80000000;
      ImportDll = RtlDuplicateUnicodeString(0, &StringIn, &UnicodeString);
      v14 = 0LL;
      if ( ImportDll < 0 )
        goto LABEL_68;
    }
    else
    {
      P[0] = a3;
      Size = 0;
    }
    if ( !a4 || !strnicmp(v15, "ntoskrnl", 8uLL) || !strnicmp(v15, "hal", 3uLL) )
    {
      String1 = UnicodeString;
    }
    else
    {
      String1.MaximumLength = UnicodeString.Length + a4->Length;
      String1.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, String1.MaximumLength, 0x54446D4Du);
      if ( !String1.Buffer )
      {
        v14 = v34;
        ImportDll = -1073741670;
        goto LABEL_68;
      }
      String1.Length = 0;
      RtlAppendUnicodeStringToString(&String1, a4);
      RtlAppendUnicodeStringToString(&String1, &UnicodeString);
      v9 |= 2u;
    }
    v17 = Size;
    p_String1 = &String1;
    for ( v9 &= ~1u; ; v9 |= 1u )
    {
      v18 = (PVOID *)PsLoadedModuleList;
      if ( PsLoadedModuleList == &PsLoadedModuleList )
        goto LABEL_24;
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
        break;
      v6 = (unsigned __int64)a1;
LABEL_24:
      if ( !(unsigned int)MiFormFullImageName(P[0], &UnicodeString, &StringIn) )
        goto LABEL_66;
      ImportDll = MiLoadImportDll((unsigned int)&StringIn, (_DWORD)a4, v17, (unsigned int)&v42, (__int64)v41);
      if ( ImportDll == -1073741800 )
      {
        if ( (unsigned int)MiGetSystemRegionType(v6) != 1 )
          goto LABEL_27;
        ImportDll = MiLoadImportDll((unsigned int)&StringIn, (_DWORD)a4, v17 | 1, (unsigned int)&v42, (__int64)v41);
      }
      if ( ImportDll == -1073741772 && !a4 && P[0] != &v43 )
      {
        ExFreePoolWithTag(StringIn.Buffer, 0);
        if ( !(unsigned int)MiFormFullImageName(&v43, &UnicodeString, &StringIn) )
        {
LABEL_66:
          ImportDll = -1073741670;
          v14 = 0LL;
          goto LABEL_68;
        }
        ImportDll = MiLoadImportDll((unsigned int)&StringIn, 0, v17, (unsigned int)&v42, (__int64)v41);
      }
LABEL_27:
      ExFreePoolWithTag(StringIn.Buffer, 0);
      v14 = 0LL;
      if ( ImportDll < 0 )
        goto LABEL_68;
    }
    if ( ((_DWORD)v18[13] & 0x1000) == 0 )
    {
      v24 = v35;
      v12[v35 + 1] = v18;
      v35 = v22 + v24;
    }
    if ( *v8 )
      break;
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
  }
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
LABEL_68:
  v10 = p_String1;
LABEL_69:
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
