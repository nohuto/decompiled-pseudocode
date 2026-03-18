/*
 * XREFs of ArbBuildAssignmentOrdering @ 0x1C009C884
 * Callers:
 *     ArbInitializeArbiterInstance @ 0x1C009C5E4 (ArbInitializeArbiterInstance.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0030A80 (__security_check_cookie.c)
 *     ZwClose_0 @ 0x1C0030B17 (ZwClose_0.c)
 *     ZwCreateKey_0 @ 0x1C0030B71 (ZwCreateKey_0.c)
 *     ZwOpenKey_0 @ 0x1C0030B95 (ZwOpenKey_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 *     ArbAddOrdering @ 0x1C009CC9C (ArbAddOrdering.c)
 *     ArbpGetRegistryValue @ 0x1C009CD84 (ArbpGetRegistryValue.c)
 *     ArbInitializeOrderingList @ 0x1C009CE48 (ArbInitializeOrderingList.c)
 *     ArbFreeOrderingList @ 0x1C009CEA8 (ArbFreeOrderingList.c)
 *     ArbPruneOrdering @ 0x1C00B3D48 (ArbPruneOrdering.c)
 */

__int64 __fastcall ArbBuildAssignmentOrdering(__int64 a1)
{
  unsigned int v1; // ebx
  _DWORD *v3; // rsi
  NTSTATUS v4; // edi
  int RegistryValue; // eax
  char *v6; // r13
  char *i; // r15
  int v8; // edx
  __int64 v9; // rcx
  int v10; // eax
  char *v11; // r13
  char *j; // r15
  int v13; // edx
  __int64 v14; // rcx
  void *v16; // rcx
  void *v17; // rcx
  HANDLE Handle; // [rsp+48h] [rbp-69h] BYREF
  PVOID P; // [rsp+50h] [rbp-61h]
  void *KeyHandle; // [rsp+58h] [rbp-59h] BYREF
  int v21; // [rsp+60h] [rbp-51h] BYREF
  const wchar_t *v22; // [rsp+68h] [rbp-49h]
  __int64 v23; // [rsp+70h] [rbp-41h] BYREF
  __int64 v24; // [rsp+78h] [rbp-39h] BYREF
  char v25[8]; // [rsp+80h] [rbp-31h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-29h] BYREF
  __int128 v27; // [rsp+B8h] [rbp+7h] BYREF
  __int128 v28; // [rsp+C8h] [rbp+17h]

  v1 = 0;
  KeyHandle = 0LL;
  v3 = 0LL;
  Handle = 0LL;
  P = 0LL;
  KeEnterCriticalRegion();
  KeWaitForSingleObject(*(PVOID *)(a1 + 8), Executive, 0, 0, 0LL);
  ArbFreeOrderingList(a1 + 56);
  ArbFreeOrderingList(a1 + 72);
  v4 = ArbInitializeOrderingList(a1 + 56);
  if ( v4 < 0 )
    goto LABEL_39;
  v4 = ArbInitializeOrderingList(a1 + 72);
  if ( v4 < 0 )
    goto LABEL_39;
  v21 = 7733366;
  v22 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Arbiters";
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v21;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenKey_0(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v4 < 0 )
    goto LABEL_39;
  v21 = 1966110;
  v22 = L"AllocationOrder";
  ObjectAttributes.RootDirectory = KeyHandle;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v21;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenKey_0(&Handle, 0x20019u, &ObjectAttributes);
  if ( v4 < 0 )
    goto LABEL_39;
  RegistryValue = ArbpGetRegistryValue(Handle);
  v3 = P;
  v4 = RegistryValue;
  if ( RegistryValue < 0 || !P )
    goto LABEL_39;
  if ( *((_DWORD *)P + 1) == 1 )
  {
    if ( *(_WORD *)((char *)P + 2 * ((unsigned __int64)*((unsigned int *)P + 3) >> 1) + *((unsigned int *)P + 2) - 2) )
      goto LABEL_32;
    v4 = ArbpGetRegistryValue(Handle);
    if ( v4 < 0 )
      goto LABEL_39;
    ExFreePoolWithTag(v3, 0);
    v3 = P;
  }
  ZwClose_0(Handle);
  Handle = 0LL;
  if ( v3[1] != 10 )
    goto LABEL_32;
  v6 = (char *)v3 + (unsigned int)v3[2] + 32;
  for ( i = v6 + 8; i < &v6[32 * *((unsigned int *)v6 + 1) + 8]; i += 32 )
  {
    v8 = *(_DWORD *)(a1 + 32);
    v9 = *(_QWORD *)i >> 8;
    v27 = *(_OWORD *)i;
    v28 = *((_OWORD *)i + 1);
    if ( (unsigned __int8)v9 == v8 || (_BYTE)v9 == 7 && v8 == 3 )
    {
      v4 = (*(__int64 (__fastcall **)(__int128 *, __int64 *, __int64 *, char *, char *))(a1 + 120))(
             &v27,
             &v24,
             &v23,
             v25,
             v25);
      if ( v4 < 0 )
        goto LABEL_39;
      v4 = ArbAddOrdering(a1 + 56, v24, v23);
      if ( v4 < 0 )
        goto LABEL_39;
    }
  }
  ExFreePoolWithTag(v3, 0);
  v22 = L"ReservedResources";
  ObjectAttributes.RootDirectory = KeyHandle;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v21;
  P = 0LL;
  v3 = 0LL;
  v21 = 2228258;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwCreateKey_0(&Handle, 0x20019u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( v4 < 0 || (v10 = ArbpGetRegistryValue(Handle), v3 = P, v4 = v10, v10 < 0) )
  {
LABEL_39:
    if ( KeyHandle )
      ZwClose_0(KeyHandle);
    if ( Handle )
      ZwClose_0(Handle);
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
    v16 = *(void **)(a1 + 64);
    if ( v16 )
    {
      ExFreePoolWithTag(v16, 0);
      *(_WORD *)(a1 + 56) = 0;
      *(_WORD *)(a1 + 58) = 0;
    }
    v17 = *(void **)(a1 + 80);
    if ( v17 )
    {
      ExFreePoolWithTag(v17, 0);
      *(_DWORD *)(a1 + 72) = 0;
    }
    v1 = v4;
    goto LABEL_28;
  }
  if ( *((_DWORD *)P + 1) != 1 )
    goto LABEL_19;
  if ( *(_WORD *)((char *)P + 2 * ((unsigned __int64)*((unsigned int *)P + 3) >> 1) + *((unsigned int *)P + 2) - 2) )
  {
LABEL_32:
    v4 = -1073741811;
    goto LABEL_39;
  }
  v4 = ArbpGetRegistryValue(Handle);
  if ( v4 < 0 )
    goto LABEL_39;
  ExFreePoolWithTag(v3, 0);
  v3 = P;
LABEL_19:
  ZwClose_0(Handle);
  Handle = 0LL;
  v11 = (char *)v3 + (unsigned int)v3[2] + 32;
  for ( j = v11 + 8; j < &v11[32 * *((unsigned int *)v11 + 1) + 8]; j += 32 )
  {
    v13 = *(_DWORD *)(a1 + 32);
    v14 = *(_QWORD *)j >> 8;
    v27 = *(_OWORD *)j;
    v28 = *((_OWORD *)j + 1);
    if ( (unsigned __int8)v14 == v13 || (_BYTE)v14 == 7 && v13 == 3 )
    {
      v4 = (*(__int64 (__fastcall **)(__int128 *, __int64 *, __int64 *, char *, char *))(a1 + 120))(
             &v27,
             &v24,
             &v23,
             v25,
             v25);
      if ( v4 < 0 )
        goto LABEL_39;
      v4 = ArbAddOrdering(a1 + 72, v24, v23);
      if ( v4 < 0 )
        goto LABEL_39;
      v4 = ArbPruneOrdering(a1 + 56, v24, v23);
      if ( v4 < 0 )
        goto LABEL_39;
    }
  }
  ExFreePoolWithTag(v3, 0);
  ZwClose_0(KeyHandle);
  KeyHandle = 0LL;
LABEL_28:
  KeSetEvent(*(PRKEVENT *)(a1 + 8), 0, 0);
  KeLeaveCriticalRegion();
  return v1;
}
