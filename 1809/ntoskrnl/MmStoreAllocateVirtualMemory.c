/*
 * XREFs of MmStoreAllocateVirtualMemory @ 0x1406E1E30
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x14014B8A4 (SmKmStoreHelperCommandProcess.c)
 * Callees:
 *     MiFreeVadRange @ 0x140025674 (MiFreeVadRange.c)
 *     MiGetPteAddress @ 0x140065DD8 (MiGetPteAddress.c)
 *     MiDecommitPages @ 0x140068940 (MiDecommitPages.c)
 *     MiUnlockAndDereferenceVad @ 0x140074540 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedSecureVad @ 0x1400861C0 (MiObtainReferencedSecureVad.c)
 *     MiLockPageTableRange @ 0x140155FEC (MiLockPageTableRange.c)
 *     MiMakeSecureExclusive @ 0x14015613C (MiMakeSecureExclusive.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiAllocateVirtualMemory @ 0x1405EE650 (MiAllocateVirtualMemory.c)
 *     MmUnsecureVirtualMemory @ 0x1405F4430 (MmUnsecureVirtualMemory.c)
 */

unsigned __int64 __fastcall MmStoreAllocateVirtualMemory(__int64 a1)
{
  unsigned __int64 v2; // r14
  _KPROCESS *Process; // rdx
  __int64 v4; // rsi
  __int64 v5; // rax
  ULONG_PTR v6; // rdi
  unsigned __int64 v7; // rbx
  ULONG_PTR PteAddress; // rax
  __int64 v10; // r9
  __int64 v11; // rax
  unsigned __int64 v12; // r8
  _QWORD v13[16]; // [rsp+40h] [rbp-79h] BYREF
  _QWORD v14[10]; // [rsp+C0h] [rbp+7h] BYREF
  char v15; // [rsp+120h] [rbp+67h] BYREF
  int v16; // [rsp+128h] [rbp+6Fh] BYREF
  unsigned __int64 v17; // [rsp+130h] [rbp+77h] BYREF
  HANDLE SecureHandle; // [rsp+138h] [rbp+7Fh] BYREF

  memset(v14, 0, 0x28uLL);
  v2 = 0LL;
  memset(v13, 0, 0x78uLL);
  v13[2] = 0x10000LL;
  v13[3] = a1;
  v13[5] = 0x200003000LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v13[1] = 0x7FFFFFFEFFFFLL;
  v13[11] = Process;
  v13[10] = Process;
  v13[9] = &SecureHandle;
  HIDWORD(v13[6]) = 1;
  HIDWORD(v13[8]) = -2147483647;
  LOBYTE(v13[12]) = 0;
  if ( (int)MiAllocateVirtualMemory((__int64)v13, 0, &v17) < 0 )
    return v2;
  v4 = v13[11];
  v5 = MiObtainReferencedSecureVad(v13[11] ^ (unsigned __int64)SecureHandle ^ qword_14043B0D0, &v16);
  v6 = v5;
  if ( !v5 )
    return v2;
  if ( (unsigned int)MiMakeSecureExclusive(v5) )
  {
    v7 = ((*(unsigned int *)(v6 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 33) << 32)) << 12) | 0xFFF;
    PteAddress = MiGetPteAddress(v7);
    MiDecommitPages(v17, PteAddress, v4, v6, 1, v14);
    if ( (int)MiLockPageTableRange(v17, v7) >= 0 )
    {
      MiUnlockAndDereferenceVad((char *)v6);
      v2 = v17;
      v6 = 0LL;
    }
    if ( v6 )
    {
      v10 = *(unsigned __int8 *)(v6 + 33);
      v11 = *(unsigned int *)(v6 + 28);
      v12 = *(unsigned int *)(v6 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 32) << 32);
      v15 = 0;
      MiFreeVadRange(v6, (int)&v15, v12, v11 | (v10 << 32), v4, 0);
    }
    return v2;
  }
  MiUnlockAndDereferenceVad((char *)v6);
  MmUnsecureVirtualMemory(SecureHandle);
  return 0LL;
}
