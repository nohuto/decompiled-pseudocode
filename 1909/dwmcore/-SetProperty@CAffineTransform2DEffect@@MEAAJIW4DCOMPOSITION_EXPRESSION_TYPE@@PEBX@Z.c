/*
 * XREFs of ?SetProperty@CAffineTransform2DEffect@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180219150
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAffineTransform2DEffect::SetProperty(float *a1, int a2, int a3, float *a4)
{
  float *v4; // r10
  float v5; // xmm1_4
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned int v13; // ebx

  v4 = a1;
  if ( a3 != 18 )
    goto LABEL_18;
  v5 = *a4;
  v6 = a2 - 4;
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
          v10 = v9 - 1;
          if ( v10 )
          {
            if ( v10 != 1 )
            {
LABEL_18:
              v13 = -2147024809;
              MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, 0x80070057, 0x46u, 0LL);
              return v13;
            }
            v11 = 204LL;
          }
          else
          {
            v11 = 200LL;
          }
        }
        else
        {
          v11 = 196LL;
        }
      }
      else
      {
        v11 = 192LL;
      }
    }
    else
    {
      v11 = 188LL;
    }
  }
  else
  {
    v11 = 184LL;
  }
  a1 = (float *)((char *)a1 + v11);
  if ( !a1 )
    goto LABEL_18;
  if ( *a1 != v5 )
  {
    v12 = *(_QWORD *)v4;
    *a1 = v5;
    (*(void (__fastcall **)(float *, _QWORD, _QWORD))(v12 + 64))(v4, 0LL, 0LL);
  }
  return 0;
}
