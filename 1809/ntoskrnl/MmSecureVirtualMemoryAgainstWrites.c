/*
 * XREFs of MmSecureVirtualMemoryAgainstWrites @ 0x140619664
 * Callers:
 *     AlpcpPrepareViewForDelivery @ 0x140618954 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140618B88 (AlpcpExposeViewAttributeInSenderContext.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     MiUnlockAndDereferenceVad @ 0x140074540 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1400747D0 (MiObtainReferencedVadEx.c)
 *     MiVadMapsLargeImage @ 0x140074A00 (MiVadMapsLargeImage.c)
 *     MiSetReadOnlyOnSectionView @ 0x140085AF0 (MiSetReadOnlyOnSectionView.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     MiAddSecureEntry @ 0x1405F4490 (MiAddSecureEntry.c)
 *     MiIsRangeFullyCommitted @ 0x140619858 (MiIsRangeFullyCommitted.c)
 *     MiCheckSecuredVad @ 0x140619974 (MiCheckSecuredVad.c)
 *     MiUnsecureVirtualMemoryAgainstWrites @ 0x1406AF194 (MiUnsecureVirtualMemoryAgainstWrites.c)
 */

unsigned __int64 __fastcall MmSecureVirtualMemoryAgainstWrites(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r13d
  unsigned __int64 v4; // rsi
  int v5; // r14d
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rcx
  _KPROCESS *Process; // [rsp+30h] [rbp-88h]
  int v15; // [rsp+38h] [rbp-80h] BYREF
  _BYTE v16[48]; // [rsp+40h] [rbp-78h] BYREF

  v3 = a3;
  v4 = a2 & 0xFFFFFFFFFFFFF000uLL;
  v5 = a2;
  if ( (a2 & 0xFFFFFFFFFFFFF000uLL) != a2 || (a3 & 0xFFF) != 0 )
    return 0LL;
  v7 = 0LL;
  v8 = (a2 + a3 - 1) | 0xFFF;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( Process == (_KPROCESS *)a1 )
    Process = 0LL;
  else
    KiStackAttachProcess((_KPROCESS *)a1, 0LL, (__int64)v16);
  v9 = MiObtainReferencedVadEx(v4, 0, &v15);
  v10 = v9;
  if ( v9 )
  {
    if ( v8 >> 12 <= (*(unsigned int *)(v9 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32))
      && ((1 << (*(_BYTE *)(v9 + 48) & 7)) & 0x55) != 0
      && ((*(_DWORD *)(v9 + 48) & 0x8000000) == 0 || (int)MiCheckSecuredVad(v9, v5, v3, 1, 0) >= 0)
      && (*(_DWORD *)(v10 + 48) & 0x4000) == 0
      && (*(_DWORD *)(v10 + 64) & 0x4000000) == 0
      && (MmCompatibleProtectionMask[(*(_DWORD *)(v10 + 48) >> 3) & 7] | 0x702) == (MmCompatibleProtectionMask[(*(_DWORD *)(v10 + 48) >> 3) & 7] | 0x700) )
    {
      if ( (v11 = *(_DWORD *)(**(_QWORD **)(v10 + 72) + 56LL), (v11 & 0x80u) != 0) && (v11 & 0x20) == 0
        || !MiVadMapsLargeImage(v10) && (unsigned int)MiIsRangeFullyCommitted(v12, v4, v8) )
      {
        if ( (int)MiSetReadOnlyOnSectionView(a1, v10, v4, v8) >= 0 )
        {
          v7 = (unsigned __int64)MiAddSecureEntry(v10, v4, v8, -1073741823, 0);
          if ( !v7 )
            MiUnsecureVirtualMemoryAgainstWrites(v10, v4, v8);
        }
      }
    }
    MiUnlockAndDereferenceVad((char *)v10);
  }
  if ( Process )
    KiUnstackDetachProcess((__int64)v16, 0LL);
  if ( v7 )
    v7 ^= a1 ^ qword_14043B0D0;
  return v7;
}
