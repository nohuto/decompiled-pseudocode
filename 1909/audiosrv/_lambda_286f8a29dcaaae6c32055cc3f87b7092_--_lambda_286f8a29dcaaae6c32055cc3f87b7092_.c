/*
 * XREFs of _lambda_286f8a29dcaaae6c32055cc3f87b7092_::_lambda_286f8a29dcaaae6c32055cc3f87b7092_ @ 0x18006AE60
 * Callers:
 *     ?RegisterForShellWnfNotifications@AtmosCheck@@AEAAJXZ @ 0x18013FB88 (-RegisterForShellWnfNotifications@AtmosCheck@@AEAAJXZ.c)
 * Callees:
 *     ??0WeakRef@WRL@Microsoft@@QEAA@AEBV012@@Z @ 0x1800D5444 (--0WeakRef@WRL@Microsoft@@QEAA@AEBV012@@Z.c)
 */

Microsoft::WRL::WeakRef *__fastcall lambda_286f8a29dcaaae6c32055cc3f87b7092_::_lambda_286f8a29dcaaae6c32055cc3f87b7092_(
        Microsoft::WRL::WeakRef *a1,
        const struct Microsoft::WRL::WeakRef *a2,
        __int64 a3)
{
  Microsoft::WRL::WeakRef *result; // rax

  Microsoft::WRL::WeakRef::WeakRef(a1, a2);
  result = a1;
  *((_QWORD *)a1 + 1) = a3;
  return result;
}
