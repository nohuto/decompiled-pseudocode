/*
 * XREFs of RtlSetPortableOperatingSystem @ 0x1800EE200
 * Callers:
 *     <none>
 * Callees:
 *     RtlWriteRegistryValue @ 0x18008E780 (RtlWriteRegistryValue.c)
 */

__int64 __fastcall RtlSetPortableOperatingSystem(char a1)
{
  BOOL v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = a1 != 0;
  return RtlWriteRegistryValue(2, 0LL, L"PortableOperatingSystem", 4, (__int64)&v2, 4);
}
