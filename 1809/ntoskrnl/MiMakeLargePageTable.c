/*
 * XREFs of MiMakeLargePageTable @ 0x1402B52D8
 * Callers:
 *     MiCreateSystemPageTable @ 0x140026730 (MiCreateSystemPageTable.c)
 * Callees:
 *     MiInitializePfnForOtherProcess @ 0x140026C2C (MiInitializePfnForOtherProcess.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiGetLeafVa @ 0x140076400 (MiGetLeafVa.c)
 *     MiGetContainingPageTable @ 0x140079840 (MiGetContainingPageTable.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiTransformValidPteInPlace @ 0x14016A80C (MiTransformValidPteInPlace.c)
 *     MiDemotePfnListChain @ 0x1402C55C0 (MiDemotePfnListChain.c)
 */

__int64 __fastcall MiMakeLargePageTable(__int64 a1, volatile signed __int64 *a2, int a3)
{
  __int64 v3; // r14
  unsigned __int64 v5; // r13
  __int64 v6; // r9
  unsigned __int64 LeafVa; // r10
  unsigned int v8; // edx
  unsigned __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // r12
  _QWORD *v12; // rsi
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r11
  __int64 v17; // rdi
  __int64 v18; // r14
  __int64 v19; // rdi
  signed __int64 v20; // r10
  int v21; // edx
  __int64 v22; // r10
  bool v23; // zf
  __int64 result; // rax
  __int64 v25; // [rsp+20h] [rbp-48h]
  int v26; // [rsp+70h] [rbp+8h] BYREF
  __int64 ContainingPageTable; // [rsp+88h] [rbp+20h]

  v3 = *(_QWORD *)(a1 + 168);
  v5 = a3;
  v25 = v3;
  if ( (*(_DWORD *)(v3 + 56) & 0x80u) != 0 && (unsigned int)(a3 - 1) <= 1 )
  {
    LeafVa = MiGetLeafVa((unsigned __int64)a2);
    if ( LeafVa >= *(_QWORD *)(v6 + 32) )
    {
      v8 = 1;
      if ( v5 > 1 )
      {
        v9 = v5 - 1;
        do
        {
          --v8;
          --v9;
        }
        while ( v9 );
      }
      v10 = v8;
      v11 = MiLargePageSizes[v8];
      if ( LeafVa + (v11 << 12) - 1 <= *(_QWORD *)(v6 + 40) )
      {
        v12 = *(_QWORD **)(v3 + 8LL * v8);
        if ( v12 || v8 && (MiDemotePfnListChain(v3), (v12 = *(_QWORD **)(v3 + 8 * v10)) != 0LL) )
        {
          *(_QWORD *)(v3 + 8 * v10) = *v12;
          v13 = (__int64)(v12 + 0xB000000000LL) / 48;
          ContainingPageTable = MiGetContainingPageTable((unsigned __int64)a2);
          v17 = v16 + 48 * ContainingPageTable;
          v26 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v26, v14, v15);
            while ( *(__int64 *)(v17 + 24) < 0 );
          }
          *(_QWORD *)(v17 + 24) ^= (*(_QWORD *)(v17 + 24) ^ (*(_QWORD *)(v17 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v11 )
          {
            v18 = ContainingPageTable;
            v19 = v11;
            do
            {
              *v12 = 0LL;
              MiInitializePfnForOtherProcess(v13++, (__int64)a2, v18, 3600);
              v12 += 6;
              --v19;
            }
            while ( v19 );
            v3 = v25;
          }
          MiMakeValidPte((unsigned __int64)a2, v13 - v11, -2080374780);
          if ( (MI_READ_PTE_LOCK_FREE((unsigned __int64)a2) & 1) != 0 )
          {
            MiTransformValidPteInPlace(a2, (__int64)a2, v20, v5);
LABEL_30:
            result = 1LL;
            *(_QWORD *)(v3 + 40) += MiLargePageSizes[v10];
            return result;
          }
          if ( MiPteInShadowRange((unsigned __int64)a2) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v21 = 1;
              if ( !HIBYTE(word_14043B26C) )
              {
                v23 = (v22 & 1) == 0;
                goto LABEL_26;
              }
            }
            else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
            {
              v23 = (v22 & 1) == 0;
LABEL_26:
              if ( !v23 )
                v22 |= 0x8000000000000000uLL;
            }
          }
          *a2 = v22;
          if ( v21 )
            MiWritePteShadow((__int64)a2, v22);
          goto LABEL_30;
        }
      }
    }
  }
  return 0LL;
}
