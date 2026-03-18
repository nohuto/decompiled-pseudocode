/*
 * XREFs of MiWriteValidPteNewProtection @ 0x14005E890
 * Callers:
 *     MiUnlockNestedPageTableWritePte @ 0x14005E380 (MiUnlockNestedPageTableWritePte.c)
 *     MmSetAddressRangeModifiedEx @ 0x14005E570 (MmSetAddressRangeModifiedEx.c)
 *     MiFlushDirtyBitsToPfn @ 0x140088BA8 (MiFlushDirtyBitsToPfn.c)
 *     MiValidFault @ 0x1400A7010 (MiValidFault.c)
 *     MiMarkPteDirty @ 0x1400B8C20 (MiMarkPteDirty.c)
 *     MiActOnPte @ 0x1400BE5C0 (MiActOnPte.c)
 *     MiTrimSharedPageFromViews @ 0x1400C10E0 (MiTrimSharedPageFromViews.c)
 *     MiStealPage @ 0x1400C3928 (MiStealPage.c)
 *     MiRevokeExecutePte @ 0x1400CA8C0 (MiRevokeExecutePte.c)
 *     MmProtectPool @ 0x1400ECD14 (MmProtectPool.c)
 *     MiSetSystemCodeProtection @ 0x1400FA778 (MiSetSystemCodeProtection.c)
 *     MiReplacePageTablePage @ 0x140122280 (MiReplacePageTablePage.c)
 *     MiDirtySystemCachePte @ 0x14012AB8C (MiDirtySystemCachePte.c)
 *     MmSetPageProtection @ 0x14012EF20 (MmSetPageProtection.c)
 *     MiMakeCombineCandidateClean @ 0x14013EC98 (MiMakeCombineCandidateClean.c)
 *     MiDemoteCombinedPte @ 0x1401417B0 (MiDemoteCombinedPte.c)
 *     MiPerformSafePdeWrite @ 0x14015D2F4 (MiPerformSafePdeWrite.c)
 *     MmProtectMdlSystemAddress @ 0x1402C1310 (MmProtectMdlSystemAddress.c)
 *     MiDbgCopyMemoryTarget @ 0x1402D0910 (MiDbgCopyMemoryTarget.c)
 *     MiLargePageFault @ 0x1402D2A68 (MiLargePageFault.c)
 *     MiDecommitHardwareEnclavePages @ 0x1402D3880 (MiDecommitHardwareEnclavePages.c)
 *     MiWriteEnclavePte @ 0x1402D5188 (MiWriteEnclavePte.c)
 *     MiProtectAweRegion @ 0x1402D6EE4 (MiProtectAweRegion.c)
 *     MiBuildForkPte @ 0x1402E1BC0 (MiBuildForkPte.c)
 *     MiMarkBootKernelStack @ 0x1409EE190 (MiMarkBootKernelStack.c)
 *     MxCreatePfns @ 0x1409FC510 (MxCreatePfns.c)
 *     MiProtectSharedUserPage @ 0x140A229A0 (MiProtectSharedUserPage.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
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
  if ( !HIBYTE(word_1404658EC) && (v2 & 1) != 0 )
    v2 |= 0x8000000000000000uLL;
  *v4 = v2;
  return (struct _KTHREAD *)MiWritePteShadow(v4, v2);
}
