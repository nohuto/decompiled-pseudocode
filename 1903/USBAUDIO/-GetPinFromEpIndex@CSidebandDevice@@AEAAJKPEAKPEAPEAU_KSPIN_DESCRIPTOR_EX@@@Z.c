/*
 * XREFs of ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x1C000998C
 * Callers:
 *     ?CreateKsPin@CSidebandDevice@@AEAAJKPEATKSDATAFORMAT@@PEAPEAU_KSPIN@@@Z @ 0x1C0009F88 (-CreateKsPin@CSidebandDevice@@AEAAJKPEATKSDATAFORMAT@@PEAPEAU_KSPIN@@@Z.c)
 *     ?GetVolumeImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000A834 (-GetVolumeImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x1C000AB28 (-GetVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     ?GetMuteImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000AD1C (-GetMuteImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetMutePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x1C000AF38 (-GetMutePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     ?GetSidetoneImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000B12C (-GetSidetoneImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSidetoneVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x1C000B3A0 (-GetSidetoneVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     ?GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000C994 (-GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetVolume@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000CEE8 (-SetVolume@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetMute@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000D504 (-SetMute@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000DC34 (-SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?StreamStart@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000E188 (-StreamStart@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?StreamSuspend@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000E41C (-StreamSuspend@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?StreamClose@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000E6DC (-StreamClose@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000EAA0 (-GetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000EDC0 (-SetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSupportedFormats@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000F074 (-GetSupportedFormats@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall CSidebandDevice::GetPinFromEpIndex(
        CSidebandDevice *this,
        __int64 a2,
        unsigned int *a3,
        struct _KSPIN_DESCRIPTOR_EX **a4)
{
  int v6; // ebp
  unsigned int v8; // ebx
  __int64 v9; // rax
  int v10; // r9d
  unsigned int v11; // ecx
  __int64 v12; // rdx
  unsigned int v13; // r10d
  int v14; // r11d
  __int64 v15; // rdi
  __int64 v16; // r8
  __int64 v18; // [rsp+28h] [rbp-20h]
  unsigned int v19; // [rsp+28h] [rbp-20h]

  v6 = a2;
  v8 = -1073741811;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      9u,
      0x39u,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids);
  v9 = *((_QWORD *)this + 4);
  v10 = 0;
  *a3 = -1;
  v11 = 0;
  *a4 = 0LL;
  v12 = *(_QWORD *)(v9 + 16);
  v13 = *(_DWORD *)(v12 + 160);
  if ( v13 )
  {
    v14 = *(_DWORD *)(v12 + 164);
    v15 = *(_QWORD *)(v12 + 168);
    do
    {
      v12 = v15 + v11 * v14;
      if ( *(_DWORD *)(v12 + 68) != 4 )
      {
        v16 = **(_QWORD **)(v12 + 56);
        if ( *(_QWORD *)(v16 + 32) != *(_QWORD *)&GUID_6dba3190_67bd_11cf_a0f7_0020afd156e4.Data1
          || *(_QWORD *)(v16 + 40) != *(_QWORD *)GUID_6dba3190_67bd_11cf_a0f7_0020afd156e4.Data4 )
        {
          if ( v6 == v10 )
          {
            *a3 = v11;
            *a4 = (struct _KSPIN_DESCRIPTOR_EX *)v12;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              v19 = v11;
              WPP_RECORDER_SF_d(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                v12,
                9u,
                0x3Au,
                (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids,
                v19);
            }
            v8 = 0;
            break;
          }
          ++v10;
        }
      }
      ++v11;
    }
    while ( v11 < v13 );
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v18) = v8;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v12,
      9u,
      0x3Bu,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids,
      v18);
  }
  return v8;
}
