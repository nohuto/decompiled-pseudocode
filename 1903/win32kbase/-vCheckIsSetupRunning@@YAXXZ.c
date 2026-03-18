/*
 * XREFs of ?vCheckIsSetupRunning@@YAXXZ @ 0x1C00A377C
 * Callers:
 *     InitializeGreCSRSS @ 0x1C00A3564 (InitializeGreCSRSS.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00148AC (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

void vCheckIsSetupRunning(void)
{
  _DWORD *v0; // rbx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG Length; // [rsp+80h] [rbp+10h] BYREF
  void *KeyHandle; // [rsp+88h] [rbp+18h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\Setup");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"SystemSetupInProgress");
    Length = 20;
    v0 = PALLOCMEM2(0x14uLL, 0x706D7447u, 1);
    if ( v0 )
    {
      if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, v0, Length, &Length) >= 0 )
      {
        if ( v0[3] )
          gbGUISetup = 1;
      }
      Win32FreePool((__int64)v0);
    }
    ZwClose(KeyHandle);
  }
}
