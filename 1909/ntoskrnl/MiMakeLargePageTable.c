/*
 * XREFs of MiMakeLargePageTable @ 0x1402CA4A8
 * Callers:
 *     MiCreateSystemPageTable @ 0x1400961C0 (MiCreateSystemPageTable.c)
 * Callees:
 *     MiGetContainingPageTable @ 0x140023AA0 (MiGetContainingPageTable.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002B050 (MiMakeValidPte.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiGetLeafVa @ 0x14005AA90 (MiGetLeafVa.c)
 *     MiInitializePfnForOtherProcess @ 0x1400966C4 (MiInitializePfnForOtherProcess.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiTransformValidPteInPlace @ 0x140174574 (MiTransformValidPteInPlace.c)
 *     MiDemotePfnListChain @ 0x1402DF278 (MiDemotePfnListChain.c)
 */

__int64 __fastcall MiMakeLargePageTable(__int64 a1, volatile signed __int64 *a2, int a3)
{
  __int64 v3; // r14
  unsigned __int64 v5; // r13
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 LeafVa; // r10
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // r12
  _QWORD *v13; // rsi
  __int64 v14; // rbp
  __int64 v15; // r9
  __int64 v16; // rdi
  __int64 v17; // r14
  __int64 v18; // rdi
  signed __int64 v19; // r10
  int v20; // edx
  volatile signed __int64 v21; // r10
  bool v22; // zf
  __int64 result; // rax
  __int64 v24; // [rsp+20h] [rbp-48h]
  int v25; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 ContainingPageTable; // [rsp+88h] [rbp+20h]

  v3 = *(_QWORD *)(a1 + 160);
  v5 = a3;
  v24 = v3;
  if ( (*(_DWORD *)(v3 + 64) & 0x80u) != 0 && (unsigned int)(a3 - 1) <= 1 )
  {
    LeafVa = MiGetLeafVa((unsigned __int64)a2);
    if ( LeafVa >= *(_QWORD *)(v7 + 24) )
    {
      v9 = 1LL;
      if ( v5 > 1 )
      {
        v10 = v5 - 1;
        do
        {
          v9 = (unsigned int)(v9 - 1);
          --v10;
        }
        while ( v10 );
      }
      v11 = (unsigned int)v9;
      v12 = MiLargePageSizes[(unsigned int)v9];
      if ( LeafVa + (v12 << 12) - 1 <= *(_QWORD *)(v7 + 32) )
      {
        v13 = *(_QWORD **)(v3 + 8LL * (unsigned int)v9);
        if ( v13 || (_DWORD)v9 && (MiDemotePfnListChain(v3, v9, v6, v7), (v13 = *(_QWORD **)(v3 + 8 * v11)) != 0LL) )
        {
          *(_QWORD *)(v3 + 8 * v11) = *v13;
          v14 = (__int64)(v13 + 0xB000000000LL) / 48;
          ContainingPageTable = MiGetContainingPageTable((unsigned __int64)a2);
          v16 = v15 + 48 * ContainingPageTable;
          v25 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v25);
            while ( *(__int64 *)(v16 + 24) < 0 );
          }
          *(_QWORD *)(v16 + 24) ^= (*(_QWORD *)(v16 + 24) ^ (*(_QWORD *)(v16 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v12 )
          {
            v17 = ContainingPageTable;
            v18 = v12;
            do
            {
              *v13 = 0LL;
              MiInitializePfnForOtherProcess(v14++, (__int64)a2, v17, 3600);
              v13 += 6;
              --v18;
            }
            while ( v18 );
            v3 = v24;
          }
          MiMakeValidPte((unsigned __int64)a2, v14 - v12, -2080374780);
          if ( (MI_READ_PTE_LOCK_FREE((unsigned __int64)a2) & 1) != 0 )
          {
            MiTransformValidPteInPlace(a2, (__int64)a2, v19, v5);
LABEL_30:
            result = 1LL;
            *(_QWORD *)(v3 + 48) += MiLargePageSizes[v11];
            return result;
          }
          if ( MiPteInShadowRange((unsigned __int64)a2) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v20 = 1;
              if ( !HIBYTE(word_1404658EC) )
              {
                v22 = (v21 & 1) == 0;
                goto LABEL_26;
              }
            }
            else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
            {
              v22 = (v21 & 1) == 0;
LABEL_26:
              if ( !v22 )
                v21 |= 0x8000000000000000uLL;
            }
          }
          *a2 = v21;
          if ( v20 )
            MiWritePteShadow((__int64)a2);
          goto LABEL_30;
        }
      }
    }
  }
  return 0LL;
}
