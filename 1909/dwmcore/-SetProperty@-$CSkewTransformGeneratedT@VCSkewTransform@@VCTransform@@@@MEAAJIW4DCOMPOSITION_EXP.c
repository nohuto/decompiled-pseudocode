/*
 * XREFs of ?SetProperty@?$CSkewTransformGeneratedT@VCSkewTransform@@VCTransform@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801A12B0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSkewTransformGeneratedT<CSkewTransform,CTransform>::SetProperty(
        __int64 a1,
        int a2,
        int a3,
        float *a4)
{
  unsigned int v4; // ebx
  int v5; // edx
  int v6; // edx

  if ( a3 == 18 )
  {
    if ( a2 )
    {
      v5 = a2 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          if ( v6 != 1 || *a4 == *(float *)(a1 + 164) )
            return 0;
          *(float *)(a1 + 164) = *a4;
          goto LABEL_15;
        }
        if ( *a4 != *(float *)(a1 + 160) )
        {
          *(float *)(a1 + 160) = *a4;
LABEL_15:
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 64LL))(a1, 0LL, 0LL);
        }
      }
      else if ( *a4 != *(float *)(a1 + 156) )
      {
        *(float *)(a1 + 156) = *a4;
        goto LABEL_15;
      }
    }
    else if ( *a4 != *(float *)(a1 + 152) )
    {
      *(float *)(a1 + 152) = *a4;
      goto LABEL_15;
    }
    return 0;
  }
  v4 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, 0x80070057, 0xD90u, 0LL);
  return v4;
}
