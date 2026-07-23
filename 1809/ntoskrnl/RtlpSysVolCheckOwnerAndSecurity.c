/*
 * XREFs of RtlpSysVolCheckOwnerAndSecurity @ 0x1406D78D8
 * Callers:
 *     RtlCreateSystemVolumeInformationFolder @ 0x1406D7560 (RtlCreateSystemVolumeInformationFolder.c)
 * Callees:
 *     RtlGetAce @ 0x140016260 (RtlGetAce.c)
 *     RtlGetDaclSecurityDescriptor @ 0x140092270 (RtlGetDaclSecurityDescriptor.c)
 *     RtlEqualSid @ 0x1400A7D30 (RtlEqualSid.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     NtSetSecurityObject @ 0x1405BACF0 (NtSetSecurityObject.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405CBDE0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1406567D0 (RtlSetOwnerSecurityDescriptor.c)
 *     NtQuerySecurityObject @ 0x14069A860 (NtQuerySecurityObject.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x1406AE460 (RtlGetOwnerSecurityDescriptor.c)
 *     RtlMakeSelfRelativeSD @ 0x1406B0CD8 (RtlMakeSelfRelativeSD.c)
 *     RtlSelfRelativeToAbsoluteSD2 @ 0x140893700 (RtlSelfRelativeToAbsoluteSD2.c)
 */

__int64 __fastcall RtlpSysVolCheckOwnerAndSecurity(HANDLE Handle, PACL Dacl)
{
  unsigned int v2; // ebx
  PVOID PoolWithTag; // rdi
  NTSTATUS DaclSecurityDescriptor; // esi
  void *v7; // rcx
  ULONG i; // r14d
  NTSTATUS Ace; // eax
  _BYTE *v10; // rsi
  char v11; // al
  void *v12; // rcx
  NTSTATUS SelfRelativeSD; // eax
  ULONG v15; // r14d
  ULONG v16; // r15d
  PVOID v17; // rax
  void *v18; // rsi
  NTSTATUS v19; // r14d
  PVOID v20; // rax
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
  v7 = PoolWithTag;
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_24;
  DaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(PoolWithTag, &DaclPresent, &Dacla, DaclDefaulted);
  v7 = PoolWithTag;
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_24;
  DaclSecurityDescriptor = RtlGetOwnerSecurityDescriptor(PoolWithTag, &Owner, DaclDefaulted);
  if ( DaclSecurityDescriptor < 0 )
  {
    v7 = PoolWithTag;
LABEL_24:
    ExFreePoolWithTag(v7, 0);
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
      v10 = Owner;
      if ( Ace < 0 )
        v10 = 0LL;
      Owner = v10;
      if ( !v10 )
        break;
      if ( !*v10 && RtlEqualSid(v10 + 8, &v31) )
      {
        v11 = v10[1];
        if ( (v11 & 1) == 0 || (v11 & 2) == 0 )
        {
          v10[1] = v11 | 3;
          SelfRelativeSD = NtSetSecurityObject(Handle, 4u, PoolWithTag);
          goto LABEL_26;
        }
        goto LABEL_18;
      }
    }
  }
  v15 = Length;
  if ( RtlSelfRelativeToAbsoluteSD2(PoolWithTag, &Length) != -1073741789 )
    goto LABEL_30;
  v16 = Length;
  v17 = ExAllocatePoolWithTag(PagedPool, Length, 0x536C6F56u);
  v18 = v17;
  if ( !v17 )
    goto LABEL_37;
  memmove(v17, PoolWithTag, v15);
  ExFreePoolWithTag(PoolWithTag, 0);
  Length = v16;
  PoolWithTag = v18;
  v19 = RtlSelfRelativeToAbsoluteSD2(v18, &Length);
  if ( v19 >= 0 )
  {
LABEL_30:
    SelfRelativeSD = RtlSetOwnerSecurityDescriptor(PoolWithTag, &Sid2, 0);
    if ( SelfRelativeSD < 0
      || (SelfRelativeSD = RtlSetDaclSecurityDescriptor(PoolWithTag, 1u, Dacl, 0), SelfRelativeSD < 0)
      || (Length = 0, SelfRelativeSD = RtlMakeSelfRelativeSD(PoolWithTag, 0LL, &Length), SelfRelativeSD != -1073741789) )
    {
LABEL_26:
      v2 = SelfRelativeSD;
LABEL_18:
      v12 = PoolWithTag;
LABEL_19:
      ExFreePoolWithTag(v12, 0);
      return v2;
    }
    v20 = ExAllocatePoolWithTag(PagedPool, Length, 0x536C6F56u);
    v18 = v20;
    if ( v20 )
    {
      v19 = RtlMakeSelfRelativeSD(PoolWithTag, v20, &Length);
      ExFreePoolWithTag(PoolWithTag, 0);
      if ( v19 >= 0 )
      {
        v2 = NtSetSecurityObject(Handle, 5u, v18);
        v12 = v18;
        goto LABEL_19;
      }
      goto LABEL_36;
    }
LABEL_37:
    v2 = -1073741670;
    goto LABEL_18;
  }
LABEL_36:
  ExFreePoolWithTag(v18, 0);
  return (unsigned int)v19;
}
