/*
 * XREFs of ?SetProperty@CColorMatrixEffect@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801C1B00
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CColorMatrixEffect::SetProperty(__int64 *a1, unsigned int a2, int a3, float *a4)
{
  __int64 v5; // rcx
  float v6; // xmm1_4
  unsigned int v7; // ebx
  __int64 v8; // rax

  v5 = a2;
  if ( a3 == 18
    && (v6 = *a4, a2 - 3 <= 0x13)
    && (v7 = 0,
        (v5 = (__int64)&a1[2 * ((unsigned __int64)(a2 - 3) >> 2) + 22] + 4 * (((unsigned __int8)a2 + 1) & 3)) != 0) )
  {
    if ( *(float *)v5 != v6 )
    {
      v8 = *a1;
      *(float *)v5 = v6;
      (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v8 + 64))(a1, 0LL, 0LL);
    }
  }
  else
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024809, 0x34u);
  }
  return v7;
}
