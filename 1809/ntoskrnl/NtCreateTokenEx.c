/*
 * XREFs of NtCreateTokenEx @ 0x1405BD550
 * Callers:
 *     NtCreateToken @ 0x1408A2BE0 (NtCreateToken.c)
 * Callees:
 *     SepCreateTokenEx @ 0x14001366C (SepCreateTokenEx.c)
 *     SeReleaseLuidAndAttributesArray @ 0x1405BDE84 (SeReleaseLuidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x1405BE0D0 (SeCaptureSidAndAttributesArray.c)
 *     SeReleaseAcl @ 0x1405BE590 (SeReleaseAcl.c)
 *     SeCaptureAcl @ 0x1405BE894 (SeCaptureAcl.c)
 *     SepFreeCapturedTokenSecurityAttributesInformation @ 0x1405BFE40 (SepFreeCapturedTokenSecurityAttributesInformation.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x1405C07FC (SepCaptureTokenSecurityAttributesInformation.c)
 *     SeCaptureLuidAndAttributesArray @ 0x14060B1F8 (SeCaptureLuidAndAttributesArray.c)
 *     SeReleaseSid @ 0x1406122AC (SeReleaseSid.c)
 *     SeCaptureSid @ 0x1406122D4 (SeCaptureSid.c)
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 *     SeCaptureSecurityQos @ 0x14064B61C (SeCaptureSecurityQos.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtCreateTokenEx(
        PHANDLE TokenHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        TOKEN_TYPE Type,
        PLUID AuthenticationId,
        PLARGE_INTEGER ExpirationTime,
        PTOKEN_USER User,
        PTOKEN_GROUPS Groups,
        PTOKEN_PRIVILEGES Privileges,
        PTOKEN_SECURITY_ATTRIBUTES_INFORMATION UserAttributes,
        PTOKEN_SECURITY_ATTRIBUTES_INFORMATION DeviceAttributes,
        PTOKEN_GROUPS DeviceGroups,
        PTOKEN_MANDATORY_POLICY MandatoryPolicy,
        PTOKEN_OWNER Owner,
        PTOKEN_PRIMARY_GROUP PrimaryGroup,
        PTOKEN_DEFAULT_DACL DefaultDacl,
        PTOKEN_SOURCE Source)
{
  PHANDLE v18; // rbx
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v20; // rdx
  __int64 v21; // rcx
  PTOKEN_OWNER v22; // r12
  PTOKEN_DEFAULT_DACL v23; // r13
  PTOKEN_GROUPS v24; // r14
  PTOKEN_SECURITY_ATTRIBUTES_INFORMATION v25; // r15
  NTSTATUS result; // eax
  __int64 v27; // rdx
  NTSTATUS v28; // edi
  __int64 v29; // r8
  int v30; // r9d
  ULONG v31; // ebx
  POOL_TYPE PoolType; // [rsp+20h] [rbp-198h]
  int v33; // [rsp+28h] [rbp-190h]
  int v34; // [rsp+28h] [rbp-190h]
  int v35; // [rsp+30h] [rbp-188h]
  int v36; // [rsp+30h] [rbp-188h]
  char v37; // [rsp+C0h] [rbp-F8h] BYREF
  char v38; // [rsp+C1h] [rbp-F7h]
  KPROCESSOR_MODE v39; // [rsp+C2h] [rbp-F6h]
  NTSTATUS v40; // [rsp+C4h] [rbp-F4h]
  __int64 v41; // [rsp+C8h] [rbp-F0h] BYREF
  unsigned int Policy; // [rsp+D0h] [rbp-E8h] BYREF
  int GroupCount; // [rsp+D4h] [rbp-E4h]
  int PrivilegeCount; // [rsp+D8h] [rbp-E0h]
  ULONG Count; // [rsp+DCh] [rbp-DCh]
  __int64 v46; // [rsp+E0h] [rbp-D8h] BYREF
  __int64 v47; // [rsp+E8h] [rbp-D0h] BYREF
  __int64 v48; // [rsp+F0h] [rbp-C8h] BYREF
  __int64 v49; // [rsp+F8h] [rbp-C0h] BYREF
  __int64 v50; // [rsp+100h] [rbp-B8h] BYREF
  __int64 v51; // [rsp+108h] [rbp-B0h] BYREF
  __int64 v52; // [rsp+110h] [rbp-A8h] BYREF
  PVOID P; // [rsp+118h] [rbp-A0h] BYREF
  PVOID v54; // [rsp+120h] [rbp-98h] BYREF
  __int64 v55; // [rsp+128h] [rbp-90h] BYREF
  __int64 v56; // [rsp+130h] [rbp-88h] BYREF
  int v57[2]; // [rsp+138h] [rbp-80h] BYREF
  __int64 v58; // [rsp+140h] [rbp-78h] BYREF
  __int64 QuadPart; // [rsp+148h] [rbp-70h] BYREF
  __int64 v60; // [rsp+150h] [rbp-68h] BYREF
  _BYTE v61[4]; // [rsp+158h] [rbp-60h] BYREF
  int v62; // [rsp+15Ch] [rbp-5Ch]
  __int64 v63[2]; // [rsp+168h] [rbp-50h] BYREF

  v18 = TokenHandle;
  *(_QWORD *)v57 = 0LL;
  v37 = 0;
  v46 = 0LL;
  v55 = 0LL;
  Count = 0;
  v47 = 0LL;
  v41 = 0x100000000LL;
  PrivilegeCount = 0;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  Policy = 0;
  v38 = 0;
  P = 0LL;
  v54 = 0LL;
  GroupCount = 0;
  v52 = 0LL;
  LODWORD(v56) = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v39 = PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeCreateTokenPrivilege, PreviousMode) )
    return -1073741727;
  if ( PreviousMode )
  {
    v20 = 0x7FFFFFFF0000LL;
    v21 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v18 < 0x7FFFFFFF0000LL )
      v21 = (__int64)v18;
    *(_QWORD *)v21 = *(_QWORD *)v21;
    if ( ((unsigned __int8)ExpirationTime & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( ((unsigned __int8)Groups & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( ((unsigned __int8)Privileges & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( ((unsigned __int8)Source & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v22 = Owner;
    if ( Owner && ((unsigned __int8)Owner & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( ((unsigned __int8)PrimaryGroup & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v23 = DefaultDacl;
    if ( DefaultDacl && ((unsigned __int8)DefaultDacl & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( ((unsigned __int8)AuthenticationId & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( MandatoryPolicy && ((unsigned __int8)MandatoryPolicy & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v24 = DeviceGroups;
    if ( DeviceGroups && ((unsigned __int8)DeviceGroups & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( DeviceAttributes && ((unsigned __int8)DeviceAttributes & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v25 = UserAttributes;
    if ( UserAttributes )
    {
      if ( ((unsigned __int8)UserAttributes & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)UserAttributes < 0x7FFFFFFF0000LL )
        v20 = (__int64)UserAttributes;
    }
  }
  else
  {
    v23 = DefaultDacl;
    v22 = Owner;
    v24 = DeviceGroups;
    v25 = UserAttributes;
  }
  if ( (unsigned int)(Type - 1) > 1 )
    return -1073741656;
  LOBYTE(v20) = PreviousMode;
  result = SeCaptureSecurityQos(ObjectAttributes, v20, &v37, v61);
  if ( result >= 0 )
  {
    if ( v37 || Type != TokenImpersonation )
    {
      v40 = 0;
      v60 = (__int64)*AuthenticationId;
      QuadPart = ExpirationTime->QuadPart;
      v28 = SeCaptureSidAndAttributesArray(User, 0, v33, v35, (__int64)&v46, (__int64)&v55);
      v40 = v28;
      if ( v28 >= 0 )
      {
        Count = Groups->GroupCount;
        v31 = Count;
        v28 = SeCaptureSidAndAttributesArray(Groups->Groups, 0, v34, v36, (__int64)&v47, (__int64)&v41);
        v40 = v28;
        LODWORD(v41) = (-16 * v31 + v41 + 3) & 0xFFFFFFFC;
        v18 = TokenHandle;
      }
      if ( v28 >= 0 )
      {
        PrivilegeCount = Privileges->PrivilegeCount;
        v28 = SeCaptureLuidAndAttributesArray(
                Privileges->Privileges,
                PoolType,
                v34,
                v36,
                (__int64)&v48,
                (__int64)&v55 + 4);
        v40 = v28;
      }
      if ( v22 && v28 >= 0 )
      {
        v28 = SeCaptureSid(v22->Owner, PoolType, 1, (__int64)&v49);
        v40 = v28;
      }
      if ( v28 >= 0 )
      {
        v28 = SeCaptureSid(PrimaryGroup->PrimaryGroup, PoolType, 1, (__int64)&v50);
        v40 = v28;
      }
      if ( v23 && v28 >= 0 && v23->DefaultDacl )
      {
        v28 = SeCaptureAcl(v23->DefaultDacl, NonPagedPoolNx, v34, (__int64)&v51, (__int64)&v58);
        v40 = v28;
      }
      *(struct _TOKEN_SOURCE *)v63 = *Source;
      if ( v24 && v28 >= 0 )
      {
        GroupCount = v24->GroupCount;
        v28 = SeCaptureSidAndAttributesArray(v24->Groups, 0, v34, v36, (__int64)&v52, (__int64)&v56);
        v40 = v28;
      }
      if ( v25 && v28 >= 0 )
      {
        LOBYTE(v30) = PreviousMode;
        v28 = SepCaptureTokenSecurityAttributesInformation((_DWORD)v25, (unsigned int)&v41 + 4, 1, v30, 0, (__int64)&P);
        v40 = v28;
      }
      if ( DeviceAttributes && v28 >= 0 )
      {
        LOBYTE(v30) = PreviousMode;
        v28 = SepCaptureTokenSecurityAttributesInformation(
                (_DWORD)DeviceAttributes,
                (unsigned int)&v41 + 4,
                1,
                v30,
                0,
                (__int64)&v54);
        v40 = v28;
      }
      if ( MandatoryPolicy && v28 >= 0 )
      {
        Policy = MandatoryPolicy->Policy;
        v38 = 1;
      }
      if ( v28 >= 0 )
      {
        LOBYTE(v27) = PreviousMode;
        v28 = SepCreateTokenEx(
                (HANDLE *)v57,
                v27,
                DesiredAccess,
                (__int64)ObjectAttributes,
                Type,
                v62,
                (__int64)&v60,
                &QuadPart,
                (_SID_AND_ATTRIBUTES *)v46,
                Count,
                (_SID_AND_ATTRIBUTES *)v47,
                v41,
                PrivilegeCount,
                (char **)v48,
                (void *)v49,
                (void *)v50,
                (void *)v51,
                v63,
                (__int64)P,
                (__int64)v54,
                GroupCount,
                v52,
                (_DWORD *)((unsigned __int64)&Policy & -(__int64)(v38 != 0)),
                0);
      }
      if ( v46 )
      {
        LOBYTE(v27) = PreviousMode;
        SeReleaseLuidAndAttributesArray(v46, v27);
      }
      if ( v47 )
      {
        LOBYTE(v27) = PreviousMode;
        SeReleaseLuidAndAttributesArray(v47, v27);
      }
      if ( v48 )
      {
        LOBYTE(v27) = PreviousMode;
        SeReleaseLuidAndAttributesArray(v48, v27);
      }
      if ( v49 )
      {
        LOBYTE(v29) = 1;
        LOBYTE(v27) = PreviousMode;
        SeReleaseSid(v49, v27, v29);
      }
      if ( v50 )
      {
        LOBYTE(v29) = 1;
        LOBYTE(v27) = PreviousMode;
        SeReleaseSid(v50, v27, v29);
      }
      if ( v51 )
      {
        LOBYTE(v27) = PreviousMode;
        SeReleaseAcl(v51, v27);
      }
      if ( v52 )
      {
        LOBYTE(v27) = PreviousMode;
        SeReleaseLuidAndAttributesArray(v52, v27);
      }
      if ( P )
        SepFreeCapturedTokenSecurityAttributesInformation(P);
      if ( v54 )
        SepFreeCapturedTokenSecurityAttributesInformation(v54);
      if ( v28 >= 0 )
        *v18 = *(HANDLE *)v57;
      return v28;
    }
    else
    {
      return -1073741659;
    }
  }
  return result;
}
