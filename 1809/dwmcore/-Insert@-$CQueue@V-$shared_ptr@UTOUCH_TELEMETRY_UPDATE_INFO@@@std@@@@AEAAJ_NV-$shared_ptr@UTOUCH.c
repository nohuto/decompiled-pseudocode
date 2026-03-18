/*
 * XREFs of ?Insert@?$CQueue@V?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@AEAAJ_NV?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@Z @ 0x18019C488
 * Callers:
 *     ?UpdateOnRenderThread@CManipulationTelemetryData@@UEAAJAEBUManipulationThreadTelemetryData@@@Z @ 0x18019D310 (-UpdateOnRenderThread@CManipulationTelemetryData@@UEAAJAEBUManipulationThreadTelemetryData@@@Z.c)
 *     ?InsertTail@?$CQueue@V?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@QEAAJV?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@Z @ 0x1801F5678 (-InsertTail@-$CQueue@V-$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@QEAAJV-$shared_ptr@UTOU.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18016C870 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@UManipulationThreadTelemetryData@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801788C0 (--4-$shared_ptr@UManipulationThreadTelemetryData@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

__int64 __fastcall CQueue<std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>>::Insert(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rcx
  unsigned int v6; // ebx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rbx
  _QWORD *v10; // rax
  std::_Ref_count_base *v11; // rcx

  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  if ( *(_BYTE *)(a1 + 20) )
  {
    v6 = -2147023781;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147023781, 0x98u);
  }
  else
  {
    v7 = operator new(0x20uLL);
    v9 = v7;
    if ( v7 )
    {
      memset_0(v7, 0, 0x20uLL);
      v9[2] = 0LL;
      v9[3] = 0LL;
    }
    else
    {
      v9 = 0LL;
    }
    if ( v9 )
    {
      std::shared_ptr<ManipulationThreadTelemetryData>::operator=(v9 + 2, a3);
      v10 = *(_QWORD **)(a1 + 8);
      if ( *v10 != a1 )
        __fastfail(3u);
      *v9 = a1;
      v9[1] = v10;
      *v10 = v9;
      *(_QWORD *)(a1 + 8) = v9;
      ++*(_DWORD *)(a1 + 16);
      v6 = 0;
    }
    else
    {
      v6 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024882, 0x9Bu);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  v11 = (std::_Ref_count_base *)a3[1];
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  return v6;
}
