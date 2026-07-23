/*
 * XREFs of PiDevCfgResolveVariable @ 0x1406F469C
 * Callers:
 *     PiDevCfgQueryResolveValue @ 0x1402897AC (PiDevCfgQueryResolveValue.c)
 *     PiDevCfgCopyDeviceKey @ 0x1406F3F74 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x1406FB244 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgResolveVariableExpression @ 0x140830190 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x140831360 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140831A80 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x140832250 (PiDevCfgResolveVariableKeyValue.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x140832430 (PiDevCfgResolveVariableSwitchCase.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     PnpStringToDwordValue @ 0x14015D2EC (PnpStringToDwordValue.c)
 *     PnpValidateRegistryString @ 0x14015DA4C (PnpValidateRegistryString.c)
 *     _wcsicmp @ 0x140195A70 (_wcsicmp.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlHashUnicodeString @ 0x140599BE0 (RtlHashUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x140626D60 (RtlEqualUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x14065BBD0 (RtlCreateUnicodeString.c)
 *     IopGetRegistryValue @ 0x140681694 (IopGetRegistryValue.c)
 *     PiDevCfgResolveVariableConstant @ 0x1408300C0 (PiDevCfgResolveVariableConstant.c)
 */

__int64 __fastcall PiDevCfgResolveVariable(__int64 a1, const WCHAR *a2, UNICODE_STRING **a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  unsigned int *v5; // r14
  __int64 (__fastcall *v6)(__int64, HANDLE, UNICODE_STRING *); // r12
  int v7; // r15d
  NTSTATUS v8; // eax
  ULONG v9; // ecx
  const UNICODE_STRING **v10; // r13
  const UNICODE_STRING *v11; // rsi
  void *v12; // rax
  NTSTATUS v13; // eax
  NTSTATUS RegistryValue; // eax
  const wchar_t **v15; // r12
  const wchar_t *v16; // rax
  unsigned int v17; // edi
  const wchar_t **v18; // r15
  __int64 v19; // rdi
  UNICODE_STRING *PoolWithTag; // rax
  UNICODE_STRING *v22; // rdi
  const UNICODE_STRING ***v23; // rax
  int v24; // eax
  wchar_t **v25; // rax
  _WORD *v26; // rsi
  __int64 v27; // rax
  unsigned int v28; // eax
  wchar_t *v29; // rax
  wchar_t *v30; // rax
  _QWORD *v31; // rax
  PVOID *Buffer; // rcx
  ULONG HashValue; // [rsp+28h] [rbp-49h] BYREF
  HANDLE KeyHandle; // [rsp+30h] [rbp-41h] BYREF
  PVOID P; // [rsp+38h] [rbp-39h] BYREF
  void *Src; // [rsp+40h] [rbp-31h]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-19h] BYREF
  const wchar_t *v42; // [rsp+F0h] [rbp+7Fh] BYREF

  v3 = a1;
  v4 = 0;
  KeyHandle = 0LL;
  v5 = 0LL;
  P = 0LL;
  v6 = 0LL;
  Src = 0LL;
  v7 = 0;
  LODWORD(v42) = 0;
  if ( !*a2 )
    return (unsigned int)-1073741772;
  *a3 = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  v8 = RtlHashUnicodeString(&DestinationString, 1u, 0, &HashValue);
  v9 = HashValue;
  if ( v8 < 0 )
    v9 = 0;
  v10 = (const UNICODE_STRING **)(*(_QWORD *)(v3 + 24) + 16LL * (v9 % 0x7F));
  v11 = *v10;
  if ( *v10 != (const UNICODE_STRING *)v10 )
  {
    do
    {
      v22 = (UNICODE_STRING *)v11;
      if ( RtlEqualUnicodeString(&DestinationString, v11 + 1, 1u) )
        break;
      v11 = *(const UNICODE_STRING **)&v11->Length;
      v22 = 0LL;
    }
    while ( v11 != (const UNICODE_STRING *)v10 );
    if ( v22 )
    {
      if ( *(_DWORD *)&v22[2].Length == -1 )
        return (unsigned int)-1073741823;
      goto LABEL_27;
    }
    v3 = a1;
  }
  v12 = *(void **)(v3 + 16);
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = v12;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v13 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v4 = v13;
  if ( v13 >= 0 )
  {
    RegistryValue = IopGetRegistryValue(KeyHandle, (const WCHAR *)&dword_140912444, 0, &P);
    v5 = (unsigned int *)P;
    v4 = RegistryValue;
    if ( RegistryValue < 0 )
      goto LABEL_29;
    if ( !PnpValidateRegistryString(P) )
    {
      v4 = -1073741823;
      goto LABEL_29;
    }
    v15 = (const wchar_t **)&off_14090C180;
    v16 = (const wchar_t *)((char *)v5 + v5[2]);
    v42 = v16;
    v17 = 0;
    while ( wcsicmp(*v15, v16) )
    {
      v16 = v42;
      ++v17;
      v15 += 2;
      if ( v17 >= 8 )
        goto LABEL_11;
    }
    v6 = (__int64 (__fastcall *)(__int64, HANDLE, UNICODE_STRING *))*(&funcs_1406F48EF + 2 * v17);
    if ( !v6 )
    {
LABEL_11:
      v4 = -1073741772;
      goto LABEL_29;
    }
LABEL_22:
    PoolWithTag = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x63647050u);
    v22 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v4 = -1073741670;
      goto LABEL_29;
    }
    memset(PoolWithTag, 0, 0x30uLL);
    v23 = (const UNICODE_STRING ***)v10[1];
    if ( *v23 != v10 )
