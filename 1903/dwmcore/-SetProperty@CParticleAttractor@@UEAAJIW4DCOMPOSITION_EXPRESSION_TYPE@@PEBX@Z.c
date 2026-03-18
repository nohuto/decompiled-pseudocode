/*
 * XREFs of ?SetProperty@CParticleAttractor@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180212890
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CParticleAttractor::SetProperty(__int64 a1, int a2, int a3, float *a4)
{
  float v4; // xmm1_4
  int v5; // edx
  __int64 v6; // rax
  float *v7; // rax
  unsigned int v8; // ebx

  if ( a3 != 18 )
    goto LABEL_10;
  v4 = *a4;
  v5 = a2 - 1;
  if ( v5 )
  {
    if ( v5 != 1 )
    {
LABEL_10:
      v8 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, 0x80070057, 0x55Eu, 0LL);
      return v8;
    }
    v6 = 96LL;
  }
  else
  {
    v6 = 92LL;
  }
  v7 = (float *)(a1 + v6);
  if ( !v7 )
    goto LABEL_10;
  if ( *v7 != v4 )
  {
    *v7 = v4;
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 64LL))(a1, 0LL, 0LL);
  }
  return 0;
}
