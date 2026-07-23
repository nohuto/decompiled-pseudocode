/*
 * XREFs of PspIsDfssEnabled @ 0x140734FD0
 * Callers:
 *     PsBootPhaseComplete @ 0x140734C1C (PsBootPhaseComplete.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400B75B0 (ExAllocatePoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401B85D0 (ZwQueryValueKey.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     PspReadDfssConfigurationValues @ 0x1402E95A0 (PspReadDfssConfigurationValues.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlUnicodeStringToInteger @ 0x140696B10 (RtlUnicodeStringToInteger.c)
 */

char PspIsDfssEnabled()
{
  char v0; // r15
  unsigned int v1; // r12d
  HANDLE v2; // r14
  NTSTATUS inited; // ebx
  _BYTE *v4; // rsi
  NTSTATUS v5; // eax
  _BYTE *PoolWithQuotaTag; // rdi
  ULONG Length; // ebx
  NTSTATUS v8; // eax
  int v9; // ecx
  _BYTE *v11; // rax
  unsigned int v12; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-49h] BYREF
  ULONG Value[3]; // [rsp+34h] [rbp-45h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-31h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-21h] BYREF
  _BYTE KeyValueInformation[24]; // [rsp+88h] [rbp+Fh] BYREF

  v0 = 0;
  v1 = 0;
  while ( 1 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&PspQuotaKeyNames[2 * v1];
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) < 0 )
    {
LABEL_16:
      if ( v0 )
LABEL_22:
        PspReadDfssConfigurationValues();
      return v0;
    }
    v2 = KeyHandle;
    inited = RtlInitUnicodeStringEx(&DestinationString, L"EnableCpuQuota");
    if ( inited >= 0 )
    {
      v4 = KeyValueInformation;
      v5 = ZwQueryValueKey(
             v2,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x14u,
             &ResultLength);
      inited = v5;
      if ( v5 < 0 )
      {
        if ( v5 != -2147483643 )
          goto LABEL_15;
        Length = ResultLength;
        PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, ResultLength, 0x6B497452u);
        if ( !PoolWithQuotaTag )
        {
LABEL_24:
          inited = -1073741801;
          goto LABEL_15;
        }
        while ( 1 )
        {
          v4 = PoolWithQuotaTag;
          v8 = ZwQueryValueKey(
                 v2,
                 &DestinationString,
                 KeyValuePartialInformation,
                 PoolWithQuotaTag,
                 Length,
                 &ResultLength);
          inited = v8;
          if ( v8 >= 0 )
            break;
          if ( v8 != -2147483643 )
            goto LABEL_12;
          ExFreePoolWithTag(PoolWithQuotaTag, 0);
          Length = ResultLength;
          v11 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, ResultLength, 0x6B497452u);
          PoolWithQuotaTag = v11;
          if ( !v11 )
            goto LABEL_24;
        }
      }
      else
      {
        PoolWithQuotaTag = 0LL;
      }
      v9 = *((_DWORD *)v4 + 1);
      if ( ((v9 - 3) & 0xFFFFFFFB) != 0 )
      {
        switch ( v9 )
        {
          case 4:
            if ( *((_DWORD *)v4 + 2) == 4 )
            {
              ResultLength = 4;
              Value[0] = *((_DWORD *)v4 + 3);
            }
            else
            {
              inited = -1073741820;
            }
            break;
          case 11:
            inited = -1073741788;
            break;
          case 1:
            if ( ((unsigned __int8)Value & 3) != 0 )
            {
              inited = -2147483646;
            }
            else
            {
              ResultLength = 4;
              DestinationString.Buffer = (wchar_t *)(v4 + 12);
              DestinationString.Length = *((_WORD *)v4 + 4);
              DestinationString.MaximumLength = *((_WORD *)v4 + 4);
              inited = RtlUnicodeStringToInteger(&DestinationString, 0, Value);
            }
            break;
          default:
            inited = -1073741788;
            break;
        }
      }
      else if ( v9 == 4 )
      {
        ResultLength = *((_DWORD *)v4 + 2);
        v12 = *((_DWORD *)v4 + 2);
        if ( v12 > 4 )
          inited = -2147483643;
        else
          memmove(Value, v4 + 12, v12);
      }
      else
      {
        inited = -1073741788;
      }
LABEL_12:
      if ( PoolWithQuotaTag )
        ExFreePoolWithTag(PoolWithQuotaTag, 0);
    }
LABEL_15:
    ZwClose(KeyHandle);
    if ( inited < 0 )
      goto LABEL_16;
    if ( !Value[0] )
      return 0;
    ++v1;
    v0 = 1;
    if ( v1 >= 2 )
      goto LABEL_22;
  }
}
