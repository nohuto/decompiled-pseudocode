/*
 * XREFs of ?SetProperty@?$CTranslateTransformGeneratedT@VCTranslateTransform@@VCTransform@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800D3D90
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTranslateTransformGeneratedT<CTranslateTransform,CTransform>::SetProperty(
        __int64 a1,
        int a2,
        int a3,
        float *a4)
{
  unsigned int v4; // ebx

  if ( a3 != 18 )
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, 0x80070057, 0xECFu, 0LL);
    return v4;
  }
  if ( a2 )
  {
    if ( a2 != 1 || *a4 == *(float *)(a1 + 156) )
      return 0;
    *(float *)(a1 + 156) = *a4;
    goto LABEL_8;
  }
  if ( *a4 != *(float *)(a1 + 152) )
  {
    *(float *)(a1 + 152) = *a4;
LABEL_8:
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 64LL))(a1, 0LL, 0LL);
  }
  return 0;
}
