/*
 * XREFs of LocalConvertSDToStringSD_Rev1 @ 0x1405B26B8
 * Callers:
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x140001010 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x1400C9B30 (RtlGetDaclSecurityDescriptor.c)
 *     swprintf_s @ 0x1401A52F0 (swprintf_s.c)
 *     wcscpy_s @ 0x1401A6C50 (wcscpy_s.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     LocalGetStringForControl @ 0x1405B2A3C (LocalGetStringForControl.c)
 *     SddlFilterSacl @ 0x1405B2B64 (SddlFilterSacl.c)
 *     LocalConvertAclToString @ 0x1405B2CA8 (LocalConvertAclToString.c)
 *     RtlGetSaclSecurityDescriptor @ 0x140658920 (RtlGetSaclSecurityDescriptor.c)
 *     RtlNtStatusToDosError @ 0x1406B8430 (RtlNtStatusToDosError.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x1406D1530 (RtlGetOwnerSecurityDescriptor.c)
 *     RtlGetControlSecurityDescriptor @ 0x1406DBB10 (RtlGetControlSecurityDescriptor.c)
 *     SddlpAlloc @ 0x1406ED59C (SddlpAlloc.c)
 *     RtlGetGroupSecurityDescriptor @ 0x1406FFFD0 (RtlGetGroupSecurityDescriptor.c)
 *     LocalGetStringForSid @ 0x1408E31C0 (LocalGetStringForSid.c)
 */

