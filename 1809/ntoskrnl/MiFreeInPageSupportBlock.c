/*
 * XREFs of MiFreeInPageSupportBlock @ 0x14002DC80
 * Callers:
 *     MiWaitForCollidedFaultComplete @ 0x140003F00 (MiWaitForCollidedFaultComplete.c)
 *     MiResolveMappedFileFault @ 0x14002BE50 (MiResolveMappedFileFault.c)
 *     MiAllocateInPageSupport @ 0x14002C548 (MiAllocateInPageSupport.c)
 *     MiFinishHardFault @ 0x14002E010 (MiFinishHardFault.c)
 *     MiResolveTransitionFault @ 0x14003AC00 (MiResolveTransitionFault.c)
 *     MiHandleTransitionFault @ 0x14003B680 (MiHandleTransitionFault.c)
 *     MiPfPutPagesInTransition @ 0x140064E70 (MiPfPutPagesInTransition.c)
 *     MiPrivateFixup @ 0x140125E40 (MiPrivateFixup.c)
 *     MiResolvePageFileFault @ 0x140154B44 (MiResolvePageFileFault.c)
 *     MiFaultGetFileExtents @ 0x1402BBE04 (MiFaultGetFileExtents.c)
 *     MmPrefetchPagesEx @ 0x140662438 (MmPrefetchPagesEx.c)
 *     MiPfAllocateMdls @ 0x1406982A0 (MiPfAllocateMdls.c)
 *     MiGetReadyInPageBlock @ 0x14084F2EC (MiGetReadyInPageBlock.c)
 * Callees:
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401C5410 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeInPageSupportBlock(char *P)
{
  char *v2; // rcx
  union _SLIST_HEADER *v3; // rcx

  if ( *((struct _KTHREAD **)P + 19) == KeGetCurrentThread() && *((_QWORD *)P + 27) )
    KeAbPostRelease((ULONG_PTR)P);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 44, 0xFFFFFFFF) == 1 )
  {
    v2 = (char *)*((_QWORD *)P + 32);
    if ( v2 && v2 != P + 272 )
      ExFreePoolWithTag(v2, 0);
    v3 = (union _SLIST_HEADER *)&MiState[2 * (((unsigned int)~*((_DWORD *)P + 48) >> 6) & 1) + 1128];
    if ( (unsigned int)LOWORD(v3->Alignment) >= *((unsigned __int8 *)&MiState[1132]
                                                + (((unsigned int)~*((_DWORD *)P + 48) >> 6) & 1)) )
      ExFreePoolWithTag(P, 0);
    else
      RtlpInterlockedPushEntrySList(v3, (PSLIST_ENTRY)P);
  }
}
