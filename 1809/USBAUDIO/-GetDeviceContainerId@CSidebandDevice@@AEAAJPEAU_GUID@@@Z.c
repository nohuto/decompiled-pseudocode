/*
 * XREFs of ?GetDeviceContainerId@CSidebandDevice@@AEAAJPEAU_GUID@@@Z @ 0x1C000856C
 * Callers:
 *     ?GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000BEC8 (-GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_s @ 0x1C0007DDC (WPP_RECORDER_SF_s.c)
 */

__int64 __fastcall CSidebandDevice::GetDeviceContainerId(CSidebandDevice *this, struct _GUID *a2)
{
  _WORD *v4; // rdx
  _WORD *PoolWithTag; // rdi
  unsigned int v6; // ebx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r8
  __int16 v9; // ax
  _WORD *v10; // rax
  unsigned __int16 v11; // r9
  NTSTATUS DeviceProperty; // eax
  int v13; // r8d
  int v14; // r9d
  int ResultLength; // [rsp+20h] [rbp-38h]
  unsigned int v17; // [rsp+28h] [rbp-30h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  ULONG v19; // [rsp+70h] [rbp+18h] BYREF

  v19 = 0;
  RtlInitUnicodeString(&DestinationString, L"{00000000-0000-0000-0000-000000000000}");
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, DestinationString.MaximumLength, 0x34627845u);
  if ( PoolWithTag )
  {
    v7 = (unsigned __int64)DestinationString.MaximumLength >> 1;
    v6 = v7 == 0 ? 0xC000000D : 0;
    if ( v7 )
    {
      v4 = PoolWithTag;
      v8 = 2147483646 - v7;
      do
      {
        if ( !(v8 + v7) )
          break;
        v9 = *(_WORD *)((char *)v4 + (char *)L"{00000000-0000-0000-0000-000000000000}" - (char *)PoolWithTag);
        if ( !v9 )
          break;
        *v4++ = v9;
        --v7;
      }
      while ( v7 );
      v10 = v4 - 1;
      if ( v7 )
        v10 = v4;
      v6 = v7 == 0 ? 0x80000005 : 0;
      *v10 = 0;
    }
    if ( (v6 & 0x80000000) == 0 )
    {
      DeviceProperty = IoGetDeviceProperty(
                         *(PDEVICE_OBJECT *)(*((_QWORD *)this + 4) + 32LL),
                         DevicePropertyContainerID,
                         DestinationString.MaximumLength,
                         PoolWithTag,
                         &v19);
      v6 = DeviceProperty;
      if ( DeviceProperty >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, PoolWithTag);
        DeviceProperty = RtlGUIDFromString(&DestinationString, a2);
        v6 = DeviceProperty;
        if ( DeviceProperty >= 0 )
        {
          WPP_RECORDER_SF_s(
            WPP_GLOBAL_Control->DeviceExtension,
            (_DWORD)v4,
            v13,
            v14,
            ResultLength,
            (__int64)DestinationString.Buffer);
          goto LABEL_20;
        }
        v11 = 31;
      }
      else
      {
        v11 = 30;
      }
      v17 = DeviceProperty;
    }
    else
    {
      v11 = 29;
      v17 = v6;
    }
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)v4,
      9u,
      v11,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids,
      v17);
LABEL_20:
    ExFreePool(PoolWithTag);
    return v6;
  }
  v6 = -1073741664;
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    (__int64)v4,
    9u,
    0x1Cu,
    (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids,
    -1073741664);
  return v6;
}
