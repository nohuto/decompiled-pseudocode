/*
 * XREFs of MiFreeInPageSupportBlock @ 0x140091C70
 * Callers:
 *     MiFinishHardFault @ 0x140090EC0 (MiFinishHardFault.c)
 *     MiPfPutPagesInTransition @ 0x1400A4A10 (MiPfPutPagesInTransition.c)
 *     MiResolveMappedFileFault @ 0x1400A5990 (MiResolveMappedFileFault.c)
 *     MiAllocateInPageSupport @ 0x1400A6124 (MiAllocateInPageSupport.c)
 *     MiResolveTransitionFault @ 0x1400D23E0 (MiResolveTransitionFault.c)
 *     MiHandleTransitionFault @ 0x1400D3150 (MiHandleTransitionFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x140100F44 (MiWaitForCollidedFaultComplete.c)
 *     MiPrivateFixup @ 0x140101BD0 (MiPrivateFixup.c)
 *     MiResolvePageFileFault @ 0x140163A68 (MiResolvePageFileFault.c)
 *     MiFaultGetFileExtents @ 0x1402D2608 (MiFaultGetFileExtents.c)
 *     MmPrefetchPagesEx @ 0x14066D9A8 (MmPrefetchPagesEx.c)
 *     MiPfAllocateMdls @ 0x14066DD10 (MiPfAllocateMdls.c)
 *     MiGetReadyInPageBlock @ 0x14088B27C (MiGetReadyInPageBlock.c)
 * Callees:
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CBA30 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeInPageSupportBlock(char *P)
{
  char *v2; // rcx
  _SLIST_HEADER *v3; // rcx

  if ( *((struct _KTHREAD **)P + 19) == KeGetCurrentThread() && *((_QWORD *)P + 27) )
    KeAbPostRelease((ULONG_PTR)P);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 44, 0xFFFFFFFF) == 1 )
  {
    v2 = (char *)*((_QWORD *)P + 32);
    if ( v2 && v2 != P + 272 )
      ExFreePoolWithTag(v2, 0);
    v3 = (_SLIST_HEADER *)&MiState[2 * (((unsigned int)~*((_DWORD *)P + 48) >> 6) & 1) + 1128];
    if ( (unsigned int)LOWORD(v3->Alignment) >= *((unsigned __int8 *)&MiState[1132]
                                                + (((unsigned int)~*((_DWORD *)P + 48) >> 6) & 1)) )
      ExFreePoolWithTag(P, 0);
    else
      RtlpInterlockedPushEntrySList(v3, (PSLIST_ENTRY)P);
  }
}
