/*
 * XREFs of ??1?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@QEAA@XZ @ 0x14003704C
 * Callers:
 *     _CAudioDeviceGraph::Initialize_::_1_::dtor$4 @ 0x14001AA94 (_CAudioDeviceGraph--Initialize_--_1_--dtor$4.c)
 * Callees:
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x14002A3EC (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 */

CPipeInstance *__fastcall wistd::unique_ptr<CPipeInstance,wistd::default_delete<CPipeInstance>>::~unique_ptr<CPipeInstance,wistd::default_delete<CPipeInstance>>(
        CPipeInstance **a1)
{
  CPipeInstance *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return CPipeInstance::`scalar deleting destructor'(result);
  return result;
}
