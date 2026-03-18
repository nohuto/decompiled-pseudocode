/*
 * XREFs of ??$GetTypeSpecificResource@V?$TValueResource@MUtagMILCMD_FLOATRESOURCE@@$0DJ@@@@@YAJPEAVCResource@@W4MIL_RESOURCE_TYPE@@PEAPEAV?$TValueResource@MUtagMILCMD_FLOATRESOURCE@@$0DJ@@@@Z @ 0x1800CAF28
 * Callers:
 *     ?GetOpacity@CLegacyMilBrush@@KAJMPEAV?$TValueResource@MUtagMILCMD_FLOATRESOURCE@@$0DJ@@@PEAM@Z @ 0x180036320 (-GetOpacity@CLegacyMilBrush@@KAJMPEAV-$TValueResource@MUtagMILCMD_FLOATRESOURCE@@$0DJ@@@PEAM@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetTypeSpecificResource<TValueResource<float,tagMILCMD_FLOATRESOURCE,57>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rcx

  v3 = 0;
  *a3 = 0LL;
  if ( a1 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, 57LL) )
    {
      *a3 = a1;
    }
    else
    {
      v3 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, 0x80070057, 0x32u, 0LL);
    }
  }
  return v3;
}
