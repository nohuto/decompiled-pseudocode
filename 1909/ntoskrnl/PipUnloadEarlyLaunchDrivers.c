/*
 * XREFs of PipUnloadEarlyLaunchDrivers @ 0x140A0FD2C
 * Callers:
 *     IopInitializeBootDrivers @ 0x140A10C08 (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     ZwUnloadKey2 @ 0x1401C4490 (ZwUnloadKey2.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     IopUnloadDriver @ 0x140768D48 (IopUnloadDriver.c)
 */

__int64 __fastcall PipUnloadEarlyLaunchDrivers(__int64 a1)
{
  __int64 result; // rax
  UNICODE_STRING **v3; // rdi
  UNICODE_STRING *v4; // rbx
  UNICODE_STRING *v5; // rcx
  __int64 v6; // r8
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  _OWORD v8[3]; // [rsp+30h] [rbp-38h] BYREF

  memset(v8, 0, sizeof(v8));
  result = 0LL;
  v3 = (UNICODE_STRING **)(a1 + 64);
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v4 = *v3;
  if ( *v3 != (UNICODE_STRING *)v3 )
  {
    do
    {
      v5 = v4;
      v4 = *(UNICODE_STRING **)&v4->Length;
      if ( SLODWORD(v5[3].Buffer) >= 0 )
        IopUnloadDriver(v5 + 2, 1);
    }
    while ( v4 != (UNICODE_STRING *)v3 );
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\ELAM");
    *((_QWORD *)&v8[0] + 1) = 0LL;
    *(_QWORD *)&v8[1] = &DestinationString;
    LODWORD(v8[0]) = 48;
    DWORD2(v8[1]) = 576;
    v8[2] = 0LL;
    return ZwUnloadKey2((__int64)v8, 1LL, v6);
  }
  return result;
}
