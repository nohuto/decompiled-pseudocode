/*
 * XREFs of ObDereferenceObjectDeferDeleteWithTag @ 0x140065650
 * Callers:
 *     CcInitializeCacheMapEx @ 0x14000D700 (CcInitializeCacheMapEx.c)
 *     PspRevertContainerImpersonation @ 0x140036810 (PspRevertContainerImpersonation.c)
 *     KiAbProcessContextSwitch @ 0x140042670 (KiAbProcessContextSwitch.c)
 *     ExFreeHeapPool @ 0x140064DB0 (ExFreeHeapPool.c)
 *     KiAbProcessThreadLocks @ 0x14009E090 (KiAbProcessThreadLocks.c)
 *     FsRtlpClearOwner @ 0x1400B73BC (FsRtlpClearOwner.c)
 *     ExReinitializeResourceLite @ 0x1400B7920 (ExReinitializeResourceLite.c)
 *     IopCallDriverReference @ 0x1400BAD70 (IopCallDriverReference.c)
 *     ExReturnPoolQuota @ 0x14011CABC (ExReturnPoolQuota.c)
 *     IopBoostThreadCallback @ 0x140135B90 (IopBoostThreadCallback.c)
 *     CcChangeBackingFileObject @ 0x14027BE24 (CcChangeBackingFileObject.c)
 *     KiMonitorCacheErrata @ 0x1402B1790 (KiMonitorCacheErrata.c)
 *     PspChargeProcessWakeCounter @ 0x1405E3900 (PspChargeProcessWakeCounter.c)
 *     PspProcessDelete @ 0x140670B40 (PspProcessDelete.c)
 *     VrpFreeKeyContext @ 0x140841D50 (VrpFreeKeyContext.c)
 *     VrpDestroyNamespaceNode @ 0x140843A54 (VrpDestroyNamespaceNode.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x140128484 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1402ED6EC (ObpPushStackInfo.c)
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
