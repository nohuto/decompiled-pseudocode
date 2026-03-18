/*
 * XREFs of ?SetProperty@CColorMatrixEffect@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18021B100
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CColorMatrixEffect::SetProperty(__int64 *a1, unsigned int a2, int a3, float *a4)
{
  __int64 v5; // rcx
  float v6; // xmm1_4
  __int64 v7; // rax
  unsigned int v8; // ebx

  v5 = a2;
  if ( a3 == 18
    && (v6 = *a4, a2 - 3 <= 0x13)
    && (v5 = (__int64)&a1[2 * ((unsigned __int64)(a2 - 3) >> 2) + 22] + 4 * (((unsigned __int8)a2 + 1) & 3)) != 0 )
  {
    if ( *(float *)v5 != v6 )
    {
      v7 = *a1;
      *(float *)v5 = v6;
      (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v7 + 64))(a1, 0LL, 0LL);
    }
    return 0;
  }
  else
  {
    v8 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, 0x80070057, 0x34u, 0LL);
  }
  return v8;
}
