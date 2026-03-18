/*
 * XREFs of MiCombinePte @ 0x1402E5C70
 * Callers:
 *     <none>
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiGetUltraMapping @ 0x14002AC80 (MiGetUltraMapping.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiIsStoreProcess @ 0x140120098 (MiIsStoreProcess.c)
 *     MiPerformCombineScan @ 0x140140600 (MiPerformCombineScan.c)
 *     MiReleaseArbitraryPage @ 0x1401406B0 (MiReleaseArbitraryPage.c)
 *     MiCombineCandidate @ 0x140140780 (MiCombineCandidate.c)
 *     MiMapArbitraryPage @ 0x140140B10 (MiMapArbitraryPage.c)
 *     MiComputeHash64 @ 0x140146310 (MiComputeHash64.c)
 *     MiCombineWorkingSetTail @ 0x1402E6170 (MiCombineWorkingSetTail.c)
 */

__int64 __fastcall MiCombinePte(__int64 a1, unsigned __int64 a2, int a3)
{
  int v4; // r9d
  __int64 v5; // rdx
  _QWORD *v7; // rdi
  _QWORD *v8; // rsi
  __int64 *v9; // r12
  __int64 v10; // r10
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 *v14; // r14
  unsigned __int64 UltraMapping; // rax
  __int64 *v16; // rbx
  _QWORD *v17; // r13
  BOOL v18; // ebp
  int v19; // eax
  int v20; // r8d
  __int64 v21; // rdx
  bool v22; // zf
  BOOL v23; // esi
  __int64 v24; // rdx
  int v25; // r8d
  bool v26; // zf
  __int64 v27; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v28; // [rsp+88h] [rbp+20h]

  v4 = a3;
  v5 = *(_QWORD *)(a1 + 16);
  if ( !*(_QWORD *)(v5 + 104) )
  {
    v7 = *(_QWORD **)(a1 + 160);
    v8 = (_QWORD *)v7[3];
    v9 = (__int64 *)*v8;
    if ( (*(_BYTE *)(v5 + 184) & 7) != 0
      || (*(_DWORD *)(v5 - 1280 + 780) & 0xC00u) >= 0xC00 && !(unsigned int)MiIsStoreProcess(v5 - 1280) )
    {
      if ( v4 >= 1 )
        return 0LL;
      v27 = MI_READ_PTE_LOCK_FREE(a2);
      v28 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v27) >> 12) & 0xFFFFFFFFFLL;
      v11 = 48 * v28 - 0x58000000000LL;
      if ( (*(_QWORD *)(v11 + 40) & 0x200000000000000LL) != 0 )
        return 0LL;
      v12 = v8[1];
      if ( v12 && *(_DWORD *)(v12 + 4) || (*(_DWORD *)(v10 + 1760) & 1) != 0 )
        return 4LL;
      if ( !(unsigned int)MiCombineCandidate(v9, 0, 48 * v28 - 0x58000000000LL) )
        return 0LL;
      ++*(_QWORD *)(v8[3] + 16LL);
      v14 = (__int64 *)(v7[4] + 40LL * v7[1]);
      if ( (v27 & 0x20) != 0 )
      {
        *v14 = MiComputeHash64(((__int64)(a2 << 25) >> 16) & 0xFFFFFFFFFFFFF000uLL);
LABEL_38:
        v14[2] = 0LL;
        v14[4] = 0LL;
        v14[1] = v28;
        if ( ++v7[1] == v7[2] )
          return MiCombineWorkingSetTail(a1);
        return 0LL;
      }
      UltraMapping = MiGetUltraMapping(v8 + 26, 3u, 1LL, 0);
      v16 = (__int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      if ( ((UltraMapping >> 9) & 0x7FFFFFFFF8LL) == 0x98000000000LL )
        return 0LL;
      v17 = (_QWORD *)v8[2];
      v17[9] = v16;
      v17[8] = v11;
      v18 = MiPteInShadowRange((unsigned __int64)v16);
      v19 = MiMapArbitraryPage(v9, v17, 0, 0, 0);
      v20 = 0;
      if ( !v19 )
      {
        v21 = ZeroPte;
        if ( v18 )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v20 = 1;
            if ( !HIBYTE(word_1404658EC) )
            {
              v22 = (v21 & 1) == 0;
              goto LABEL_22;
            }
          }
          else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
          {
            v22 = (v21 & 1) == 0;
LABEL_22:
            if ( !v22 )
              v21 |= 0x8000000000000000uLL;
          }
        }
        *v16 = v21;
        if ( v20 )
          MiWritePteShadow((__int64)v16);
        return 0LL;
      }
      v23 = MiPerformCombineScan((__int64)v8, (__int64)v17, 0LL, v14);
      MiReleaseArbitraryPage((__int64)v17);
      v24 = ZeroPte;
      v25 = 0;
      if ( v18 )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v25 = 1;
          if ( HIBYTE(word_1404658EC) )
            goto LABEL_35;
          v26 = (v24 & 1) == 0;
        }
        else
        {
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
            goto LABEL_35;
          v26 = (v24 & 1) == 0;
        }
        if ( !v26 )
          v24 |= 0x8000000000000000uLL;
      }
LABEL_35:
      *v16 = v24;
      if ( v25 )
        MiWritePteShadow((__int64)v16);
      if ( !v23 )
        return 0LL;
      goto LABEL_38;
    }
  }
  return 3LL;
}
