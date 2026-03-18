/*
 * XREFs of ?SetProperty@CNineGridBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801E6DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TryGetInsetFieldPointer@CNineGridBrush@@AEAAPEAMK@Z @ 0x1800A2644 (-TryGetInsetFieldPointer@CNineGridBrush@@AEAAPEAMK@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A3F88 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CNineGridBrush::SetProperty(CResource *a1, int a2, int a3)
{
  float *InsetFieldPointer; // rax
  float *v5; // r9
  unsigned int v6; // ebx

  if ( a3 == 18 && (InsetFieldPointer = CNineGridBrush::TryGetInsetFieldPointer(a1, a2)) != 0LL )
  {
    if ( *InsetFieldPointer != *v5 )
    {
      *InsetFieldPointer = *v5;
      CResource::InvalidateAnimationSources(a1);
      (*(void (__fastcall **)(CResource *, __int64, CResource *))(*(_QWORD *)a1 + 64LL))(a1, 6LL, a1);
    }
    return 0;
  }
  else
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, 0x80070057, 0x10Bu, 0LL);
  }
  return v6;
}
