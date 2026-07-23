/*
 * XREFs of AdtpBuildAccessReasonAuditStringInternal @ 0x140326344
 * Callers:
 *     AdtpBuildAccessReasonAuditString @ 0x140325DDC (AdtpBuildAccessReasonAuditString.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140015E00 (RtlAppendUnicodeToString.c)
 *     RtlStringCbPrintfW @ 0x1400161B0 (RtlStringCbPrintfW.c)
 *     RtlGetAce @ 0x140016260 (RtlGetAce.c)
 *     RtlGetDaclSecurityDescriptor @ 0x140092270 (RtlGetDaclSecurityDescriptor.c)
 *     RtlAppendUnicodeStringToString @ 0x1400F5250 (RtlAppendUnicodeStringToString.c)
 *     StringCchPrintfW @ 0x140134BD4 (StringCchPrintfW.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x140300F10 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 *     AdtpFormatPrefix @ 0x140327180 (AdtpFormatPrefix.c)
 *     StringCchPrintfExW @ 0x140327260 (StringCchPrintfExW.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlIntegerToUnicodeString @ 0x1405A9E00 (RtlIntegerToUnicodeString.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405CBDE0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlAddAce @ 0x1405CBE40 (RtlAddAce.c)
 *     RtlCreateAcl @ 0x1405CBF70 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x140651050 (RtlCreateSecurityDescriptor.c)
 *     AdtpBuildPrivilegeAuditString @ 0x1408F0254 (AdtpBuildPrivilegeAuditString.c)
 *     AdtpBuildAccessesString @ 0x1408F116C (AdtpBuildAccessesString.c)
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
  void *v14; // r13
  unsigned int v15; // eax
  wchar_t *Buffer; // r15
  int v17; // ecx
  __int64 v18; // r12
  NTSTATUS DaclSecurityDescriptor; // ebx
  int v20; // r12d
  int v21; // edi
  unsigned int v22; // ebx
  unsigned __int16 v23; // bx
  unsigned int v24; // eax
  __int64 v25; // rax
  unsigned int v26; // eax
  unsigned int v27; // ebx
  UNICODE_STRING *p_Source; // rdx
  const UNICODE_STRING *v29; // rdx
  ULONG v30; // edx
  PACL v31; // r12
  unsigned __int16 *v32; // r13
  ULONG v33; // ebx
  ACL *v34; // rax
  ACL *v35; // r14
  int v36; // eax
  UNICODE_STRING *v37; // rbx
  __int64 v38; // r12
  __int64 v39; // rcx
  unsigned int v40; // ecx
  __int16 v41; // r12
  UNICODE_STRING *v42; // rdx
  UNICODE_STRING *v43; // rdx
  ULONG v44; // ebx
  NTSTATUS appended; // eax
  unsigned __int16 Length; // r12
  unsigned int v47; // edi
  char *PoolWithTag; // r14
  unsigned __int16 v49; // ax
  __int16 v50; // di
  _WORD *v51; // rcx
  __int64 v53; // [rsp+30h] [rbp-D0h]
  BOOLEAN DaclPresent[8]; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING Destination; // [rsp+58h] [rbp-A8h] BYREF
  BOOLEAN DaclDefaulted[8]; // [rsp+68h] [rbp-98h] BYREF
  size_t pcchRemaining; // [rsp+70h] [rbp-90h] BYREF
  PVOID Ace[2]; // [rsp+78h] [rbp-88h] BYREF
  PACL Dacl; // [rsp+88h] [rbp-78h] BYREF
  int v60[2]; // [rsp+90h] [rbp-70h]
  int v61; // [rsp+98h] [rbp-68h]
  UNICODE_STRING v62; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING v63; // [rsp+B0h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-40h] BYREF
  UNICODE_STRING v65; // [rsp+D0h] [rbp-30h] BYREF
  UNICODE_STRING Source; // [rsp+E0h] [rbp-20h] BYREF
  UNICODE_STRING v67; // [rsp+F0h] [rbp-10h] BYREF
  UNICODE_STRING v68; // [rsp+100h] [rbp+0h] BYREF
  UNICODE_STRING v69; // [rsp+110h] [rbp+10h] BYREF
  UNICODE_STRING v70; // [rsp+120h] [rbp+20h] BYREF
  _BYTE *v71; // [rsp+130h] [rbp+30h]
  _WORD *v72; // [rsp+138h] [rbp+38h]
  wchar_t pszFormat[8]; // [rsp+140h] [rbp+40h] BYREF
  UNICODE_STRING v74; // [rsp+150h] [rbp+50h] BYREF
  int v75; // [rsp+160h] [rbp+60h]
  wchar_t pszDest[20]; // [rsp+170h] [rbp+70h] BYREF
  char v77; // [rsp+198h] [rbp+98h] BYREF
  char v78; // [rsp+1B0h] [rbp+B0h] BYREF
  char v79; // [rsp+1D0h] [rbp+D0h] BYREF
  char v80; // [rsp+1F0h] [rbp+F0h] BYREF
  char v81; // [rsp+210h] [rbp+110h] BYREF
  char v82; // [rsp+230h] [rbp+130h] BYREF
  char v83; // [rsp+250h] [rbp+150h] BYREF
  char v84; // [rsp+270h] [rbp+170h] BYREF

  v12 = 0LL;
  v71 = a12;
  Ace[0] = a1;
  *(_QWORD *)v60 = a2;
  Dacl = a7;
  v14 = 0LL;
  v15 = 0;
  v72 = a8;
  Buffer = 0LL;
  pcchRemaining = a4;
  *(_QWORD *)&v62.Length = 0LL;
  v17 = 1;
  v62.Buffer = 0LL;
  *(_QWORD *)pszFormat = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  do
  {
    v18 = v15;
    if ( (v17 & a5) != 0 )
      break;
    ++v15;
    v17 *= 2;
  }
  while ( v15 < 0x20 );
  *(_DWORD *)&v74.Length = 1310720;
  v74.Buffer = (wchar_t *)&v77;
  *(_DWORD *)&v63.Length = 1966080;
  v63.Buffer = (wchar_t *)&v78;
  DaclSecurityDescriptor = AdtpFormatPrefix(&v63, 0x709u);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_128;
  *(_DWORD *)&v67.Length = 1966080;
  v67.Buffer = (wchar_t *)&v79;
  DaclSecurityDescriptor = AdtpFormatPrefix(&v67, 0x70Au);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_128;
  *(_DWORD *)&v68.Length = 1966080;
  v68.Buffer = (wchar_t *)&v80;
  DaclSecurityDescriptor = AdtpFormatPrefix(&v68, 0x713u);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_128;
  *(_DWORD *)&v69.Length = 1966080;
  v69.Buffer = (wchar_t *)&v81;
  DaclSecurityDescriptor = AdtpFormatPrefix(&v69, 0x714u);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_128;
  *(_DWORD *)&v70.Length = 1966080;
  v70.Buffer = (wchar_t *)&v82;
  DaclSecurityDescriptor = AdtpFormatPrefix(&v70, 0x712u);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_128;
  *(_DWORD *)&v65.Length = 1966080;
  v65.Buffer = (wchar_t *)&v83;
  DaclSecurityDescriptor = AdtpFormatPrefix(&v65, 0x716u);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_128;
  *(_DWORD *)&Source.Length = 1966080;
  Source.Buffer = (wchar_t *)&v84;
  DaclSecurityDescriptor = AdtpFormatPrefix(&Source, 0x718u);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_128;
  DaclSecurityDescriptor = AdtpBuildAccessesString(
                             (int)Ace[0],
                             v60[0],
                             a5,
                             2,
                             &DestinationString,
                             0LL,
                             0LL,
                             0LL,
                             (__int64)DaclPresent);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_128;
  *(_QWORD *)v60 = *(_QWORD *)&DestinationString.Length;
  v61 = DestinationString.Length >> 1;
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
      goto LABEL_115;
    }
    goto LABEL_91;
  }
  if ( v21 == 0x200000 )
  {
LABEL_23:
    v75 = 0;
    wcscpy(&v74.Length, L"\x01");
    *(_DWORD *)(&v74.MaximumLength + 1) = 1;
    *(_QWORD *)pszFormat = (unsigned __int16)v20;
    v74.Buffer = (wchar_t *)(unsigned __int16)v20;
    DaclSecurityDescriptor = AdtpBuildPrivilegeAuditString(&v74, &v62, 0LL, 0LL);
    if ( DaclSecurityDescriptor < 0 )
    {
LABEL_26:
      Buffer = v62.Buffer;
      goto LABEL_128;
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
      v43 = &v63;
    else
      v43 = &v70;
    RtlAppendUnicodeStringToString(&Destination, v43);
    RtlAppendUnicodeStringToString(&Destination, &v62);
    Buffer = v62.Buffer;
    if ( v62.Buffer )
    {
      ExFreePoolWithTag(v62.Buffer, 0);
      Buffer = 0LL;
    }
    goto LABEL_115;
  }
  if ( !v21 )
  {
LABEL_91:
    v44 = pcchRemaining;
    goto LABEL_93;
  }
  if ( v21 != 0x10000 && v21 != 0x20000 && v21 != 196608 && v21 != 0x40000 )
  {
    if ( v21 != 327680 && v21 != 393216 )
    {
      if ( v21 != 458752 )
      {
        if ( v21 == 0x100000 )
          goto LABEL_23;
LABEL_115:
        appended = RtlAppendUnicodeToString(&Destination, L"\r\n\t\t\t\t");
        Length = Destination.Length;
        DaclSecurityDescriptor = appended;
        v47 = v61 + 1 + (Destination.Length >> 1);
        PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 2LL * v47, 0x6B416553u);
        if ( PoolWithTag )
        {
          *v71 = 1;
          v49 = v60[0];
          if ( LOWORD(v60[0]) )
          {
            memmove(PoolWithTag, DestinationString.Buffer, LOWORD(v60[0]));
            v49 = v60[0];
          }
          v12 = Destination.Buffer;
          if ( Length )
            memmove(&PoolWithTag[v49], Destination.Buffer, Length);
          *(_WORD *)&PoolWithTag[2 * v47 - 2] = 0;
          v50 = 2 * v47;
          v51 = v72;
          *v72 = v50 - 2;
          v51[1] = v50;
          *((_QWORD *)v51 + 1) = PoolWithTag;
        }
        else
        {
          v12 = Destination.Buffer;
          DaclSecurityDescriptor = -1073741801;
        }
        v35 = 0LL;
        goto LABEL_123;
      }
      v44 = 1830;
LABEL_93:
      if ( v21 == 3145728 )
        v44 = 1803;
      if ( v21 == 0x400000 )
        v44 = 1804;
      if ( v21 == 5242880 )
        v44 = 1806;
      if ( v21 == 6291456 )
        v44 = 1807;
      if ( v21 == 7340032 )
        v44 = 1808;
      if ( !v21 )
        v44 = 1809;
      if ( v21 == 0x800000 )
        v44 = 1805;
      if ( v21 == 9437184 )
        v44 = 1841;
      if ( v21 == 10485760 )
        v44 = 1856;
      Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x4EuLL, 0x6B416553u);
      v12 = Destination.Buffer;
      if ( Destination.Buffer )
      {
        *(_DWORD *)&Destination.Length = 5111808;
        RtlAppendUnicodeToString(&Destination, L"%%");
        DaclSecurityDescriptor = RtlIntegerToUnicodeString(v44, 0xAu, &v74);
        if ( DaclSecurityDescriptor < 0 )
        {
          v12 = Destination.Buffer;
          goto LABEL_128;
        }
        v29 = &v74;
        goto LABEL_114;
      }
      goto LABEL_39;
    }
    v23 = 2;
    LODWORD(Ace[0]) = 131074;
    wcscpy(pszFormat, L"# %d");
    Ace[1] = (PVOID)L"-";
    if ( v21 == 393216 )
    {
      v26 = *(_DWORD *)(pcchRemaining + 8);
      if ( v26 )
      {
        if ( (unsigned __int16)v20 >= v26 )
          goto LABEL_30;
        v25 = *(_QWORD *)(pcchRemaining + 16);
        goto LABEL_35;
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
          goto LABEL_128;
        }
        v25 = *(_QWORD *)(a3 + 16);
LABEL_35:
        *(_OWORD *)Ace = *(_OWORD *)(v25 + 16LL * (unsigned __int16)v20);
        v23 = (unsigned __int16)Ace[0];
        if ( LOWORD(Ace[0]) > 2u )
          goto LABEL_38;
      }
    }
    LODWORD(v53) = (unsigned __int16)v20;
    pcchRemaining = 0LL;
    if ( StringCchPrintfExW(pszDest, 0x14uLL, 0LL, &pcchRemaining, 0, pszFormat, v53) >= 0 )
    {
      v23 = 2 * (20 - pcchRemaining);
      WORD1(Ace[0]) = 40;
      LOWORD(Ace[0]) = v23;
      Ace[1] = pszDest;
    }
LABEL_38:
    v27 = v23 + 54;
    Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v27, 0x6B416553u);
    v12 = Destination.Buffer;
    if ( Destination.Buffer )
    {
      Destination.Length = 0;
      Destination.MaximumLength = 2 * v27;
      if ( v21 == 327680 )
        p_Source = &v65;
      else
        p_Source = &Source;
      RtlAppendUnicodeStringToString(&Destination, p_Source);
      v29 = (const UNICODE_STRING *)Ace;
LABEL_114:
      RtlAppendUnicodeStringToString(&Destination, v29);
      goto LABEL_115;
    }
LABEL_39:
    DaclSecurityDescriptor = -1073741801;
    goto LABEL_128;
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
      v30 = (unsigned __int16)v20;
      v31 = Dacl;
      DaclSecurityDescriptor = RtlGetAce(Dacl, v30, Ace);
      if ( DaclSecurityDescriptor >= 0 )
      {
        v32 = (unsigned __int16 *)Ace[0];
        v33 = *((unsigned __int16 *)Ace[0] + 1) + 8;
        v34 = (ACL *)ExAllocatePoolWithTag(PagedPool, v33, 0x6B416553u);
        v35 = v34;
        if ( !v34 )
          goto LABEL_39;
        DaclSecurityDescriptor = RtlCreateAcl(v34, v33, v31->AclRevision);
        if ( DaclSecurityDescriptor < 0
          || (DaclSecurityDescriptor = RtlAddAce(v35, v31->AclRevision, 0, v32, v32[1]), DaclSecurityDescriptor < 0)
          || (DaclSecurityDescriptor = RtlCreateSecurityDescriptor(pszDest, 1u), DaclSecurityDescriptor < 0)
          || (DaclSecurityDescriptor = RtlSetDaclSecurityDescriptor(pszDest, 1u, v35, 0), DaclSecurityDescriptor < 0) )
        {
LABEL_125:
          if ( v35 )
            ExFreePoolWithTag(v35, 0);
          goto LABEL_128;
        }
        v36 = SeConvertSecurityDescriptorToStringSecurityDescriptor(
                (__int64)pszDest,
                1LL,
                4LL,
                pszFormat,
                &pcchRemaining);
        v14 = *(void **)pszFormat;
        DaclSecurityDescriptor = v36;
        if ( v36 < 0 )
        {
          if ( v36 == -1073741801 )
            goto LABEL_123;
          v37 = &v74;
          if ( StringCchPrintfW(&v74.Length, 0x10uLL, L"<0x%08X>", (unsigned int)v36) < 0 )
            v37 = (UNICODE_STRING *)L"-";
        }
        else
        {
          v37 = *(UNICODE_STRING **)pszFormat;
        }
        v38 = -1LL;
        v39 = -1LL;
        do
          ++v39;
        while ( *(&v37->Length + v39) );
        v40 = v39 + 1;
        if ( 2 * (unsigned __int64)v40 > 0xFFFF )
        {
          DaclSecurityDescriptor = RtlStringCbPrintfW(&v74.Length, 0x10uLL, L"%%%%%u", 1828LL);
          if ( DaclSecurityDescriptor < 0 )
            goto LABEL_123;
          v37 = &v74;
          do
            ++v38;
          while ( *(&v74.Length + v38) );
          v40 = v38 + 1;
        }
        v41 = v40 + 27;
        Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * (v40 + 27), 0x6B416553u);
        v12 = Destination.Buffer;
        if ( Destination.Buffer )
        {
          Destination.Length = 0;
          Destination.MaximumLength = 2 * v41;
          switch ( v21 )
          {
            case 65536:
              v42 = &v63;
              break;
            case 131072:
              v42 = &v67;
              break;
            case 196608:
              v42 = &v68;
              break;
            default:
              v42 = &v69;
              break;
          }
          RtlAppendUnicodeStringToString(&Destination, v42);
          RtlAppendUnicodeToString(&Destination, &v37->Length);
          if ( v14 )
          {
            ExFreePoolWithTag(v14, 0);
            v14 = 0LL;
          }
          ExFreePoolWithTag(v35, 0);
          goto LABEL_115;
        }
        DaclSecurityDescriptor = -1073741801;
LABEL_123:
        if ( v14 )
          ExFreePoolWithTag(v14, 0);
        goto LABEL_125;
      }
    }
  }
LABEL_128:
  if ( Buffer )
    ExFreePoolWithTag(Buffer, 0);
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  return (unsigned int)DaclSecurityDescriptor;
}
