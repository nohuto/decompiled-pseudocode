/*
 * XREFs of ObDereferenceObjectDeferDeleteWithTag @ 0x1400BF9B0
 * Callers:
 *     KiAbProcessThreadLocks @ 0x140023C40 (KiAbProcessThreadLocks.c)
 *     KiAbProcessContextSwitch @ 0x140057DC0 (KiAbProcessContextSwitch.c)
 *     PspRevertContainerImpersonation @ 0x14005B390 (PspRevertContainerImpersonation.c)
 *     PspJobDelete @ 0x14008FE10 (PspJobDelete.c)
 *     IopDeleteFileObjectExtension @ 0x140092150 (IopDeleteFileObjectExtension.c)
 *     CcInitializeCacheMapEx @ 0x1400AC050 (CcInitializeCacheMapEx.c)
 *     IopCallDriverReference @ 0x1400B6BB0 (IopCallDriverReference.c)
 *     ExReinitializeResourceLite @ 0x14010A110 (ExReinitializeResourceLite.c)
 *     ExReturnPoolQuota @ 0x14011F328 (ExReturnPoolQuota.c)
 *     FsRtlpClearOwner @ 0x14012173C (FsRtlpClearOwner.c)
 *     IopBoostThreadCallback @ 0x140134450 (IopBoostThreadCallback.c)
 *     CcChangeBackingFileObject @ 0x140268E64 (CcChangeBackingFileObject.c)
 *     KiMonitorCacheErrata @ 0x14029A490 (KiMonitorCacheErrata.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     PspProcessDelete @ 0x140607590 (PspProcessDelete.c)
 *     PspChargeProcessWakeCounter @ 0x140636C70 (PspChargeProcessWakeCounter.c)
 *     VrpFreeKeyContext @ 0x140808490 (VrpFreeKeyContext.c)
 *     VrpDestroyNamespaceNode @ 0x14080A19C (VrpDestroyNamespaceNode.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x140125DD0 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1401BBBC0 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1402D3068 (ObpPushStackInfo.c)
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