LABEL_57:
      __fastfail(3u);
    *(_QWORD *)&v22->Length = v10;
    v22->Buffer = (wchar_t *)v23;
    *v23 = (const UNICODE_STRING **)v22;
    v10[1] = v22;
    if ( RtlCreateUnicodeString(v22 + 1, a2) )
    {
      if ( v6 )
      {
        *(_DWORD *)&v22[2].Length = -1;
        v24 = v6(a1, KeyHandle, v22);
        v4 = v24;
        if ( v24 >= 0 )
        {
LABEL_27:
          *a3 = v22;
          v22 = 0LL;
          goto LABEL_28;
        }
        if ( v24 == -1073741772 )
          v4 = -1073741823;
LABEL_28:
        if ( !v22 )
          goto LABEL_29;
        v31 = *(_QWORD **)&v22->Length;
        if ( *(UNICODE_STRING **)(*(_QWORD *)&v22->Length + 8LL) == v22 )
        {
          Buffer = (PVOID *)v22->Buffer;
          if ( *Buffer == v22 )
          {
            *Buffer = v31;
            v31[1] = Buffer;
            ExFreePoolWithTag(v22, 0);
LABEL_29:
            if ( v5 )
              ExFreePoolWithTag(v5, 0);
            goto LABEL_18;
          }
        }
        goto LABEL_57;
      }
      v26 = Src;
      if ( Src )
      {
        *(_DWORD *)&v22[2].Length = 1;
        v27 = -1LL;
        do
          ++v27;
        while ( v26[v27] );
        v28 = 2 * v27 + 2;
        *(_DWORD *)(&v22[2].MaximumLength + 1) = v28;
        v29 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v28, 0x63647050u);
        v22[2].Buffer = v29;
        if ( v29 )
        {
          memmove(v29, v26, *(unsigned int *)(&v22[2].MaximumLength + 1));
          goto LABEL_27;
        }
      }
      else
      {
        *(_DWORD *)&v22[2].Length = 4;
        *(_DWORD *)(&v22[2].MaximumLength + 1) = 4;
        v30 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 4uLL, 0x63647050u);
        v22[2].Buffer = v30;
        if ( v30 )
        {
          *(_DWORD *)v30 = v7;
          goto LABEL_27;
        }
      }
    }
    v4 = -1073741670;
    goto LABEL_28;
  }
  if ( v13 == -1073741772 )
  {
    v4 = 0;
    v18 = (const wchar_t **)&off_14090BBD0;
    v19 = 0LL;
    while ( wcsicmp(*v18, a2) )
    {
      v19 = (unsigned int)(v19 + 1);
      v18 += 3;
      if ( (unsigned int)v19 >= 4 )
        goto LABEL_16;
    }
    v25 = &(&off_14090BBD0)[3 * v19];
    if ( v25 )
    {
      v7 = *((_DWORD *)v25 + 4);
      Src = v25[1];
      goto LABEL_22;
    }
LABEL_16:
    if ( PnpStringToDwordValue((__int64)a2, (unsigned int *)&v42) )
    {
      v7 = (int)v42;
      goto LABEL_22;
    }
    v4 = -1073741772;
  }
LABEL_18:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v4;
}
