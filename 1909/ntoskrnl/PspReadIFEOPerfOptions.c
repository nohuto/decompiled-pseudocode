/*
 * XREFs of PspReadIFEOPerfOptions @ 0x1406DD06C
 * Callers:
 *     PspAllocateProcess @ 0x140681A9C (PspAllocateProcess.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14009EE00 (ExAllocatePoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1401C0F30 (ZwQueryValueKey.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlUnicodeStringToInteger @ 0x1406B5920 (RtlUnicodeStringToInteger.c)
 *     RtlQueryImageFileKeyOption @ 0x1406DD260 (RtlQueryImageFileKeyOption.c)
 */

void __fastcall PspReadIFEOPerfOptions(HANDLE KeyHandle, __int64 a2)
{
  NTSTATUS inited; // ebx
  _QWORD *v5; // rsi
  NTSTATUS v6; // eax
  void *v7; // r14
  ULONG Length; // ebx
  PVOID PoolWithQuotaTag; // rax
  NTSTATUS v10; // eax
  int v11; // ecx
  unsigned int v12; // eax
  unsigned __int64 v13; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-40h] BYREF
  ULONG Value[3]; // [rsp+34h] [rbp-3Ch] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  _QWORD KeyValueInformation[2]; // [rsp+50h] [rbp-20h] BYREF
  int v18; // [rsp+60h] [rbp-10h]

  if ( (int)RtlQueryImageFileKeyOption(KeyHandle, 4, 0LL) >= 0 )
    *(_DWORD *)a2 |= 1u;
  if ( (int)RtlQueryImageFileKeyOption(KeyHandle, 4, 0LL) >= 0 )
    *(_DWORD *)a2 |= 2u;
  if ( (int)RtlQueryImageFileKeyOption(KeyHandle, 4, 0LL) >= 0 )
    *(_DWORD *)a2 |= 4u;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  KeyValueInformation[0] = 0LL;
  KeyValueInformation[1] = 0LL;
  v18 = 0;
  inited = RtlInitUnicodeStringEx(&DestinationString, L"WorkingSetLimitInKB");
  if ( inited < 0 )
    goto LABEL_10;
  v5 = KeyValueInformation;
  v6 = ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x14u,
         &ResultLength);
  inited = v6;
  if ( v6 >= 0 )
  {
    v7 = 0LL;
LABEL_16:
    v11 = *((_DWORD *)v5 + 1);
    if ( ((v11 - 3) & 0xFFFFFFFB) != 0 )
    {
      if ( v11 == 4 )
      {
        if ( *((_DWORD *)v5 + 2) == 4 )
        {
          ResultLength = 4;
          Value[0] = *((_DWORD *)v5 + 3);
        }
        else
        {
          inited = -1073741820;
        }
      }
      else
      {
        if ( v11 != 1 )
        {
LABEL_19:
          inited = -1073741788;
          goto LABEL_21;
        }
        if ( ((unsigned __int8)Value & 3) != 0 )
        {
          inited = -2147483646;
        }
        else
        {
          ResultLength = 4;
          DestinationString.Buffer = (wchar_t *)v5 + 6;
          DestinationString.Length = *((_WORD *)v5 + 4);
          DestinationString.MaximumLength = *((_WORD *)v5 + 4);
          inited = RtlUnicodeStringToInteger(&DestinationString, 0, Value);
        }
      }
    }
    else
    {
      if ( v11 != 4 )
        goto LABEL_19;
      ResultLength = *((_DWORD *)v5 + 2);
      v12 = *((_DWORD *)v5 + 2);
      if ( v12 > 4 )
        inited = -2147483643;
      else
        memmove(Value, (char *)v5 + 12, v12);
    }
LABEL_21:
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
    goto LABEL_10;
  }
  if ( v6 != -2147483643 )
  {
LABEL_10:
    if ( inited >= 0 )
    {
      v13 = (unsigned __int64)Value[0] >> 2;
      *(_DWORD *)(a2 + 4) |= 1u;
      *(_QWORD *)(a2 + 24) = v13;
    }
    return;
  }
  while ( 1 )
  {
    Length = ResultLength;
    PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, ResultLength, 0x6B497452u);
    v7 = PoolWithQuotaTag;
    if ( !PoolWithQuotaTag )
      break;
    v5 = PoolWithQuotaTag;
    v10 = ZwQueryValueKey(
            KeyHandle,
            &DestinationString,
            KeyValuePartialInformation,
            PoolWithQuotaTag,
            Length,
            &ResultLength);
    inited = v10;
    if ( v10 >= 0 )
      goto LABEL_16;
    if ( v10 != -2147483643 )
      goto LABEL_21;
    ExFreePoolWithTag(v7, 0);
  }
}
