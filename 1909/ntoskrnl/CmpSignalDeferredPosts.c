/*
 * XREFs of CmpSignalDeferredPosts @ 0x140603EF0
 * Callers:
 *     CmpDeleteKeyObject @ 0x140603C70 (CmpDeleteKeyObject.c)
 *     CmSetValueKey @ 0x140630930 (CmSetValueKey.c)
 *     CmpPostNotify @ 0x140631680 (CmpPostNotify.c)
 *     CmpTransMgrCommitUoW @ 0x140636C6C (CmpTransMgrCommitUoW.c)
 *     CmDeleteKey @ 0x14063B4FC (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x14063CCDC (CmDeleteValueKey.c)
 *     CmpSetKeySecurity @ 0x1406409F0 (CmpSetKeySecurity.c)
 *     CmpCloseKeyObject @ 0x1406B6B30 (CmpCloseKeyObject.c)
 *     CmpPerformUnloadKey @ 0x1406B91E4 (CmpPerformUnloadKey.c)
 *     CmpProcessLightWeightUOW @ 0x1406E3990 (CmpProcessLightWeightUOW.c)
 *     CmRestoreKey @ 0x140839F74 (CmRestoreKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     CmpFreePostBlock @ 0x1406D113C (CmpFreePostBlock.c)
 */

_QWORD *__fastcall CmpSignalDeferredPosts(_QWORD **a1)
{
  _QWORD *result; // rax
  _QWORD *v3; // rcx
  PVOID **v4; // rdi
  PVOID *v5; // r9
  struct _KEVENT *v6; // rcx
  struct _WORK_QUEUE_ITEM *v7; // rcx

  while ( 1 )
  {
    result = *a1;
    if ( *a1 == a1 )
      return result;
    if ( (_QWORD **)result[1] != a1 || (v3 = (_QWORD *)*result, *(_QWORD **)(*result + 8LL) != result) )
      __fastfail(3u);
    *a1 = v3;
    v4 = (PVOID **)(result - 2);
    v3[1] = a1;
    v5 = (PVOID *)result[6];
    if ( (unsigned __int16)*((_DWORD *)result + 10) != 3 )
    {
      v6 = (struct _KEVENT *)*v5;
LABEL_6:
      KeSetEvent(v6, 0, 0);
      ObfDereferenceObject(*v4[8]);
      goto LABEL_7;
    }
    v7 = (struct _WORK_QUEUE_ITEM *)v5[1];
    if ( v7 )
    {
      ExQueueWorkItem(v7, *((WORK_QUEUE_TYPE *)v5 + 4));
      v5 = v4[8];
    }
    v6 = (struct _KEVENT *)*v5;
    if ( *v5 )
      goto LABEL_6;
LABEL_7:
    CmpFreePostBlock(v4);
  }
}
