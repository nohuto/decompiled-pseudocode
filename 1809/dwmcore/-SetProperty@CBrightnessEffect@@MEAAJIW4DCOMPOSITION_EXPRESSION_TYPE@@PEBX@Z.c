/*
 * XREFs of ?SetProperty@CBrightnessEffect@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801C1920
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrightnessEffect::SetProperty(float *a1, int a2, int a3, float *a4)
{
  float *v4; // r10
  float v5; // xmm1_4
  int v6; // edx
  int v7; // edx
  int v8; // edx
  __int64 v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // rax

  v4 = a1;
  if ( a3 != 18 )
    goto LABEL_13;
  v5 = *a4;
  v6 = a2 - 2;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        if ( v8 != 1 )
        {
LABEL_13:
          v10 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, -2147024809, 0x4Fu);
          return v10;
        }
        v9 = 188LL;
      }
      else
      {
        v9 = 184LL;
      }
    }
    else
    {
      v9 = 180LL;
    }
  }
  else
  {
    v9 = 176LL;
  }
  v10 = 0;
  a1 = (float *)((char *)a1 + v9);
  if ( !a1 )
    goto LABEL_13;
  if ( *a1 != v5 )
  {
    v11 = *(_QWORD *)v4;
    *a1 = v5;
    (*(void (__fastcall **)(float *, _QWORD, _QWORD))(v11 + 64))(v4, 0LL, 0LL);
  }
  return v10;
}
