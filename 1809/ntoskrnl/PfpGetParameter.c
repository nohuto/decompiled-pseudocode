/*
 * XREFs of PfpGetParameter @ 0x140753A78
 * Callers:
 *     PfpSetBaseTime @ 0x14075324C (PfpSetBaseTime.c)
 *     PfpParametersRead @ 0x14075333C (PfpParametersRead.c)
 *     PfSnParametersRead @ 0x140753510 (PfSnParametersRead.c)
 *     PfpParametersInitialize @ 0x1409D572C (PfpParametersInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1401B85D0 (ZwQueryValueKey.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 */

NTSTATUS __fastcall PfpGetParameter(HANDLE KeyHandle, const WCHAR *a2, int a3, void *a4, unsigned int *a5)
{
  NTSTATUS result; // eax
  unsigned int v9; // ebx
  ULONG ResultLength; // [rsp+30h] [rbp-158h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-150h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+50h] [rbp-138h] BYREF
  int v13; // [rsp+54h] [rbp-134h]
  unsigned int Src; // [rsp+58h] [rbp-130h]
  int Src_4; // [rsp+5Ch] [rbp-12Ch] BYREF

  ResultLength = 272;
  RtlInitUnicodeString(&DestinationString, a2);
  if ( !KeyHandle )
    return -1073741811;
  result = ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x110u,
             &ResultLength);
  if ( result >= 0 )
  {
    if ( ResultLength < 0x10 )
    {
      return -1073741823;
    }
    else if ( v13 == a3 )
    {
      v9 = Src;
      if ( Src > *a5 )
      {
        return -1073741789;
      }
      else
      {
        memmove(a4, &Src_4, Src);
        result = 0;
        *a5 = v9;
      }
    }
    else
    {
      return -1073741788;
    }
  }
  return result;
}
