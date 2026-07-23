/*
 * XREFs of PspReadIFEONodeOptions @ 0x1406BC2D0
 * Callers:
 *     PspAllocateProcess @ 0x14064CE78 (PspAllocateProcess.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400B75B0 (ExAllocatePoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1401B85D0 (ZwQueryValueKey.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlUnicodeStringToInteger @ 0x140696B10 (RtlUnicodeStringToInteger.c)
 */

void __fastcall PspReadIFEONodeOptions(__int64 a1, void *a2, __int64 *a3)
{
  _BYTE *v6; // r15
  NTSTATUS v7; // eax
  NTSTATUS v8; // ebx
  PVOID PoolWithQuotaTag; // rdi
  ULONG Length; // ebx
  NTSTATUS v11; // eax
  int v12; // ecx
  unsigned int v13; // eax
  __int64 v14; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-68h] BYREF
  ULONG Value[3]; // [rsp+34h] [rbp-64h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-58h] BYREF
  _BYTE KeyValueInformation[24]; // [rsp+50h] [rbp-48h] BYREF

  if ( RtlInitUnicodeStringEx(&DestinationString, L"NodeOptions") < 0 )
    return;
  v6 = KeyValueInformation;
  v7 = ZwQueryValueKey(a2, &DestinationString, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength);
  v8 = v7;
  if ( v7 >= 0 )
  {
    PoolWithQuotaTag = 0LL;
LABEL_9:
    v12 = *((_DWORD *)v6 + 1);
    if ( ((v12 - 3) & 0xFFFFFFFB) != 0 )
    {
      switch ( v12 )
      {
        case 4:
          if ( *((_DWORD *)v6 + 2) == 4 )
          {
            ResultLength = 4;
            Value[0] = *((_DWORD *)v6 + 3);
          }
          else
          {
            v8 = -1073741820;
          }
          break;
        case 11:
          v8 = -1073741788;
          break;
        case 1:
          if ( ((unsigned __int8)Value & 3) != 0 )
          {
            v8 = -2147483646;
          }
          else
          {
            ResultLength = 4;
            DestinationString.Buffer = (wchar_t *)(v6 + 12);
            DestinationString.Length = *((_WORD *)v6 + 4);
            DestinationString.MaximumLength = *((_WORD *)v6 + 4);
            v8 = RtlUnicodeStringToInteger(&DestinationString, 0, Value);
          }
          break;
        default:
          v8 = -1073741788;
          break;
      }
    }
    else if ( v12 == 4 )
    {
      ResultLength = *((_DWORD *)v6 + 2);
      v13 = *((_DWORD *)v6 + 2);
      if ( v13 > 4 )
        v8 = -2147483643;
      else
        memmove(Value, v6 + 12, v13);
    }
    else
    {
      v8 = -1073741788;
    }
LABEL_14:
    if ( PoolWithQuotaTag )
      ExFreePoolWithTag(PoolWithQuotaTag, 0);
    goto LABEL_4;
  }
  if ( v7 == -2147483643 )
  {
    Length = ResultLength;
    PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, ResultLength, 0x6B497452u);
    if ( !PoolWithQuotaTag )
      return;
    while ( 1 )
    {
      v6 = PoolWithQuotaTag;
      v11 = ZwQueryValueKey(a2, &DestinationString, KeyValuePartialInformation, PoolWithQuotaTag, Length, &ResultLength);
      v8 = v11;
      if ( v11 >= 0 )
        goto LABEL_9;
      if ( v11 != -2147483643 )
        goto LABEL_14;
      ExFreePoolWithTag(PoolWithQuotaTag, 0);
      Length = ResultLength;
      PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, ResultLength, 0x6B497452u);
      if ( !PoolWithQuotaTag )
        return;
    }
  }
LABEL_4:
  if ( v8 >= 0 )
  {
    if ( LOBYTE(Value[0]) )
    {
      if ( LOBYTE(Value[0]) == 1 && Value[0] >> 8 < (unsigned __int16)KeNumberNodes && !*a3 )
      {
        v14 = KeNodeBlock[(unsigned __int64)Value[0] >> 8];
        if ( *(_QWORD *)(v14 + 136) )
          *a3 = v14;
      }
    }
    else if ( (Value[0] & 0xFFFFFF00) != 0 )
    {
      *(_DWORD *)(a1 + 768) |= 0x100000u;
    }
  }
}
