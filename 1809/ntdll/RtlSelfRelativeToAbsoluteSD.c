/*
 * XREFs of RtlSelfRelativeToAbsoluteSD @ 0x180073F70
 * Callers:
 *     <none>
 * Callees:
 *     RtlpQuerySecurityDescriptor @ 0x180074294 (RtlpQuerySecurityDescriptor.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 */

NTSTATUS __cdecl RtlSelfRelativeToAbsoluteSD(
        PSECURITY_DESCRIPTOR SelfRelativeSecurityDescriptor,
        PSECURITY_DESCRIPTOR AbsoluteSecurityDescriptor,
        PULONG AbsoluteSecurityDescriptorSize,
        PACL Dacl,
        PULONG DaclSize,
        PACL Sacl,
        PULONG SaclSize,
        PSID Owner,
        PULONG OwnerSize,
        PSID PrimaryGroup,
        PULONG PrimaryGroupSize)
{
  const void *v14; // rcx
  PULONG v15; // rax
  PULONG v16; // rdx
  PULONG v17; // r8
  PULONG v18; // r9
  ULONG v19; // r10d
  ULONG v20; // r11d
  ULONG v21; // r14d
  ULONG v22; // r15d
  PSID v23; // rbx
  PSID v24; // rbx
  NTSTATUS result; // eax
  PACL v26; // rbx
  ULONG v27; // [rsp+50h] [rbp-30h] BYREF
  ULONG v28; // [rsp+54h] [rbp-2Ch] BYREF
  void *Src; // [rsp+58h] [rbp-28h] BYREF
  void *v30; // [rsp+60h] [rbp-20h] BYREF
  void *v31; // [rsp+68h] [rbp-18h] BYREF
  void *v32; // [rsp+70h] [rbp-10h] BYREF
  ULONG v33; // [rsp+B0h] [rbp+30h] BYREF
  ULONG v34; // [rsp+B8h] [rbp+38h] BYREF

  if ( *((__int16 *)SelfRelativeSecurityDescriptor + 1) >= 0 )
    return -1073741593;
  RtlpQuerySecurityDescriptor(
    (_DWORD)SelfRelativeSecurityDescriptor,
    (unsigned int)&Src,
    (unsigned int)&v28,
    (unsigned int)&v30,
    (__int64)&v27,
    (__int64)&v32,
    (__int64)&v34,
    (__int64)&v31,
    (__int64)&v33);
  v15 = PrimaryGroupSize;
  v16 = OwnerSize;
  v17 = SaclSize;
  v18 = DaclSize;
  v19 = v33;
  v20 = v34;
  v21 = v27;
  v22 = v28;
  if ( AbsoluteSecurityDescriptor
    && *AbsoluteSecurityDescriptorSize >= 0x28
    && v28 <= *OwnerSize
    && v34 <= *DaclSize
    && v33 <= *SaclSize
    && v27 <= *PrimaryGroupSize )
  {
    memmove(AbsoluteSecurityDescriptor, v14, 0x14uLL);
    *((_QWORD *)AbsoluteSecurityDescriptor + 1) = 0LL;
    *((_WORD *)AbsoluteSecurityDescriptor + 1) &= ~0x8000u;
    *((_QWORD *)AbsoluteSecurityDescriptor + 2) = 0LL;
    *((_QWORD *)AbsoluteSecurityDescriptor + 3) = 0LL;
    *((_QWORD *)AbsoluteSecurityDescriptor + 4) = 0LL;
    if ( Src )
    {
      v23 = Owner;
      memmove(Owner, Src, 4LL * *((unsigned __int8 *)Src + 1) + 8);
      *((_QWORD *)AbsoluteSecurityDescriptor + 1) = v23;
    }
    if ( v30 )
    {
      v24 = PrimaryGroup;
      memmove(PrimaryGroup, v30, 4LL * *((unsigned __int8 *)v30 + 1) + 8);
      *((_QWORD *)AbsoluteSecurityDescriptor + 2) = v24;
    }
    if ( v31 )
    {
      v26 = Sacl;
      memmove(Sacl, v31, *((unsigned __int16 *)v31 + 1));
      *((_QWORD *)AbsoluteSecurityDescriptor + 3) = v26;
    }
    if ( v32 )
    {
      memmove(Dacl, v32, *((unsigned __int16 *)v32 + 1));
      *((_QWORD *)AbsoluteSecurityDescriptor + 4) = Dacl;
    }
    return 0;
  }
  else
  {
    *AbsoluteSecurityDescriptorSize = 40;
    *v15 = v21;
    result = -1073741789;
    *v16 = v22;
    *v17 = v19;
    *v18 = v20;
  }
  return result;
}
