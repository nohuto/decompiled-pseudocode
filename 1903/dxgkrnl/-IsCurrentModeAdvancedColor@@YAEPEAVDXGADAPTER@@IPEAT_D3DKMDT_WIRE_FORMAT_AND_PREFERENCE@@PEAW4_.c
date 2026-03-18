/*
 * XREFs of ?IsCurrentModeAdvancedColor@@YAEPEAVDXGADAPTER@@IPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1C00D5F1C
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00D5770 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z @ 0x1C000382C (-MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z.c)
 *     ?DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1C00E6B40 (-DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D.c)
 */

unsigned __int8 __fastcall IsCurrentModeAdvancedColor(
        struct DXGADAPTER *a1,
        unsigned int a2,
        union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *a3,
        enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE *a4)
{
  __int64 v5; // r14
  ADAPTER_DISPLAY *v6; // rcx
  char v7; // bl
  unsigned int v10; // eax
  int CurrentWireFormatAndColorSpace; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r15
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v19; // rax
  unsigned int v20; // eax
  _QWORD *v21; // r11
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v22[10]; // [rsp+30h] [rbp-28h] BYREF
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v23; // [rsp+60h] [rbp+8h] BYREF

  v5 = a2;
  v6 = (ADAPTER_DISPLAY *)*((_QWORD *)a1 + 319);
  v7 = 0;
  v23.Value = 0;
  v10 = ADAPTER_DISPLAY::MapVidPnTargetToVidPnSource(v6, a2);
  CurrentWireFormatAndColorSpace = DmmGetCurrentWireFormatAndColorSpace(a1, v10, v5, &v23, v22);
  v15 = CurrentWireFormatAndColorSpace;
  if ( CurrentWireFormatAndColorSpace < 0 )
  {
    v19 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    *(_QWORD *)(v19 + 24) = *((int *)a1 + 70);
    *(_QWORD *)(v19 + 32) = *((unsigned int *)a1 + 69);
    v20 = ADAPTER_DISPLAY::MapVidPnTargetToVidPnSource(*((ADAPTER_DISPLAY **)a1 + 319), v5);
    v21[5] = v20;
    v21[7] = v15;
    v21[6] = v5;
    WdLogEvent5_WdWarning(v21);
    return 0;
  }
  else
  {
    if ( a3 )
      a3->0 = v23.0;
    v16 = v22[0];
    if ( a4 )
      *a4 = v22[0];
    if ( (unsigned int)v16 <= 0x20 )
    {
      v17 = 0x140001000LL;
      if ( _bittest64(&v17, v16) )
        return 1;
    }
    return v7;
  }
}
