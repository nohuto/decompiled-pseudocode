/*
 * XREFs of LocalConvertStringSDToSD_Rev1 @ 0x1406B0A6C
 * Callers:
 *     SeConvertStringSecurityDescriptorToSecurityDescriptor @ 0x1401280D0 (SeConvertStringSecurityDescriptorToSecurityDescriptor.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405CBDE0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlNtStatusToDosError @ 0x140624F00 (RtlNtStatusToDosError.c)
 *     RtlCreateSecurityDescriptor @ 0x140651050 (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140655450 (RtlSetSaclSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140656770 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1406567D0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x1406B0CB0 (RtlAbsoluteToSelfRelativeSD.c)
 *     LocalGetAclForString @ 0x1406B0F2C (LocalGetAclForString.c)
 *     LocalGetSidForString @ 0x1406B154C (LocalGetSidForString.c)
 *     SddlpAlloc @ 0x1406B1814 (SddlpAlloc.c)
 *     LocalGetSDControlForString @ 0x1406B1AC0 (LocalGetSDControlForString.c)
 */

__int64 __fastcall LocalConvertStringSDToSD_Rev1(__int64 a1, __int64 a2, __int64 a3, wchar_t *a4, PVOID *a5, ULONG *a6)
{
  wchar_t *v6; // rax
  ULONG SDControlForString; // ebx
  void *v8; // r14
  void *v9; // rsi
  ACL *v10; // r12
  ACL *v11; // r15
  PVOID *v12; // r13
  wchar_t v13; // cx
  wchar_t *v14; // rax
  ULONG AclForString; // eax
  int v16; // eax
  int v17; // eax
  void *v18; // rax
  int v19; // eax
  wchar_t *v21; // rax
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
  _BYTE SecurityDescriptor[2]; // [rsp+80h] [rbp-21h] BYREF
  __int64 v36; // [rsp+F8h] [rbp+57h] BYREF
  __int64 SaclPresent; // [rsp+100h] [rbp+5Fh]
  BOOLEAN DaclPresent; // [rsp+108h] [rbp+67h]
  char v39; // [rsp+110h] [rbp+6Fh] BYREF

  SaclPresent = a2;
  v36 = a1;
  v6 = a4;
  v32 = 0LL;
  SDControlForString = 0;
  v33 = 0LL;
  v8 = 0LL;
  v34 = 0LL;
  v9 = 0LL;
  v31 = 0LL;
  v10 = 0LL;
  LOBYTE(v36) = 0;
  v11 = 0LL;
  v39 = 0;
  BufferLength = 0;
  DaclPresent = 0;
  LOBYTE(SaclPresent) = 0;
  if ( !a4 )
    return 87LL;
  v12 = a5;
  if ( !a5 )
    return 87LL;
  if ( a6 )
    *a6 = 0;
  while ( v6 )
  {
    v13 = *v6;
    if ( *v6 )
    {
      switch ( v13 )
      {
        case 'D':
          if ( v6[1] != 58 )
            goto LABEL_36;
          v14 = v6 + 2;
          if ( v10 )
            goto LABEL_36;
          if ( *v14 != 40 )
          {
            SDControlForString = LocalGetSDControlForString(v14);
            if ( SDControlForString )
              goto LABEL_29;
            v14 = v29;
          }
          AclForString = LocalGetAclForString(v14, 0LL, 0LL, v28, 0);
          v10 = v34;
          SDControlForString = AclForString;
          if ( AclForString )
            goto LABEL_29;
          v6 = v29;
          DaclPresent = 1;
          break;
        case ' ':
          ++v6;
          break;
        case 'G':
          SDControlForString = 87;
          if ( v6[1] != 58 || v9 )
            goto LABEL_29;
          SidForString = LocalGetSidForString(
                           (int)v6 + 4,
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
          v6 = v29;
          break;
        case 'O':
          SDControlForString = 87;
          if ( v6[1] != 58 || v8 )
            goto LABEL_29;
          SidForString = LocalGetSidForString(
                           (int)v6 + 4,
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
          if ( v13 != 83 || v6[1] != 58 || (v21 = v6 + 2, v11) )
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
          v6 = v29;
          LOBYTE(SaclPresent) = 1;
          break;
      }
    }
    else
    {
      v6 = 0LL;
    }
  }
  v16 = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( v16 < 0 )
    SDControlForString = RtlNtStatusToDosError(v16);
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
          || (v17 = RtlSetDaclSecurityDescriptor(SecurityDescriptor, DaclPresent, v10, 0), v17 >= 0)
          || (SDControlForString = RtlNtStatusToDosError(v17)) == 0 )
        {
          if ( !(_BYTE)SaclPresent
            || (v26 = RtlSetSaclSecurityDescriptor(SecurityDescriptor, SaclPresent, v11, 0), v26 >= 0)
            || (SDControlForString = RtlNtStatusToDosError(v26)) == 0 )
          {
            if ( RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, *v12, &BufferLength) == -1073741789 )
            {
              SDControlForString = 0;
              v18 = (void *)SddlpAlloc(BufferLength);
              *v12 = v18;
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
              if ( *v12 )
                ExFreePoolWithTag(*v12, 0);
              *v12 = 0LL;
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
