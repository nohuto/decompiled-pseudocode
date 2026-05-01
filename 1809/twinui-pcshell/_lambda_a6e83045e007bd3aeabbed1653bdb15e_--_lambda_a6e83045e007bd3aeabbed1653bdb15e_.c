/*
 * XREFs of _lambda_a6e83045e007bd3aeabbed1653bdb15e_::_lambda_a6e83045e007bd3aeabbed1653bdb15e_ @ 0x180092518
 * Callers:
 *     ?OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x1802B8B98 (-OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@In.c)
 * Callees:
 *     ??0WeakRef@WRL@Microsoft@@QEAA@AEBV?$ComPtr@UIWeakReference@@@12@@Z @ 0x18008033C (--0WeakRef@WRL@Microsoft@@QEAA@AEBV-$ComPtr@UIWeakReference@@@12@@Z.c)
 */

__int64 __fastcall lambda_a6e83045e007bd3aeabbed1653bdb15e_::_lambda_a6e83045e007bd3aeabbed1653bdb15e_(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3,
        _QWORD *a4,
        _BYTE *a5,
        _BYTE *a6)
{
  __int64 result; // rax

  *(_QWORD *)a1 = *a2;
  Microsoft::WRL::WeakRef::WeakRef((__int64 *)(a1 + 8), a3);
  *(_QWORD *)(a1 + 16) = *a4;
  *(_BYTE *)(a1 + 24) = *a5;
  result = a1;
  *(_BYTE *)(a1 + 25) = *a6;
  return result;
}
