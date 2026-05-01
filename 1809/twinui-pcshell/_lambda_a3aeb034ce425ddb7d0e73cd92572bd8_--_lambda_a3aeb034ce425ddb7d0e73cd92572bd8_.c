/*
 * XREFs of _lambda_a3aeb034ce425ddb7d0e73cd92572bd8_::_lambda_a3aeb034ce425ddb7d0e73cd92572bd8_ @ 0x18023CCF0
 * Callers:
 *     ?v_SetDesiredNavigationLevel@UAPViewWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18023D740 (-v_SetDesiredNavigationLevel@UAPViewWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Int.c)
 * Callees:
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1800E6514 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

__int64 *__fastcall lambda_a3aeb034ce425ddb7d0e73cd92572bd8_::_lambda_a3aeb034ce425ddb7d0e73cd92572bd8_(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        __int64 *a4,
        __int64 *a5)
{
  __int64 v5; // r11
  __int64 *v8; // r10
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  __int64 *result; // rax

  v5 = *a2;
  *a1 = *a2;
  v8 = a1;
  if ( v5 )
  {
    v9 = *(_QWORD *)(v5 + 560);
    while ( v9 >= 0 )
    {
      if ( (_DWORD)v9 != 0x7FFFFFFF )
      {
        v10 = v9;
        v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 560), v9 + 1, v9);
        if ( v10 != v9 )
          continue;
      }
      goto LABEL_8;
    }
    Microsoft::WRL::Details::StrongReference::IncrementStrongReference(
      (Microsoft::WRL::Details *)(2 * v9 + 16),
      (volatile int *)((unsigned __int64)v9 >> 63));
  }
LABEL_8:
  v8[2] = *a4;
  v8[1] = a3;
  result = v8;
  v8[3] = *a5;
  return result;
}
