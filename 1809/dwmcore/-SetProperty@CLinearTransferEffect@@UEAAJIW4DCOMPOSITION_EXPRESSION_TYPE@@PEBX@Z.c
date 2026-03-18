/*
 * XREFs of ?SetProperty@CLinearTransferEffect@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801C3730
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLinearTransferEffect::SetProperty(float *a1, int a2, int a3, float *a4)
{
  float *v4; // r10
  float v5; // xmm1_4
  unsigned int v6; // ebx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  __int64 v13; // rax
  __int64 v14; // rax

  v4 = a1;
  if ( a3 != 18 )
    goto LABEL_21;
  v5 = *a4;
  v6 = 0;
  if ( a2 )
  {
    v7 = a2 - 1;
    if ( v7 )
    {
      v8 = v7 - 2;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 2;
          if ( v10 )
          {
            v11 = v10 - 1;
            if ( v11 )
            {
              v12 = v11 - 2;
              if ( v12 )
              {
                if ( v12 != 1 )
                {
LABEL_21:
                  v6 = -2147024809;
                  MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, -2147024809, 0xB0u);
                  return v6;
                }
                v13 = 216LL;
              }
              else
              {
                v13 = 212LL;
              }
            }
            else
            {
              v13 = 204LL;
            }
          }
          else
          {
            v13 = 200LL;
          }
        }
        else
        {
          v13 = 192LL;
        }
      }
      else
      {
        v13 = 188LL;
      }
    }
    else
    {
      v13 = 180LL;
    }
  }
  else
  {
    v13 = 176LL;
  }
  a1 = (float *)((char *)a1 + v13);
  if ( !a1 )
    goto LABEL_21;
  if ( *a1 != v5 )
  {
    v14 = *(_QWORD *)v4;
    *a1 = v5;
    (*(void (__fastcall **)(float *, _QWORD, _QWORD))(v14 + 64))(v4, 0LL, 0LL);
  }
  return v6;
}
