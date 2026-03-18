/*
 * XREFs of ?SetProperty@CLinearTransferEffect@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180217860
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLinearTransferEffect::SetProperty(float *a1, int a2, int a3, float *a4)
{
  float *v4; // r10
  float v5; // xmm1_4
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned int v14; // ebx

  v4 = a1;
  if ( a3 != 18 )
    goto LABEL_22;
  v5 = *a4;
  if ( a2 )
  {
    v6 = a2 - 1;
    if ( v6 )
    {
      v7 = v6 - 2;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          v9 = v8 - 2;
          if ( v9 )
          {
            v10 = v9 - 1;
            if ( v10 )
            {
              v11 = v10 - 2;
              if ( v11 )
              {
                if ( v11 != 1 )
                {
LABEL_22:
                  v14 = -2147024809;
                  MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, 0x80070057, 0xB0u, 0LL);
                  return v14;
                }
                v12 = 216LL;
              }
              else
              {
                v12 = 212LL;
              }
            }
            else
            {
              v12 = 204LL;
            }
          }
          else
          {
            v12 = 200LL;
          }
        }
        else
        {
          v12 = 192LL;
        }
      }
      else
      {
        v12 = 188LL;
      }
    }
    else
    {
      v12 = 180LL;
    }
  }
  else
  {
    v12 = 176LL;
  }
  a1 = (float *)((char *)a1 + v12);
  if ( !a1 )
    goto LABEL_22;
  if ( *a1 != v5 )
  {
    v13 = *(_QWORD *)v4;
    *a1 = v5;
    (*(void (__fastcall **)(float *, _QWORD, _QWORD))(v13 + 64))(v4, 0LL, 0LL);
  }
  return 0;
}
