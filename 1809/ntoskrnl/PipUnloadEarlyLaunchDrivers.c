/*
 * XREFs of PipUnloadEarlyLaunchDrivers @ 0x1409DE194
 * Callers:
 *     IopInitializeBootDrivers @ 0x1409CB0BC (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B9A90 (RtlInitUnicodeString.c)
 *     ZwUnloadKey2 @ 0x1401BB9B0 (ZwUnloadKey2.c)
 *     IopUnloadDriver @ 0x1407089C8 (IopUnloadDriver.c)
 */

__int64 __fastcall PipUnloadEarlyLaunchDrivers(UNICODE_STRING *a1)
{
  UNICODE_STRING *v1; // rdi
  UNICODE_STRING *v2; // rbx
  UNICODE_STRING *v3; // rcx
  __int64 v4; // r8
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  int v7; // [rsp+30h] [rbp-38h] BYREF
  __int64 v8; // [rsp+38h] [rbp-30h]
  UNICODE_STRING *p_DestinationString; // [rsp+40h] [rbp-28h]
  int v10; // [rsp+48h] [rbp-20h]
  __int128 v11; // [rsp+50h] [rbp-18h]

  v1 = a1 + 4;
  v2 = *(UNICODE_STRING **)&a1[4].Length;
  if ( v2 != &a1[4] )
  {
    do
    {
      v3 = v2;
      v2 = *(UNICODE_STRING **)&v2->Length;
      if ( SLODWORD(v3[3].Buffer) >= 0 )
        IopUnloadDriver(v3 + 2, 1);
    }
    while ( v2 != v1 );
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\ELAM");
    v8 = 0LL;
    p_DestinationString = &DestinationString;
    v7 = 48;
    v10 = 576;
    v11 = 0LL;
    return ZwUnloadKey2((__int64)&v7, 1LL, v4);
  }
  return result;
}
