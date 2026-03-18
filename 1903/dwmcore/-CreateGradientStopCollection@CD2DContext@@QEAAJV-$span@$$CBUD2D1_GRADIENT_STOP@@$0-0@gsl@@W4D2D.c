/*
 * XREFs of ?CreateGradientStopCollection@CD2DContext@@QEAAJV?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@W4D2D1_GAMMA@@W4D2D1_EXTEND_MODE@@PEAPEAUID2D1GradientStopCollection@@@Z @ 0x180160188
 * Callers:
 *     ?Generate@CGradientSource@@IEAAJPEAVCD3DDeviceLevel1@@AEBVRetrievalParams@1@V?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@_N33W4D2D1_EXTEND_MODE@@@Z @ 0x180019FA8 (-Generate@CGradientSource@@IEAAJPEAVCD3DDeviceLevel1@@AEBVRetrievalParams@1@V-$span@$$CBUD2D1_GR.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::CreateGradientStopCollection(
        __int64 a1,
        unsigned int *a2,
        unsigned int a3,
        int a4,
        _QWORD *a5)
{
  int v6; // ebx
  signed int v7; // eax
  __int64 v8; // rcx

  *a5 = 0LL;
  v6 = *(_DWORD *)(a1 + 880);
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v6, 0x835u, 0LL);
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int, _QWORD *))(**(_QWORD **)(a1 + 232) + 72LL))(
           *(_QWORD *)(a1 + 232),
           *((_QWORD *)a2 + 1),
           *a2,
           a3,
           a4,
           a5);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x83Bu, 0LL);
  }
  return CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext(a1, v6, 0);
}
