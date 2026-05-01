/*
 * XREFs of _lambda_ab0326ecea74eabee98d06838221c40f_::_lambda_ab0326ecea74eabee98d06838221c40f_ @ 0x18009256C
 * Callers:
 *     ?OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1802B8D70 (-OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 * Callees:
 *     ??0WeakRef@WRL@Microsoft@@QEAA@AEBV?$ComPtr@UIWeakReference@@@12@@Z @ 0x18008033C (--0WeakRef@WRL@Microsoft@@QEAA@AEBV-$ComPtr@UIWeakReference@@@12@@Z.c)
 */

__int64 *__fastcall lambda_ab0326ecea74eabee98d06838221c40f_::_lambda_ab0326ecea74eabee98d06838221c40f_(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5)
{
  __int64 *result; // rax

  Microsoft::WRL::WeakRef::WeakRef(a1, a2);
  a1[1] = *a3;
  a1[2] = *a4;
  result = a1;
  a1[3] = *a5;
  return result;
}
