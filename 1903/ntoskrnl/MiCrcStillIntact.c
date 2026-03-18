/*
 * XREFs of MiCrcStillIntact @ 0x14013E6D0
 * Callers:
 *     MiSharePages @ 0x14013EF30 (MiSharePages.c)
 * Callees:
 *     MiTbFlushType @ 0x140023DD0 (MiTbFlushType.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiClearPteAccessed @ 0x14004D420 (MiClearPteAccessed.c)
 *     MiVadSupportsPrivateCommit @ 0x140050730 (MiVadSupportsPrivateCommit.c)
 *     MiLocateAddress @ 0x140073CF0 (MiLocateAddress.c)
 *     MiGetWsleContents @ 0x14008DDD0 (MiGetWsleContents.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeCombineCandidateClean @ 0x14013E608 (MiMakeCombineCandidateClean.c)
 *     MiRecheckVaVm @ 0x14013FF10 (MiRecheckVaVm.c)
 *     MiCombineCandidate @ 0x1401400F0 (MiCombineCandidate.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall MiCrcStillIntact(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rbx
  char v12; // al
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // r9d
  __int64 v16; // rdx
  unsigned __int64 Address; // rax
  __int64 v19; // rcx
  int v20; // [rsp+30h] [rbp-118h] BYREF
  __int64 v21; // [rsp+38h] [rbp-110h] BYREF
  _QWORD v22[24]; // [rsp+40h] [rbp-108h] BYREF

  v5 = *(_QWORD *)(a4 + 8);
  memset(v22, 0, 0xB8uLL);
  v9 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (unsigned int)MiRecheckVaVm(v10, v5) )
  {
    v21 = MI_READ_PTE_LOCK_FREE(v9);
    if ( (v21 & 1) != 0 )
    {
      v11 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v21) >> 12) & 0xFFFFFFFFFLL)
          - 0x58000000000LL;
      v20 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v20);
        while ( *(__int64 *)(v11 + 24) < 0 );
      }
      if ( (unsigned int)MiCombineCandidate(a1, a3, v11) )
      {
        v12 = *(_BYTE *)(v11 + 34);
        _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (v12 & 7) == 6 && v9 == (*(_QWORD *)(v11 + 8) | 0x8000000000000000uLL) )
        {
          v13 = *(_QWORD *)(v11 + 40);
          if ( (v13 & 0x200000000000000LL) == 0 && (*(_BYTE *)(v11 + 35) & 8) == 0 )
          {
            v14 = v13 & 0xFFFFFFFFFLL;
            if ( v14 != 0xFFFFFFFFDLL && (MiGetWsleContents(v14, v5) & 0xF) != 8 && *(_WORD *)(v11 + 32) == 1 )
            {
              v16 = 0LL;
              if ( v15 != 1 || (Address = MiLocateAddress(v5)) != 0 && MiVadSupportsPrivateCommit(Address) )
              {
                if ( a5 == 2 )
                {
                  if ( (v21 & 0x42) != 0 )
                  {
                    MiMakeCombineCandidateClean(v9, v16);
                    return 1LL;
                  }
                }
                else
                {
                  if ( a5 != 3 )
                    return 1LL;
                  LODWORD(v22[0]) = MiTbFlushType(a2);
                  WORD2(v22[0]) = 0;
                  v22[2] = 0LL;
                  LODWORD(v22[1]) = 20;
                  v22[3] = 0LL;
                  if ( (unsigned int)MiClearPteAccessed(v19, v11, v9, (__int64)v22, dword_140466368, 0) )
                    return 1LL;
                }
              }
            }
          }
        }
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
  }
  return 0LL;
}
