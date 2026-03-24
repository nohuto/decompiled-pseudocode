/*
 * XREFs of KeyboardQueryDeviceKey @ 0x1C000E738
 * Callers:
 *     KeyboardClassGetWaitWakeEnableState @ 0x1C000E37C (KeyboardClassGetWaitWakeEnableState.c)
 * Callees:
 *     memmove @ 0x1C0002D40 (memmove.c)
 */

__int64 __fastcall KeyboardQueryDeviceKey(HANDLE KeyHandle, const WCHAR *a2, void *a3, ULONG a4)
{
  SIZE_T v6; // rdx
  unsigned int v7; // eax
  unsigned int *PoolWithTag; // rbx
  NTSTATUS v9; // edi
  unsigned int v10; // eax
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF
  ULONG Length; // [rsp+68h] [rbp+20h] BYREF

  Length = a4;
  RtlInitUnicodeString(&ValueName, a2);
  v6 = 0xFFFFFFFFLL;
  v7 = ValueName.MaximumLength + 28;
  if ( v7 >= (unsigned int)ValueName.MaximumLength + 24 )
    v6 = v7;
  Length = v6;
  if ( v7 < (unsigned int)ValueName.MaximumLength + 24 )
    return 3221225621LL;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v6, 0x4364624Bu);
  if ( PoolWithTag )
  {
    v9 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, PoolWithTag, Length, &Length);
    if ( v9 >= 0 )
    {
      v10 = PoolWithTag[3];
      if ( v10 > 4 )
        v9 = -1073741789;
      else
        memmove(a3, (char *)PoolWithTag + PoolWithTag[2], v10);
    }
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v9;
}
