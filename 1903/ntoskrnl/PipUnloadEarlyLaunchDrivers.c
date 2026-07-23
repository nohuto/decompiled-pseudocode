/*
 * XREFs of PipUnloadEarlyLaunchDrivers @ 0x140A0F594
 * Callers:
 *     IopInitializeBootDrivers @ 0x140A10470 (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     ZwUnloadKey2 @ 0x1401C3910 (ZwUnloadKey2.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     IopUnloadDriver @ 0x140764248 (IopUnloadDriver.c)
 */

NTSTATUS __fastcall PipUnloadEarlyLaunchDrivers(__int64 a1)
{
  NTSTATUS result; // eax
  UNICODE_STRING **v3; // rdi
  UNICODE_STRING *v4; // rbx
  UNICODE_STRING *v5; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES TargetKey; // [rsp+30h] [rbp-38h] BYREF

  memset(&TargetKey, 0, sizeof(TargetKey));
  result = 0;
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
    TargetKey.RootDirectory = 0LL;
    TargetKey.ObjectName = &DestinationString;
    TargetKey.Length = 48;
    TargetKey.Attributes = 576;
    *(_OWORD *)&TargetKey.SecurityDescriptor = 0LL;
    return ZwUnloadKey2(&TargetKey, 1u);
  }
  return result;
}
