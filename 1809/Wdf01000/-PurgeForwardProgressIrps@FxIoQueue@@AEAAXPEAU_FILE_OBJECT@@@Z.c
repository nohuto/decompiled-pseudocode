/*
 * XREFs of ?PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z @ 0x1C00790B8
 * Callers:
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0016430 (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 * Callees:
 *     ?GetForwardProgressIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@PEAU_FILE_OBJECT@@@Z @ 0x1C0018AA4 (-GetForwardProgressIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@PEAU_FILE_OBJECT@@@Z.c)
 *     ?CancelIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0019CCC (-CancelIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@@Z.c)
 */

void __fastcall FxIoQueue::PurgeForwardProgressIrps(FxIoQueue *this, _FILE_OBJECT *FileObject)
{
  FxIoQueue *v2; // rcx
  _LIST_ENTRY cleanupList; // [rsp+20h] [rbp-18h] BYREF

  cleanupList.Blink = &cleanupList;
  cleanupList.Flink = &cleanupList;
  FxIoQueue::GetForwardProgressIrps(this, &cleanupList, FileObject);
  FxIoQueue::CancelIrps(v2, &cleanupList);
}
