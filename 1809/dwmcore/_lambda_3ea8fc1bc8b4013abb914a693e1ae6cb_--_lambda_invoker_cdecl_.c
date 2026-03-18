/*
 * XREFs of _lambda_3ea8fc1bc8b4013abb914a693e1ae6cb_::_lambda_invoker_cdecl_ @ 0x18007BCF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x18007AD94 (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 *     ?IsActive@CMmcssTask@@QEBA_NXZ @ 0x18008AA50 (-IsActive@CMmcssTask@@QEBA_NXZ.c)
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x18008ACCC (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall lambda_3ea8fc1bc8b4013abb914a693e1ae6cb_::_lambda_invoker_cdecl_(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // r8
  int v3; // eax
  unsigned int v4; // ecx

  if ( CMmcssTask::IsActive((CMmcssTask *)(*(_QWORD *)(a1 + 16) + 144LL)) )
  {
    v3 = CMmcssTask::Apply(v1, 1);
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x116u);
  }
  else
  {
    CMmcssTask::Revert((CMmcssTask *)v1);
  }
  return 0LL;
}
