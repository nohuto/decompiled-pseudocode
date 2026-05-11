/*
 * XREFs of ?IntersectDataFormatsWithDataRange@CSidebandDevice@@AEAAJPEAPEATKSDATAFORMAT@@KPEAU_KSPIN_DESCRIPTOR_EX@@PEAEPEAK3@Z @ 0x1C0009B10
 * Callers:
 *     ?GetSupportedFormats@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000F074 (-GetSupportedFormats@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     memmove @ 0x1C00123C0 (memmove.c)
 *     PinValidateDataFormat @ 0x1C0021A94 (PinValidateDataFormat.c)
 */

__int64 __fastcall CSidebandDevice::IntersectDataFormatsWithDataRange(
        CSidebandDevice *this,
        union KSDATAFORMAT **a2,
        unsigned int a3,
        struct _KSPIN_DESCRIPTOR_EX *a4,
        unsigned __int8 *a5,
        unsigned int *a6,
        unsigned int *a7)
{
  unsigned int v9; // edi
  unsigned int v10; // ebx
  unsigned int v11; // esi
  unsigned int v12; // r13d
  unsigned int v13; // r12d
  ULONG v14; // ecx
  const PKSDATARANGE *DataRanges; // rdi
  _DWORD *v16; // r14
  int v17; // eax
  _DWORD *v18; // rax
  unsigned int v20; // [rsp+28h] [rbp-50h]
  __int64 v21; // [rsp+30h] [rbp-48h]
  int v22; // [rsp+80h] [rbp+8h]
  ULONG v24; // [rsp+98h] [rbp+20h]

  v9 = a3;
  v10 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0LL,
      9u,
      0x3Cu,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids);
  v11 = 0;
  v22 = 0;
  v12 = 0;
  v13 = 0;
  *a6 = 0;
  if ( v9 )
  {
    do
    {
      v14 = 0;
      v24 = 0;
      if ( a4->PinDescriptor.DataRangesCount )
      {
        DataRanges = a4->PinDescriptor.DataRanges;
        v16 = *a2;
        do
        {
          v21 = v14;
          v17 = PinValidateDataFormat(a4, DataRanges[v14], v16);
          v10 = v17;
          if ( v17 < 0 )
          {
            if ( v17 != -1073741198 )
              goto LABEL_18;
          }
          else
          {
            v18 = v16;
            if ( a5 && *a7 >= *v16 + v22 )
            {
              memmove(&a5[v22], v16, (unsigned int)*v16);
              v16 = *a2;
              v18 = *a2;
              DataRanges = a4->PinDescriptor.DataRanges;
              v22 += (*a2)->FormatSize;
            }
            ++v11;
            v12 += *v18;
          }
          v14 = ((DataRanges[v21]->Flags & 2) != 0) + 1 + v24;
          v24 = v14;
        }
        while ( v14 < a4->PinDescriptor.DataRangesCount );
        v9 = a3;
      }
      ++v13;
      ++a2;
    }
    while ( v13 < v9 );
    if ( v11 )
    {
      v10 = 0;
      *a6 = v11;
      *a7 = v12;
    }
  }
LABEL_18:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v20 = v10;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0LL,
      9u,
      0x3Du,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids,
      v20);
  }
  return v10;
}
