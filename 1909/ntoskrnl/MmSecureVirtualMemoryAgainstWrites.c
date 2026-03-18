/*
 * XREFs of MmSecureVirtualMemoryAgainstWrites @ 0x14065FA38
 * Callers:
 *     AlpcpPrepareViewForDelivery @ 0x14065E724 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14065E96C (AlpcpExposeViewAttributeInSenderContext.c)
 * Callees:
 *     MiSetReadOnlyOnSectionView @ 0x14002EA90 (MiSetReadOnlyOnSectionView.c)
 *     MiUnlockAndDereferenceVad @ 0x140050550 (MiUnlockAndDereferenceVad.c)
 *     MiVadSupportsPrivateCommit @ 0x1400507D0 (MiVadSupportsPrivateCommit.c)
 *     MiObtainReferencedVadEx @ 0x140050810 (MiObtainReferencedVadEx.c)
 *     MiVadMapsLargeImage @ 0x140053940 (MiVadMapsLargeImage.c)
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiAddSecureEntry @ 0x14060B8C0 (MiAddSecureEntry.c)
 *     MiIsRangeFullyCommitted @ 0x14065FC38 (MiIsRangeFullyCommitted.c)
 *     MiCheckSecuredVad @ 0x14065FD5C (MiCheckSecuredVad.c)
 *     MiUnsecureVirtualMemoryAgainstWrites @ 0x1406CFE58 (MiUnsecureVirtualMemoryAgainstWrites.c)
 */

unsigned __int64 __fastcall MmSecureVirtualMemoryAgainstWrites(__int64 BugCheckParameter1, __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rax
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rcx
  _KPROCESS *Process; // [rsp+30h] [rbp-88h]
  int v14; // [rsp+38h] [rbp-80h] BYREF
  _BYTE v15[48]; // [rsp+40h] [rbp-78h] BYREF

  memset(v15, 0, sizeof(v15));
  if ( (a2 & 0xFFFFFFFFFFFFF000uLL) != a2 || (a3 & 0xFFF) != 0 )
    return 0LL;
  v6 = 0LL;
  v7 = (a3 + a2 - 1) | 0xFFF;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( Process == (_KPROCESS *)BugCheckParameter1 )
    Process = 0LL;
  else
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v15);
  v8 = MiObtainReferencedVadEx(a2 & 0xFFFFFFFFFFFFF000uLL, 0, &v14);
  v9 = v8;
  if ( v8 )
  {
    if ( v7 >> 12 <= (*(unsigned int *)(v8 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 33) << 32))
      && MiVadSupportsPrivateCommit(v8)
      && ((*(_DWORD *)(v9 + 48) & 8) == 0 || (int)MiCheckSecuredVad(v9, a2, a3, 1, 0) >= 0)
      && (*(_DWORD *)(v9 + 48) & 0x100000) == 0
      && (*(_DWORD *)(v9 + 64) & 0x4000000) == 0
      && (MmCompatibleProtectionMask[(*(_DWORD *)(v9 + 48) >> 7) & 7] | 0x702) == (MmCompatibleProtectionMask[(*(_DWORD *)(v9 + 48) >> 7) & 7] | 0x700) )
    {
      if ( (v10 = *(_DWORD *)(**(_QWORD **)(v9 + 72) + 56LL), (v10 & 0x80u) != 0) && (v10 & 0x20) == 0
        || !MiVadMapsLargeImage(v9) && (unsigned int)MiIsRangeFullyCommitted(v11, a2 & 0xFFFFFFFFFFFFF000uLL, v7) )
      {
        if ( (int)MiSetReadOnlyOnSectionView(BugCheckParameter1, v9, a2 & 0xFFFFFFFFFFFFF000uLL, v7) >= 0 )
        {
          v6 = (unsigned __int64)MiAddSecureEntry(v9, a2 & 0xFFFFFFFFFFFFF000uLL, v7, -1073741823, 0);
          if ( !v6 )
            MiUnsecureVirtualMemoryAgainstWrites(v9, a2 & 0xFFFFFFFFFFFFF000uLL, v7);
        }
      }
    }
    MiUnlockAndDereferenceVad((char *)v9);
  }
  if ( Process )
    KiUnstackDetachProcess((struct _KTHREAD *)v15, 0);
  if ( v6 )
    v6 ^= BugCheckParameter1 ^ qword_140465728;
  return v6;
}
