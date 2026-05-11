/*
 * XREFs of ?GetNumberOfEndpointsInDevice@CSidebandDevice@@AEAAJPEAK@Z @ 0x1C000875C
 * Callers:
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z @ 0x1C0009524 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z.c)
 *     ?GetDeviceDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000BD60 (-GetDeviceDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall CSidebandDevice::GetNumberOfEndpointsInDevice(CSidebandDevice *this, unsigned int *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v8; // [rsp+28h] [rbp-10h]

  v3 = 0;
  v4 = *(_QWORD *)(*((_QWORD *)this + 4) + 16LL);
  *a2 = 0;
  if ( *(_DWORD *)(v4 + 160) )
  {
    do
    {
      v5 = *(_QWORD *)(v4 + 168) + *(_DWORD *)(v4 + 164) * v3;
      if ( *(_DWORD *)(v5 + 68) != 4 )
      {
        v6 = **(_QWORD **)(v5 + 56);
        if ( *(_QWORD *)(v6 + 32) != *(_QWORD *)&GUID_6dba3190_67bd_11cf_a0f7_0020afd156e4.Data1
          || *(_QWORD *)(v6 + 40) != *(_QWORD *)GUID_6dba3190_67bd_11cf_a0f7_0020afd156e4.Data4 )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LODWORD(v8) = v3;
            WPP_RECORDER_SF_d(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              (__int64)a2,
              9u,
              0x21u,
              (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids,
              v8);
          }
          ++*a2;
        }
      }
      ++v3;
    }
    while ( v3 < *(_DWORD *)(v4 + 160) );
  }
  return 0LL;
}
