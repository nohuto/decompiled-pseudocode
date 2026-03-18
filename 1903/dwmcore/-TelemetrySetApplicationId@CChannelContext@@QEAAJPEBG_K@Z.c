/*
 * XREFs of ?TelemetrySetApplicationId@CChannelContext@@QEAAJPEBG_K@Z @ 0x180045794
 * Callers:
 *     ?Partition_TelemetrySetApplicationId@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_TELEMETRYSETAPPLICATIONID@@PEBXI@Z @ 0x180045720 (-Partition_TelemetrySetApplicationId@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180045A60 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??$lower_bound@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAURecord@CProcessAttributionManager@@@std@@@std@@@std@@_KP6A_NPEBUProcessAttributionRecord@CProcessAttributionManager@@_J@Z@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAURecord@CProcessAttributionManager@@@std@@@std@@@0@V10@V10@AEB_KP6A_NPEBUProcessAttributionRecord@CProcessAttributionManager@@_J@Z@Z @ 0x180045F3C (--$lower_bound@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@PEAURecord@CProcessAttributio.c)
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x180046110 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CChannelContext::TelemetrySetApplicationId(
        CChannelContext *this,
        const unsigned __int16 *a2,
        unsigned __int64 a3)
{
  __int64 v3; // rsi
  int v7; // edi
  unsigned __int16 *v8; // rbx
  unsigned __int64 v9; // rdi
  unsigned __int16 *v10; // rax
  unsigned int v11; // ecx
  __int64 v12; // r9
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  v3 = -1LL;
  v7 = 0;
  v8 = 0LL;
  if ( !*((_QWORD *)this + 6) )
  {
    v9 = a3 + 1;
    v10 = (unsigned __int16 *)operator new(saturated_mul(a3 + 1, 2uLL));
    v8 = v10;
    if ( !v10 )
    {
      v7 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024882, 0xE6u, 0LL);
      goto LABEL_9;
    }
    v7 = StringCchCopyNW(v10, v9, a2, a3);
    if ( v7 >= 0 )
    {
      *((_QWORD *)this + 6) = v8;
      v8 = 0LL;
    }
  }
  v12 = *((_QWORD *)this + 5);
  if ( v12 )
  {
    std::lower_bound<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CProcessAttributionManager::Record *>>>,unsigned __int64,bool (*)(CProcessAttributionManager::ProcessAttributionRecord const *,__int64)>(
      &v14,
      *(_QWORD *)qword_18033CC50,
      *((_QWORD *)qword_18033CC50 + 1),
      v12 + 16);
    do
      ++v3;
    while ( a2[v3] );
    std::wstring::assign((void *)(*(_QWORD *)v14 + 128LL));
  }
LABEL_9:
  operator delete(v8);
  return (unsigned int)v7;
}
