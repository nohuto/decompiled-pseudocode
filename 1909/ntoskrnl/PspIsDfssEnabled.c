/*
 * XREFs of PspIsDfssEnabled @ 0x140763D94
 * Callers:
 *     PsBootPhaseComplete @ 0x1407639C8 (PsBootPhaseComplete.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14009EE00 (ExAllocatePoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0E90 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401C0F30 (ZwQueryValueKey.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     PspReadDfssConfigurationValues @ 0x140306430 (PspReadDfssConfigurationValues.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlUnicodeStringToInteger @ 0x1406B5920 (RtlUnicodeStringToInteger.c)
 */

char PspIsDfssEnabled()
{
  char v0; // r14
  unsigned int v1; // r15d
  HANDLE v2; // r12
  NTSTATUS inited; // ebx
  _QWORD *v4; // rdi
  NTSTATUS v5; // eax
  void *v6; // rsi
  ULONG Length; // ebx
  PVOID PoolWithQuotaTag; // rax
  NTSTATUS v9; // eax
  int v10; // ecx
  unsigned int v12; // eax
  ULONG ResultLength; // [rsp+38h] [rbp-39h] BYREF
  ULONG Value[3]; // [rsp+3Ch] [rbp-35h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-29h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-11h] BYREF
  _QWORD KeyValueInformation[2]; // [rsp+90h] [rbp+1Fh] BYREF
  int v19; // [rsp+A0h] [rbp+2Fh]

  *(&ObjectAttributes.Length + 1) = 0;
  v0 = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v1 = 0;
  while ( 1 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&PspQuotaKeyNames[2 * v1];
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) < 0 )
    {
LABEL_16:
      if ( !v0 )
        return v0;
LABEL_22:
      PspReadDfssConfigurationValues();
      return v0;
    }
    v2 = KeyHandle;
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
    KeyValueInformation[0] = 0LL;
    KeyValueInformation[1] = 0LL;
    v19 = 0;
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
      if ( v5 >= 0 )
      {
        v6 = 0LL;
LABEL_8:
        v10 = *((_DWORD *)v4 + 1);
        if ( ((v10 - 3) & 0xFFFFFFFB) != 0 )
        {
          if ( v10 == 4 )
          {
            if ( *((_DWORD *)v4 + 2) == 4 )
            {
              ResultLength = 4;
              Value[0] = *((_DWORD *)v4 + 3);
            }
            else
            {
              inited = -1073741820;
            }
          }
          else
          {
            if ( v10 != 1 )
            {
LABEL_11:
              inited = -1073741788;
              goto LABEL_12;
            }
            if ( ((unsigned __int8)Value & 3) != 0 )
            {
              inited = -2147483646;
            }
            else
            {
              ResultLength = 4;
              DestinationString.Buffer = (wchar_t *)v4 + 6;
              DestinationString.Length = *((_WORD *)v4 + 4);
              DestinationString.MaximumLength = *((_WORD *)v4 + 4);
              inited = RtlUnicodeStringToInteger(&DestinationString, 0, Value);
            }
          }
        }
        else
        {
          if ( v10 != 4 )
            goto LABEL_11;
          ResultLength = *((_DWORD *)v4 + 2);
          v12 = *((_DWORD *)v4 + 2);
          if ( v12 > 4 )
            inited = -2147483643;
          else
            memmove(Value, (char *)v4 + 12, v12);
        }
LABEL_12:
        if ( v6 )
          ExFreePoolWithTag(v6, 0);
        goto LABEL_15;
      }
      if ( v5 == -2147483643 )
      {
        while ( 1 )
        {
          Length = ResultLength;
          PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, ResultLength, 0x6B497452u);
          v6 = PoolWithQuotaTag;
          if ( !PoolWithQuotaTag )
            break;
          v4 = PoolWithQuotaTag;
          v9 = ZwQueryValueKey(
                 v2,
                 &DestinationString,
                 KeyValuePartialInformation,
                 PoolWithQuotaTag,
                 Length,
                 &ResultLength);
          inited = v9;
          if ( v9 >= 0 )
            goto LABEL_8;
          if ( v9 != -2147483643 )
            goto LABEL_12;
          ExFreePoolWithTag(v6, 0);
        }
        inited = -1073741801;
      }
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
