/*
 * XREFs of PiDevCfgQueryPolicyStringList @ 0x14082F73C
 * Callers:
 *     PiDevCfgEnforceDevicePolicy @ 0x1407028C4 (PiDevCfgEnforceDevicePolicy.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     RtlStringCchCopyExW @ 0x14013DE50 (RtlStringCchCopyExW.c)
 *     PnpValidateRegistryString @ 0x14015DA4C (PnpValidateRegistryString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x1401B8550 (ZwEnumerateValueKey.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     NtQueryKey @ 0x140640BB0 (NtQueryKey.c)
 *     IopGetRegistryValue @ 0x140681694 (IopGetRegistryValue.c)
 */

__int64 __fastcall PiDevCfgQueryPolicyStringList(void *a1, const WCHAR *a2, _QWORD *a3)
{
  ULONG v3; // r12d
  int v4; // esi
  PVOID v5; // rdi
  NTSTATUS RegistryValue; // ebx
  ULONG v9; // ebx
  unsigned int *PoolWithTag; // r14
  unsigned int v11; // esi
  unsigned int v12; // esi
  unsigned int v13; // r15d
  unsigned int v14; // r13d
  NTSTATUS i; // eax
  unsigned int v16; // r15d
  ULONG ResultLength; // [rsp+30h] [rbp-69h] BYREF
  PVOID P; // [rsp+38h] [rbp-61h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-59h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-51h] BYREF
  _QWORD *v22; // [rsp+58h] [rbp-41h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-39h] BYREF
  char KeyInformation[20]; // [rsp+90h] [rbp-9h] BYREF
  int v25; // [rsp+A4h] [rbp+Bh]
  int v26; // [rsp+A8h] [rbp+Fh]
  int v27; // [rsp+ACh] [rbp+13h]

  v3 = 0;
  v22 = a3;
  KeyHandle = 0LL;
  P = 0LL;
  v4 = 0;
  v5 = 0LL;
  RegistryValue = IopGetRegistryValue(a1, a2, 0, &P);
  if ( RegistryValue < 0 )
  {
    PoolWithTag = (unsigned int *)P;
LABEL_37:
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    goto LABEL_39;
  }
  if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
    v4 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
  ExFreePoolWithTag(P, 0);
  if ( v4 != 1 )
    goto LABEL_6;
  RtlInitUnicodeString(&DestinationString, a2);
  KeyHandle = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = a1;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  RegistryValue = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( RegistryValue >= 0 )
  {
    RegistryValue = NtQueryKey(KeyHandle, KeyCachedInformation, KeyInformation, 0x28u, &ResultLength);
    if ( RegistryValue >= 0 )
    {
      if ( !v25 )
      {
LABEL_6:
        RegistryValue = -1073741275;
        goto LABEL_39;
      }
      v9 = v27 + 2 * (v26 + 12);
      LODWORD(P) = v9;
      PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v9, 0x63647050u);
      if ( !PoolWithTag )
      {
        RegistryValue = -1073741670;
        goto LABEL_39;
      }
      v11 = v25 * v27 + 2;
      while ( 2 )
      {
        if ( v5 )
          ExFreePoolWithTag(v5, 0);
        v5 = ExAllocatePoolWithTag(PagedPool, v11, 0x63647050u);
        if ( v5 )
        {
          v12 = v11 >> 1;
          v13 = 0;
          v14 = 0;
          for ( i = ZwEnumerateValueKey(KeyHandle, 0, KeyValueFullInformation, PoolWithTag, v9, &ResultLength);
                ;
                i = ZwEnumerateValueKey(KeyHandle, v3, KeyValueFullInformation, PoolWithTag, (ULONG)P, &ResultLength) )
          {
            RegistryValue = i;
            if ( i == -2147483622 )
              break;
            if ( i == -2147483643 )
            {
              ExFreePoolWithTag(PoolWithTag, 0);
              LODWORD(P) = ResultLength;
              PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, ResultLength, 0x63647050u);
              if ( !PoolWithTag )
              {
                RegistryValue = -1073741670;
                goto LABEL_33;
              }
              --v3;
            }
            else
            {
              if ( i < 0 )
                goto LABEL_33;
              if ( PnpValidateRegistryString(PoolWithTag) )
              {
                RegistryValue = RtlInitUnicodeStringEx(
                                  &DestinationString,
                                  (PCWSTR)((char *)PoolWithTag + PoolWithTag[2]));
                if ( RegistryValue < 0 )
                  goto LABEL_33;
                v13 += DestinationString.MaximumLength >> 1;
                if ( v12 > v13 )
                {
                  RtlStringCchCopyExW((NTSTRSAFE_PWSTR)v5 + v14, v12 - v14, DestinationString.Buffer, 0LL, 0LL, 0x900u);
                  v14 += DestinationString.MaximumLength >> 1;
                }
              }
            }
            ++v3;
          }
          v3 = 0;
          RegistryValue = 0;
          if ( v13 )
          {
            v16 = v13 + 1;
            if ( v12 < v16 )
            {
              v9 = (unsigned int)P;
              v11 = 2 * v16;
              continue;
            }
            *((_WORD *)v5 + v14) = 0;
            *v22 = v5;
            v5 = 0LL;
          }
          else
          {
            RegistryValue = -1073741275;
          }
LABEL_33:
          if ( v5 )
            ExFreePoolWithTag(v5, 0);
        }
        else
        {
          RegistryValue = -1073741670;
        }
        goto LABEL_37;
      }
    }
  }
LABEL_39:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)RegistryValue;
}
