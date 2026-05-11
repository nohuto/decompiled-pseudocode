/*
 * XREFs of ?CreateKsPin@CSidebandDevice@@AEAAJKPEATKSDATAFORMAT@@PEAPEAU_KSPIN@@@Z @ 0x1C0009F88
 * Callers:
 *     ?StreamOpen@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000E05C (-StreamOpen@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x1C000998C (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?GetFilterInstance@CSidebandDevice@@AEAAJPEAPEAX@Z @ 0x1C0009D04 (-GetFilterInstance@CSidebandDevice@@AEAAJPEAPEAX@Z.c)
 *     memmove @ 0x1C0012500 (memmove.c)
 */

__int64 __fastcall CSidebandDevice::CreateKsPin(
        CSidebandDevice *this,
        unsigned int a2,
        union KSDATAFORMAT *Src,
        struct _KSPIN **a4)
{
  struct $58C2C1BF6568EE28BD9B872E6BA03976 *v5; // rdi
  int FilterInstance; // eax
  __int64 v10; // rdx
  int v11; // ebx
  int PinFromEpIndex; // eax
  unsigned __int16 v14; // r9
  struct $58C2C1BF6568EE28BD9B872E6BA03976 *PoolWithTag; // rax
  NTSTATUS v16; // eax
  __int64 v17; // rdx
  struct _KSPIN *ObjectFromFileObject; // rax
  __int64 v19; // rdx
  __int64 v20; // rdx
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-48h]
  void *ConnectionHandle; // [rsp+30h] [rbp-40h] BYREF
  PVOID Object; // [rsp+38h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-30h] BYREF
  struct _KSPIN_DESCRIPTOR_EX *v25; // [rsp+48h] [rbp-28h] BYREF
  LONGLONG v26; // [rsp+60h] [rbp-10h]
  unsigned int v27; // [rsp+B8h] [rbp+48h] BYREF

  v27 = -1;
  v5 = 0LL;
  ConnectionHandle = 0LL;
  v25 = 0LL;
  Handle = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)&WPP_d153e64821bc3364f2117226f130d99d_Traceguids,
      9u,
      0x48u,
      (__int64)&WPP_d153e64821bc3364f2117226f130d99d_Traceguids);
  *a4 = 0LL;
  FilterInstance = CSidebandDevice::GetFilterInstance(this, &Handle);
  v11 = FilterInstance;
  if ( FilterInstance < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v10,
        9u,
        0x49u,
        (__int64)&WPP_d153e64821bc3364f2117226f130d99d_Traceguids,
        FilterInstance,
        ConnectionHandle);
    goto LABEL_7;
  }
  PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, a2, &v27, &v25);
  v11 = PinFromEpIndex;
  if ( PinFromEpIndex < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_7;
    v14 = 74;
    goto LABEL_19;
  }
  PoolWithTag = (struct $58C2C1BF6568EE28BD9B872E6BA03976 *)ExAllocatePoolWithTag(
                                                              (POOL_TYPE)512,
                                                              Src->FormatSize + 72LL,
                                                              0x37627845u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    v26 = 0LL;
    PoolWithTag->PinToHandle = 0LL;
    PoolWithTag->Interface.Set = GUID_1a8766a0_62ce_11cf_a5d6_28db04c10000;
    PoolWithTag->Priority.PriorityClass = 0x40000000;
    *(&PoolWithTag->Interface.Alignment + 2) = v26;
    PoolWithTag->Medium.Set = GUID_4747b320_62ce_11cf_a5d6_28db04c10000;
    PoolWithTag->Priority.PrioritySubClass = 1;
    v26 = 0LL;
    *(&PoolWithTag->Medium.Alignment + 2) = 0LL;
    PoolWithTag->PinId = v27;
    memmove(&PoolWithTag[1], Src, Src->FormatSize);
    PinFromEpIndex = KsCreatePin(Handle, v5, 0xC0000000, &ConnectionHandle);
    v11 = PinFromEpIndex;
    if ( PinFromEpIndex < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_7;
      v14 = 76;
LABEL_19:
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v10,
        9u,
        v14,
        (__int64)&WPP_d153e64821bc3364f2117226f130d99d_Traceguids,
        PinFromEpIndex,
        ConnectionHandle);
      goto LABEL_7;
    }
    Object = 0LL;
    v16 = ObReferenceObjectByHandle(ConnectionHandle, 0x1F01FFu, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    v11 = v16;
    if ( v16 >= 0 )
    {
      ZwClose(ConnectionHandle);
      ObjectFromFileObject = (struct _KSPIN *)KsGetObjectFromFileObject((PFILE_OBJECT)Object);
      *a4 = ObjectFromFileObject;
      if ( ObjectFromFileObject )
      {
        KsAddItemToObjectBag(ObjectFromFileObject->Bag, v5, ExFreePool);
        v20 = (__int64)*a4;
        *(_BYTE *)(*(_QWORD *)(v20 + 16) + 47LL) = 1;
        v10 = *(_QWORD *)(v20 + 16);
        *(_QWORD *)(v10 + 48) = Object;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v19,
            9u,
            0x4Eu,
            (__int64)&WPP_d153e64821bc3364f2117226f130d99d_Traceguids);
        ObfDereferenceObject(Object);
        v11 = -1073741275;
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(HandleInformation) = v16;
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v17,
          9u,
          0x4Du,
          (__int64)&WPP_d153e64821bc3364f2117226f130d99d_Traceguids,
          HandleInformation);
      }
      ZwClose(ConnectionHandle);
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v10,
        9u,
        0x4Bu,
        (__int64)&WPP_d153e64821bc3364f2117226f130d99d_Traceguids);
    v11 = -1073741664;
  }
LABEL_7:
  if ( Handle )
    ZwClose(Handle);
  if ( v11 < 0 && v5 )
    ExFreePool(v5);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(HandleInformation) = v11;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v10,
      9u,
      0x4Fu,
      (__int64)&WPP_d153e64821bc3364f2117226f130d99d_Traceguids,
      HandleInformation);
  }
  return (unsigned int)v11;
}
