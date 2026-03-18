/*
 * XREFs of EditionIsPointerQueuedMessageCoalescable @ 0x1C01CD730
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C0025620 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     ?IsPointerQueuedMessageCoalescable@@YAHPEAUtagQ@@PEAUtagQMSG@@KK_KK@Z @ 0x1C01CD63C (-IsPointerQueuedMessageCoalescable@@YAHPEAUtagQ@@PEAUtagQMSG@@KK_KK@Z.c)
 */

__int64 __fastcall EditionIsPointerQueuedMessageCoalescable(
        __int64 a1,
        struct tagQMSG *a2,
        int a3,
        int a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  struct tagQ *v9; // rbx
  __int64 v11; // [rsp+30h] [rbp-28h] BYREF

  v9 = *(struct tagQ **)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 16LL) + 424LL);
  CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>((__int64)&v11, (__int64)v9);
  return IsPointerQueuedMessageCoalescable(v9, a2, a3, a4, a5, a6);
}
