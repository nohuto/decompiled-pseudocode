/*
 * XREFs of ChildProcessRootSynthesizedMouseInput @ 0x1C0181D40
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0036C14 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C007A7D0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?GetInstance@RootSynthesizedMouseList@InputVirtualization@@SAAEAV12@XZ @ 0x1C0181C48 (-GetInstance@RootSynthesizedMouseList@InputVirtualization@@SAAEAV12@XZ.c)
 *     SynthesizeMouseInputForPTP @ 0x1C01827D0 (SynthesizeMouseInputForPTP.c)
 */

void ChildProcessRootSynthesizedMouseInput()
{
  __int64 *Instance; // rsi
  __int64 v1; // rdi
  __int64 v2; // rax
  unsigned int v3; // r14d
  __int64 v4; // r15
  unsigned __int64 i; // rbp

  Instance = (__int64 *)InputVirtualization::RootSynthesizedMouseList::GetInstance();
  CPushLock::AcquireLockExclusive((CPushLock *)(Instance + 2));
  while ( 1 )
  {
    v1 = *Instance;
    if ( (__int64 *)*Instance == Instance )
      break;
    if ( *(__int64 **)(v1 + 8) != Instance || (v2 = *(_QWORD *)v1, *(_QWORD *)(*(_QWORD *)v1 + 8LL) != v1) )
      __fastfail(3u);
    *Instance = v2;
    v3 = 0;
    *(_QWORD *)(v2 + 8) = Instance;
    v4 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
        * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    for ( i = v4 * gliQpcFreq.QuadPart / 0x3E8uLL; v3 < *(_DWORD *)(v1 + 32); ++v3 )
      SynthesizeMouseInputForPTP(
        *(_QWORD *)(v1 + 16),
        28 * v3 + v1 + 36,
        v4,
        i,
        *(_QWORD *)(v1 + 24),
        *(_DWORD *)(28LL * v3 + v1 + 36 + 24));
    Win32FreePool(v1);
  }
  CPushLock::ReleaseLock((CPushLock *)(Instance + 2));
}
