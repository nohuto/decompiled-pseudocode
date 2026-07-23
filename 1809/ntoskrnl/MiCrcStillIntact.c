/*
 * XREFs of MiCrcStillIntact @ 0x140082C44
 * Callers:
 *     MiSharePages @ 0x1400846D0 (MiSharePages.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiClearPteAccessed @ 0x14006B770 (MiClearPteAccessed.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiMakeCombineCandidateClean @ 0x140082B7C (MiMakeCombineCandidateClean.c)
 *     MiRecheckVaVm @ 0x140085560 (MiRecheckVaVm.c)
 *     MiGetWsleContents @ 0x140085F30 (MiGetWsleContents.c)
 *     MiLocateAddress @ 0x140087850 (MiLocateAddress.c)
 *     MiCombineCandidate @ 0x1400B2610 (MiCombineCandidate.c)
 *     MiTbFlushType @ 0x1400EDC24 (MiTbFlushType.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

__int64 __fastcall MiCrcStillIntact(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // r8
  char v13; // al
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // r9d
  __int64 Address; // rax
  int v19; // eax
  __int64 v20; // rcx
  int v21; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v22; // [rsp+38h] [rbp-C8h] BYREF
  int v23; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v24; // [rsp+44h] [rbp-BCh]
  int v25; // [rsp+48h] [rbp-B8h]
  int v26; // [rsp+4Ch] [rbp-B4h]
  __int64 v27; // [rsp+50h] [rbp-B0h]
  __int64 v28; // [rsp+58h] [rbp-A8h]

  v5 = *(_QWORD *)(a4 + 8);
  v9 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (unsigned int)MiRecheckVaVm(a1, v5) )
  {
    v22 = MI_READ_PTE_LOCK_FREE(v9);
    if ( (v22 & 1) != 0 )
    {
      v11 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v22) >> 12) & 0xFFFFFFFFFLL)
          - 0x58000000000LL;
      v21 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v21, v10, v12);
        while ( *(__int64 *)(v11 + 24) < 0 );
      }
      if ( (unsigned int)MiCombineCandidate(a1, a3, v11) )
      {
        v13 = *(_BYTE *)(v11 + 34);
        _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (v13 & 7) == 6 && v9 == (*(_QWORD *)(v11 + 8) | 0x8000000000000000uLL) )
        {
          v14 = *(_QWORD *)(v11 + 40);
          if ( (v14 & 0x200000000000000LL) == 0 && (*(_BYTE *)(v11 + 35) & 8) == 0 )
          {
            v15 = v14 & 0xFFFFFFFFFLL;
            if ( v15 != 0xFFFFFFFFDLL && (MiGetWsleContents(v15, v5) & 0xF) != 8 && *(_WORD *)(v11 + 32) == 1 )
            {
              Address = 0LL;
              if ( v16 != 1
                || (Address = MiLocateAddress(v5)) != 0 && ((1 << (*(_BYTE *)(Address + 48) & 7)) & 0x55) != 0 )
              {
                if ( a5 == 2 )
                {
                  if ( (v22 & 0x42) != 0 )
                  {
                    MiMakeCombineCandidateClean(v9, Address);
                    return 1LL;
                  }
                }
                else
                {
                  if ( a5 != 3 )
                    return 1LL;
                  v26 = 0;
                  v19 = MiTbFlushType(a2);
                  v24 = 0;
                  v27 = 0LL;
                  v28 = 0LL;
                  v23 = v19;
                  v25 = 20;
                  if ( (unsigned int)MiClearPteAccessed(v20, v11, v9, (__int64)&v23, dword_14043B9A8, 0) )
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
