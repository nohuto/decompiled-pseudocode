/*
 * XREFs of _lambda_58dd855ded0ce1927ff06923159bc2eb_::_lambda_invoker_cdecl_ @ 0x1C01496B0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 */

void __fastcall lambda_58dd855ded0ce1927ff06923159bc2eb_::_lambda_invoker_cdecl_(_QWORD **a1)
{
  _QWORD *v1; // rdx

  v1 = *a1;
  if ( *a1 )
  {
    for ( *a1 = (_QWORD *)*v1; ; *a1 = (_QWORD *)*v1 )
    {
      Win32FreePool((__int64)(v1 - 2));
      v1 = *a1;
      if ( !*a1 )
        break;
    }
  }
}
