/*
 * XREFs of ?SetProperty@?$CTranslateTransform3DGeneratedT@VCTranslateTransform3D@@VCTransform3D@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801A2C40
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTranslateTransform3DGeneratedT<CTranslateTransform3D,CTransform3D>::SetProperty(
        __int64 a1,
        int a2,
        int a3,
        float *a4)
{
  unsigned int v4; // ebx
  int v5; // edx

  if ( a3 == 18 )
  {
    if ( a2 )
    {
      v5 = a2 - 1;
      if ( v5 )
      {
        if ( v5 != 1 || *a4 == *(float *)(a1 + 160) )
          return 0;
        *(float *)(a1 + 160) = *a4;
        goto LABEL_12;
      }
      if ( *a4 != *(float *)(a1 + 156) )
      {
        *(float *)(a1 + 156) = *a4;
LABEL_12:
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 64LL))(a1, 0LL, 0LL);
      }
    }
    else if ( *a4 != *(float *)(a1 + 152) )
    {
      *(float *)(a1 + 152) = *a4;
      goto LABEL_12;
    }
    return 0;
  }
  v4 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, 0x80070057, 0xF99u, 0LL);
  return v4;
}
