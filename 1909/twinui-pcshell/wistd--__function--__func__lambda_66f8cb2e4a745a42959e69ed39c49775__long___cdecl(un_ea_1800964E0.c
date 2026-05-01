/*
 * XREFs of wistd::__function::__func__lambda_66f8cb2e4a745a42959e69ed39c49775__long___cdecl(unsigned_int_unsigned___int64___int64)_::__clone @ 0x1800964E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0WeakRef@WRL@Microsoft@@QEAA@AEBV?$ComPtr@UIWeakReference@@@12@@Z @ 0x180085008 (--0WeakRef@WRL@Microsoft@@QEAA@AEBV-$ComPtr@UIWeakReference@@@12@@Z.c)
 */

__int64 __fastcall wistd::__function::__func__lambda_66f8cb2e4a745a42959e69ed39c49775__long___cdecl_unsigned_int_unsigned___int64___int64__::__clone(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rdi
  _QWORD *v3; // rbx
  __int64 result; // rax

  v2 = a1 + 8;
  v3 = a2 + 1;
  *a2 = &off_18044C5A0;
  Microsoft::WRL::WeakRef::WeakRef(a2 + 1, (__int64 *)(a1 + 8));
  result = *(_QWORD *)(v2 + 8);
  v3[1] = result;
  *((_OWORD *)v3 + 1) = *(_OWORD *)(v2 + 16);
  return result;
}
