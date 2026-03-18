/*
 * XREFs of ?TelemetrySetApplicationId@CChannelContext@@QEAAJPEBG_K@Z @ 0x180067018
 * Callers:
 *     ?Partition_TelemetrySetApplicationId@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_TELEMETRYSETAPPLICATIONID@@PEBXI@Z @ 0x180066FA4 (-Partition_TelemetrySetApplicationId@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1800670B4 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CChannelContext::TelemetrySetApplicationId(
        CChannelContext *this,
        const unsigned __int16 *a2,
        unsigned __int64 a3)
{
  int v3; // edi
  unsigned __int16 *v4; // rbx
  unsigned __int64 v8; // rdi
  unsigned __int16 *v9; // rax
  unsigned int v10; // ecx

  v3 = 0;
  v4 = 0LL;
  if ( !*((_QWORD *)this + 6) )
  {
    v8 = a3 + 1;
    v9 = (unsigned __int16 *)operator new(saturated_mul(a3 + 1, 2uLL));
    v4 = v9;
    if ( v9 )
    {
      v3 = StringCchCopyNW(v9, v8, a2, a3);
      if ( v3 >= 0 )
      {
        *((_QWORD *)this + 6) = v4;
        v4 = 0LL;
      }
    }
    else
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0xF1u);
    }
  }
  WPF::ProcessHeapImpl::Free(v4);
  return (unsigned int)v3;
}
