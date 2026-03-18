/*
 * XREFs of ?SetProperty@CShadowEffect@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801CCF90
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CShadowEffect::SetProperty(float *a1, int a2, int a3, float *a4)
{
  float *v4; // r10
  float v5; // xmm1_4
  unsigned int v6; // ebx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  __int64 v10; // rax
  __int64 v11; // rax

  v4 = a1;
  if ( a3 != 18 )
    goto LABEL_15;
  v5 = *a4;
  v6 = 0;
  if ( a2 )
  {
    v7 = a2 - 2;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          if ( v9 != 1 )
          {
LABEL_15:
            v6 = -2147024809;
            MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, -2147024809, 0x5Eu);
            return v6;
          }
          v10 = 192LL;
        }
        else
        {
          v10 = 188LL;
        }
      }
      else
      {
        v10 = 184LL;
      }
    }
    else
    {
      v10 = 180LL;
    }
  }
  else
  {
    v10 = 176LL;
    v5 = fmaxf(0.0, v5);
  }
  a1 = (float *)((char *)a1 + v10);
  if ( !a1 )
    goto LABEL_15;
  if ( *a1 != v5 )
  {
    v11 = *(_QWORD *)v4;
    *a1 = v5;
    (*(void (__fastcall **)(float *, _QWORD, _QWORD))(v11 + 64))(v4, 0LL, 0LL);
  }
  return v6;
}
