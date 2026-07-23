/*
 * XREFs of PnpProfileUpdateHardwareProfile @ 0x14083380C
 * Callers:
 *     PpProfileCancelTransitioningDock @ 0x140833AAC (PpProfileCancelTransitioningDock.c)
 *     PpProfileCommitTransitioningDock @ 0x140833B54 (PpProfileCommitTransitioningDock.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwSetValueKey @ 0x1401B8EF0 (ZwSetValueKey.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IopExecuteHardwareProfileChange @ 0x140840E9C (IopExecuteHardwareProfileChange.c)
 */

__int64 __fastcall PnpProfileUpdateHardwareProfile(__int64 a1)
{
  int v2; // eax
  char *PoolWithTag; // rax
  char *v4; // rdi
  char *v5; // rbx
  __int64 *i; // rax
  __int64 v7; // rdx
  int v8; // ecx
  unsigned int v9; // ebx
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp+28h] BYREF
  HANDLE KeyHandle; // [rsp+A0h] [rbp+30h] BYREF
  HANDLE v15; // [rsp+A8h] [rbp+38h] BYREF

  v15 = 0LL;
  ExAcquireFastMutex(&PiProfileDeviceListLock);
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ValueName.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\IDConfigDB";
  *(_DWORD *)&ValueName.Length = 8126586;
  ObjectAttributes.ObjectName = &ValueName;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    Handle = 0LL;
    ValueName.Buffer = (wchar_t *)L"CurrentDockInfo";
    ObjectAttributes.RootDirectory = KeyHandle;
    *(_DWORD *)&ValueName.Length = 2097182;
    ObjectAttributes.ObjectName = &ValueName;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&Handle, 0x2001Fu, &ObjectAttributes) >= 0 )
    {
      ValueName.Buffer = L"EjectableDocks";
      *(_DWORD *)&ValueName.Length = 1966108;
      ZwSetValueKey(Handle, &ValueName, 0, 4u, &PiProfileDeviceCount, 4u);
      ZwClose(Handle);
    }
    ZwClose(KeyHandle);
  }
  v2 = PiProfileDeviceCount;
  if ( !PiProfileDeviceCount )
    v2 = 1;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(8 * v2 + 8), 0x20207050u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    v5 = PoolWithTag;
    for ( i = (__int64 *)PiProfileDeviceListHead; i != &PiProfileDeviceListHead; i = (__int64 *)*i )
    {
      v7 = i[2];
      if ( v7 )
      {
        *(_QWORD *)v5 = v7;
        v5 += 8;
      }
    }
    KeReleaseGuardedMutex(&PiProfileDeviceListLock);
    if ( v5 == v4 )
    {
      *(_QWORD *)v5 = 0LL;
      v5 += 8;
    }
    *(_QWORD *)v5 = 0LL;
    v9 = IopExecuteHardwareProfileChange(v8, (_DWORD)v4, (v5 - v4) >> 3, (unsigned int)&v15, a1);
    if ( v15 )
      ZwClose(v15);
    ExFreePoolWithTag(v4, 0);
  }
  else
  {
    KeReleaseGuardedMutex(&PiProfileDeviceListLock);
    return (unsigned int)-1073741670;
  }
  return v9;
}
