/*
 * XREFs of ObDereferenceObjectDeferDeleteWithTag @ 0x1400656F0
 * Callers:
 *     CcInitializeCacheMapEx @ 0x14000D930 (CcInitializeCacheMapEx.c)
 *     PspRevertContainerImpersonation @ 0x140036C00 (PspRevertContainerImpersonation.c)
 *     KiAbProcessContextSwitch @ 0x1400423B0 (KiAbProcessContextSwitch.c)
 *     ExFreeHeapPool @ 0x140064E50 (ExFreeHeapPool.c)
 *     IopCallDriverReference @ 0x14009ABE0 (IopCallDriverReference.c)
 *     KiAbProcessThreadLocks @ 0x1400C5ED0 (KiAbProcessThreadLocks.c)
 *     ExReinitializeResourceLite @ 0x140100860 (ExReinitializeResourceLite.c)
 *     FsRtlpClearOwner @ 0x140103E9C (FsRtlpClearOwner.c)
 *     ExReturnPoolQuota @ 0x14011CFDC (ExReturnPoolQuota.c)
 *     IopBoostThreadCallback @ 0x140136530 (IopBoostThreadCallback.c)
 *     CcChangeBackingFileObject @ 0x14027BB84 (CcChangeBackingFileObject.c)
 *     KiMonitorCacheErrata @ 0x1402B14F0 (KiMonitorCacheErrata.c)
 *     PspChargeProcessWakeCounter @ 0x1405E40D0 (PspChargeProcessWakeCounter.c)
 *     PspProcessDelete @ 0x140651970 (PspProcessDelete.c)
 *     VrpFreeKeyContext @ 0x1408413B0 (VrpFreeKeyContext.c)
 *     VrpDestroyNamespaceNode @ 0x1408430C8 (VrpDestroyNamespaceNode.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x140128EA4 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1402ED44C (ObpPushStackInfo.c)
 */

void __stdcall ObDereferenceObjectDeferDeleteWithTag(PVOID Object, ULONG Tag)
{
  signed __int64 v3; // rax
  bool v4; // cc
  signed __int64 BugCheckParameter4; // rax

  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)Object - 48);
  v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)Object - 6, 0xFFFFFFFFFFFFFFFFuLL);
  v4 = v3 <= 1;
  BugCheckParameter4 = v3 - 1;
  if ( v4 )
  {
    if ( *((_QWORD *)Object - 5) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)],
        (ULONG_PTR)Object,
        3uLL,
        *((_QWORD *)Object - 5));
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 4uLL, BugCheckParameter4);
    ObpDeferObjectDeletion((char *)Object - 48);
  }
}
