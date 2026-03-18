/*
 * XREFs of AdtpBuildAccessReasonAuditStringInternal @ 0x14034793C
 * Callers:
 *     AdtpBuildAccessReasonAuditString @ 0x140347490 (AdtpBuildAccessReasonAuditString.c)
 * Callees:
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x140001010 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 *     RtlAppendUnicodeToString @ 0x140002BC0 (RtlAppendUnicodeToString.c)
 *     RtlGetAce @ 0x140004010 (RtlGetAce.c)
 *     RtlStringCbPrintfW @ 0x1400040E8 (RtlStringCbPrintfW.c)
 *     ExFreeHeapPool @ 0x140064DB0 (ExFreeHeapPool.c)
 *     RtlGetDaclSecurityDescriptor @ 0x14008D490 (RtlGetDaclSecurityDescriptor.c)
 *     RtlAppendUnicodeStringToString @ 0x1400E7910 (RtlAppendUnicodeStringToString.c)
 *     StringCchPrintfW @ 0x140135BD8 (StringCchPrintfW.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     AdtpFormatPrefix @ 0x1403487AC (AdtpFormatPrefix.c)
 *     StringCchPrintfExW @ 0x14034888C (StringCchPrintfExW.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     RtlAddAce @ 0x1405C8700 (RtlAddAce.c)
 *     RtlCreateAcl @ 0x1405C8930 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x1405D5A50 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405D5A90 (RtlSetDaclSecurityDescriptor.c)
 *     RtlIntegerToUnicodeString @ 0x14063E630 (RtlIntegerToUnicodeString.c)
 *     AdtpBuildPrivilegeAuditString @ 0x14092CEC4 (AdtpBuildPrivilegeAuditString.c)
 *     AdtpBuildAccessesString @ 0x14092DB18 (AdtpBuildAccessesString.c)
 */

