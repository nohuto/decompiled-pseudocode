/*
 * XREFs of ??1?$CAutoMemPtr@U?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@@@QEAA@XZ @ 0x180287F48
 * Callers:
 *     _ViewEventDispatcher::QueuePendingActivation_::_1_::dtor$0 @ 0x18028C953 (_ViewEventDispatcher--QueuePendingActivation_--_1_--dtor$0.c)
 *     _ViewEventDispatcher::_FlushRemovedPendingActivations_::_1_::dtor$0 @ 0x180293858 (_ViewEventDispatcher--_FlushRemovedPendingActivations_--_1_--dtor$0.c)
 * Callees:
 *     ??_G?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@QEAAPEAXI@Z @ 0x180289324 (--_G-$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@QEAAPEAXI@Z.c)
 */

void *__fastcall CAutoMemPtr<CLinkedNode<ViewEventDispatcher::PendingActivationData>>::~CAutoMemPtr<CLinkedNode<ViewEventDispatcher::PendingActivationData>>(
        void **a1)
{
  void *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return (void *)CLinkedNode<ViewEventDispatcher::PendingActivationData>::`scalar deleting destructor'(result);
  return result;
}
