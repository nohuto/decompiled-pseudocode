/*
 * XREFs of PipChangeDeviceObjectFromRegistryProperties @ 0x1406F1828
 * Callers:
 *     PipCallDriverAddDevice @ 0x1406E7EEC (PipCallDriverAddDevice.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x140092270 (RtlGetDaclSecurityDescriptor.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObSetSecurityObjectByPointer @ 0x1405CBD40 (ObSetSecurityObjectByPointer.c)
 *     RtlGetSaclSecurityDescriptor @ 0x14060ECC0 (RtlGetSaclSecurityDescriptor.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x140653AA4 (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x1406AE460 (RtlGetOwnerSecurityDescriptor.c)
 *     RtlGetGroupSecurityDescriptor @ 0x1406CD310 (RtlGetGroupSecurityDescriptor.c)
 *     PipGetRegistrySecurityWithFallback @ 0x1406F15C4 (PipGetRegistrySecurityWithFallback.c)
 *     PipGetRegistryDwordWithFallback @ 0x1406F1B6C (PipGetRegistryDwordWithFallback.c)
 */

__int64 __fastcall PipChangeDeviceObjectFromRegistryProperties(__int64 a1, __int64 a2, ACL *a3, __int64 a4, char a5)
{
  __int64 v5; // rax
  int v7; // ebx
  __int64 v10; // rsi
  int v11; // r14d
  PVOID v12; // r13
  __int64 v13; // rdx
  int v14; // r14d
  char RegistryDwordWithFallback; // al
  __int64 v16; // rdx
  char v17; // al
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // r15d
  int v21; // ebx
  __int64 v22; // rdx
  unsigned int v23; // r15d
  void *RegistrySecurityWithFallback; // rax
  void *v25; // r14
  char v26; // r12
  __int64 i; // rax
  int OwnerSecurityDescriptor; // esi
  char v29; // r13
  _QWORD *v30; // rdx
  int v32; // r12d
  unsigned int v33; // esi
  char v34; // r8
  void *DefaultDeviceSecurityDescriptor; // rax
  BOOLEAN OwnerDefaulted; // [rsp+40h] [rbp-61h] BYREF
  BOOLEAN SaclPresent; // [rsp+41h] [rbp-60h] BYREF
  char v38; // [rsp+42h] [rbp-5Fh]
  char v39; // [rsp+43h] [rbp-5Eh]
  char v40; // [rsp+44h] [rbp-5Dh]
  unsigned int v41; // [rsp+48h] [rbp-59h] BYREF
  PSID Owner; // [rsp+50h] [rbp-51h] BYREF
  int v43; // [rsp+58h] [rbp-49h] BYREF
  PVOID v44; // [rsp+60h] [rbp-41h] BYREF
  PACL Sacl; // [rsp+68h] [rbp-39h] BYREF
  PVOID P; // [rsp+70h] [rbp-31h] BYREF
  __int64 v47; // [rsp+78h] [rbp-29h]
  _BYTE v48[40]; // [rsp+80h] [rbp-21h] BYREF

  v5 = *(_QWORD *)(a1 + 312);
  v47 = a4;
  v7 = (int)a3;
  Sacl = a3;
  if ( a1 )
    v10 = *(_QWORD *)(v5 + 40);
  else
    v10 = 0LL;
  v11 = *(_DWORD *)(v5 + 32);
  v12 = 0LL;
  v13 = *(_QWORD *)(v10 + 48);
  v39 = 0;
  P = 0LL;
  v44 = 0LL;
  v14 = v11 & 0x800;
  v41 = 0;
  v43 = 0;
  LODWORD(Owner) = 0;
  RegistryDwordWithFallback = PipGetRegistryDwordWithFallback(26, v13, a2, (_DWORD)a3, a4, (__int64)&v41);
  v16 = *(_QWORD *)(v10 + 48);
  v38 = RegistryDwordWithFallback;
  v17 = PipGetRegistryDwordWithFallback(27, v16, a2, v7, a4, (__int64)&v43);
  v18 = *(_QWORD *)(v10 + 48);
  v40 = v17;
  PipGetRegistryDwordWithFallback(28, v18, a2, v7, a4, (__int64)&Owner);
  if ( a5 || (v19 = *(_QWORD *)(a1 + 24)) == 0 )
    v19 = a1;
  v20 = 0;
  while ( v19 )
  {
    v20 |= *(_DWORD *)(v19 + 52);
    v19 = *(_QWORD *)(v19 + 24);
  }
  v21 = 0;
  v22 = *(_QWORD *)(v10 + 48);
  v23 = ((unsigned int)Owner | v20) & 0x5010F;
  LODWORD(Owner) = 0;
  RegistrySecurityWithFallback = (void *)PipGetRegistrySecurityWithFallback(
                                           v47 & -(__int64)(v14 != 0),
                                           v22,
                                           a2,
                                           v14 != 0 ? (unsigned int)Sacl : 0,
                                           v47 & -(__int64)(v14 != 0));
  v25 = RegistrySecurityWithFallback;
  if ( RegistrySecurityWithFallback )
  {
    OwnerSecurityDescriptor = RtlGetOwnerSecurityDescriptor(RegistrySecurityWithFallback, &Owner, &OwnerDefaulted);
    if ( OwnerSecurityDescriptor < 0 )
      goto LABEL_22;
    v32 = 0;
    if ( Owner )
    {
      v21 = 1;
      v32 = 1;
    }
    OwnerSecurityDescriptor = RtlGetGroupSecurityDescriptor(v25, &Owner, &OwnerDefaulted);
    if ( OwnerSecurityDescriptor < 0 )
      goto LABEL_22;
    if ( Owner )
      v21 = v32 | 2;
    OwnerSecurityDescriptor = RtlGetSaclSecurityDescriptor(v25, &SaclPresent, &Sacl, &OwnerDefaulted);
    if ( OwnerSecurityDescriptor < 0 )
      goto LABEL_22;
    if ( SaclPresent )
      v21 |= 8u;
    OwnerSecurityDescriptor = RtlGetDaclSecurityDescriptor(v25, &SaclPresent, &Sacl, &OwnerDefaulted);
    if ( OwnerSecurityDescriptor < 0 )
      goto LABEL_22;
    v33 = v41;
    v26 = v38;
    if ( SaclPresent )
      v21 |= 4u;
    goto LABEL_44;
  }
  v26 = v38;
  if ( v38 )
  {
    memset(v48, 0, sizeof(v48));
    v33 = v41;
    DefaultDeviceSecurityDescriptor = IopCreateDefaultDeviceSecurityDescriptor(
                                        v41,
                                        v23,
                                        v34,
                                        v48,
                                        (ACL **)&P,
                                        (ACL **)&v44,
                                        (int *)&Owner);
    v12 = v44;
    v25 = DefaultDeviceSecurityDescriptor;
    if ( !DefaultDeviceSecurityDescriptor )
    {
      OwnerSecurityDescriptor = -1073741823;
      goto LABEL_23;
    }
    v21 = (int)Owner;
    v39 = 1;
LABEL_44:
    if ( v26 )
      *(_DWORD *)(a1 + 72) = v33;
  }
  if ( v40 && v43 )
    *(_DWORD *)(a1 + 48) |= 8u;
  *(_DWORD *)(a1 + 52) = v23 | *(_DWORD *)(a1 + 52) & 0xFFFAFEF0;
  for ( i = *(_QWORD *)(a1 + 24); i; i = *(_QWORD *)(i + 24) )
    *(_DWORD *)(i + 52) |= v23;
  OwnerSecurityDescriptor = 0;
  if ( v25 )
    OwnerSecurityDescriptor = ObSetSecurityObjectByPointer(a1, v21, (__int64)v25);
  v29 = v39;
  v30 = (_QWORD *)a1;
  do
  {
    if ( (*(_DWORD *)(v30[1] + 16LL) & 0x100) != 0 )
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL) + 396LL) |= 0xC00000u;
    if ( v29 && v30[34] )
      *(_DWORD *)(v30[39] + 32LL) |= 0x800u;
    v30 = (_QWORD *)v30[3];
  }
  while ( v30 );
  v12 = v44;
LABEL_22:
  if ( v25 && !v39 )
    ExFreePoolWithTag(v25, 0);
LABEL_23:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  return (unsigned int)OwnerSecurityDescriptor;
}
