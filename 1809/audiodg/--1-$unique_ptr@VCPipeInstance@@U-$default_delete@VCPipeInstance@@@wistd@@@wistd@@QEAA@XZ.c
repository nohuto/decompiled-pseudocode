/*
 * XREFs of ??1?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@QEAA@XZ @ 0x14003C26C
 * Callers:
 *     _CAudioDeviceGraph::Initialize_::_1_::dtor$4 @ 0x14001F7B0 (_CAudioDeviceGraph--Initialize_--_1_--dtor$4.c)
 * Callees:
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x1400318CC (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 */

LPVOID *__fastcall wistd::unique_ptr<CPipeInstance,wistd::default_delete<CPipeInstance>>::~unique_ptr<CPipeInstance,wistd::default_delete<CPipeInstance>>(
        LPVOID **a1)
{
  LPVOID *v1; // rcx
  LPVOID *result; // rax

  v1 = *a1;
  if ( v1 )
    return CPipeInstance::`scalar deleting destructor'(v1);
  return result;
}
