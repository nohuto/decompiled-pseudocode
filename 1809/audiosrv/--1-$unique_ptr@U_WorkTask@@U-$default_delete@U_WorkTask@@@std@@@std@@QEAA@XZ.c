/*
 * XREFs of ??1?$unique_ptr@U_WorkTask@@U?$default_delete@U_WorkTask@@@std@@@std@@QEAA@XZ @ 0x1800E003C
 * Callers:
 *     _CBaseStreamGroupProxy::GetProcessSubmix_::_1_::dtor$90 @ 0x18006F020 (_CBaseStreamGroupProxy--GetProcessSubmix_--_1_--dtor$90.c)
 *     _CAudioResourceManager::DestroyStream_::_1_::dtor$37 @ 0x18006F200 (_CAudioResourceManager--DestroyStream_--_1_--dtor$37.c)
 *     _CSerialWorkQueue::QueueWorkItem_::_1_::dtor$2 @ 0x1800E0C05 (_CSerialWorkQueue--QueueWorkItem_--_1_--dtor$2.c)
 * Callees:
 *     ??_G_WorkTask@@QEAAPEAXI@Z @ 0x1800E025C (--_G_WorkTask@@QEAAPEAXI@Z.c)
 */

void *__fastcall std::unique_ptr<_WorkTask>::~unique_ptr<_WorkTask>(_WorkTask **a1, unsigned int a2)
{
  _WorkTask *v2; // rcx
  void *result; // rax

  v2 = *a1;
  if ( v2 )
    return _WorkTask::`scalar deleting destructor'(v2, a2);
  return result;
}
