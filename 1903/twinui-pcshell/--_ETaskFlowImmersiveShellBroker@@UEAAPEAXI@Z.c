/*
 * XREFs of ??_ETaskFlowImmersiveShellBroker@@UEAAPEAXI@Z @ 0x1801F0CEC
 * Callers:
 *     ??_ETaskFlowImmersiveShellBroker@@WFA@EAAPEAXI@Z @ 0x1800B6370 (--_ETaskFlowImmersiveShellBroker@@WFA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TaskFlowImmersiveShellBroker@@UEAA@XZ @ 0x1801EFFD8 (--1TaskFlowImmersiveShellBroker@@UEAA@XZ.c)
 */

TaskFlowImmersiveShellBroker *__fastcall TaskFlowImmersiveShellBroker::`vector deleting destructor'(
        TaskFlowImmersiveShellBroker *this,
        char a2)
{
  TaskFlowImmersiveShellBroker::~TaskFlowImmersiveShellBroker(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x148);
  return this;
}