ULONG __fastcall LocalConvertSDToStringSD_Rev1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        __int16 a5,
        wchar_t **a6,
        unsigned int *a7)
{
  int StringForControl; // r13d
  int OwnerSecurityDescriptor; // eax
  unsigned int v10; // esi
  PSID v11; // r15
  PSID v12; // r12
  PACL v13; // rdi
  __int16 v14; // bx
  unsigned int v15; // ebx
  int SaclSecurityDescriptor; // eax
  void *v17; // rax
  int v18; // edx
  int v19; // r8d
  WORD v20; // bx
  char v21; // r14
  BOOLEAN v22; // cl
  PVOID v23; // rbx
  __int64 v24; // r15
  PVOID v25; // rdi
  PVOID v26; // r12
  __int64 v27; // rax
  wchar_t *v28; // rax
  size_t v29; // r14
  __int64 v30; // rdi
  PVOID v31; // r12
  size_t v32; // rdx
  wchar_t *v33; // rcx
  wchar_t *v34; // rbx
  __int64 v35; // rdi
  ULONG v37; // ebx
  int StringForSid; // eax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  size_t v43; // rdx
  wchar_t *v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // [rsp+20h] [rbp-91h]
  size_t Size; // [rsp+50h] [rbp-61h] BYREF
  PVOID v49; // [rsp+58h] [rbp-59h]
  PVOID v50; // [rsp+60h] [rbp-51h] BYREF
  wchar_t *Src; // [rsp+68h] [rbp-49h] BYREF
  PVOID P; // [rsp+70h] [rbp-41h] BYREF
  PVOID v53; // [rsp+78h] [rbp-39h] BYREF
  PVOID v54; // [rsp+80h] [rbp-31h]
  PACL Sacl; // [rsp+88h] [rbp-29h] BYREF
  PVOID v56; // [rsp+90h] [rbp-21h]
  PSID Owner; // [rsp+98h] [rbp-19h] BYREF
  PSID Group; // [rsp+A0h] [rbp-11h] BYREF
  PACL Dacl; // [rsp+A8h] [rbp-9h] BYREF
  ULONG SaclDefaulted; // [rsp+100h] [rbp+4Fh] BYREF
  __int64 SaclPresent; // [rsp+108h] [rbp+57h] BYREF
  BOOLEAN DaclPresent; // [rsp+110h] [rbp+5Fh] BYREF
  WORD Control; // [rsp+118h] [rbp+67h] BYREF

  SaclPresent = a2;
  LODWORD(Size) = 0;
  StringForControl = 0;
  Owner = 0LL;
  OwnerSecurityDescriptor = 0;
  Group = 0LL;
  v10 = 0;
  Dacl = 0LL;
  v11 = 0LL;
  Sacl = 0LL;
  v12 = 0LL;
  v54 = 0LL;
  LODWORD(v13) = 0;
  LOBYTE(SaclPresent) = 0;
  DaclPresent = 0;
  v56 = 0LL;
  v49 = 0LL;
  Src = 0LL;
  v50 = 0LL;
  Control = 0;
  v53 = 0LL;
  P = 0LL;
  if ( !a4 || !a6 )
    return 87;
  v14 = a5;
  if ( (a5 & 1) != 0 )
  {
    OwnerSecurityDescriptor = RtlGetOwnerSecurityDescriptor(a4, &Owner, (PBOOLEAN)&SaclDefaulted);
    if ( OwnerSecurityDescriptor < 0 )
      goto LABEL_68;
    v11 = Owner;
  }
  if ( (v14 & 2) != 0 )
  {
    OwnerSecurityDescriptor = RtlGetGroupSecurityDescriptor(a4, &Group, (PBOOLEAN)&SaclDefaulted);
    v12 = Group;
  }
  if ( OwnerSecurityDescriptor < 0 )
    goto LABEL_68;
  if ( (v14 & 4) != 0 )
    OwnerSecurityDescriptor = RtlGetDaclSecurityDescriptor(a4, &DaclPresent, &Dacl, (PBOOLEAN)&SaclDefaulted);
  if ( OwnerSecurityDescriptor < 0 )
    goto LABEL_68;
  v15 = v14 & 0x1F8;
  if ( v15 )
  {
    SaclSecurityDescriptor = RtlGetSaclSecurityDescriptor(a4, (PBOOLEAN)&SaclPresent, &Sacl, (PBOOLEAN)&SaclDefaulted);
    if ( SaclSecurityDescriptor < 0 )
      return RtlNtStatusToDosError(SaclSecurityDescriptor);
    v13 = Sacl;
    if ( (_BYTE)SaclPresent )
    {
      if ( Sacl )
      {
        SddlFilterSacl(Sacl, 0LL, &Size, v15);
        v17 = (void *)SddlpAlloc((unsigned int)Size);
        v54 = v17;
        if ( !v17 )
        {
          OwnerSecurityDescriptor = -1073741801;
          goto LABEL_68;
        }
        SddlFilterSacl(v13, v17, &Size, v15);
        LODWORD(v13) = (_DWORD)v54;
      }
    }
  }
  OwnerSecurityDescriptor = RtlGetControlSecurityDescriptor(a4, &Control, &SaclDefaulted);
  if ( OwnerSecurityDescriptor >= 0 )
  {
    if ( v11 )
    {
      StringForSid = LocalGetStringForSid(v11, v47, 1);
      v11 = 0LL;
      StringForControl = StringForSid;
      if ( StringForSid )
        goto LABEL_72;
    }
    if ( v12 )
    {
      StringForControl = LocalGetStringForSid(v12, v47, 1);
      if ( StringForControl )
        goto LABEL_72;
    }
    v20 = Control;
    if ( Control )
    {
      StringForControl = LocalGetStringForControl(Control, 1LL, &v53);
      if ( StringForControl )
        goto LABEL_72;
      StringForControl = LocalGetStringForControl(v20, 2LL, &P);
      if ( StringForControl )
        goto LABEL_72;
    }
    v21 = SaclPresent;
    if ( (_BYTE)SaclPresent )
    {
      LOBYTE(v18) = SaclPresent;
      StringForControl = LocalConvertAclToString(
                           (_DWORD)v13,
                           v18,
                           0,
                           (unsigned int)&Src,
                           (__int64)&Size,
                           (__int64)v11,
                           (__int64)v11);
      if ( StringForControl )
        goto LABEL_72;
      v10 = Size;
    }
    v22 = DaclPresent;
    if ( !DaclPresent )
    {
LABEL_26:
      v23 = v56;
      v24 = -1LL;
      if ( v56 )
      {
        v39 = -1LL;
        do
          ++v39;
        while ( *((_WORD *)v56 + v39) );
        v10 += 2 * v39 + 4;
      }
      v25 = v49;
      if ( v49 )
      {
        v40 = -1LL;
        do
          ++v40;
        while ( *((_WORD *)v49 + v40) );
        v10 += 2 * v40 + 4;
      }
      v26 = v53;
      if ( v22 )
      {
        v10 += 4;
        if ( v53 )
        {
          v41 = -1LL;
          do
            ++v41;
          while ( *((_WORD *)v53 + v41) );
          v10 += 2 * v41;
        }
      }
      if ( v21 )
      {
        v10 += 4;
        if ( P )
        {
          v27 = -1LL;
          do
            ++v27;
          while ( *((_WORD *)P + v27) );
          v10 += 2 * v27;
        }
      }
      v28 = (wchar_t *)SddlpAlloc(v10 + 2LL);
      *a6 = v28;
      if ( !v28 )
      {
        v34 = Src;
        StringForControl = 8;
        v31 = v50;
        goto LABEL_48;
      }
      v29 = ((unsigned __int64)v10 + 2) >> 1;
      LODWORD(v30) = 0;
      if ( v23 )
      {
        LODWORD(v47) = 58;
        swprintf_s(v28, v29, L"%ws%wc%ws", L"O", v47, v23);
        v30 = -1LL;
        v28 = *a6;
        do
          ++v30;
        while ( v28[v30] );
      }
      if ( v49 )
      {
        LODWORD(v47) = 58;
        swprintf_s(&v28[(unsigned int)v30], v29 - (unsigned int)v30, L"%ws%wc%ws", L"G", v47, v49);
        v28 = *a6;
        v42 = -1LL;
        do
          ++v42;
        while ( (*a6)[(unsigned int)v30 + v42] );
        LODWORD(v30) = v42 + v30;
      }
      if ( DaclPresent )
      {
        v43 = v29 - (unsigned int)v30;
        v44 = &v28[(unsigned int)v30];
        LODWORD(v47) = 58;
        if ( v26 )
          swprintf_s(v44, v43, L"%ws%wc%ws", L"D", v47, v26);
        else
          swprintf_s(v44, v43, L"%ws%wc", L"D", v47);
        v45 = -1LL;
        v28 = *a6;
        do
          ++v45;
        while ( (*a6)[(unsigned int)v30 + v45] );
        v31 = v50;
        v30 = (unsigned int)(v45 + v30);
        if ( v50 )
        {
          wcscpy_s(&v28[v30], v29 - (unsigned int)v30, (const wchar_t *)v50);
          v28 = *a6;
          v46 = -1LL;
          do
            ++v46;
          while ( (*a6)[v30 + v46] );
          LODWORD(v30) = v46 + v30;
        }
      }
      else
      {
        v31 = v50;
      }
      if ( (_BYTE)SaclPresent )
      {
        v32 = v29 - (unsigned int)v30;
        v33 = &v28[(unsigned int)v30];
        LODWORD(v47) = 58;
        if ( P )
          swprintf_s(v33, v32, L"%ws%wc%ws", L"S", v47, P);
        else
          swprintf_s(v33, v32, L"%ws%wc", L"S", v47);
        do
          ++v24;
        while ( (*a6)[(unsigned int)v30 + v24] );
        v34 = Src;
        v35 = (unsigned int)(v24 + v30);
        if ( Src )
          wcscpy_s(&(*a6)[v35], v29 - (unsigned int)v35, Src);
      }
      else
      {
        v34 = Src;
      }
      if ( a7 )
        *a7 = v10 >> 1;
LABEL_47:
      v25 = v49;
LABEL_48:
      if ( v56 )
        ExFreePoolWithTag(v56, 0);
      if ( v25 )
        ExFreePoolWithTag(v25, 0);
      if ( v34 )
        ExFreePoolWithTag(v34, 0);
      if ( v31 )
        ExFreePoolWithTag(v31, 0);
      if ( P )
        ExFreePoolWithTag(P, 0);
      if ( v53 )
        ExFreePoolWithTag(v53, 0);
      if ( v54 )
        ExFreePoolWithTag(v54, 0);
      return StringForControl;
    }
    LOBYTE(v18) = DaclPresent;
    LOBYTE(v19) = 1;
    StringForControl = LocalConvertAclToString(
                         (_DWORD)Dacl,
                         v18,
                         v19,
                         (unsigned int)&v50,
                         (__int64)&Size,
                         (__int64)v11,
                         (__int64)v11);
    if ( !StringForControl )
    {
      v10 += Size;
      v22 = DaclPresent;
      goto LABEL_26;
    }
LABEL_72:
    v34 = Src;
    v31 = v50;
    goto LABEL_47;
  }
LABEL_68:
  v37 = RtlNtStatusToDosError(OwnerSecurityDescriptor);
  if ( v54 )
    ExFreePoolWithTag(v54, 0);
  return v37;
}
