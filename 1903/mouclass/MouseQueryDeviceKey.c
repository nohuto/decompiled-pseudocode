/*
 * XREFs of MouseQueryDeviceKey @ 0x1C000E4B8
 * Callers:
 *     MouseClassGetWaitWakeEnableState @ 0x1C000E10C (MouseClassGetWaitWakeEnableState.c)
 * Callees:
 *     memmove @ 0x1C0002A00 (memmove.c)
 */

__int64 __fastcall MouseQueryDeviceKey(HANDLE KeyHandle, __int64 a2, void *a3, ULONG a4)
{
  unsigned int *PoolWithTag; // rbx
  NTSTATUS v7; // edi
  unsigned int v8; // eax
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF
  ULONG Length; // [rsp+68h] [rbp+20h] BYREF

  Length = a4;
  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  RtlInitUnicodeString(&ValueName, L"WaitWakeEnabled");
  if ( (unsigned int)ValueName.MaximumLength + 28 < (unsigned int)ValueName.MaximumLength + 24 )
    return 3221225621LL;
  Length = ValueName.MaximumLength + 28;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, Length, 0x43756F4Du);
  if ( PoolWithTag )
  {
    v7 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, PoolWithTag, Length, &Length);
    if ( v7 >= 0 )
    {
      v8 = PoolWithTag[3];
      if ( v8 > 4 )
        v7 = -1073741789;
      else
        memmove(a3, (char *)PoolWithTag + PoolWithTag[2], v8);
    }
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v7;
}
