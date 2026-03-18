/*
 * XREFs of ArbBuildAssignmentOrdering @ 0x140762A08
 * Callers:
 *     ArbInitializeArbiterInstance @ 0x1407626EC (ArbInitializeArbiterInstance.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1401C0470 (ZwCreateKey.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ArbAddOrdering @ 0x140762ED4 (ArbAddOrdering.c)
 *     ArbpGetRegistryValue @ 0x140762FB0 (ArbpGetRegistryValue.c)
 *     ArbInitializeOrderingList @ 0x140763078 (ArbInitializeOrderingList.c)
 *     ArbFreeOrderingList @ 0x1407630D0 (ArbFreeOrderingList.c)
 *     ArbPruneOrdering @ 0x140763108 (ArbPruneOrdering.c)
 */

__int64 __fastcall ArbBuildAssignmentOrdering(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 (__fastcall *a4)(_OWORD *, char *))
{
  unsigned int v4; // ebx
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v8; // edi
  int RegistryValue; // eax
  _DWORD *v10; // rsi
  char *v11; // r13
  char *i; // r14
  int v13; // edx
  int v14; // eax
  char *v15; // r13
  char *j; // r14
  int v17; // edx
  void *v19; // rcx
  void *v20; // rcx
  HANDLE Handle; // [rsp+40h] [rbp-89h] BYREF
  PVOID P; // [rsp+48h] [rbp-81h]
  HANDLE KeyHandle; // [rsp+50h] [rbp-79h] BYREF
  __int64 v24; // [rsp+58h] [rbp-71h] BYREF
  const wchar_t *v25; // [rsp+60h] [rbp-69h]
  __int64 v26; // [rsp+68h] [rbp-61h] BYREF
  __int64 v27; // [rsp+70h] [rbp-59h] BYREF
  char v28[8]; // [rsp+78h] [rbp-51h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-49h] BYREF
  _DWORD *v30; // [rsp+B0h] [rbp-19h]
  _DWORD *v31; // [rsp+B8h] [rbp-11h]
  _OWORD v32[2]; // [rsp+C0h] [rbp-9h] BYREF

  v4 = 0;
  KeyHandle = 0LL;
  Handle = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  P = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(v32, 0, sizeof(v32));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(*(PVOID *)(a1 + 8), Executive, 0, 0, 0LL);
  ArbFreeOrderingList(a1 + 56);
  ArbFreeOrderingList(a1 + 72);
  v8 = ArbInitializeOrderingList(a1 + 56);
  if ( v8 < 0 )
    goto LABEL_49;
  v8 = ArbInitializeOrderingList(a1 + 72);
  if ( v8 < 0 )
    goto LABEL_49;
  LODWORD(v24) = 7733366;
  v25 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Arbiters";
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v24;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v8 < 0 )
    goto LABEL_49;
  LODWORD(v24) = 1966110;
  v25 = L"AllocationOrder";
  ObjectAttributes.RootDirectory = KeyHandle;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v24;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
  if ( v8 < 0 )
  {
LABEL_49:
    v10 = P;
    goto LABEL_50;
  }
  RegistryValue = ArbpGetRegistryValue(Handle);
  v10 = P;
  v8 = RegistryValue;
  if ( RegistryValue < 0 || !P )
    goto LABEL_50;
  if ( *((_DWORD *)P + 1) == 1 )
  {
    if ( *(_WORD *)((char *)P + 2 * ((unsigned __int64)*((unsigned int *)P + 3) >> 1) + *((unsigned int *)P + 2) - 2) )
      goto LABEL_44;
    v8 = ArbpGetRegistryValue(Handle);
    if ( v8 < 0 )
      goto LABEL_50;
    ExFreePoolWithTag(v10, 0);
    v10 = v30;
  }
  ZwClose(Handle);
  Handle = 0LL;
  if ( v10[1] != 10 )
    goto LABEL_44;
  v11 = (char *)v10 + (unsigned int)v10[2] + 32;
  for ( i = v11 + 8; i < &v11[32 * *((unsigned int *)v11 + 1) + 8]; i += 32 )
  {
    if ( a4 )
    {
      v8 = a4(v32, i);
      if ( v8 < 0 )
        goto LABEL_50;
    }
    else
    {
      v32[0] = *(_OWORD *)i;
      v32[1] = *((_OWORD *)i + 1);
    }
    v13 = *(_DWORD *)(a1 + 32);
    if ( BYTE1(v32[0]) == v13 || BYTE1(v32[0]) == 7 && v13 == 3 )
    {
      v8 = (*(__int64 (__fastcall **)(_OWORD *, __int64 *, __int64 *, char *, char *))(a1 + 120))(
             v32,
             &v27,
             &v26,
             v28,
             v28);
      if ( v8 < 0 )
        goto LABEL_50;
      v8 = ArbAddOrdering(a1 + 56, v27, v26);
      if ( v8 < 0 )
        goto LABEL_50;
    }
  }
  ExFreePoolWithTag(v10, 0);
  v25 = L"ReservedResources";
  ObjectAttributes.RootDirectory = KeyHandle;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v24;
  P = 0LL;
  v10 = 0LL;
  LODWORD(v24) = 2228258;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = ZwCreateKey(&Handle, 0x20019u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( v8 < 0 || (v14 = ArbpGetRegistryValue(Handle), v10 = P, v8 = v14, v14 < 0) )
  {
LABEL_50:
    if ( KeyHandle )
      ZwClose(KeyHandle);
    if ( Handle )
      ZwClose(Handle);
    if ( v10 )
      ExFreePoolWithTag(v10, 0);
    v19 = *(void **)(a1 + 64);
    if ( v19 )
    {
      ExFreePoolWithTag(v19, 0);
      *(_DWORD *)(a1 + 56) = 0;
    }
    v20 = *(void **)(a1 + 80);
    if ( v20 )
    {
      ExFreePoolWithTag(v20, 0);
      *(_DWORD *)(a1 + 72) = 0;
    }
    v4 = v8;
    goto LABEL_40;
  }
  if ( *((_DWORD *)P + 1) != 1 )
    goto LABEL_21;
  if ( *(_WORD *)((char *)P + 2 * ((unsigned __int64)*((unsigned int *)P + 3) >> 1) + *((unsigned int *)P + 2) - 2) )
  {
LABEL_44:
    v8 = -1073741811;
    goto LABEL_50;
  }
  v8 = ArbpGetRegistryValue(Handle);
  if ( v8 < 0 )
    goto LABEL_50;
  ExFreePoolWithTag(v10, 0);
  v10 = v31;
LABEL_21:
  ZwClose(Handle);
  Handle = 0LL;
  v15 = (char *)v10 + (unsigned int)v10[2] + 32;
  for ( j = v15 + 8; j < &v15[32 * *((unsigned int *)v15 + 1) + 8]; j += 32 )
  {
    if ( a4 )
    {
      v8 = a4(v32, j);
      if ( v8 < 0 )
        goto LABEL_50;
    }
    else
    {
      v32[0] = *(_OWORD *)j;
      v32[1] = *((_OWORD *)j + 1);
    }
    v17 = *(_DWORD *)(a1 + 32);
    if ( BYTE1(v32[0]) == v17 || BYTE1(v32[0]) == 7 && v17 == 3 )
    {
      v8 = (*(__int64 (__fastcall **)(_OWORD *, __int64 *, __int64 *, char *, char *))(a1 + 120))(
             v32,
             &v27,
             &v26,
             v28,
             v28);
      if ( v8 < 0 )
        goto LABEL_50;
      v8 = ArbAddOrdering(a1 + 72, v27, v26);
      if ( v8 < 0 )
        goto LABEL_50;
      v8 = ArbPruneOrdering(a1 + 56, v27, v26);
      if ( v8 < 0 )
        goto LABEL_50;
    }
  }
  ExFreePoolWithTag(v10, 0);
  ZwClose(KeyHandle);
  KeyHandle = 0LL;
LABEL_40:
  KeSetEvent(*(PRKEVENT *)(a1 + 8), 0, 0);
  KeLeaveCriticalRegion();
  return v4;
}
