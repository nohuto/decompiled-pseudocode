/*
 * XREFs of ?SetProperty@?$CRotateTransform3DGeneratedT@VCRotateTransform3D@@VCTransform3D@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801A2600
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRotateTransform3DGeneratedT<CRotateTransform3D,CTransform3D>::SetProperty(
        __int64 a1,
        int a2,
        int a3,
        float *a4)
{
  unsigned int v4; // ebx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx

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
          v7 = v6 - 1;
          if ( v7 )
          {
            v8 = v7 - 1;
            if ( v8 )
            {
              v9 = v8 - 1;
              if ( v9 )
              {
                if ( v9 != 1 || *a4 == *(float *)(a1 + 176) )
                  return 0;
                *(float *)(a1 + 176) = *a4;
                goto LABEL_24;
              }
              if ( *a4 != *(float *)(a1 + 172) )
              {
                *(float *)(a1 + 172) = *a4;
LABEL_24:
                (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 64LL))(a1, 0LL, 0LL);
              }
            }
            else if ( *a4 != *(float *)(a1 + 168) )
            {
              *(float *)(a1 + 168) = *a4;
              goto LABEL_24;
            }
          }
          else if ( *a4 != *(float *)(a1 + 164) )
          {
            *(float *)(a1 + 164) = *a4;
            goto LABEL_24;
          }
        }
        else if ( *a4 != *(float *)(a1 + 160) )
        {
          *(float *)(a1 + 160) = *a4;
          goto LABEL_24;
        }
      }
      else if ( *a4 != *(float *)(a1 + 156) )
      {
        *(float *)(a1 + 156) = *a4;
        goto LABEL_24;
      }
    }
    else if ( *a4 != *(float *)(a1 + 152) )
    {
      *(float *)(a1 + 152) = *a4;
      goto LABEL_24;
    }
    return 0;
  }
  v4 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, 0x80070057, 0x95Eu, 0LL);
  return v4;
}
