/*
 * XREFs of ??IWeakRef@WRL@Microsoft@@QEAA?AV?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@12@XZ @ 0x18016D34C
 * Callers:
 *     PenWorkspaceAppInstallBroker::QueueWhiteboardInstallInternal$_ResumeCoro$2 @ 0x1800A2960 (PenWorkspaceAppInstallBroker--QueueWhiteboardInstallInternal$_ResumeCoro$2.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall Microsoft::WRL::WeakRef::operator&(__int64 a1, _QWORD *a2)
{
  *a2 = a1;
  return a2;
}
