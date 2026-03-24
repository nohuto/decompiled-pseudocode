/*
 * XREFs of SepValidateReferencedCachedHandles @ 0x14065D65C
 * Callers:
 *     SepSetTokenCachedHandles @ 0x14065BD9C (SepSetTokenCachedHandles.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     RtlStringCchPrintfW @ 0x1400923A8 (RtlStringCchPrintfW.c)
 *     RtlInitUnicodeString @ 0x1400B9A90 (RtlInitUnicodeString.c)
 *     RtlSubAuthoritySid @ 0x1400DCAF0 (RtlSubAuthoritySid.c)
 *     RtlGetCurrentServiceSessionId @ 0x14016CB00 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     RtlPrefixUnicodeString @ 0x1405C7460 (RtlPrefixUnicodeString.c)
 *     ObReferenceObjectByHandle @ 0x1405E8350 (ObReferenceObjectByHandle.c)
 *     RtlFreeAnsiString @ 0x140623790 (RtlFreeAnsiString.c)
 *     RtlEqualUnicodeString @ 0x140625D40 (RtlEqualUnicodeString.c)
 *     RtlGetAppContainerSidType @ 0x140654B60 (RtlGetAppContainerSidType.c)
 *     RtlConvertSidToUnicodeString @ 0x14065A6B0 (RtlConvertSidToUnicodeString.c)
 *     SepQueryNameString @ 0x14065DB94 (SepQueryNameString.c)
 */

