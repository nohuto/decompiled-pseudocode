/*
 * XREFs of _CmIsDevicePresent @ 0x140736140
 * Callers:
 *     PiPnpRtlEnumeratorFilterCallback @ 0x1407162F0 (PiPnpRtlEnumeratorFilterCallback.c)
 *     PiPnpRtlServiceFilterCallback @ 0x14072A3B0 (PiPnpRtlServiceFilterCallback.c)
 *     _CmEnumSubkeyCallback @ 0x140768580 (_CmEnumSubkeyCallback.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     _NtPlugPlayGetDeviceStatus @ 0x140625FB8 (_NtPlugPlayGetDeviceStatus.c)
 */

int __fastcall CmIsDevicePresent(__int64 a1, const WCHAR *a2, _BYTE *a3)
{
  int result; // eax
  _BYTE v6[8]; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING v7; // [rsp+38h] [rbp-20h] BYREF
  int v8; // [rsp+70h] [rbp+18h] BYREF
  char v9; // [rsp+78h] [rbp+20h] BYREF

  v8 = 0;
  *(_QWORD *)&v7.Length = 0LL;
  v7.Buffer = 0LL;
  if ( !a3 )
    return -1073741811;
  result = RtlInitUnicodeStringEx(&v7, a2);
  if ( result < 0
    || (result = NtPlugPlayGetDeviceStatus(a1, (__int64)&v7, (__int64)v6, (__int64)&v9, (__int64)&v8), result < 0) )
  {
    if ( result == -1073741810 )
    {
      result = 0;
      *a3 = 0;
    }
  }
  else
  {
    *a3 = 1;
  }
  return result;
}
