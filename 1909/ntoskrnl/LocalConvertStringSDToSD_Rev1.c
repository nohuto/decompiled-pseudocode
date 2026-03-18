/*
 * XREFs of LocalConvertStringSDToSD_Rev1 @ 0x1406FA150
 * Callers:
 *     SeConvertStringSecurityDescriptorToSecurityDescriptor @ 0x140144C00 (SeConvertStringSecurityDescriptorToSecurityDescriptor.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlCreateSecurityDescriptor @ 0x1405D6210 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405D6250 (RtlSetDaclSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x14069D1F0 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x14069D250 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x14069E970 (RtlSetSaclSecurityDescriptor.c)
 *     RtlNtStatusToDosError @ 0x1406B8430 (RtlNtStatusToDosError.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x1406DFF50 (RtlAbsoluteToSelfRelativeSD.c)
 *     SddlpAlloc @ 0x1406ED59C (SddlpAlloc.c)
 *     LocalGetAclForString @ 0x1406FA3A4 (LocalGetAclForString.c)
 *     LocalGetSidForString @ 0x1406FA924 (LocalGetSidForString.c)
 *     LocalGetSDControlForString @ 0x1406FAC78 (LocalGetSDControlForString.c)
 */

__int64 __fastcall LocalConvertStringSDToSD_Rev1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        wchar_t *a4,
        PSECURITY_DESCRIPTOR *a5,
        ULONG *a6)
{
  ULONG SDControlForString; // ebx
  void *v8; // r15
  void *v9; // r14
  ACL *v10; // r13
  ACL *v11; // r12
  wchar_t v12; // ax
  wchar_t *v13; // rdi
  ULONG AclForString; // eax
  int v15; // eax
  int v16; // eax
  PVOID *v17; // rdi
  PVOID v18; // rax
  int v19; // eax
  wchar_t *v21; // rdi
  ULONG v22; // eax
  ULONG SidForString; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // [rsp+30h] [rbp-71h]
  int v28; // [rsp+38h] [rbp-69h]
  wchar_t *v29; // [rsp+50h] [rbp-51h] BYREF
  ULONG BufferLength; // [rsp+58h] [rbp-49h] BYREF
  ACL *v31; // [rsp+60h] [rbp-41h]
  void *v32; // [rsp+68h] [rbp-39h] BYREF
  void *v33; // [rsp+70h] [rbp-31h] BYREF
  ACL *v34; // [rsp+78h] [rbp-29h]
  _WORD SecurityDescriptor[52]; // [rsp+80h] [rbp-21h] BYREF
  __int64 v36; // [rsp+F8h] [rbp+57h] BYREF
  __int64 SaclPresent; // [rsp+100h] [rbp+5Fh]
  BOOLEAN DaclPresent; // [rsp+108h] [rbp+67h]
  char v39; // [rsp+110h] [rbp+6Fh] BYREF

  SaclPresent = a2;
  v36 = a1;
  v32 = 0LL;
  v33 = 0LL;
  SDControlForString = 0;
  v34 = 0LL;
  v31 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  memset(SecurityDescriptor, 0, 0x28uLL);
  LOBYTE(v36) = 0;
  v39 = 0;
  BufferLength = 0;
  DaclPresent = 0;
  LOBYTE(SaclPresent) = 0;
  if ( !a4 || !a5 )
    return 87LL;
  if ( a6 )
    *a6 = 0;
  while ( a4 )
  {
    v12 = *a4;
    if ( *a4 )
    {
      switch ( v12 )
      {
        case 'D':
          if ( a4[1] != 58 )
            goto LABEL_36;
          v13 = a4 + 2;
          if ( v10 )
            goto LABEL_36;
          if ( *v13 != 40 )
          {
            SDControlForString = LocalGetSDControlForString(v13);
            if ( SDControlForString )
              goto LABEL_29;
            v13 = v29;
          }
          AclForString = LocalGetAclForString(v13, 0LL, 0LL, v28, 0);
          v10 = v34;
          SDControlForString = AclForString;
          if ( AclForString )
            goto LABEL_29;
          a4 = v29;
          DaclPresent = 1;
          break;
        case ' ':
          ++a4;
          break;
        case 'G':
          SDControlForString = 87;
          if ( a4[1] != 58 || v9 )
            goto LABEL_29;
          SidForString = LocalGetSidForString(
                           (int)a4 + 4,
                           (unsigned int)&v33,
                           (unsigned int)&v29,
                           (unsigned int)&v39,
                           0LL,
                           v27,
                           v28,
                           0);
          v9 = v33;
LABEL_52:
          SDControlForString = SidForString;
          if ( SidForString )
            goto LABEL_29;
          a4 = v29;
          break;
        case 'O':
          SDControlForString = 87;
          if ( a4[1] != 58 || v8 )
            goto LABEL_29;
          SidForString = LocalGetSidForString(
                           (int)a4 + 4,
                           (unsigned int)&v32,
                           (unsigned int)&v29,
                           (unsigned int)&v36,
                           0LL,
                           v27,
                           v28,
                           0);
          v8 = v32;
          goto LABEL_52;
        default:
          if ( v12 != 83 || a4[1] != 58 || (v21 = a4 + 2, v11) )
          {
LABEL_36:
            SDControlForString = 87;
            goto LABEL_29;
          }
          if ( *v21 != 40 )
          {
            SDControlForString = LocalGetSDControlForString(v21);
            if ( SDControlForString )
              goto LABEL_29;
            v21 = v29;
          }
          v22 = LocalGetAclForString(v21, 0LL, 0LL, v28, 0);
          v11 = v31;
          SDControlForString = v22;
          if ( v22 )
            goto LABEL_29;
          a4 = v29;
          LOBYTE(SaclPresent) = 1;
          break;
      }
    }
    else
    {
      a4 = 0LL;
    }
  }
  v15 = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( v15 < 0 )
    SDControlForString = RtlNtStatusToDosError(v15);
  if ( !SDControlForString )
  {
    if ( !v8
      || (v24 = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, v8, 0), v24 >= 0)
      || (SDControlForString = RtlNtStatusToDosError(v24)) == 0 )
    {
      if ( !v9
        || (v25 = RtlSetGroupSecurityDescriptor(SecurityDescriptor, v9, 0), v25 >= 0)
        || (SDControlForString = RtlNtStatusToDosError(v25)) == 0 )
      {
        if ( !DaclPresent
          || (v16 = RtlSetDaclSecurityDescriptor(SecurityDescriptor, DaclPresent, v10, 0), v16 >= 0)
          || (SDControlForString = RtlNtStatusToDosError(v16)) == 0 )
        {
          if ( !(_BYTE)SaclPresent
            || (v26 = RtlSetSaclSecurityDescriptor(SecurityDescriptor, SaclPresent, v11, 0), v26 >= 0)
            || (SDControlForString = RtlNtStatusToDosError(v26)) == 0 )
          {
            v17 = a5;
            if ( RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, *a5, &BufferLength) == -1073741789 )
            {
              SDControlForString = 0;
              v18 = SddlpAlloc(BufferLength);
              *v17 = v18;
              if ( !v18 )
              {
                SDControlForString = 8;
                goto LABEL_29;
              }
              v19 = RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, v18, &BufferLength);
              if ( v19 >= 0 )
              {
LABEL_27:
                if ( a6 )
                  *a6 = BufferLength;
                goto LABEL_29;
              }
              SDControlForString = RtlNtStatusToDosError(v19);
              if ( *v17 )
                ExFreePoolWithTag(*v17, 0);
              *v17 = 0LL;
            }
            else
            {
              SDControlForString = 122;
            }
            if ( !SDControlForString )
              goto LABEL_27;
          }
        }
      }
    }
  }
LABEL_29:
  if ( (_BYTE)v36 == 1 && v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v39 == 1 && v9 )
    ExFreePoolWithTag(v9, 0);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  return SDControlForString;
}
