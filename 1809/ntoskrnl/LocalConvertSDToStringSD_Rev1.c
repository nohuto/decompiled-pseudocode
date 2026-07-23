/*
 * XREFs of LocalConvertSDToStringSD_Rev1 @ 0x1408A6C20
 * Callers:
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x140300F10 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x140092270 (RtlGetDaclSecurityDescriptor.c)
 *     swprintf_s @ 0x14019A4A0 (swprintf_s.c)
 *     wcscpy_s @ 0x14019BE00 (wcscpy_s.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlGetControlSecurityDescriptor @ 0x1405BA5F0 (RtlGetControlSecurityDescriptor.c)
 *     RtlGetSaclSecurityDescriptor @ 0x14060ECC0 (RtlGetSaclSecurityDescriptor.c)
 *     RtlNtStatusToDosError @ 0x140624F00 (RtlNtStatusToDosError.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x1406AE460 (RtlGetOwnerSecurityDescriptor.c)
 *     SddlpAlloc @ 0x1406B1814 (SddlpAlloc.c)
 *     RtlGetGroupSecurityDescriptor @ 0x1406CD310 (RtlGetGroupSecurityDescriptor.c)
 *     LocalConvertAclToString @ 0x1408A61B0 (LocalConvertAclToString.c)
 *     LocalGetStringForControl @ 0x1408A73F0 (LocalGetStringForControl.c)
 *     LocalGetStringForSid @ 0x1408A7514 (LocalGetStringForSid.c)
 *     SddlFilterSacl @ 0x1408A7CF4 (SddlFilterSacl.c)
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
  void *v13; // rdi
  __int16 v14; // bx
  unsigned int v15; // ebx
  int SaclSecurityDescriptor; // eax
  PVOID v18; // rax
  ULONG v19; // ebx
  int StringForSid; // eax
  PVOID v21; // rbx
  wchar_t *v22; // r12
  WORD v23; // bx
  char v24; // r14
  BOOLEAN v25; // cl
  PVOID v26; // rbx
  __int64 v27; // r15
  __int64 v28; // rax
  PVOID v29; // rdi
  __int64 v30; // rax
  PVOID v31; // r12
  __int64 v32; // rax
  __int64 v33; // rax
  wchar_t *v34; // rax
  size_t v35; // r14
  __int64 v36; // rdi
  __int64 v37; // rcx
  size_t v38; // rdx
  wchar_t *v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  size_t v42; // rdx
  wchar_t *v43; // rcx
  __int64 v44; // rdi
  __int64 v45; // [rsp+20h] [rbp-91h]
  int v46; // [rsp+38h] [rbp-79h]
  size_t Size; // [rsp+50h] [rbp-61h] BYREF
  PVOID v48; // [rsp+58h] [rbp-59h]
  wchar_t *Src; // [rsp+60h] [rbp-51h] BYREF
  PVOID v50; // [rsp+68h] [rbp-49h] BYREF
  PVOID v51; // [rsp+70h] [rbp-41h] BYREF
  PVOID v52; // [rsp+78h] [rbp-39h] BYREF
  PVOID P; // [rsp+80h] [rbp-31h]
  PACL Sacl; // [rsp+88h] [rbp-29h] BYREF
  PVOID v55; // [rsp+90h] [rbp-21h]
  PSID Owner; // [rsp+98h] [rbp-19h] BYREF
  PSID Group; // [rsp+A0h] [rbp-11h] BYREF
  PACL Dacl; // [rsp+A8h] [rbp-9h] BYREF
  ULONG OwnerDefaulted; // [rsp+100h] [rbp+4Fh] BYREF
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
  P = 0LL;
  v13 = 0LL;
  LOBYTE(SaclPresent) = 0;
  DaclPresent = 0;
  v55 = 0LL;
  v48 = 0LL;
  v50 = 0LL;
  Src = 0LL;
  Control = 0;
  v52 = 0LL;
  v51 = 0LL;
  if ( !a4 || !a6 )
    return 87;
  v14 = a5;
  if ( (a5 & 1) != 0 )
  {
    OwnerSecurityDescriptor = RtlGetOwnerSecurityDescriptor(a4, &Owner, (PBOOLEAN)&OwnerDefaulted);
    if ( OwnerSecurityDescriptor < 0 )
    {
LABEL_19:
      v19 = RtlNtStatusToDosError(OwnerSecurityDescriptor);
      if ( P )
        ExFreePoolWithTag(P, 0);
      return v19;
    }
    v11 = Owner;
  }
  if ( (v14 & 2) != 0 )
  {
    OwnerSecurityDescriptor = RtlGetGroupSecurityDescriptor(a4, &Group, (PBOOLEAN)&OwnerDefaulted);
    v12 = Group;
  }
  if ( OwnerSecurityDescriptor < 0 )
    goto LABEL_19;
  if ( (v14 & 4) != 0 )
    OwnerSecurityDescriptor = RtlGetDaclSecurityDescriptor(a4, &DaclPresent, &Dacl, (PBOOLEAN)&OwnerDefaulted);
  if ( OwnerSecurityDescriptor < 0 )
    goto LABEL_19;
  v15 = v14 & 0x1F8;
  if ( v15 )
  {
    SaclSecurityDescriptor = RtlGetSaclSecurityDescriptor(a4, (PBOOLEAN)&SaclPresent, &Sacl, (PBOOLEAN)&OwnerDefaulted);
    if ( SaclSecurityDescriptor < 0 )
      return RtlNtStatusToDosError(SaclSecurityDescriptor);
    v13 = Sacl;
    if ( (_BYTE)SaclPresent )
    {
      if ( Sacl )
      {
        SddlFilterSacl(Sacl, 0LL, &Size, v15);
        v18 = SddlpAlloc((unsigned int)Size);
        P = v18;
        if ( !v18 )
        {
          OwnerSecurityDescriptor = -1073741801;
          goto LABEL_19;
        }
        SddlFilterSacl(v13, v18, &Size, v15);
        v13 = P;
      }
    }
  }
  OwnerSecurityDescriptor = RtlGetControlSecurityDescriptor(a4, &Control, &OwnerDefaulted);
  if ( OwnerSecurityDescriptor < 0 )
    goto LABEL_19;
  if ( v11 )
  {
    StringForSid = LocalGetStringForSid(v11, v45, 1);
    v11 = 0LL;
    StringForControl = StringForSid;
    if ( StringForSid )
      goto LABEL_26;
  }
  if ( v12 )
  {
    StringForControl = LocalGetStringForSid(v12, v45, 1);
    if ( StringForControl )
      goto LABEL_26;
  }
  v23 = Control;
  if ( Control )
  {
    StringForControl = LocalGetStringForControl(Control, 1LL, &v52);
    if ( StringForControl )
      goto LABEL_26;
    StringForControl = LocalGetStringForControl(v23, 2LL, &v51);
    if ( StringForControl )
      goto LABEL_26;
  }
  v24 = SaclPresent;
  if ( (_BYTE)SaclPresent )
  {
    StringForControl = LocalConvertAclToString(
                         (__int64)v13,
                         SaclPresent,
                         0,
                         &v50,
                         (unsigned int *)&Size,
                         (__int64)v11,
                         (__int64)v11,
                         v46,
                         1);
    if ( StringForControl )
      goto LABEL_26;
    v10 = Size;
  }
  v25 = DaclPresent;
  if ( !DaclPresent )
    goto LABEL_38;
  StringForControl = LocalConvertAclToString(
                       (__int64)Dacl,
                       DaclPresent,
                       1,
                       (PVOID *)&Src,
                       (unsigned int *)&Size,
                       (__int64)v11,
                       (__int64)v11,
                       v46,
                       1);
  if ( StringForControl )
  {
LABEL_26:
    v21 = v50;
    v22 = Src;
LABEL_86:
    v29 = v48;
    goto LABEL_87;
  }
  v10 += Size;
  v25 = DaclPresent;
LABEL_38:
  v26 = v55;
  v27 = -1LL;
  if ( v55 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( *((_WORD *)v55 + v28) );
    v10 += 2 * v28 + 4;
  }
  v29 = v48;
  if ( v48 )
  {
    v30 = -1LL;
    do
      ++v30;
    while ( *((_WORD *)v48 + v30) );
    v10 += 2 * v30 + 4;
  }
  v31 = v52;
  if ( v25 )
  {
    v10 += 4;
    if ( v52 )
    {
      v32 = -1LL;
      do
        ++v32;
      while ( *((_WORD *)v52 + v32) );
      v10 += 2 * v32;
    }
  }
  if ( v24 )
  {
    v10 += 4;
    if ( v51 )
    {
      v33 = -1LL;
      do
        ++v33;
      while ( *((_WORD *)v51 + v33) );
      v10 += 2 * v33;
    }
  }
  v34 = (wchar_t *)SddlpAlloc(v10 + 2LL);
  *a6 = v34;
  if ( v34 )
  {
    v35 = ((unsigned __int64)v10 + 2) >> 1;
    LODWORD(v36) = 0;
    if ( v26 )
    {
      LODWORD(v45) = 58;
      swprintf_s(v34, v35, L"%ws%wc%ws", L"O", v45, v26);
      v36 = -1LL;
      v34 = *a6;
      do
        ++v36;
      while ( v34[v36] );
    }
    if ( v48 )
    {
      LODWORD(v45) = 58;
      swprintf_s(&v34[(unsigned int)v36], v35 - (unsigned int)v36, L"%ws%wc%ws", L"G", v45, v48);
      v34 = *a6;
      v37 = -1LL;
      do
        ++v37;
      while ( (*a6)[(unsigned int)v36 + v37] );
      LODWORD(v36) = v37 + v36;
    }
    if ( DaclPresent )
    {
      v38 = v35 - (unsigned int)v36;
      v39 = &v34[(unsigned int)v36];
      LODWORD(v45) = 58;
      if ( v31 )
        swprintf_s(v39, v38, L"%ws%wc%ws", L"D", v45, v31);
      else
        swprintf_s(v39, v38, L"%ws%wc", L"D", v45);
      v40 = -1LL;
      v34 = *a6;
      do
        ++v40;
      while ( (*a6)[(unsigned int)v36 + v40] );
      v22 = Src;
      v36 = (unsigned int)(v40 + v36);
      if ( Src )
      {
        wcscpy_s(&v34[v36], v35 - (unsigned int)v36, Src);
        v34 = *a6;
        v41 = -1LL;
        do
          ++v41;
        while ( (*a6)[v36 + v41] );
        LODWORD(v36) = v41 + v36;
      }
    }
    else
    {
      v22 = Src;
    }
    if ( (_BYTE)SaclPresent )
    {
      v42 = v35 - (unsigned int)v36;
      v43 = &v34[(unsigned int)v36];
      LODWORD(v45) = 58;
      if ( v51 )
        swprintf_s(v43, v42, L"%ws%wc%ws", L"S", v45, v51);
      else
        swprintf_s(v43, v42, L"%ws%wc", L"S", v45);
      do
        ++v27;
      while ( (*a6)[(unsigned int)v36 + v27] );
      v21 = v50;
      v44 = (unsigned int)(v27 + v36);
      if ( v50 )
        wcscpy_s(&(*a6)[v44], v35 - (unsigned int)v44, (const wchar_t *)v50);
    }
    else
    {
      v21 = v50;
    }
    if ( a7 )
      *a7 = v10 >> 1;
    goto LABEL_86;
  }
  v21 = v50;
  StringForControl = 8;
  v22 = Src;
LABEL_87:
  if ( v55 )
    ExFreePoolWithTag(v55, 0);
  if ( v29 )
    ExFreePoolWithTag(v29, 0);
  if ( v21 )
    ExFreePoolWithTag(v21, 0);
  if ( v22 )
    ExFreePoolWithTag(v22, 0);
  if ( v51 )
    ExFreePoolWithTag(v51, 0);
  if ( v52 )
    ExFreePoolWithTag(v52, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return StringForControl;
}
