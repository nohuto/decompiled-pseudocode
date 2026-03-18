/*
 * XREFs of _lambda_21d74d5478775f948634749288fbae48_::_lambda_invoker_cdecl_ @ 0x1800D9310
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsActive@CMmcssTask@@QEBA_NXZ @ 0x1800D0B88 (-IsActive@CMmcssTask@@QEBA_NXZ.c)
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x1800D0BD4 (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x1800D0CD8 (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 */

__int64 __fastcall lambda_21d74d5478775f948634749288fbae48_::_lambda_invoker_cdecl_(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // r8
  signed int v3; // eax
  __int64 v4; // rcx

  if ( CMmcssTask::IsActive((CMmcssTask *)(*(_QWORD *)(a1 + 16) + 160LL)) )
  {
    v3 = CMmcssTask::Apply(v1, 1);
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x97u, 0LL);
  }
  else
  {
    CMmcssTask::Revert(v1);
  }
  return 0LL;
}
