/*
 * XREFs of MiWriteValidPteNewProtection @ 0x14005E7F0
 * Callers:
 *     MiUnlockNestedPageTableWritePte @ 0x14005E2E0 (MiUnlockNestedPageTableWritePte.c)
 *     MmSetAddressRangeModifiedEx @ 0x14005E4D0 (MmSetAddressRangeModifiedEx.c)
 *     MiRevokeExecutePte @ 0x14008D910 (MiRevokeExecutePte.c)
 *     MiStealPage @ 0x1400A0834 (MiStealPage.c)
 *     MiValidFault @ 0x1400C7190 (MiValidFault.c)
 *     MiMarkPteDirty @ 0x1400D8DA0 (MiMarkPteDirty.c)
 *     MiActOnPte @ 0x1400DE740 (MiActOnPte.c)
 *     MiTrimSharedPageFromViews @ 0x1400E1260 (MiTrimSharedPageFromViews.c)
 *     MiFlushDirtyBitsToPfn @ 0x1400EC148 (MiFlushDirtyBitsToPfn.c)
 *     MiSetSystemCodeProtection @ 0x1400F6CD8 (MiSetSystemCodeProtection.c)
 *     MiReplacePageTablePage @ 0x140121430 (MiReplacePageTablePage.c)
 *     MmProtectPool @ 0x140124AE4 (MmProtectPool.c)
 *     MiDirtySystemCachePte @ 0x14012A16C (MiDirtySystemCachePte.c)
 *     MmSetPageProtection @ 0x14012E5D0 (MmSetPageProtection.c)
 *     MiMakeCombineCandidateClean @ 0x14013E608 (MiMakeCombineCandidateClean.c)
 *     MiDemoteCombinedPte @ 0x140141270 (MiDemoteCombinedPte.c)
 *     MiPerformSafePdeWrite @ 0x14015CC54 (MiPerformSafePdeWrite.c)
 *     MmProtectMdlSystemAddress @ 0x1402C15B0 (MmProtectMdlSystemAddress.c)
 *     MiDbgCopyMemoryTarget @ 0x1402D0BB0 (MiDbgCopyMemoryTarget.c)
 *     MiLargePageFault @ 0x1402D2D08 (MiLargePageFault.c)
 *     MiDecommitHardwareEnclavePages @ 0x1402D3B20 (MiDecommitHardwareEnclavePages.c)
 *     MiWriteEnclavePte @ 0x1402D5428 (MiWriteEnclavePte.c)
 *     MiProtectAweRegion @ 0x1402D7184 (MiProtectAweRegion.c)
 *     MiBuildForkPte @ 0x1402E1E60 (MiBuildForkPte.c)
 *     MiMarkBootKernelStack @ 0x1409EE278 (MiMarkBootKernelStack.c)
 *     MxCreatePfns @ 0x1409FBFF4 (MxCreatePfns.c)
 *     MiProtectSharedUserPage @ 0x140A228C0 (MiProtectSharedUserPage.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 */

struct _KTHREAD *__fastcall MiWriteValidPteNewProtection(unsigned __int64 a1)
{
  struct _KTHREAD *result; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  _QWORD *v4; // r9

  result = (struct _KTHREAD *)MiPteInShadowRange(a1);
  if ( !(_DWORD)result )
  {
LABEL_2:
    *v4 = v2;
    return result;
  }
  if ( !(unsigned int)MiPteHasShadow(v3) )
  {
    result = KeGetCurrentThread();
    if ( (result->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 && (v2 & 1) != 0 )
    {
      result = (struct _KTHREAD *)0x8000000000000000LL;
      v2 |= 0x8000000000000000uLL;
    }
    goto LABEL_2;
  }
  if ( !HIBYTE(word_140465BEC) && (v2 & 1) != 0 )
    v2 |= 0x8000000000000000uLL;
  *v4 = v2;
  return (struct _KTHREAD *)MiWritePteShadow(v4, v2);
}
