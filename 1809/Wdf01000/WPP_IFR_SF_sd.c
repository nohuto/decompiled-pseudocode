/*
 * XREFs of WPP_IFR_SF_Sd @ 0x1C0052F60
 * Callers:
 *     ?OpenDevicemapKeyWorker@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@KPEAVFxRegKey@@@Z @ 0x1C005279C (-OpenDevicemapKeyWorker@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@KPEAVFxRegKe.c)
 * Callees:
 *     FxIFR @ 0x1C0004FD0 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C003BC00 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_Sd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 a4,
        const _GUID *level,
        const wchar_t *flags,
        int id)
{
  const wchar_t *v7; // rsi
  __int64 v8; // rdi
  __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rax
  const wchar_t *v13; // rcx

  v7 = L"<NULL>";
  v8 = -1LL;
  v10 = 14LL;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x20000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
  {
    if ( flags )
    {
      if ( *flags )
      {
        v12 = -1LL;
        do
          ++v12;
        while ( flags[v12] );
        v11 = 2 * v12 + 2;
      }
      else
      {
        v11 = 14LL;
      }
    }
    else
    {
      v11 = 10LL;
    }
    if ( flags )
    {
      v13 = L"<NULL>";
      if ( *flags )
        v13 = flags;
    }
    else
    {
      v13 = L"NULL";
    }
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_FxDeviceKm_cpp_Traceguids,
      0x1Bu,
      v13,
      v11,
      &id,
      4LL,
      0LL);
  }
  if ( flags )
  {
    if ( *flags )
    {
      do
        ++v8;
      while ( flags[v8] );
      v10 = 2 * v8 + 2;
    }
  }
  else
  {
    v10 = 10LL;
  }
  if ( flags )
  {
    if ( *flags )
      v7 = flags;
  }
  else
  {
    v7 = L"NULL";
  }
  FxIFR(globals, 2u, 0x12u, WPP_FxDeviceKm_cpp_Traceguids, 0x1Bu, v7, v10, &id, 4LL, 0LL);
}
