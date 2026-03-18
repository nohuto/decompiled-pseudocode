/*
 * XREFs of ?StopWin32PoolTracking@@YAXXZ @ 0x1C020E838
 * Callers:
 *     InitializeWin32PoolTracking @ 0x1C0140900 (InitializeWin32PoolTracking.c)
 * Callees:
 *     memset @ 0x1C0166840 (memset.c)
 */

void StopWin32PoolTracking(void)
{
  __int64 v0; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-50h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  void *KeyHandle; // [rsp+80h] [rbp+10h] BYREF

  v0 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
  {
    *(_DWORD *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 44LL) = 0;
    *(_DWORD *)(v0 + 40) = 0;
  }
  if ( gpxsGlobals )
  {
    if ( *((_DWORD *)gpxsGlobals + 8) )
    {
      memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
      *(_QWORD *)&DestinationString.Length = 0LL;
      DestinationString.Buffer = 0LL;
      *(_QWORD *)&ValueName.Length = 0LL;
      ValueName.Buffer = 0LL;
      RtlInitUnicodeString(
        &DestinationString,
        L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\CONTROL\\SESSION MANAGER\\MEMORY MANAGEMENT");
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes) >= 0 )
      {
        RtlInitUnicodeString(&ValueName, L"SESSION_HAS_VALID_POOL_ON_EXIT");
        if ( ZwDeleteValueKey(KeyHandle, &ValueName) >= 0 )
          ZwFlushKey(KeyHandle);
        ZwClose(KeyHandle);
      }
    }
  }
}