__int64 __fastcall AdtpBuildAccessReasonAuditStringInternal(
        void *a1,
        __int64 a2,
        size_t a3,
        size_t a4,
        int a5,
        int a6,
        ACL *a7,
        _WORD *a8,
        int a9,
        int a10,
        int a11,
        _BYTE *a12)
{
  wchar_t *v12; // rsi
  unsigned int v14; // eax
  wchar_t *Buffer; // r15
  ULONG_PTR v16; // r13
  int v17; // ecx
  __int64 v18; // r14
  NTSTATUS DaclSecurityDescriptor; // ebx
  int v20; // r14d
  int v21; // edi
  unsigned int v22; // ebx
  unsigned __int16 v23; // bx
  unsigned int v24; // eax
  __int64 v25; // rax
  unsigned int v26; // eax
  unsigned int v27; // ebx
  UNICODE_STRING *p_Source; // rdx
  const UNICODE_STRING *v29; // rdx
  PACL v30; // r12
  unsigned __int16 *v31; // r13
  ULONG v32; // ebx
  ACL *v33; // rax
  ACL *v34; // r14
  int v35; // eax
  UNICODE_STRING *v36; // rbx
  __int64 v37; // r12
  __int64 v38; // rcx
  unsigned int v39; // ecx
  __int16 v40; // r12
  UNICODE_STRING *v41; // rdx
  UNICODE_STRING *v42; // rdx
  ULONG v43; // ebx
  NTSTATUS appended; // eax
  unsigned __int16 Length; // r12
  unsigned int v46; // edi
  char *PoolWithTag; // r14
  unsigned __int16 v48; // ax
  __int16 v49; // di
  _WORD *v50; // rcx
  __int64 v52; // [rsp+30h] [rbp-D0h]
  BOOLEAN DaclPresent[8]; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING Destination; // [rsp+58h] [rbp-A8h] BYREF
  PVOID Ace[2]; // [rsp+68h] [rbp-98h] BYREF
  BOOLEAN DaclDefaulted[8]; // [rsp+78h] [rbp-88h] BYREF
  size_t pcchRemaining; // [rsp+80h] [rbp-80h] BYREF
  PACL Dacl; // [rsp+88h] [rbp-78h] BYREF
  int v59[2]; // [rsp+90h] [rbp-70h]
  int v60; // [rsp+98h] [rbp-68h]
  UNICODE_STRING v61; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING v62; // [rsp+B0h] [rbp-50h] BYREF
  UNICODE_STRING v63; // [rsp+C0h] [rbp-40h] BYREF
  UNICODE_STRING Source; // [rsp+D0h] [rbp-30h] BYREF
  UNICODE_STRING v65; // [rsp+E0h] [rbp-20h] BYREF
  UNICODE_STRING v66; // [rsp+F0h] [rbp-10h] BYREF
  UNICODE_STRING v67; // [rsp+100h] [rbp+0h] BYREF
  UNICODE_STRING v68; // [rsp+110h] [rbp+10h] BYREF
  UNICODE_STRING DestinationString; // [rsp+120h] [rbp+20h] BYREF
  _BYTE *v70; // [rsp+130h] [rbp+30h]
  _WORD *v71; // [rsp+138h] [rbp+38h]
  wchar_t pszFormat[8]; // [rsp+140h] [rbp+40h] BYREF
  UNICODE_STRING v73; // [rsp+150h] [rbp+50h] BYREF
  int v74; // [rsp+160h] [rbp+60h]
  wchar_t pszDest[20]; // [rsp+170h] [rbp+70h] BYREF
  char v76; // [rsp+198h] [rbp+98h] BYREF
  char v77; // [rsp+1B0h] [rbp+B0h] BYREF
  char v78; // [rsp+1D0h] [rbp+D0h] BYREF
  char v79; // [rsp+1F0h] [rbp+F0h] BYREF
  char v80; // [rsp+210h] [rbp+110h] BYREF
  char v81; // [rsp+230h] [rbp+130h] BYREF
  char v82; // [rsp+250h] [rbp+150h] BYREF
  char v83; // [rsp+270h] [rbp+170h] BYREF

  v12 = 0LL;
  v70 = a12;
  Ace[0] = a1;
  Dacl = a7;
  v14 = 0;
  *(_QWORD *)v59 = a2;
  Buffer = 0LL;
  v71 = a8;
  pcchRemaining = a4;
  v16 = 0LL;
  v17 = 1;
  *(_QWORD *)&v61.Length = 0LL;
  v61.Buffer = 0LL;
  *(_QWORD *)&v65.Length = 0LL;
  v65.Buffer = 0LL;
  *(_QWORD *)&v66.Length = 0LL;
  v66.Buffer = 0LL;
  *(_QWORD *)&v67.Length = 0LL;
  v67.Buffer = 0LL;
  *(_QWORD *)&v68.Length = 0LL;
  v68.Buffer = 0LL;
  *(_QWORD *)&v63.Length = 0LL;
  v63.Buffer = 0LL;
  *(_QWORD *)&Source.Length = 0LL;
  Source.Buffer = 0LL;
  *(_QWORD *)&v73.Length = 0LL;
  v73.Buffer = 0LL;
  *(_QWORD *)pszFormat = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  *(_QWORD *)&v62.Length = 0LL;
  v62.Buffer = 0LL;
  do
  {
    v18 = v14;
    if ( (v17 & a5) != 0 )
      break;
    ++v14;
    v17 *= 2;
  }
  while ( v14 < 0x20 );
  *(_DWORD *)&v73.Length = 1310720;
  v73.Buffer = (wchar_t *)&v76;
  *(_DWORD *)&v61.Length = 1966080;
  v61.Buffer = (wchar_t *)&v77;
  DaclSecurityDescriptor = AdtpFormatPrefix(&v61, 0x709u);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_129;
  *(_DWORD *)&v65.Length = 1966080;
  v65.Buffer = (wchar_t *)&v78;
  DaclSecurityDescriptor = AdtpFormatPrefix(&v65, 0x70Au);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_129;
  *(_DWORD *)&v66.Length = 1966080;
  v66.Buffer = (wchar_t *)&v79;
  DaclSecurityDescriptor = AdtpFormatPrefix(&v66, 0x713u);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_129;
  *(_DWORD *)&v67.Length = 1966080;
  v67.Buffer = (wchar_t *)&v80;
  DaclSecurityDescriptor = AdtpFormatPrefix(&v67, 0x714u);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_129;
  *(_DWORD *)&v68.Length = 1966080;
  v68.Buffer = (wchar_t *)&v81;
  DaclSecurityDescriptor = AdtpFormatPrefix(&v68, 0x712u);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_129;
  *(_DWORD *)&v63.Length = 1966080;
  v63.Buffer = (wchar_t *)&v82;
  DaclSecurityDescriptor = AdtpFormatPrefix(&v63, 0x716u);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_129;
  *(_DWORD *)&Source.Length = 1966080;
  Source.Buffer = (wchar_t *)&v83;
  DaclSecurityDescriptor = AdtpFormatPrefix(&Source, 0x718u);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_129;
  DaclSecurityDescriptor = AdtpBuildAccessesString(
                             (int)Ace[0],
                             v59[0],
                             a5,
                             2,
                             &DestinationString,
                             0LL,
                             0LL,
                             0LL,
                             (__int64)DaclPresent);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_129;
  *(_QWORD *)v59 = *(_QWORD *)&DestinationString.Length;
  v60 = DestinationString.Length >> 1;
  v20 = *((_DWORD *)&Dacl->AclRevision + v18);
  v21 = v20 & 0xFF0000;
  if ( (v20 & 0xFF0000u) > 0x200000 )
  {
    if ( v21 != 3145728
      && v21 != 0x400000
      && v21 != 5242880
      && v21 != 6291456
      && v21 != 7340032
      && v21 != 0x800000
      && v21 != 9437184
      && v21 != 10485760 )
    {
      goto LABEL_116;
    }
    goto LABEL_92;
  }
  if ( v21 == 0x200000 )
  {
LABEL_23:
    *(_QWORD *)pszFormat = (unsigned __int16)v20;
    v73.Buffer = (wchar_t *)(unsigned __int16)v20;
    wcscpy(&v73.Length, L"\x01");
    *(_DWORD *)(&v73.MaximumLength + 1) = 1;
    v74 = 0;
    DaclSecurityDescriptor = AdtpBuildPrivilegeAuditString(&v73, &v62, 0LL, 0LL);
    if ( DaclSecurityDescriptor < 0 )
    {
LABEL_26:
      Buffer = v62.Buffer;
      goto LABEL_129;
    }
    v22 = (v62.Length >> 1) + 27;
    Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * v22, 0x6B416553u);
    v12 = Destination.Buffer;
    if ( !Destination.Buffer )
    {
      DaclSecurityDescriptor = -1073741801;
      goto LABEL_26;
    }
    Destination.Length = 0;
    Destination.MaximumLength = 2 * v22;
    if ( v21 == 0x200000 )
      v42 = &v61;
    else
      v42 = &v68;
    RtlAppendUnicodeStringToString(&Destination, v42);
    RtlAppendUnicodeStringToString(&Destination, &v62);
    Buffer = v62.Buffer;
    if ( v62.Buffer )
    {
      ExFreeHeapPool((ULONG_PTR)v62.Buffer);
      Buffer = 0LL;
    }
    goto LABEL_116;
  }
  if ( !v21 )
  {
LABEL_92:
    v43 = pcchRemaining;
    goto LABEL_94;
  }
  if ( v21 != 0x10000 && v21 != 0x20000 && v21 != 196608 && v21 != 0x40000 )
  {
    if ( v21 != 327680 && v21 != 393216 )
    {
      if ( v21 != 458752 )
      {
        if ( v21 == 0x100000 )
          goto LABEL_23;
LABEL_116:
        appended = RtlAppendUnicodeToString(&Destination, L"\r\n\t\t\t\t");
        Length = Destination.Length;
        DaclSecurityDescriptor = appended;
        v46 = v60 + 1 + (Destination.Length >> 1);
        PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 2LL * v46, 0x6B416553u);
        if ( PoolWithTag )
        {
          *v70 = 1;
          v48 = v59[0];
          if ( LOWORD(v59[0]) )
          {
            memmove(PoolWithTag, DestinationString.Buffer, LOWORD(v59[0]));
            v48 = v59[0];
          }
          v12 = Destination.Buffer;
          if ( Length )
            memmove(&PoolWithTag[v48], Destination.Buffer, Length);
          *(_WORD *)&PoolWithTag[2 * v46 - 2] = 0;
          v49 = 2 * v46;
          v50 = v71;
          *v71 = v49 - 2;
          v50[1] = v49;
          *((_QWORD *)v50 + 1) = PoolWithTag;
        }
        else
        {
          v12 = Destination.Buffer;
          DaclSecurityDescriptor = -1073741801;
        }
        v34 = 0LL;
        goto LABEL_124;
      }
      v43 = 1830;
LABEL_94:
      if ( v21 == 3145728 )
        v43 = 1803;
      if ( v21 == 0x400000 )
        v43 = 1804;
      if ( v21 == 5242880 )
        v43 = 1806;
      if ( v21 == 6291456 )
        v43 = 1807;
      if ( v21 == 7340032 )
        v43 = 1808;
      if ( !v21 )
        v43 = 1809;
      if ( v21 == 0x800000 )
        v43 = 1805;
      if ( v21 == 9437184 )
        v43 = 1841;
      if ( v21 == 10485760 )
        v43 = 1856;
      Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x4EuLL, 0x6B416553u);
      v12 = Destination.Buffer;
      if ( Destination.Buffer )
      {
        *(_DWORD *)&Destination.Length = 5111808;
        RtlAppendUnicodeToString(&Destination, L"%%");
        DaclSecurityDescriptor = RtlIntegerToUnicodeString(v43, 0xAu, &v73);
        if ( DaclSecurityDescriptor < 0 )
        {
          v12 = Destination.Buffer;
          goto LABEL_129;
        }
        v29 = &v73;
        goto LABEL_115;
      }
      goto LABEL_40;
    }
    v23 = 2;
    wcscpy(pszFormat, L"# %d");
    Ace[0] = (PVOID)131074;
    Ace[1] = (PVOID)L"-";
    if ( v21 == 393216 )
    {
      v26 = *(_DWORD *)(pcchRemaining + 8);
      if ( v26 )
      {
        if ( (unsigned __int16)v20 >= v26 )
          goto LABEL_30;
        v25 = *(_QWORD *)(pcchRemaining + 16);
LABEL_35:
        *(_OWORD *)Ace = *(_OWORD *)(v25 + 16LL * (unsigned __int16)v20);
        v23 = (unsigned __int16)Ace[0];
      }
    }
    else
    {
      v24 = *(_DWORD *)(a3 + 8);
      if ( v24 )
      {
        if ( (unsigned __int16)v20 >= v24 )
        {
LABEL_30:
          DaclSecurityDescriptor = -1073741811;
          goto LABEL_129;
        }
        v25 = *(_QWORD *)(a3 + 16);
        goto LABEL_35;
      }
    }
    if ( v23 <= 2u )
    {
      LODWORD(v52) = (unsigned __int16)v20;
      pcchRemaining = 0LL;
      if ( StringCchPrintfExW(pszDest, 0x14uLL, 0LL, &pcchRemaining, 0, pszFormat, v52) >= 0 )
      {
        v23 = 2 * (20 - pcchRemaining);
        WORD1(Ace[0]) = 40;
        LOWORD(Ace[0]) = v23;
        Ace[1] = pszDest;
      }
    }
    v27 = v23 + 54;
    Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v27, 0x6B416553u);
    v12 = Destination.Buffer;
    if ( Destination.Buffer )
    {
      Destination.Length = 0;
      Destination.MaximumLength = 2 * v27;
      if ( v21 == 327680 )
        p_Source = &v63;
      else
        p_Source = &Source;
      RtlAppendUnicodeStringToString(&Destination, p_Source);
      v29 = (const UNICODE_STRING *)Ace;
LABEL_115:
      RtlAppendUnicodeStringToString(&Destination, v29);
      goto LABEL_116;
    }
