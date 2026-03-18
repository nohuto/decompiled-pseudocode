/*
 * XREFs of ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice @ 0x1C00060E4
 * Callers:
 *     ACPIRootInitialize @ 0x1C0090730 (ACPIRootInitialize.c)
 * Callees:
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C0006210 (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 */

__int64 ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice()
{
  ULONG_PTR v0; // rsi
  __int64 v1; // rdx
  __int64 v2; // rdi
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rax
  __int64 v11; // [rsp+30h] [rbp-30h] BYREF
  struct _KEVENT *p_Event; // [rsp+38h] [rbp-28h]
  __int64 v13; // [rsp+40h] [rbp-20h]
  struct _KEVENT Event; // [rsp+48h] [rbp-18h] BYREF

  v0 = RootDeviceExtension;
  v11 = 0LL;
  v1 = 0LL;
  p_Event = 0LL;
  v13 = 0LL;
  v2 = 5LL;
  memset(&Event, 0, sizeof(Event));
  v3 = 5LL;
  do
  {
    v4 = *(_QWORD *)((char *)&AmliGlobalPreDefinedRootObjects + v1);
    dword_1C0082858 = 0;
    v5 = v4 + 120;
    pszDest = 0;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    *(_QWORD *)((char *)&AcpiAmliPreDefinedRootAcpiObjects + v1) = v5;
    v1 += 8LL;
    --v3;
  }
  while ( v3 );
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v6 = 0LL;
  do
  {
    v7 = *(_QWORD *)((char *)&AcpiAmliPreDefinedRootAcpiObjects + v6);
    if ( v7 == *(_QWORD *)(v0 + 712) )
    {
      v9 = *(_QWORD *)(v0 + 896);
LABEL_14:
      *(_QWORD *)((char *)&AcpiAmliPreDefinedRootNativeHandles + v6) = v9;
      goto LABEL_11;
    }
    v11 = 0LL;
    p_Event = &Event;
    v13 = 3221225473LL;
    v8 = AcpiNotifyPlExtDiscoverDeviceAsync(v7, ACPIRootDeviceDiscoverDeviceCompletion, &v11);
    if ( v8 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v8 = v13;
    }
    if ( v8 >= 0 )
    {
      v9 = v11;
      if ( v11 )
        goto LABEL_14;
    }
LABEL_11:
    v6 += 8LL;
    --v2;
  }
  while ( v2 );
  return 0LL;
}
