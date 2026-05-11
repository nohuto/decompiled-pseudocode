/*
 * XREFs of SidebandCapableDeferredFilterFactoryCreate @ 0x1C0020690
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     DeInitSideband @ 0x1C0007788 (DeInitSideband.c)
 *     IsDeviceInSidebandMode @ 0x1C0007A14 (IsDeviceInSidebandMode.c)
 */

void __fastcall SidebandCapableDeferredFilterFactoryCreate(PVOID IoObject, __int64 Context, PIO_WORKITEM IoWorkItem)
{
  __int64 v3; // rdi
  int v6; // esi
  int v7; // r14d
  GUID *v8; // rbp
  __int64 v9; // rdx
  GUID v10; // xmm0
  __int64 v11; // rdx
  struct _KEVENT *v12; // rcx
  unsigned __int16 v13; // r9
  int v14; // [rsp+78h] [rbp+10h] BYREF
  PKSFILTERFACTORY FilterFactory; // [rsp+88h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(Context + 16);
  v14 = 0;
  v6 = -1073741437;
  v7 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      Context,
      9u,
      0x14u,
      (__int64)&WPP_eb5248a9c5fb3f92ddde8b69ed047f7b_Traceguids);
  KeSetEvent((PRKEVENT)(v3 + 952), 0, 0);
  IoFreeWorkItem(IoWorkItem);
  if ( v3 == -128 )
    goto LABEL_13;
  if ( !*(_DWORD *)(v3 + 176) )
    goto LABEL_13;
  v8 = *(GUID **)(v3 + 184);
  v6 = IsDeviceInSidebandMode(Context, &v14);
  if ( v6 < 0 )
    goto LABEL_13;
  if ( v14 )
  {
    v10 = USBSIDEBANDAUDIO_KSCATEGORY_AUDIO;
    v7 = 1;
  }
  else
  {
    v10 = KSCATEGORY_AUDIO;
  }
  *v8 = v10;
  if ( (unsigned int)(*(_DWORD *)(v3 + 852) - 1) <= 1 )
  {
    v6 = KsCreateFilterFactory(
           *(PDEVICE_OBJECT *)(Context + 24),
           (const KSFILTER_DESCRIPTOR *)(v3 + 128),
           (PWSTR)L"GLOBAL",
           0LL,
           8u,
           0LL,
           0LL,
           &FilterFactory);
    if ( v6 >= 0 )
    {
      v6 = KsFilterFactorySetDeviceClassesState(FilterFactory, 1u);
      *(_QWORD *)(v3 + 120) = FilterFactory;
    }
  }
  if ( !v7 )
  {
LABEL_13:
    KeWaitForSingleObject((PVOID)(v3 + 744), Executive, 0, 0, 0LL);
    DeInitSideband(Context, v11);
    KeReleaseMutex((PRKMUTEX)(v3 + 744), 0);
  }
  v12 = *(struct _KEVENT **)(v3 + 984);
  if ( v12 )
    KeSetEvent(v12, 0, 0);
  if ( v7 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_22;
    v13 = 21;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_22;
    v13 = 22;
  }
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v9,
    9u,
    v13,
    (__int64)&WPP_eb5248a9c5fb3f92ddde8b69ed047f7b_Traceguids);
LABEL_22:
  if ( v6 < 0 )
  {
    KeWaitForSingleObject((PVOID)(v3 + 744), Executive, 0, 0, 0LL);
    *(_DWORD *)(v3 + 976) |= 4u;
    KeReleaseMutex((PRKMUTEX)(v3 + 744), 0);
    IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(Context + 32));
  }
}
