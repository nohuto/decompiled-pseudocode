/*
 * XREFs of ArbAddInaccessibleAllocationRange @ 0x14073A130
 * Callers:
 *     IopMemInitialize @ 0x140738BA8 (IopMemInitialize.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlAddRange @ 0x1407398E0 (RtlAddRange.c)
 *     ArbpGetRegistryValue @ 0x14073ABB4 (ArbpGetRegistryValue.c)
 */

NTSTATUS __fastcall ArbAddInaccessibleAllocationRange(__int64 a1, struct _RTL_RANGE_LIST *a2)
{
  NTSTATUS result; // eax
  NTSTATUS v5; // ebx
  int RegistryValue; // eax
  _DWORD *v7; // rdi
  char *v8; // r14
  char *i; // rsi
  int v10; // eax
  int v11; // ecx
  HANDLE KeyHandle; // [rsp+40h] [rbp-39h] BYREF
  _DWORD *v13; // [rsp+48h] [rbp-31h]
  int v14; // [rsp+50h] [rbp-29h] BYREF
  const wchar_t *v15; // [rsp+58h] [rbp-21h]
  int v16; // [rsp+60h] [rbp-19h] BYREF
  const wchar_t *v17; // [rsp+68h] [rbp-11h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-9h] BYREF
  HANDLE Handle; // [rsp+F8h] [rbp+7Fh] BYREF

  v14 = 7733366;
  v13 = 0LL;
  v15 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Arbiters";
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v14;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    v16 = 2228258;
    v17 = L"InaccessibleRange";
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v16;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v5 = ZwOpenKey(&Handle, 0x2001Fu, &ObjectAttributes);
    if ( v5 < 0 )
    {
LABEL_17:
      ZwClose(KeyHandle);
      return v5;
    }
    RegistryValue = ArbpGetRegistryValue(Handle);
    v7 = 0LL;
    v5 = RegistryValue;
    if ( RegistryValue >= 0 )
    {
      if ( MEMORY[4] != 1 )
        goto LABEL_8;
      if ( *(_WORD *)(MEMORY[8] + 2 * ((unsigned __int64)MEMORY[0xC] >> 1) - 2) )
        goto LABEL_21;
      RegistryValue = ArbpGetRegistryValue(Handle);
      v5 = RegistryValue;
      if ( RegistryValue >= 0 )
      {
        ExFreePoolWithTag(0LL, 0);
        v7 = v13;
LABEL_8:
        if ( v7[1] == 10 )
        {
          v8 = (char *)v7 + (unsigned int)v7[2] + 32;
          for ( i = v8 + 8; i < &v8[32 * *((unsigned int *)v8 + 1) + 8]; i += 32 )
          {
            v10 = (unsigned __int8)i[1];
            v11 = *(_DWORD *)(a1 + 32);
            if ( v10 == v11 || (_BYTE)v10 == 7 && v11 == 3 )
            {
              v5 = RtlAddRange(a2, *((_QWORD *)i + 2), *((_QWORD *)i + 3), 0x40u, 1u, 0LL, 0LL);
              if ( v5 < 0 )
                break;
            }
          }
          goto LABEL_14;
        }
LABEL_21:
        v5 = -1073741811;
LABEL_14:
        if ( v7 )
          ExFreePoolWithTag(v7, 0);
        ZwClose(Handle);
        goto LABEL_17;
      }
    }
    if ( RegistryValue != -1073741670 )
      v5 = 0;
    goto LABEL_14;
  }
  return result;
}
