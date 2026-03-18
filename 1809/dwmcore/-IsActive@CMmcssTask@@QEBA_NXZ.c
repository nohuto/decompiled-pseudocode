/*
 * XREFs of ?IsActive@CMmcssTask@@QEBA_NXZ @ 0x18008AA50
 * Callers:
 *     _lambda_3ea8fc1bc8b4013abb914a693e1ae6cb_::_lambda_invoker_cdecl_ @ 0x18007BCF0 (_lambda_3ea8fc1bc8b4013abb914a693e1ae6cb_--_lambda_invoker_cdecl_.c)
 *     ?UpdateMMCSSTask@CMit@@AEAAJXZ @ 0x18008A84C (-UpdateMMCSSTask@CMit@@AEAAJXZ.c)
 *     ?Clone@CMmcssTask@@QEBAJPEAV1@@Z @ 0x18008A9BC (-Clone@CMmcssTask@@QEBAJPEAV1@@Z.c)
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
