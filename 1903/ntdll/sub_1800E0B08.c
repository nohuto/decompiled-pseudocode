/*
 * XREFs of sub_1800E0B08 @ 0x1800E0B08
 * Callers:
 *     sub_1800D16F0 @ 0x1800D16F0 (sub_1800D16F0.c)
 * Callees:
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009C920 (ZwOpenKey.c)
 */

NTSTATUS __fastcall sub_1800E0B08(_UNICODE_STRING *a1, void *a2, _QWORD *a3)
{
  NTSTATUS result; // eax
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-38h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp+20h] BYREF

  if ( qword_1801642E0 )
  {
    *a3 = qword_1801642E0;
  }
  else
  {
    ObjectAttributes.RootDirectory = a2;
    ObjectAttributes.ObjectName = a1;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwOpenKey(&KeyHandle, 9u, &ObjectAttributes);
    if ( result < 0 )
      return result;
    if ( _InterlockedCompareExchange64(&qword_1801642E0, (signed __int64)KeyHandle, 0LL) )
      ZwClose(KeyHandle);
    *a3 = qword_1801642E0;
  }
  return 0;
}
