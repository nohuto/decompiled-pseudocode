/*
 * XREFs of ArbAddMmConfigRangeAsBootReserved @ 0x1C00B71DC
 * Callers:
 *     ACPIBusIrpStartDevice @ 0x1C00A2450 (ACPIBusIrpStartDevice.c)
 * Callees:
 *     RtlAddRange_0 @ 0x1C0031773 (RtlAddRange_0.c)
 *     ZwClose_0 @ 0x1C0031797 (ZwClose_0.c)
 *     ZwOpenKey_0 @ 0x1C0031815 (ZwOpenKey_0.c)
 *     memmove @ 0x1C0031A00 (memmove.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     ArbpGetRegistryValue @ 0x1C009E584 (ArbpGetRegistryValue.c)
 */

NTSTATUS __fastcall ArbAddMmConfigRangeAsBootReserved(__int64 a1, struct _RTL_RANGE_LIST *a2)
{
  unsigned int *v4; // rsi
  PVOID v5; // rbx
  NTSTATUS v6; // edi
  NTSTATUS result; // eax
  NTSTATUS v8; // ebx
  int RegistryValue; // eax
  unsigned int v10; // eax
  SIZE_T v11; // r14
  PVOID PoolWithTag; // rax
  unsigned int *i; // r14
  int v14; // eax
  int v15; // ecx
  HANDLE Handle; // [rsp+40h] [rbp-29h] BYREF
  __int64 v17; // [rsp+48h] [rbp-21h] BYREF
  const wchar_t *v18; // [rsp+50h] [rbp-19h]
  __int64 v19; // [rsp+58h] [rbp-11h] BYREF
  const wchar_t *v20; // [rsp+60h] [rbp-9h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-1h] BYREF
  PVOID P; // [rsp+E0h] [rbp+77h] BYREF
  void *KeyHandle; // [rsp+E8h] [rbp+7Fh] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v4 = (unsigned int *)ArbMmConfigRange;
  KeyHandle = 0LL;
  v5 = 0LL;
  Handle = 0LL;
  v6 = 0;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  P = 0LL;
  if ( ArbMmConfigRange )
  {
LABEL_13:
    for ( i = v4 + 2; i < &v4[8 * v4[1] + 2]; i += 8 )
    {
      v14 = *((unsigned __int8 *)i + 1);
      v15 = *(_DWORD *)(a1 + 32);
      if ( v14 == v15 || (_BYTE)v14 == 7 && v15 == 3 )
      {
        v6 = RtlAddRange_0(a2, *((_QWORD *)i + 2), *((_QWORD *)i + 3), 1u, 1u, 0LL, 0LL);
        if ( v6 < 0 )
          break;
      }
    }
    goto LABEL_20;
  }
  ObjectAttributes.RootDirectory = 0LL;
  v18 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Arbiters";
  LODWORD(v17) = 7733366;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v17;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey_0(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result < 0 )
    return result;
  LODWORD(v19) = 2228258;
  v20 = L"ReservedResources";
  ObjectAttributes.RootDirectory = KeyHandle;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v19;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = ZwOpenKey_0(&Handle, 0x2001Fu, &ObjectAttributes);
  if ( v8 < 0 )
  {
    ZwClose_0(KeyHandle);
    return v8;
  }
  RegistryValue = ArbpGetRegistryValue(Handle, L"MmConfigRange", &P);
  v5 = P;
  v6 = RegistryValue;
  if ( RegistryValue < 0 )
  {
    if ( RegistryValue != -1073741670 )
      v6 = 0;
    goto LABEL_20;
  }
  if ( *((_DWORD *)P + 1) == 10 )
  {
    v4 = (unsigned int *)((char *)P + *((unsigned int *)P + 2) + 32);
    v10 = v4[1];
    if ( v10 )
    {
      v11 = 32 * v10 + 8;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x4E627241u);
      ArbMmConfigRange = (__int64)PoolWithTag;
      if ( PoolWithTag )
        memmove(PoolWithTag, v4, (unsigned int)v11);
    }
    goto LABEL_13;
  }
  v6 = -1073741811;
LABEL_20:
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  ZwClose_0(Handle);
  ZwClose_0(KeyHandle);
  return v6;
}
