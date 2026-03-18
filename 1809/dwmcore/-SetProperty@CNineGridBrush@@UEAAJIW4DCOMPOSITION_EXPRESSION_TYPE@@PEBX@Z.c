/*
 * XREFs of ?SetProperty@CNineGridBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801AA790
 * Callers:
 *     <none>
 * Callees:
 *     ?TryGetInsetFieldPointer@CNineGridBrush@@AEAAPEAMK@Z @ 0x180067348 (-TryGetInsetFieldPointer@CNineGridBrush@@AEAAPEAMK@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A5BF8 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CNineGridBrush::SetProperty(CResource *a1, int a2, int a3)
{
  float *InsetFieldPointer; // rax
  float *v5; // r9
  int v6; // r10d
  unsigned int v7; // ebx

  if ( a3 == 18 && (InsetFieldPointer = CNineGridBrush::TryGetInsetFieldPointer(a1, a2), v7 = 0, InsetFieldPointer) )
  {
    if ( *InsetFieldPointer != *v5 )
    {
      *InsetFieldPointer = *v5;
      CResource::InvalidateAnimationSources(a1, v6);
      (*(void (__fastcall **)(CResource *, __int64, CResource *))(*(_QWORD *)a1 + 64LL))(a1, 6LL, a1);
    }
  }
  else
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, -2147024809, 0xF9u);
  }
  return v7;
}
