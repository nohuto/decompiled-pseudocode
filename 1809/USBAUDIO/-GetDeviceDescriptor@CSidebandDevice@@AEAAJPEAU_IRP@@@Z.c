/*
 * XREFs of ?GetDeviceDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000BD60
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000B27C (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00072AC (WPP_RECORDER_SF_dd.c)
 *     ?GetNumberOfEndpointsInDevice@CSidebandDevice@@AEAAJPEAK@Z @ 0x1C000875C (-GetNumberOfEndpointsInDevice@CSidebandDevice@@AEAAJPEAK@Z.c)
 */

__int64 __fastcall CSidebandDevice::GetDeviceDescriptor(CSidebandDevice *this, struct _IRP *a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  ULONG Length; // eax
  int NumberOfEndpointsInDevice; // eax
  unsigned __int16 v7; // r9
  unsigned int *UserBuffer; // rbx
  __int64 v10; // [rsp+28h] [rbp-18h]
  unsigned int v12; // [rsp+80h] [rbp+40h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  a2->IoStatus.Information = 0LL;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      9u,
      0xAu,
      (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids);
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( Length )
  {
    if ( Length != 4 )
    {
      v12 = -1073741811;
      WPP_RECORDER_SF_dd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (__int64)a2,
        a3,
        0xDu,
        (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids,
        4,
        -1073741811);
      goto LABEL_11;
    }
    UserBuffer = (unsigned int *)a2->UserBuffer;
    NumberOfEndpointsInDevice = CSidebandDevice::GetNumberOfEndpointsInDevice(this, UserBuffer);
    v12 = NumberOfEndpointsInDevice;
    if ( NumberOfEndpointsInDevice >= 0 )
    {
      a2->IoStatus.Information = 4LL;
      NumberOfEndpointsInDevice = *UserBuffer;
      v7 = 15;
    }
    else
    {
      v7 = 14;
    }
  }
  else
  {
    a2->IoStatus.Information = 4LL;
    NumberOfEndpointsInDevice = -1073741789;
    v12 = -1073741789;
    v7 = 12;
  }
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    (__int64)a2,
    9u,
    v7,
    (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids,
    NumberOfEndpointsInDevice);
LABEL_11:
  a2->IoStatus.Status = v12;
  IofCompleteRequest(a2, 0);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v10) = v12;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v12,
      9u,
      0xBu,
      (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids,
      v10);
  }
  return v12;
}
