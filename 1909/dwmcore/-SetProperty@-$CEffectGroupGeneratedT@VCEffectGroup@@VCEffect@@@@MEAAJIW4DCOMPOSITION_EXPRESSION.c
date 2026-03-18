/*
 * XREFs of ?SetProperty@?$CEffectGroupGeneratedT@VCEffectGroup@@VCEffect@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18001AC70
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEffectGroupGeneratedT<CEffectGroup,CEffect>::SetProperty(__int64 *a1, int a2, int a3, _DWORD *a4)
{
  __int64 v4; // rax
  unsigned int v5; // ebx

  if ( a3 == 18 )
  {
    if ( !a2 && *(float *)a4 != *((float *)a1 + 18) )
    {
      v4 = *a1;
      *((_DWORD *)a1 + 18) = *a4;
      (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v4 + 64))(a1, 0LL, 0LL);
    }
    return 0;
  }
  else
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)a1, 0LL, 0, -2147024809, 0xF1u, 0LL);
  }
  return v5;
}
