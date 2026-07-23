/*
 * XREFs of PipUnloadEarlyLaunchDrivers @ 0x1409DF194
 * Callers:
 *     IopInitializeBootDrivers @ 0x1409CC0BC (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     ZwUnloadKey2 @ 0x1401BBB10 (ZwUnloadKey2.c)
 *     IopUnloadDriver @ 0x140709C68 (IopUnloadDriver.c)
 */

NTSTATUS __fastcall PipUnloadEarlyLaunchDrivers(UNICODE_STRING *a1)
{
  UNICODE_STRING *v1; // rdi
  UNICODE_STRING *v2; // rbx
  UNICODE_STRING *v3; // rcx
  NTSTATUS result; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES TargetKey; // [rsp+30h] [rbp-38h] BYREF

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
    TargetKey.RootDirectory = 0LL;
    TargetKey.ObjectName = &DestinationString;
    TargetKey.Length = 48;
    TargetKey.Attributes = 576;
    *(_OWORD *)&TargetKey.SecurityDescriptor = 0LL;
    return ZwUnloadKey2(&TargetKey, 1u);
  }
  return result;
}
