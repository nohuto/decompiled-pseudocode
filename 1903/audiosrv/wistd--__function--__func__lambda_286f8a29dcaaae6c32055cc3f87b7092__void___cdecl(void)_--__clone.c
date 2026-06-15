/*
 * XREFs of wistd::__function::__func__lambda_286f8a29dcaaae6c32055cc3f87b7092__void___cdecl(void)_::__clone @ 0x18006B690
 * Callers:
 *     <none>
 * Callees:
 *     ??0WeakRef@WRL@Microsoft@@QEAA@AEBV012@@Z @ 0x1800D5894 (--0WeakRef@WRL@Microsoft@@QEAA@AEBV012@@Z.c)
 */

__int64 __fastcall wistd::__function::__func__lambda_286f8a29dcaaae6c32055cc3f87b7092__void___cdecl_void__::__clone(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rdi
  _QWORD *v3; // rbx
  __int64 result; // rax

  v2 = a1 + 8;
  v3 = a2 + 1;
  *a2 = &off_180153A00;
  Microsoft::WRL::WeakRef::WeakRef(
    (Microsoft::WRL::WeakRef *)(a2 + 1),
    (const struct Microsoft::WRL::WeakRef *)(a1 + 8));
  result = *(_QWORD *)(v2 + 8);
  v3[1] = result;
  return result;
}
