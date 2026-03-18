/*
 * XREFs of SepValidateReferencedCachedHandles @ 0x14061FF14
 * Callers:
 *     SepSetTokenCachedHandles @ 0x14061F890 (SepSetTokenCachedHandles.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x14000A950 (RtlSubAuthoritySid.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfW @ 0x1400880E8 (RtlStringCchPrintfW.c)
 *     RtlGetCurrentServiceSessionId @ 0x1401813D0 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     SepQueryNameString @ 0x140620310 (SepQueryNameString.c)
 *     RtlPrefixUnicodeString @ 0x140666440 (RtlPrefixUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x140666E20 (RtlEqualUnicodeString.c)
 *     RtlConvertSidToUnicodeString @ 0x140694C10 (RtlConvertSidToUnicodeString.c)
 *     RtlGetAppContainerSidType @ 0x14069CAF0 (RtlGetAppContainerSidType.c)
 */

__int64 __fastcall SepValidateReferencedCachedHandles(__int64 a1, PSID *a2, unsigned int a3, HANDLE *a4)
{
  unsigned int v4; // esi
  int v6; // ecx
  NTSTATUS AppContainerSidType; // ebx
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
  ULONG Object; // [rsp+20h] [rbp-E0h]
  ULONG HandleInformation; // [rsp+28h] [rbp-D8h]
  ULONG v28; // [rsp+30h] [rbp-D0h]
  char v29; // [rsp+40h] [rbp-C0h]
  int v30; // [rsp+44h] [rbp-BCh]
  int v31; // [rsp+48h] [rbp-B8h]
  unsigned int v32; // [rsp+4Ch] [rbp-B4h]
  PVOID P; // [rsp+50h] [rbp-B0h] BYREF
  PVOID p_UnicodeString; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE *v35; // [rsp+60h] [rbp-A0h]
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING String2; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v39[8]; // [rsp+98h] [rbp-68h]
  UNICODE_STRING v40; // [rsp+A0h] [rbp-60h] BYREF
  char v41; // [rsp+B0h] [rbp-50h]
  wchar_t pszDest[256]; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t SourceString[256]; // [rsp+2C0h] [rbp+1C0h] BYREF

  v4 = 0;
  v35 = a4;
  v32 = a3;
  v31 = 0;
  v6 = *(_DWORD *)a2;
  v29 = 0;
  AppContainerSidType = 0;
  v30 = 0;
  v9 = 0LL;
  P = 0LL;
  v10 = 0;
  p_UnicodeString = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  if ( v6 )
  {
    if ( v6 != 1 )
      goto LABEL_7;
    v25 = *(unsigned int *)(a1 + 120);
    p_UnicodeString = a2 + 1;
    AppContainerSidType = RtlStringCchPrintfW(pszDest, 0x100uLL, L"\\Sessions\\%d", v25);
    if ( AppContainerSidType < 0 )
      goto LABEL_32;
    RtlInitUnicodeString(&DestinationString, pszDest);
    v39[0] = 1;
    v10 = 1;
    if ( *(_DWORD *)(a1 + 120) != (unsigned int)RtlGetCurrentServiceSessionId() )
      goto LABEL_7;
    RtlInitUnicodeString(&v40, L"\\BaseNamedObjects");
    v41 = 1;
LABEL_6:
    v10 = 2;
LABEL_7:
    if ( !v32 )
      goto LABEL_32;
    v13 = (const UNICODE_STRING *)p_UnicodeString;
    while ( 1 )
    {
      if ( v9 )
        ObfDereferenceObject(v9);
      v14 = ObReferenceObjectByHandle(*v35, 0, 0LL, 0, &p_UnicodeString, 0LL);
      v9 = p_UnicodeString;
      AppContainerSidType = v14;
      if ( v14 >= 0 )
      {
        v15 = (char *)p_UnicodeString - 48;
        v16 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)p_UnicodeString - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)p_UnicodeString - 48) >> 8)];
        if ( v16 != ObpDirectoryObjectType
          && v16 != ObpSymbolicLinkObjectType
          && (v16 != (struct _OBJECT_TYPE *)IoFileObjectType
           || *(_DWORD *)(*((_QWORD *)p_UnicodeString + 1) + 72LL) != 17) )
        {
          goto LABEL_51;
        }
        if ( P )
        {
          ExFreePoolWithTag(P, 0);
          P = 0LL;
        }
        AppContainerSidType = SepQueryNameString(v9, &P);
        if ( AppContainerSidType < 0 )
          goto LABEL_32;
        if ( !P || !*((_WORD *)P + 1) || (String2 = *(UNICODE_STRING *)P, !v10) )
        {
LABEL_51:
          AppContainerSidType = -1073741811;
          goto LABEL_32;
        }
        while ( !RtlPrefixUnicodeString((UNICODE_STRING *)((char *)&DestinationString + 24 * v4), &String2, 1u) )
        {
          if ( ++v4 >= v10 )
            goto LABEL_51;
        }
        v17 = 3LL * v4;
        v4 = 0;
        if ( v39[8 * v17] )
        {
          if ( (v15[26] & 2) != 0 )
            v18 = &v15[-ObpInfoMaskToOffset[v15[26] & 3]];
          else
            v18 = 0LL;
          if ( !v18 || !*((_WORD *)v18 + 5) )
            goto LABEL_51;
          String2 = *(UNICODE_STRING *)(v18 + 8);
          if ( !RtlEqualUnicodeString(&String2, v13, 1u) )
          {
            v19 = 0;
            while ( !RtlEqualUnicodeString(&String2, (PCUNICODE_STRING)&AllowedCachedObjectNames + v19, 1u) )
            {
              if ( ++v19 >= 5 )
                goto LABEL_51;
            }
          }
        }
      }
      ++v35;
      if ( ++v31 >= v32 )
        goto LABEL_32;
    }
  }
  AppContainerSidType = RtlGetAppContainerSidType(a2[1]);
  if ( AppContainerSidType >= 0 )
  {
    v11 = a2[1];
    v21 = RtlSubAuthoritySid(a2[1], 0xBu);
    v22 = RtlSubAuthoritySid(v11, 0xAu);
    v23 = RtlSubAuthoritySid(v11, 9u);
    v24 = RtlSubAuthoritySid(v11, 8u);
    v28 = *v21;
    HandleInformation = *v22;
    Object = *v23;
    v4 = 0;
    AppContainerSidType = RtlStringCchPrintfW(
                            SourceString,
                            0x100uLL,
                            L"%u-%u-%u-%u",
                            *v24,
                            Object,
                            HandleInformation,
                            v28);
    if ( AppContainerSidType >= 0 )
    {
      RtlInitUnicodeString(&UnicodeString, SourceString);
      v12 = *(unsigned int *)(a1 + 120);
      p_UnicodeString = &UnicodeString;
      AppContainerSidType = RtlStringCchPrintfW(pszDest, 0x100uLL, L"\\Sessions\\%d", v12);
      if ( AppContainerSidType >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, pszDest);
        v39[0] = 1;
        RtlInitUnicodeString(&v40, L"\\Device\\NamedPipe");
        v41 = 0;
        goto LABEL_6;
      }
    }
  }
LABEL_32:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v9 )
    ObfDereferenceObject(v9);
  if ( v29 )
    RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)AppContainerSidType;
}
