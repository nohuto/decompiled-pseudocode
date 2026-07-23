/*
 * XREFs of MiWriteValidPteNewProtection @ 0x140087960
 * Callers:
 *     MmProtectPool @ 0x14000E16C (MmProtectPool.c)
 *     MiDemoteCombinedPte @ 0x14006C1F0 (MiDemoteCombinedPte.c)
 *     MiMakeCombineCandidateClean @ 0x140082B7C (MiMakeCombineCandidateClean.c)
 *     MiSetSystemCodeProtection @ 0x1400862D0 (MiSetSystemCodeProtection.c)
 *     MmSetAddressRangeModifiedEx @ 0x140086770 (MmSetAddressRangeModifiedEx.c)
 *     NtGetWriteWatch @ 0x140086AC0 (NtGetWriteWatch.c)
 *     MiActOnPte @ 0x14009404C (MiActOnPte.c)
 *     MiUnlockNestedPageTableWritePte @ 0x140098414 (MiUnlockNestedPageTableWritePte.c)
 *     MiMarkPteDirty @ 0x1400ADF40 (MiMarkPteDirty.c)
 *     MiValidFault @ 0x1400B6D30 (MiValidFault.c)
 *     MiTrimSharedPageFromViews @ 0x1400EB48C (MiTrimSharedPageFromViews.c)
 *     MiStealPage @ 0x1400EBFC4 (MiStealPage.c)
 *     MiReplacePageTablePage @ 0x14011BEFC (MiReplacePageTablePage.c)
 *     MiRevokeExecutePte @ 0x14011FD50 (MiRevokeExecutePte.c)
 *     MiDirtySystemCachePte @ 0x140128FD4 (MiDirtySystemCachePte.c)
 *     MiFlushDirtyBitsToPfn @ 0x14012C2DC (MiFlushDirtyBitsToPfn.c)
 *     MmSetPageProtection @ 0x140133650 (MmSetPageProtection.c)
 *     MiPerformSafePdeWrite @ 0x140160618 (MiPerformSafePdeWrite.c)
 *     MmProtectMdlSystemAddress @ 0x1402A9E60 (MmProtectMdlSystemAddress.c)
 *     MiProtectAweRegion @ 0x1402B17AC (MiProtectAweRegion.c)
 *     MiDbgCopyMemoryTarget @ 0x1402BAB80 (MiDbgCopyMemoryTarget.c)
 *     MiLargePageFault @ 0x1402BC5C8 (MiLargePageFault.c)
 *     MiDecommitHardwareEnclavePages @ 0x1402BD3C4 (MiDecommitHardwareEnclavePages.c)
 *     MiWriteEnclavePte @ 0x1402BEC18 (MiWriteEnclavePte.c)
 *     MiBuildForkPte @ 0x1402C7DE0 (MiBuildForkPte.c)
 *     MiMarkBootKernelStack @ 0x1409B7464 (MiMarkBootKernelStack.c)
 *     MxCreatePfns @ 0x1409C108C (MxCreatePfns.c)
 *     MiProtectSharedUserPage @ 0x1409E0218 (MiProtectSharedUserPage.c)
 * Callees:
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 */

struct _KTHREAD *__fastcall MiWriteValidPteNewProtection(unsigned __int64 Process, __int64 a2)
{
  __int64 v3; // rdx
  unsigned __int64 v4; // r9
  __int64 v5; // rdx
  struct _KTHREAD *result; // rax
  __int64 v7; // r10
  __int64 v8; // rax
  __int64 v9; // r10

  v3 = *(_QWORD *)Process;
  v4 = Process;
  if ( Process >= 0xFFFFF6FB7DBED000uLL && Process <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
  {
    Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
    if ( *(_BYTE *)(Process + 640) != 1 && (v3 & 1) != 0 && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
    {
      Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
      v7 = *(_QWORD *)(Process + 1544);
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 8 * ((v4 >> 3) & 0x1FF));
        v9 = v3 | 0x20;
        Process = (unsigned __int8)v8;
        LOBYTE(Process) = v8 & 0x20;
        if ( (v8 & 0x20) == 0 )
          v9 = v3;
        v3 = v9;
        if ( (v8 & 0x42) != 0 )
          v3 = v9 | 0x42;
      }
    }
  }
  v5 = a2 ^ (a2 ^ v3) & 0x7F00000000000000LL;
  result = (struct _KTHREAD *)0xFFFFF6FB7DBED000LL;
  if ( v4 < 0xFFFFF6FB7DBED000uLL )
    goto LABEL_3;
  result = (struct _KTHREAD *)0xFFFFF6FB7DBED7F8LL;
  if ( v4 > 0xFFFFF6FB7DBED7F8uLL )
    goto LABEL_3;
  if ( !(unsigned int)MiPteHasShadow(Process, v5) )
  {
    result = KeGetCurrentThread();
    if ( (result->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 && (v5 & 1) != 0 )
    {
      result = (struct _KTHREAD *)0x8000000000000000LL;
      v5 |= 0x8000000000000000uLL;
    }
LABEL_3:
    *(_QWORD *)v4 = v5;
    return result;
  }
  if ( !HIBYTE(word_14043B26C) && (v5 & 1) != 0 )
    v5 |= 0x8000000000000000uLL;
  *(_QWORD *)v4 = v5;
  return (struct _KTHREAD *)MiWritePteShadow(v4);
}
