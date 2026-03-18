/*
 * XREFs of MmStoreAllocateVirtualMemory @ 0x14071AC58
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x140148EEC (SmKmStoreHelperCommandProcess.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x140050550 (MiUnlockAndDereferenceVad.c)
 *     MiGetPteAddress @ 0x140057738 (MiGetPteAddress.c)
 *     MiDecommitPages @ 0x1400577E0 (MiDecommitPages.c)
 *     MiObtainReferencedSecureVad @ 0x140073D80 (MiObtainReferencedSecureVad.c)
 *     MiFreeVadRange @ 0x1400E71E8 (MiFreeVadRange.c)
 *     MiLockPageTableRange @ 0x1401596C8 (MiLockPageTableRange.c)
 *     MiMakeSecureExclusive @ 0x140159818 (MiMakeSecureExclusive.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiAllocateVirtualMemory @ 0x140604C50 (MiAllocateVirtualMemory.c)
 *     MmUnsecureVirtualMemory @ 0x14060C520 (MmUnsecureVirtualMemory.c)
 */

unsigned __int64 __fastcall MmStoreAllocateVirtualMemory(__int64 a1)
{
  unsigned __int64 v2; // r14
  _KPROCESS *Process; // rdx
  __int64 v4; // rsi
  __int64 v5; // rax
  ULONG_PTR v6; // rdi
  unsigned __int64 v7; // rbx
  unsigned __int64 PteAddress; // rax
  __int64 v10; // r9
  __int64 v11; // rax
  unsigned __int64 v12; // r8
  _QWORD v13[16]; // [rsp+40h] [rbp-79h] BYREF
  _QWORD v14[10]; // [rsp+C0h] [rbp+7h] BYREF
  char v15; // [rsp+120h] [rbp+67h] BYREF
  int v16; // [rsp+128h] [rbp+6Fh] BYREF
  unsigned __int64 v17; // [rsp+130h] [rbp+77h] BYREF
  HANDLE SecureHandle; // [rsp+138h] [rbp+7Fh] BYREF

  memset(v14, 0, 0x30uLL);
  v2 = 0LL;
  memset(v13, 0, sizeof(v13));
  v13[2] = 0x10000LL;
  v13[3] = a1;
  v13[5] = 0x200003000LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v13[1] = 0x7FFFFFFEFFFFLL;
  v13[12] = Process;
  v13[11] = Process;
  v13[10] = &SecureHandle;
  HIDWORD(v13[7]) = 1;
  HIDWORD(v13[9]) = -2147483647;
  LOBYTE(v13[13]) = 0;
  if ( (int)MiAllocateVirtualMemory((__int64)v13, 0LL, &v17) < 0 )
    return v2;
  v4 = v13[12];
  v5 = MiObtainReferencedSecureVad(v13[12] ^ (unsigned __int64)SecureHandle ^ qword_140465728, &v16);
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
