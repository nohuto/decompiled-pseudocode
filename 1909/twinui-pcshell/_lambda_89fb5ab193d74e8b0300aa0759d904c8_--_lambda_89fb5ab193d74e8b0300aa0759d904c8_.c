/*
 * XREFs of _lambda_89fb5ab193d74e8b0300aa0759d904c8_::_lambda_89fb5ab193d74e8b0300aa0759d904c8_ @ 0x1800A16A4
 * Callers:
 *     PenWorkspaceAppInstallBroker::QueueWhiteboardInstallInternal$_ResumeCoro$2 @ 0x1800A2960 (PenWorkspaceAppInstallBroker--QueueWhiteboardInstallInternal$_ResumeCoro$2.c)
 * Callees:
 *     ??0WeakRef@WRL@Microsoft@@QEAA@AEBV?$ComPtr@UIWeakReference@@@12@@Z @ 0x180085008 (--0WeakRef@WRL@Microsoft@@QEAA@AEBV-$ComPtr@UIWeakReference@@@12@@Z.c)
 */

_QWORD *__fastcall lambda_89fb5ab193d74e8b0300aa0759d904c8_::_lambda_89fb5ab193d74e8b0300aa0759d904c8_(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3)
{
  *a1 = a2;
  Microsoft::WRL::WeakRef::WeakRef(a1 + 1, a3);
  return a1;
}
