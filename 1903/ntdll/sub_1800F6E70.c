/*
 * XREFs of sub_1800F6E70 @ 0x1800F6E70
 * Callers:
 *     sub_1800F6F14 @ 0x1800F6F14 (sub_1800F6F14.c)
 * Callees:
 *     sub_180009204 @ 0x180009204 (sub_180009204.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009C920 (ZwOpenKey.c)
 */

__int64 __fastcall sub_1800F6E70(__int64 a1, __int64 a2)
{
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+18h] BYREF

  KeyHandle = 0LL;
  Handle = 0LL;
  if ( !qword_1801669D0 && sub_180009204(0x20019u, a2, &Handle) >= 0 )
  {
    ObjectAttributes.RootDirectory = Handle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)L"68";
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) >= 0
      && _InterlockedCompareExchange64(&qword_1801669D0, (signed __int64)KeyHandle, 0LL) )
    {
      ZwClose(KeyHandle);
    }
    ZwClose(Handle);
  }
  return qword_1801669D0;
}
