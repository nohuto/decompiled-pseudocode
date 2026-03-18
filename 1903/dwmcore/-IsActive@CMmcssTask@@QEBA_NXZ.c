/*
 * XREFs of ?IsActive@CMmcssTask@@QEBA_NXZ @ 0x1800D0B88
 * Callers:
 *     ?UpdateMMCSSTask@CMit@@AEAAJXZ @ 0x1800D0AAC (-UpdateMMCSSTask@CMit@@AEAAJXZ.c)
 *     ?Clone@CMmcssTask@@QEBAJPEAV1@@Z @ 0x1800D0AF4 (-Clone@CMmcssTask@@QEBAJPEAV1@@Z.c)
 *     _lambda_21d74d5478775f948634749288fbae48_::_lambda_invoker_cdecl_ @ 0x1800D9310 (_lambda_21d74d5478775f948634749288fbae48_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     <none>
 */

char __fastcall CMmcssTask::IsActive(CMmcssTask *this)
{
  __int64 v1; // rdx
  char result; // al

  v1 = *((_QWORD *)this + 5);
  result = 0;
  if ( v1 )
  {
    if ( *(_QWORD *)(v1 + 136) )
      return 1;
  }
  return result;
}
