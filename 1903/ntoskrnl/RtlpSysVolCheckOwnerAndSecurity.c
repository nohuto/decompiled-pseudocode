/*
 * XREFs of RtlpSysVolCheckOwnerAndSecurity @ 0x1408D46F0
 * Callers:
 *     RtlCreateSystemVolumeInformationFolder @ 0x1408D4410 (RtlCreateSystemVolumeInformationFolder.c)
 * Callees:
 *     RtlGetAce @ 0x140004010 (RtlGetAce.c)
 *     RtlEqualSid @ 0x1400053E0 (RtlEqualSid.c)
 *     RtlGetDaclSecurityDescriptor @ 0x14008D490 (RtlGetDaclSecurityDescriptor.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405D5A90 (RtlSetDaclSecurityDescriptor.c)
 *     NtSetSecurityObject @ 0x14061F770 (NtSetSecurityObject.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1406801B0 (RtlSetOwnerSecurityDescriptor.c)
 *     NtQuerySecurityObject @ 0x1406BDAE0 (NtQuerySecurityObject.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x1406D21D0 (RtlGetOwnerSecurityDescriptor.c)
 *     RtlMakeSelfRelativeSD @ 0x1406DEC64 (RtlMakeSelfRelativeSD.c)
 *     RtlSelfRelativeToAbsoluteSD2 @ 0x1408D0720 (RtlSelfRelativeToAbsoluteSD2.c)
 */

__int64 __fastcall RtlpSysVolCheckOwnerAndSecurity(HANDLE Handle, PACL Dacl)
{
  unsigned int v2; // ebx
  PVOID PoolWithTag; // rdi
  NTSTATUS DaclSecurityDescriptor; // esi
  void *v8; // rcx
  ULONG i; // r14d
  NTSTATUS Ace; // eax
  _BYTE *v11; // rsi
  char v12; // al
  NTSTATUS SelfRelativeSD; // eax
  ULONG v14; // r14d
  ULONG v15; // r15d
  PVOID v16; // rax
  void *v17; // rsi
  NTSTATUS v18; // r14d
  PVOID v19; // rax
  void *v20; // rcx
  ULONG Length; // [rsp+30h] [rbp-50h] BYREF
  BOOLEAN DaclPresent; // [rsp+34h] [rbp-4Ch] BYREF
  BOOLEAN DaclDefaulted[3]; // [rsp+35h] [rbp-4Bh] BYREF
  PSID Owner; // [rsp+38h] [rbp-48h] BYREF
  PACL Dacla; // [rsp+40h] [rbp-40h] BYREF
  __int16 Sid2; // [rsp+48h] [rbp-38h] BYREF
  int v27; // [rsp+4Ah] [rbp-36h]
  __int16 v28; // [rsp+4Eh] [rbp-32h]
  int v29; // [rsp+50h] [rbp-30h]
  int v30; // [rsp+54h] [rbp-2Ch]
  __int16 v31; // [rsp+60h] [rbp-20h] BYREF
  int v32; // [rsp+62h] [rbp-1Eh]
  __int16 v33; // [rsp+66h] [rbp-1Ah]
  int v34; // [rsp+68h] [rbp-18h]

  v2 = 0;
  Dacla = 0LL;
  if ( NtQuerySecurityObject(Handle, 5u, 0LL, 0, &Length) != -1073741789 )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, Length, 0x536C6F56u);
  if ( !PoolWithTag )
    return 3221225626LL;
  DaclSecurityDescriptor = NtQuerySecurityObject(Handle, 5u, PoolWithTag, Length, &Length);
  v8 = PoolWithTag;
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_6;
  DaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(PoolWithTag, &DaclPresent, &Dacla, DaclDefaulted);
  v8 = PoolWithTag;
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_6;
  DaclSecurityDescriptor = RtlGetOwnerSecurityDescriptor(PoolWithTag, &Owner, DaclDefaulted);
  if ( DaclSecurityDescriptor < 0 )
  {
    v8 = PoolWithTag;
LABEL_6:
    ExFreePoolWithTag(v8, 0);
    return (unsigned int)DaclSecurityDescriptor;
  }
  v32 = 0;
  v27 = 0;
  v31 = 257;
  v33 = 1280;
  v34 = 18;
  Sid2 = 513;
  v28 = 1280;
  v29 = 32;
  v30 = 544;
  if ( Owner && RtlEqualSid(Owner, &Sid2) && DaclPresent && Dacla )
  {
    for ( i = 0; ; ++i )
    {
      Ace = RtlGetAce(Dacla, i, &Owner);
      v11 = Owner;
      if ( Ace < 0 )
        v11 = 0LL;
      Owner = v11;
      if ( !v11 )
        break;
      if ( !*v11 && RtlEqualSid(v11 + 8, &v31) )
      {
        v12 = v11[1];
        if ( (v12 & 1) == 0 || (v12 & 2) == 0 )
        {
          v11[1] = v12 | 3;
          SelfRelativeSD = NtSetSecurityObject(Handle, 4u, PoolWithTag);
          goto LABEL_29;
        }
        goto LABEL_34;
      }
    }
  }
  v14 = Length;
  if ( RtlSelfRelativeToAbsoluteSD2(PoolWithTag, &Length) == -1073741789 )
  {
    v15 = Length;
    v16 = ExAllocatePoolWithTag(PagedPool, Length, 0x536C6F56u);
    v17 = v16;
    if ( !v16 )
      goto LABEL_33;
    memmove(v16, PoolWithTag, v14);
    ExFreePoolWithTag(PoolWithTag, 0);
    Length = v15;
    PoolWithTag = v17;
    v18 = RtlSelfRelativeToAbsoluteSD2(v17, &Length);
    if ( v18 < 0 )
    {
LABEL_27:
      ExFreePoolWithTag(v17, 0);
      return (unsigned int)v18;
    }
  }
  SelfRelativeSD = RtlSetOwnerSecurityDescriptor(PoolWithTag, &Sid2, 0);
  if ( SelfRelativeSD < 0
    || (SelfRelativeSD = RtlSetDaclSecurityDescriptor(PoolWithTag, 1u, Dacl, 0), SelfRelativeSD < 0)
    || (Length = 0, SelfRelativeSD = RtlMakeSelfRelativeSD(PoolWithTag, 0LL, &Length), SelfRelativeSD != -1073741789) )
  {
LABEL_29:
    v2 = SelfRelativeSD;
LABEL_34:
    v20 = PoolWithTag;
    goto LABEL_37;
  }
  v19 = ExAllocatePoolWithTag(PagedPool, Length, 0x536C6F56u);
  v17 = v19;
  if ( !v19 )
  {
LABEL_33:
    v2 = -1073741670;
    goto LABEL_34;
  }
  v18 = RtlMakeSelfRelativeSD(PoolWithTag, v19, &Length);
  ExFreePoolWithTag(PoolWithTag, 0);
  if ( v18 < 0 )
    goto LABEL_27;
  v2 = NtSetSecurityObject(Handle, 5u, v17);
  v20 = v17;
LABEL_37:
  ExFreePoolWithTag(v20, 0);
  return v2;
}
