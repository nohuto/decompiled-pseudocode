/*
 * XREFs of KitpOpenRegKey @ 0x140761F80
 * Callers:
 *     KitpInitAitSampleRate @ 0x1409DE5E8 (KitpInitAitSampleRate.c)
 * Callees:
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 */

NTSTATUS __fastcall KitpOpenRegKey(__int64 a1, __int64 a2, HANDLE *a3)
{
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-38h] BYREF

  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&SbtRateKeyPath;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwOpenKey(a3, 1u, &ObjectAttributes);
}
