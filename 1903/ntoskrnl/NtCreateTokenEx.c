/*
 * XREFs of NtCreateTokenEx @ 0x14061B850
 * Callers:
 *     NtCreateToken @ 0x1408E0260 (NtCreateToken.c)
 * Callees:
 *     SepCreateTokenEx @ 0x140086D2C (SepCreateTokenEx.c)
 *     SeCaptureSecurityQos @ 0x1405D7C64 (SeCaptureSecurityQos.c)
 *     SeReleaseLuidAndAttributesArray @ 0x14061C1E4 (SeReleaseLuidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x14061C430 (SeCaptureSidAndAttributesArray.c)
 *     SeReleaseAcl @ 0x14061C8F0 (SeReleaseAcl.c)
 *     SeCaptureAcl @ 0x14061C90C (SeCaptureAcl.c)
 *     SeCaptureSid @ 0x140644F1C (SeCaptureSid.c)
 *     SeReleaseSid @ 0x14064501C (SeReleaseSid.c)
 *     SeSinglePrivilegeCheck @ 0x140672D30 (SeSinglePrivilegeCheck.c)
 *     SeCaptureLuidAndAttributesArray @ 0x1406749EC (SeCaptureLuidAndAttributesArray.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x1406D12D4 (SepCaptureTokenSecurityAttributesInformation.c)
 *     SepFreeCapturedTokenSecurityAttributesInformation @ 0x1406DD724 (SepFreeCapturedTokenSecurityAttributesInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
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
  __int64 v20; // rcx
  PTOKEN_OWNER v21; // r12
  PTOKEN_DEFAULT_DACL v22; // r13
  PTOKEN_GROUPS v23; // r14
  PTOKEN_SECURITY_ATTRIBUTES_INFORMATION v24; // r15
  NTSTATUS result; // eax
  __int64 v26; // rdx
  NTSTATUS v27; // edi
  __int64 v28; // r8
  __int64 v29; // r9
  ULONG v30; // ebx
  POOL_TYPE PoolType; // [rsp+20h] [rbp-198h]
  int v32; // [rsp+28h] [rbp-190h]
  int v33; // [rsp+28h] [rbp-190h]
  int v34; // [rsp+30h] [rbp-188h]
  int v35; // [rsp+30h] [rbp-188h]
  char v36; // [rsp+C0h] [rbp-F8h] BYREF
  char v37; // [rsp+C1h] [rbp-F7h]
  KPROCESSOR_MODE v38; // [rsp+C2h] [rbp-F6h]
  NTSTATUS v39; // [rsp+C4h] [rbp-F4h]
  __int64 v40; // [rsp+C8h] [rbp-F0h] BYREF
  unsigned int Policy; // [rsp+D0h] [rbp-E8h] BYREF
  int GroupCount; // [rsp+D4h] [rbp-E4h]
  int PrivilegeCount; // [rsp+D8h] [rbp-E0h]
  ULONG Count; // [rsp+DCh] [rbp-DCh]
  __int64 v45; // [rsp+E0h] [rbp-D8h] BYREF
  __int64 v46; // [rsp+E8h] [rbp-D0h] BYREF
  __int64 v47; // [rsp+F0h] [rbp-C8h] BYREF
  __int64 v48; // [rsp+F8h] [rbp-C0h] BYREF
  __int64 v49; // [rsp+100h] [rbp-B8h] BYREF
  __int64 v50; // [rsp+108h] [rbp-B0h] BYREF
  __int64 v51; // [rsp+110h] [rbp-A8h] BYREF
  PVOID P; // [rsp+118h] [rbp-A0h] BYREF
  PVOID v53; // [rsp+120h] [rbp-98h] BYREF
  __int64 v54; // [rsp+128h] [rbp-90h] BYREF
  __int64 v55; // [rsp+130h] [rbp-88h] BYREF
  __int64 QuadPart; // [rsp+138h] [rbp-80h] BYREF
  __int64 v57; // [rsp+140h] [rbp-78h] BYREF
  int v58[2]; // [rsp+148h] [rbp-70h] BYREF
  __int64 v59; // [rsp+150h] [rbp-68h] BYREF
  int v60; // [rsp+158h] [rbp-60h]
  __int64 v61; // [rsp+160h] [rbp-58h] BYREF
  struct _TOKEN_SOURCE v62; // [rsp+168h] [rbp-50h] BYREF

  v18 = TokenHandle;
  *(_QWORD *)v58 = 0LL;
  v36 = 0;
  v59 = 0LL;
  v60 = 0;
  v57 = 0LL;
  QuadPart = 0LL;
  v45 = 0LL;
  v54 = 0LL;
  Count = 0;
  v46 = 0LL;
  v40 = 0x100000000LL;
  PrivilegeCount = 0;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  *(_QWORD *)v62.SourceName = 0LL;
  v62.SourceIdentifier = 0LL;
  Policy = 0;
  v37 = 0;
  P = 0LL;
  v53 = 0LL;
  GroupCount = 0;
  v51 = 0LL;
  LODWORD(v55) = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v38 = PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeCreateTokenPrivilege, PreviousMode) )
    return -1073741727;
  if ( PreviousMode )
  {
    v20 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v18 < 0x7FFFFFFF0000LL )
      v20 = (__int64)v18;
    *(_QWORD *)v20 = *(_QWORD *)v20;
    if ( ((unsigned __int8)ExpirationTime & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( ((unsigned __int8)Groups & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( ((unsigned __int8)Privileges & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( ((unsigned __int8)Source & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v21 = Owner;
    if ( Owner && ((unsigned __int8)Owner & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( ((unsigned __int8)PrimaryGroup & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v22 = DefaultDacl;
    if ( DefaultDacl && ((unsigned __int8)DefaultDacl & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( ((unsigned __int8)AuthenticationId & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( MandatoryPolicy && ((unsigned __int8)MandatoryPolicy & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v23 = DeviceGroups;
    if ( DeviceGroups && ((unsigned __int8)DeviceGroups & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( DeviceAttributes && ((unsigned __int8)DeviceAttributes & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v24 = UserAttributes;
    if ( UserAttributes && ((unsigned __int8)UserAttributes & 3) != 0 )
      ExRaiseDatatypeMisalignment();
  }
  else
  {
    v22 = DefaultDacl;
    v21 = Owner;
    v23 = DeviceGroups;
    v24 = UserAttributes;
  }
  if ( (unsigned int)(Type - 1) > 1 )
    return -1073741656;
  result = SeCaptureSecurityQos((__int64)ObjectAttributes, PreviousMode, &v36, (__int64)&v59);
  if ( result >= 0 )
  {
    if ( v36 || Type != TokenImpersonation )
    {
      v39 = 0;
      v57 = (__int64)*AuthenticationId;
      QuadPart = ExpirationTime->QuadPart;
      v27 = SeCaptureSidAndAttributesArray(User, 0, v32, v34, (__int64)&v45, (__int64)&v54);
      v39 = v27;
      if ( v27 >= 0 )
      {
        Count = Groups->GroupCount;
        v30 = Count;
        v27 = SeCaptureSidAndAttributesArray(Groups->Groups, 0, v33, v35, (__int64)&v46, (__int64)&v40);
        v39 = v27;
        LODWORD(v40) = (-16 * v30 + v40 + 3) & 0xFFFFFFFC;
        v18 = TokenHandle;
      }
      if ( v27 >= 0 )
      {
        PrivilegeCount = Privileges->PrivilegeCount;
        v27 = SeCaptureLuidAndAttributesArray(
                Privileges->Privileges,
                PoolType,
                v33,
                v35,
                (__int64)&v47,
                (__int64)&v54 + 4);
        v39 = v27;
      }
      if ( v21 && v27 >= 0 )
      {
        v27 = SeCaptureSid(v21->Owner, PoolType, 1, (__int64)&v48);
        v39 = v27;
      }
      if ( v27 >= 0 )
      {
        v27 = SeCaptureSid(PrimaryGroup->PrimaryGroup, PoolType, 1, (__int64)&v49);
        v39 = v27;
      }
      if ( v22 && v27 >= 0 && v22->DefaultDacl )
      {
        v27 = SeCaptureAcl(v22->DefaultDacl, NonPagedPoolNx, v33, (__int64)&v50, (__int64)&v61);
        v39 = v27;
      }
      v62 = *Source;
      if ( v23 && v27 >= 0 )
      {
        GroupCount = v23->GroupCount;
        v27 = SeCaptureSidAndAttributesArray(v23->Groups, 0, v33, v35, (__int64)&v51, (__int64)&v55);
        v39 = v27;
      }
      if ( v24 && v27 >= 0 )
      {
        LOBYTE(v29) = PreviousMode;
        v27 = SepCaptureTokenSecurityAttributesInformation((_DWORD)v24, (unsigned int)&v40 + 4, 1, v29, 0, (__int64)&P);
        v39 = v27;
      }
      if ( DeviceAttributes && v27 >= 0 )
      {
        LOBYTE(v29) = PreviousMode;
        v27 = SepCaptureTokenSecurityAttributesInformation(
                (_DWORD)DeviceAttributes,
                (unsigned int)&v40 + 4,
                1,
                v29,
                0,
                (__int64)&v53);
        v39 = v27;
      }
      if ( MandatoryPolicy && v27 >= 0 )
      {
        Policy = MandatoryPolicy->Policy;
        v37 = 1;
      }
      if ( v27 >= 0 )
        v27 = SepCreateTokenEx(
                (HANDLE *)v58,
                PreviousMode,
                DesiredAccess,
                (__int64)ObjectAttributes,
                Type,
                SHIDWORD(v59),
                (__int64)&v57,
                &QuadPart,
                (_SID_AND_ATTRIBUTES *)v45,
                Count,
                (_SID_AND_ATTRIBUTES *)v46,
                v40,
                PrivilegeCount,
                (char **)v47,
                (void *)v48,
                (void *)v49,
                (void *)v50,
                &v62,
                (__int64)P,
                (__int64)v53,
                GroupCount,
                v51,
                (_DWORD *)((unsigned __int64)&Policy & -(__int64)(v37 != 0)),
                0);
      if ( v45 )
      {
        LOBYTE(v26) = PreviousMode;
        SeReleaseLuidAndAttributesArray(v45, v26);
      }
      if ( v46 )
      {
        LOBYTE(v26) = PreviousMode;
        SeReleaseLuidAndAttributesArray(v46, v26);
      }
      if ( v47 )
      {
        LOBYTE(v26) = PreviousMode;
        SeReleaseLuidAndAttributesArray(v47, v26);
      }
      if ( v48 )
      {
        LOBYTE(v28) = 1;
        LOBYTE(v26) = PreviousMode;
        SeReleaseSid(v48, v26, v28, v29);
      }
      if ( v49 )
      {
        LOBYTE(v28) = 1;
        LOBYTE(v26) = PreviousMode;
        SeReleaseSid(v49, v26, v28, v29);
      }
      if ( v50 )
      {
        LOBYTE(v26) = PreviousMode;
        SeReleaseAcl(v50, v26);
      }
      if ( v51 )
      {
        LOBYTE(v26) = PreviousMode;
        SeReleaseLuidAndAttributesArray(v51, v26);
      }
      if ( P )
        SepFreeCapturedTokenSecurityAttributesInformation(P);
      if ( v53 )
        SepFreeCapturedTokenSecurityAttributesInformation(v53);
      if ( v27 >= 0 )
        *v18 = *(HANDLE *)v58;
      return v27;
    }
    else
    {
      return -1073741659;
    }
  }
  return result;
}
