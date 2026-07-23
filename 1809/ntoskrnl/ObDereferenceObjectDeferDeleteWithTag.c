/*
 * XREFs of ObDereferenceObjectDeferDeleteWithTag @ 0x1400BF8F0
 * Callers:
 *     KiAbProcessThreadLocks @ 0x140023C40 (KiAbProcessThreadLocks.c)
 *     KiAbProcessContextSwitch @ 0x140057DC0 (KiAbProcessContextSwitch.c)
 *     PspRevertContainerImpersonation @ 0x14005B390 (PspRevertContainerImpersonation.c)
 *     PspJobDelete @ 0x14008FD50 (PspJobDelete.c)
 *     IopDeleteFileObjectExtension @ 0x140092090 (IopDeleteFileObjectExtension.c)
 *     CcInitializeCacheMapEx @ 0x1400ABF90 (CcInitializeCacheMapEx.c)
 *     IopCallDriverReference @ 0x1400B6AF0 (IopCallDriverReference.c)
 *     ExReinitializeResourceLite @ 0x14010A190 (ExReinitializeResourceLite.c)
 *     ExReturnPoolQuota @ 0x14011F398 (ExReturnPoolQuota.c)
 *     FsRtlpClearOwner @ 0x14012180C (FsRtlpClearOwner.c)
 *     IopBoostThreadCallback @ 0x140134520 (IopBoostThreadCallback.c)
 *     CcChangeBackingFileObject @ 0x140269054 (CcChangeBackingFileObject.c)
 *     KiMonitorCacheErrata @ 0x14029A680 (KiMonitorCacheErrata.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PspProcessDelete @ 0x140608590 (PspProcessDelete.c)
 *     PspChargeProcessWakeCounter @ 0x140637C90 (PspChargeProcessWakeCounter.c)
 *     VrpFreeKeyContext @ 0x140809690 (VrpFreeKeyContext.c)
 *     VrpDestroyNamespaceNode @ 0x14080B39C (VrpDestroyNamespaceNode.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x140125EA0 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1402D3258 (ObpPushStackInfo.c)
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