__int64 __fastcall SepValidateReferencedCachedHandles(__int64 a1, char **a2, unsigned int a3, HANDLE *a4)
{
  unsigned int v4; // esi
  int v6; // ecx
  int AppContainerSidType; // ebx
  PVOID v9; // r14
  unsigned int v10; // r12d
  char *v11; // r12
  PULONG v12; // rsi
  PULONG v13; // rdi
  PULONG v14; // rbx
  PULONG v15; // rax
  __int64 v16; // r9
  const UNICODE_STRING *v17; // r13
  NTSTATUS v18; // eax
  char *v19; // rdi
  struct _OBJECT_TYPE *v20; // rdx
  __int64 v21; // rax
  char *v22; // rdi
  unsigned int v23; // edi
  __int64 v25; // r9
  ULONG v26; // [rsp+30h] [rbp-D0h]
  char v27; // [rsp+40h] [rbp-C0h]
  int v28; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v29; // [rsp+48h] [rbp-B8h]
  unsigned int v30; // [rsp+4Ch] [rbp-B4h]
  PVOID P; // [rsp+50h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE *v33; // [rsp+60h] [rbp-A0h]
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING String2; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING v36; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v37[8]; // [rsp+98h] [rbp-68h]
  UNICODE_STRING v38; // [rsp+A0h] [rbp-60h] BYREF
  char v39; // [rsp+B0h] [rbp-50h]
  wchar_t SourceString[256]; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t pszDest[256]; // [rsp+2C0h] [rbp+1C0h] BYREF

  v4 = 0;
  v33 = a4;
  v30 = a3;
  v29 = 0;
  v6 = *(_DWORD *)a2;
  v27 = 0;
  AppContainerSidType = 0;
  v28 = 0;
  v9 = 0LL;
  P = 0LL;
  v10 = 0;
  Object = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( v6 )
  {
    if ( v6 != 1 )
      goto LABEL_9;
    v25 = *(unsigned int *)(a1 + 120);
    Object = a2 + 1;
    AppContainerSidType = RtlStringCchPrintfW(SourceString, 0x100uLL, L"\\Sessions\\%d", v25);
    if ( AppContainerSidType >= 0 )
    {
      RtlInitUnicodeString(&v36, SourceString);
      v37[0] = 1;
      v10 = 1;
      if ( *(_DWORD *)(a1 + 120) != (unsigned int)RtlGetCurrentServiceSessionId() )
        goto LABEL_9;
      RtlInitUnicodeString(&v38, L"\\BaseNamedObjects");
      v39 = 1;
      goto LABEL_8;
    }
  }
  else
  {
    AppContainerSidType = RtlGetAppContainerSidType(a2[1], &v28);
    if ( AppContainerSidType < 0 )
      goto LABEL_34;
    v11 = a2[1];
    if ( v28 != 2 )
    {
      v12 = RtlSubAuthoritySid(a2[1], 0xBu);
      v13 = RtlSubAuthoritySid(v11, 0xAu);
      v14 = RtlSubAuthoritySid(v11, 9u);
      v15 = RtlSubAuthoritySid(v11, 8u);
      v26 = *v12;
      v4 = 0;
      AppContainerSidType = RtlStringCchPrintfW(pszDest, 0x100uLL, L"%u-%u-%u-%u", *v15, *v14, *v13, v26);
      if ( AppContainerSidType < 0 )
        goto LABEL_34;
      RtlInitUnicodeString(&DestinationString, pszDest);
      goto LABEL_6;
    }
    AppContainerSidType = RtlConvertSidToUnicodeString(&DestinationString, v11, 1u);
    if ( AppContainerSidType >= 0 )
    {
      v27 = 1;
LABEL_6:
      v16 = *(unsigned int *)(a1 + 120);
      Object = &DestinationString;
      AppContainerSidType = RtlStringCchPrintfW(SourceString, 0x100uLL, L"\\Sessions\\%d", v16);
      if ( AppContainerSidType < 0 )
        goto LABEL_34;
      RtlInitUnicodeString(&v36, SourceString);
      v37[0] = 1;
      RtlInitUnicodeString(&v38, L"\\Device\\NamedPipe");
      v39 = 0;
LABEL_8:
      v10 = 2;
LABEL_9:
      if ( !v30 )
        goto LABEL_34;
      v17 = (const UNICODE_STRING *)Object;
      do
      {
        if ( v9 )
          ObfDereferenceObject(v9);
        v18 = ObReferenceObjectByHandle(*v33, 0, 0LL, 0, &Object, 0LL);
        v9 = Object;
        AppContainerSidType = v18;
        if ( v18 >= 0 )
        {
          v19 = (char *)Object - 48;
          v20 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
          if ( v20 != ObpDirectoryObjectType
            && v20 != ObpSymbolicLinkObjectType
            && (v20 != (struct _OBJECT_TYPE *)IoFileObjectType || *(_DWORD *)(*((_QWORD *)Object + 1) + 72LL) != 17) )
          {
            goto LABEL_32;
          }
          if ( P )
          {
            ExFreePoolWithTag(P, 0);
            P = 0LL;
          }
          AppContainerSidType = SepQueryNameString(v9, &P);
          if ( AppContainerSidType < 0 )
            break;
          if ( !P || !*((_WORD *)P + 1) || (String2 = *(UNICODE_STRING *)P, !v10) )
          {
LABEL_32:
            AppContainerSidType = -1073741811;
            break;
          }
          while ( !RtlPrefixUnicodeString((UNICODE_STRING *)((char *)&v36 + 24 * v4), &String2, 1u) )
          {
            if ( ++v4 >= v10 )
              goto LABEL_32;
          }
          v21 = 3LL * v4;
          v4 = 0;
          if ( v37[8 * v21] )
          {
            if ( (v19[26] & 2) != 0 )
              v22 = &v19[-ObpInfoMaskToOffset[v19[26] & 3]];
            else
              v22 = 0LL;
            if ( !v22 || !*((_WORD *)v22 + 5) )
              goto LABEL_32;
            String2 = *(UNICODE_STRING *)(v22 + 8);
            if ( !RtlEqualUnicodeString(&String2, v17, 1u) )
            {
              v23 = 0;
              while ( !RtlEqualUnicodeString(&String2, (PCUNICODE_STRING)&AllowedCachedObjectNames + v23, 1u) )
              {
                if ( ++v23 >= 5 )
                  goto LABEL_32;
              }
            }
          }
        }
        ++v33;
        ++v29;
      }
      while ( v29 < v30 );
    }
  }
LABEL_34:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v9 )
    ObfDereferenceObject(v9);
  if ( v27 )
    RtlFreeAnsiString(&DestinationString);
  return (unsigned int)AppContainerSidType;
}
