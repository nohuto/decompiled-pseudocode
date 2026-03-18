/*
 * XREFs of ExpGetLeapSecondDataRegistryKeyHandle @ 0x140760A14
 * Callers:
 *     ExpReadLeapSecondData @ 0x14075F730 (ExpReadLeapSecondData.c)
 *     ExSetLeapSecondEnabled @ 0x14090A6E0 (ExSetLeapSecondEnabled.c)
 * Callees:
 *     ZwCreateKey @ 0x1401C0470 (ZwCreateKey.c)
 */

NTSTATUS __fastcall ExpGetLeapSecondDataRegistryKeyHandle(_QWORD *a1)
{
  NTSTATUS result; // eax
  OBJECT_ATTRIBUTES v3; // [rsp+40h] [rbp-38h] BYREF
  HANDLE v4; // [rsp+88h] [rbp+10h] BYREF

  *(&v3.Length + 1) = 0;
  memset(&v3.Attributes + 1, 0, 20);
  v3.Length = 48;
  v3.RootDirectory = 0LL;
  v3.Attributes = 576;
  v3.ObjectName = (PUNICODE_STRING)&ExpLeapSecondRegkeyPath;
  result = ZwCreateKey(&v4, 0x20019u, &v3, 0, 0LL, 0, 0LL);
  if ( result >= 0 )
    *a1 = v4;
  return result;
}
