/*
 * XREFs of KeyboardQueryDeviceKey @ 0x1C000DEB0
 * Callers:
 *     KeyboardAddDevice @ 0x1C000D7F0 (KeyboardAddDevice.c)
 *     KeyboardClassGetWaitWakeEnableState @ 0x1C000F5CC (KeyboardClassGetWaitWakeEnableState.c)
 * Callees:
 *     memmove @ 0x1C0002EC0 (memmove.c)
 */

__int64 __fastcall KeyboardQueryDeviceKey(HANDLE KeyHandle, const WCHAR *a2, void *a3, ULONG a4)
{
  unsigned int *PoolWithTag; // rbx
  NTSTATUS v7; // edi
  unsigned int v9; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  ULONG Length; // [rsp+68h] [rbp+20h] BYREF

  Length = a4;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  if ( (unsigned int)DestinationString.MaximumLength + 28 < (unsigned int)DestinationString.MaximumLength + 24 )
    return 3221225621LL;
  Length = DestinationString.MaximumLength + 28;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, Length, 0x4364624Bu);
  if ( PoolWithTag )
  {
    v7 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValueFullInformation, PoolWithTag, Length, &Length);
    if ( v7 >= 0 )
    {
      v9 = PoolWithTag[3];
      if ( v9 > 4 )
        v7 = -1073741789;
      else
        memmove(a3, (char *)PoolWithTag + PoolWithTag[2], v9);
    }
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v7;
}
