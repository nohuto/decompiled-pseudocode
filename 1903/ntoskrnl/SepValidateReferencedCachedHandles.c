/*
 * XREFs of SepValidateReferencedCachedHandles @ 0x14061E3F8
 * Callers:
 *     SepSetTokenCachedHandles @ 0x14061DD74 (SepSetTokenCachedHandles.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x14000A8C0 (RtlSubAuthoritySid.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfW @ 0x140087CC8 (RtlStringCchPrintfW.c)
 *     RtlGetCurrentServiceSessionId @ 0x140180CE0 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 *     SepQueryNameString @ 0x14061E7F4 (SepQueryNameString.c)
 *     RtlPrefixUnicodeString @ 0x140653340 (RtlPrefixUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x140653D20 (RtlEqualUnicodeString.c)
 *     RtlConvertSidToUnicodeString @ 0x1406677F0 (RtlConvertSidToUnicodeString.c)
 *     RtlGetAppContainerSidType @ 0x14067FA50 (RtlGetAppContainerSidType.c)
 */

__int64 __fastcall SepValidateReferencedCachedHandles(__int64 a1, PSID *a2, unsigned int a3, HANDLE *a4)
{
  unsigned int v4; // esi
  int v6; // ecx
  NTSTATUS v8; // ebx
  PVOID v9; // r14
  unsigned int v10; // r12d
  PSID v11; // r12
  __int64 v12; // r9
  const UNICODE_STRING *v13; // r13
  NTSTATUS v14; // eax
  char *v15; // rdi
  struct _OBJECT_TYPE *v16; // rdx
  __int64 v17; // rax
  char *v18; // rdi
  unsigned int v19; // edi
  PULONG v21; // rsi
  PULONG v22; // rdi
  PULONG v23; // rbx
  PULONG v24; // rax
  __int64 v25; // r9
  ULONG v26; // [rsp+30h] [rbp-D0h]
  char v27; // [rsp+40h] [rbp-C0h]
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+44h] [rbp-BCh] BYREF
  int v29; // [rsp+48h] [rbp-B8h]
  unsigned int v30; // [rsp+4Ch] [rbp-B4h]
  PVOID P; // [rsp+50h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE *v33; // [rsp+60h] [rbp-A0h]
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING String2; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v37[8]; // [rsp+98h] [rbp-68h]
  UNICODE_STRING v38; // [rsp+A0h] [rbp-60h] BYREF
  char v39; // [rsp+B0h] [rbp-50h]
  wchar_t pszDest[256]; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t SourceString[256]; // [rsp+2C0h] [rbp+1C0h] BYREF

  v4 = 0;
  v33 = a4;
  v30 = a3;
  v29 = 0;
  v6 = *(_DWORD *)a2;
  v27 = 0;
  v8 = 0;
  AppContainerSidType = NotAppContainerSidType;
  v9 = 0LL;
  P = 0LL;
  v10 = 0;
  Object = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  if ( v6 )
  {
    if ( v6 != 1 )
      goto LABEL_9;
    v25 = *(unsigned int *)(a1 + 120);
    Object = a2 + 1;
    v8 = RtlStringCchPrintfW(pszDest, 0x100uLL, L"\\Sessions\\%d", v25);
    if ( v8 < 0 )
      goto LABEL_34;
    RtlInitUnicodeString(&DestinationString, pszDest);
    v37[0] = 1;
    v10 = 1;
    if ( *(_DWORD *)(a1 + 120) != RtlGetCurrentServiceSessionId() )
      goto LABEL_9;
    RtlInitUnicodeString(&v38, L"\\BaseNamedObjects");
    v39 = 1;
  }
  else
  {
    v8 = RtlGetAppContainerSidType(a2[1], &AppContainerSidType);
    if ( v8 < 0 )
      goto LABEL_34;
    v11 = a2[1];
    if ( AppContainerSidType == ParentAppContainerSidType )
    {
      v8 = RtlConvertSidToUnicodeString(&UnicodeString, v11, 1u);
      if ( v8 < 0 )
        goto LABEL_34;
      v27 = 1;
    }
    else
    {
      v21 = RtlSubAuthoritySid(a2[1], 0xBu);
      v22 = RtlSubAuthoritySid(v11, 0xAu);
      v23 = RtlSubAuthoritySid(v11, 9u);
      v24 = RtlSubAuthoritySid(v11, 8u);
      v26 = *v21;
      v4 = 0;
      v8 = RtlStringCchPrintfW(SourceString, 0x100uLL, L"%u-%u-%u-%u", *v24, *v23, *v22, v26);
      if ( v8 < 0 )
        goto LABEL_34;
      RtlInitUnicodeString(&UnicodeString, SourceString);
    }
    v12 = *(unsigned int *)(a1 + 120);
    Object = &UnicodeString;
    v8 = RtlStringCchPrintfW(pszDest, 0x100uLL, L"\\Sessions\\%d", v12);
    if ( v8 < 0 )
      goto LABEL_34;
    RtlInitUnicodeString(&DestinationString, pszDest);
    v37[0] = 1;
    RtlInitUnicodeString(&v38, L"\\Device\\NamedPipe");
    v39 = 0;
  }
  v10 = 2;
LABEL_9:
  if ( !v30 )
    goto LABEL_34;
  v13 = (const UNICODE_STRING *)Object;
  while ( 1 )
  {
    if ( v9 )
      ObfDereferenceObject(v9);
    v14 = ObReferenceObjectByHandle(*v33, 0, 0LL, 0, &Object, 0LL);
    v9 = Object;
    v8 = v14;
    if ( v14 < 0 )
      goto LABEL_33;
    v15 = (char *)Object - 48;
    v16 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
    if ( v16 != ObpDirectoryObjectType
      && v16 != ObpSymbolicLinkObjectType
      && (v16 != (struct _OBJECT_TYPE *)IoFileObjectType || *(_DWORD *)(*((_QWORD *)Object + 1) + 72LL) != 17) )
    {
      break;
    }
    if ( P )
    {
      ExFreePoolWithTag(P, 0);
      P = 0LL;
    }
    v8 = SepQueryNameString(v9, &P);
    if ( v8 < 0 )
      goto LABEL_34;
    if ( !P )
      break;
    if ( !*((_WORD *)P + 1) )
      break;
    String2 = *(UNICODE_STRING *)P;
    if ( !v10 )
      break;
    while ( !RtlPrefixUnicodeString((UNICODE_STRING *)((char *)&DestinationString + 24 * v4), &String2, 1u) )
    {
      if ( ++v4 >= v10 )
        goto LABEL_53;
    }
    v17 = 3LL * v4;
    v4 = 0;
    if ( v37[8 * v17] )
    {
      if ( (v15[26] & 2) != 0 )
        v18 = &v15[-ObpInfoMaskToOffset[v15[26] & 3]];
      else
        v18 = 0LL;
      if ( !v18 || !*((_WORD *)v18 + 5) )
        break;
      String2 = *(UNICODE_STRING *)(v18 + 8);
      if ( !RtlEqualUnicodeString(&String2, v13, 1u) )
      {
        v19 = 0;
        while ( !RtlEqualUnicodeString(&String2, (PCUNICODE_STRING)&AllowedCachedObjectNames + v19, 1u) )
        {
          if ( ++v19 >= 5 )
            goto LABEL_53;
        }
      }
    }
LABEL_33:
    ++v33;
    if ( ++v29 >= v30 )
      goto LABEL_34;
  }
LABEL_53:
  v8 = -1073741811;
LABEL_34:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v9 )
    ObfDereferenceObject(v9);
  if ( v27 )
    RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)v8;
}