LABEL_40:
    DaclSecurityDescriptor = -1073741801;
    goto LABEL_129;
  }
  Dacl = 0LL;
  Ace[0] = 0LL;
  memset(pszDest, 0, sizeof(pszDest));
  if ( ((v21 - 0x10000) & 0xFFFEFFFF) != 0 )
    a3 = pcchRemaining;
  DaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(*(PSECURITY_DESCRIPTOR *)a3, DaclPresent, &Dacl, DaclDefaulted);
  if ( DaclSecurityDescriptor >= 0 )
  {
    if ( DaclPresent[0] )
    {
      v30 = Dacl;
      DaclSecurityDescriptor = RtlGetAce(Dacl, (unsigned __int16)v20, Ace);
      if ( DaclSecurityDescriptor >= 0 )
      {
        v31 = (unsigned __int16 *)Ace[0];
        v32 = *((unsigned __int16 *)Ace[0] + 1) + 8;
        v33 = (ACL *)ExAllocatePoolWithTag(PagedPool, v32, 0x6B416553u);
        v34 = v33;
        if ( !v33 )
          goto LABEL_40;
        DaclSecurityDescriptor = RtlCreateAcl(v33, v32, v30->AclRevision);
        if ( DaclSecurityDescriptor < 0
          || (DaclSecurityDescriptor = RtlAddAce(v34, v30->AclRevision, 0, v31, v31[1]), DaclSecurityDescriptor < 0)
          || (DaclSecurityDescriptor = RtlCreateSecurityDescriptor(pszDest, 1u), DaclSecurityDescriptor < 0)
          || (DaclSecurityDescriptor = RtlSetDaclSecurityDescriptor(pszDest, 1u, v34, 0), DaclSecurityDescriptor < 0) )
        {
LABEL_126:
          if ( v34 )
            ExFreeHeapPool((ULONG_PTR)v34);
          goto LABEL_129;
        }
        v35 = SeConvertSecurityDescriptorToStringSecurityDescriptor(
                (__int64)pszDest,
                1LL,
                4LL,
                pszFormat,
                &pcchRemaining);
        v16 = *(_QWORD *)pszFormat;
        DaclSecurityDescriptor = v35;
        if ( v35 < 0 )
        {
          if ( v35 == -1073741801 )
            goto LABEL_124;
          v36 = &v73;
          if ( StringCchPrintfW(&v73.Length, 0x10uLL, L"<0x%08X>", (unsigned int)v35) < 0 )
            v36 = (UNICODE_STRING *)L"-";
        }
        else
        {
          v36 = *(UNICODE_STRING **)pszFormat;
        }
        v37 = -1LL;
        v38 = -1LL;
        do
          ++v38;
        while ( *(&v36->Length + v38) );
        v39 = v38 + 1;
        if ( 2 * (unsigned __int64)v39 > 0xFFFF )
        {
          DaclSecurityDescriptor = RtlStringCbPrintfW(&v73.Length, 0x10uLL, L"%%%%%u", 1828LL);
          if ( DaclSecurityDescriptor < 0 )
            goto LABEL_124;
          v36 = &v73;
          do
            ++v37;
          while ( *(&v73.Length + v37) );
          v39 = v37 + 1;
        }
        v40 = v39 + 27;
        Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * (v39 + 27), 0x6B416553u);
        v12 = Destination.Buffer;
        if ( Destination.Buffer )
        {
          Destination.Length = 0;
          Destination.MaximumLength = 2 * v40;
          switch ( v21 )
          {
            case 65536:
              v41 = &v61;
              break;
            case 131072:
              v41 = &v65;
              break;
            case 196608:
              v41 = &v66;
              break;
            default:
              v41 = &v67;
              break;
          }
          RtlAppendUnicodeStringToString(&Destination, v41);
          RtlAppendUnicodeToString(&Destination, &v36->Length);
          if ( v16 )
          {
            ExFreeHeapPool(v16);
            v16 = 0LL;
          }
          ExFreeHeapPool((ULONG_PTR)v34);
          goto LABEL_116;
        }
        DaclSecurityDescriptor = -1073741801;
LABEL_124:
        if ( v16 )
          ExFreeHeapPool(v16);
        goto LABEL_126;
      }
    }
  }
LABEL_129:
  if ( Buffer )
    ExFreeHeapPool((ULONG_PTR)Buffer);
  if ( DestinationString.Buffer )
    ExFreeHeapPool((ULONG_PTR)DestinationString.Buffer);
  if ( v12 )
    ExFreeHeapPool((ULONG_PTR)v12);
  return (unsigned int)DaclSecurityDescriptor;
}
