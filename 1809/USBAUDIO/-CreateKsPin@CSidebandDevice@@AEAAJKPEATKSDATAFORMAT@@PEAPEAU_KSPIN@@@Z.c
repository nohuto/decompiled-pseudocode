/*
 * XREFs of ?CreateKsPin@CSidebandDevice@@AEAAJKPEATKSDATAFORMAT@@PEAPEAU_KSPIN@@@Z @ 0x1C0009AA0
 * Callers:
 *     ?StreamOpen@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000D0DC (-StreamOpen@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x1C000955C (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?GetFilterInstance@CSidebandDevice@@AEAAJPEAPEAX@Z @ 0x1C0009884 (-GetFilterInstance@CSidebandDevice@@AEAAJPEAPEAX@Z.c)
 *     memmove @ 0x1C0011080 (memmove.c)
 */

__int64 __fastcall CSidebandDevice::CreateKsPin(
        CSidebandDevice *this,
        __int64 a2,
        union KSDATAFORMAT *Src,
        struct _KSPIN **a4)
{
  struct $58C2C1BF6568EE28BD9B872E6BA03976 *v5; // rdi
  unsigned int v7; // r13d
  int FilterInstance; // eax
  __int64 v10; // rdx
  int v11; // ebx
  __int64 v12; // rdx
  int PinFromEpIndex; // eax
  __int64 v14; // rdx
  unsigned __int16 v15; // r9
  struct $58C2C1BF6568EE28BD9B872E6BA03976 *PoolWithTag; // rax
  __int64 v17; // rdx
  NTSTATUS v18; // eax
  __int64 v19; // rdx
  struct _KSPIN *ObjectFromFileObject; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-48h]
  void *ConnectionHandle; // [rsp+30h] [rbp-40h] BYREF
  PVOID Object; // [rsp+38h] [rbp-38h] BYREF
  HANDLE FilterHandle; // [rsp+40h] [rbp-30h] BYREF
  struct _KSPIN_DESCRIPTOR_EX *v28; // [rsp+48h] [rbp-28h] BYREF
  LONGLONG v29; // [rsp+60h] [rbp-10h]
  unsigned int v30; // [rsp+B8h] [rbp+48h] BYREF

  v30 = -1;
  v5 = 0LL;
  ConnectionHandle = 0LL;
  v28 = 0LL;
  v7 = a2;
  FilterHandle = 0LL;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      9u,
      0x48u,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids);
  *a4 = 0LL;
  FilterInstance = CSidebandDevice::GetFilterInstance(this, &FilterHandle);
  v11 = FilterInstance;
  if ( FilterInstance < 0 )
  {
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v10,
      9u,
      0x49u,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids,
      FilterInstance,
      ConnectionHandle);
    goto LABEL_17;
  }
  PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, v7, &v30, &v28);
  v11 = PinFromEpIndex;
  if ( PinFromEpIndex < 0 )
  {
    v15 = 74;
LABEL_7:
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v14,
      9u,
      v15,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids,
      PinFromEpIndex,
      ConnectionHandle);
    goto LABEL_17;
  }
  PoolWithTag = (struct $58C2C1BF6568EE28BD9B872E6BA03976 *)ExAllocatePoolWithTag(
                                                              (POOL_TYPE)512,
                                                              Src->FormatSize + 72LL,
                                                              0x37627845u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    v29 = 0LL;
    PoolWithTag->PinToHandle = 0LL;
    PoolWithTag->Interface.Set = GUID_1a8766a0_62ce_11cf_a5d6_28db04c10000;
    PoolWithTag->Priority.PriorityClass = 0x40000000;
    *(&PoolWithTag->Interface.Alignment + 2) = v29;
    PoolWithTag->Medium.Set = GUID_4747b320_62ce_11cf_a5d6_28db04c10000;
    PoolWithTag->Priority.PrioritySubClass = 1;
    v29 = 0LL;
    *(&PoolWithTag->Medium.Alignment + 2) = 0LL;
    PoolWithTag->PinId = v30;
    memmove(&PoolWithTag[1], Src, Src->FormatSize);
    PinFromEpIndex = KsCreatePin(FilterHandle, v5, 0xC0000000, &ConnectionHandle);
    v11 = PinFromEpIndex;
    if ( PinFromEpIndex < 0 )
    {
      v15 = 76;
      goto LABEL_7;
    }
    Object = 0LL;
    v18 = ObReferenceObjectByHandle(ConnectionHandle, 0x1F01FFu, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    v11 = v18;
    if ( v18 >= 0 )
    {
      ZwClose(ConnectionHandle);
      ObjectFromFileObject = (struct _KSPIN *)KsGetObjectFromFileObject((PFILE_OBJECT)Object);
      *a4 = ObjectFromFileObject;
      if ( ObjectFromFileObject )
      {
        KsAddItemToObjectBag(ObjectFromFileObject->Bag, v5, ExFreePool);
        v22 = (__int64)*a4;
        *(_BYTE *)(*(_QWORD *)(v22 + 16) + 47LL) = 1;
        v12 = *(_QWORD *)(v22 + 16);
        *(_QWORD *)(v12 + 48) = Object;
      }
      else
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v21,
          9u,
          0x4Eu,
          (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids);
        ObfDereferenceObject(Object);
        v11 = -1073741275;
      }
    }
    else
    {
      LODWORD(HandleInformation) = v18;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v19,
        9u,
        0x4Du,
        (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids,
        HandleInformation);
      ZwClose(ConnectionHandle);
    }
  }
  else
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v17,
      9u,
      0x4Bu,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids);
    v11 = -1073741664;
  }
LABEL_17:
  if ( FilterHandle )
    ZwClose(FilterHandle);
  if ( v11 < 0 && v5 )
    ExFreePool(v5);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(HandleInformation) = v11;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v12,
      9u,
      0x4Fu,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids,
      HandleInformation);
  }
  return (unsigned int)v11;
}
