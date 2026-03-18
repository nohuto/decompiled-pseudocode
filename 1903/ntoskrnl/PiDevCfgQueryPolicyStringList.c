/*
 * XREFs of PiDevCfgQueryPolicyStringList @ 0x140868D8C
 * Callers:
 *     PiDevCfgEnforceDevicePolicy @ 0x14071C568 (PiDevCfgEnforceDevicePolicy.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     RtlStringCchCopyExW @ 0x14013DE38 (RtlStringCchCopyExW.c)
 *     PnpValidateRegistryString @ 0x140144CBC (PnpValidateRegistryString.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x1401C0330 (ZwEnumerateValueKey.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     NtQueryKey @ 0x1405FF6B0 (NtQueryKey.c)
 *     IopGetRegistryValue @ 0x14069A450 (IopGetRegistryValue.c)
 */

__int64 __fastcall PiDevCfgQueryPolicyStringList(HANDLE KeyHandle, PCWSTR SourceString, _QWORD *a3)
{
  ULONG v3; // r12d
  int v6; // edi
  PVOID v7; // r14
  NTSTATUS RegistryValue; // ebx
  ULONG v9; // ebx
  unsigned int *PoolWithTag; // rdi
  unsigned int v11; // esi
  unsigned int v12; // esi
  unsigned int v13; // r15d
  unsigned int v14; // r13d
  NTSTATUS i; // eax
  unsigned int v16; // r15d
  ULONG ResultLength; // [rsp+30h] [rbp-69h] BYREF
  PVOID P; // [rsp+38h] [rbp-61h] BYREF
  HANDLE KeyHandlea; // [rsp+40h] [rbp-59h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-51h] BYREF
  _QWORD *v22; // [rsp+58h] [rbp-41h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-39h] BYREF
  _DWORD KeyInformation[10]; // [rsp+90h] [rbp-9h] BYREF

  v22 = a3;
  v3 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  KeyHandlea = 0LL;
  P = 0LL;
  v6 = 0;
  memset(KeyInformation, 0, sizeof(KeyInformation));
  v7 = 0LL;
  RegistryValue = IopGetRegistryValue(KeyHandle, SourceString, 0, &P);
  if ( RegistryValue < 0 )
  {
    PoolWithTag = (unsigned int *)P;
LABEL_37:
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    goto LABEL_39;
  }
  if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
    v6 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
  ExFreePoolWithTag(P, 0);
  if ( v6 != 1 )
    goto LABEL_6;
  RtlInitUnicodeString(&DestinationString, SourceString);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  KeyHandlea = 0LL;
  ObjectAttributes.RootDirectory = KeyHandle;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  RegistryValue = ZwOpenKey(&KeyHandlea, 0x20019u, &ObjectAttributes);
  if ( RegistryValue >= 0 )
  {
    RegistryValue = NtQueryKey(KeyHandlea, KeyCachedInformation, KeyInformation, 0x28u, &ResultLength);
    if ( RegistryValue >= 0 )
    {
      if ( !KeyInformation[5] )
      {
LABEL_6:
        RegistryValue = -1073741275;
        goto LABEL_39;
      }
      v9 = KeyInformation[7] + 2 * (KeyInformation[6] + 12);
      LODWORD(P) = v9;
      PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v9, 0x63647050u);
      if ( !PoolWithTag )
      {
        RegistryValue = -1073741670;
        goto LABEL_39;
      }
      v11 = KeyInformation[5] * KeyInformation[7] + 2;
      while ( 2 )
      {
        if ( v7 )
          ExFreePoolWithTag(v7, 0);
        v7 = ExAllocatePoolWithTag(PagedPool, v11, 0x63647050u);
        if ( v7 )
        {
          v12 = v11 >> 1;
          v13 = 0;
          v14 = 0;
          for ( i = ZwEnumerateValueKey(KeyHandlea, 0, KeyValueFullInformation, PoolWithTag, v9, &ResultLength);
                ;
                i = ZwEnumerateValueKey(KeyHandlea, v3, KeyValueFullInformation, PoolWithTag, (ULONG)P, &ResultLength) )
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
                  RtlStringCchCopyExW((NTSTRSAFE_PWSTR)v7 + v14, v12 - v14, DestinationString.Buffer, 0LL, 0LL, 0x900u);
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
            *((_WORD *)v7 + v14) = 0;
            *v22 = v7;
            v7 = 0LL;
          }
          else
          {
            RegistryValue = -1073741275;
          }
LABEL_33:
          if ( v7 )
            ExFreePoolWithTag(v7, 0);
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
  if ( KeyHandlea )
    ZwClose(KeyHandlea);
  return (unsigned int)RegistryValue;
}
