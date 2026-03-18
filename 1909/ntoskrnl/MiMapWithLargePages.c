/*
 * XREFs of MiMapWithLargePages @ 0x14018D3E0
 * Callers:
 *     MiInsertInSystemSpace @ 0x140095820 (MiInsertInSystemSpace.c)
 *     MiMapContiguousMemoryLarge @ 0x14018D158 (MiMapContiguousMemoryLarge.c)
 *     MiMapSystemImageWithLargePage @ 0x14089993C (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002B050 (MiMakeValidPte.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140072E80 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400730C0 (MiUnlockWorkingSetExclusive.c)
 *     MiLockPageTableInternal @ 0x1400ABA00 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
 */

void __fastcall MiMapWithLargePages(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        char a6,
        int a7)
{
  int v7; // r13d
  __int64 v8; // r14
  unsigned __int64 v9; // rcx
  int v11; // ebx
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rsi
  unsigned int v16; // ebx
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // r12
  char ValidPte; // bl
  unsigned __int8 v21; // al
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int8 v25; // r15
  _QWORD *v26; // rdi
  unsigned __int64 v27; // rbp
  __int64 v28; // rdx
  int v29; // r8d
  char v30; // r11
  bool v31; // zf
  __int64 v32; // rcx
  LONG *SharedVm; // rdi
  bool v34; // zf
  unsigned __int8 v36[8]; // [rsp+80h] [rbp+28h]

  v7 = a5;
  v8 = a1;
  v9 = MiLargePageSizes[a5];
  v11 = a6 & 7;
  v12 = a4 / v9;
  v13 = v9 * (a4 / v9);
  v14 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( a3 <= 0xFFFFFFFFFLL && ((*(_QWORD *)(48 * a3 - 0x57FFFFFFFD8LL) >> 53) & 1) != 0 )
    a7 = *(unsigned __int8 *)(48 * a3 - 0x57FFFFFFFDELL) >> 6;
  if ( a7 )
  {
    if ( a7 == 2 )
      v11 |= 0x18u;
  }
  else
  {
    v11 |= 8u;
  }
  v16 = v11 | 0xA0000000;
  if ( a4 % v9 )
  {
    v26 = (_QWORD *)(v14 + 8 * v13);
    v27 = v14 + 8 * a4;
    MiMakeValidPte(0LL, v13 + a3, v16);
    if ( (unsigned __int64)v26 < v27 )
    {
      while ( 1 )
      {
        if ( MiPteInShadowRange((unsigned __int64)v26) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v29 = 1;
            if ( !HIBYTE(word_1404658EC) )
            {
              v31 = (v30 & 1) == 0;
              goto LABEL_37;
            }
          }
          else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
          {
            v31 = (v30 & 1) == 0;
LABEL_37:
            if ( !v31 )
              v28 |= 0x8000000000000000uLL;
          }
        }
        *v26 = v28;
        if ( v29 )
          MiWritePteShadow((__int64)v26);
        if ( (unsigned __int64)++v26 >= v27 )
        {
          v8 = a1;
          v7 = a5;
          break;
        }
      }
    }
  }
  v17 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !v7 )
  {
    v32 = 1LL;
    do
    {
      v17 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v32;
    }
    while ( v32 );
  }
  v18 = 0LL;
  v19 = v17 + 8 * v12;
  ValidPte = MiMakeValidPte(0LL, a3, v16 | 0x4000000);
  if ( v7 )
  {
    v21 = MiLockWorkingSetShared(v8);
  }
  else
  {
    SharedVm = MiGetSharedVm(v8);
    v21 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
  }
  v36[0] = v21;
  v25 = v21;
  if ( v17 < v19 )
  {
    while ( 1 )
    {
      if ( !v7 )
        goto LABEL_13;
      if ( v18 )
      {
        if ( (v17 & 0xFFF) != 0 )
          goto LABEL_13;
        MiUnlockPageTableInternal(v8, v18);
      }
      v18 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(v8, v18, 0LL);
LABEL_13:
      if ( MiPteInShadowRange(v17) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v23 = 1LL;
          if ( !HIBYTE(word_1404658EC) )
          {
            v34 = (ValidPte & 1) == 0;
            goto LABEL_49;
          }
        }
        else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
        {
          v34 = (ValidPte & 1) == 0;
LABEL_49:
          if ( !v34 )
            v22 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v17 = v22;
      if ( (_DWORD)v23 )
        MiWritePteShadow(v17);
      v17 += 8LL;
      if ( v17 >= v19 )
      {
        v25 = v36[0];
        break;
      }
    }
  }
  if ( v7 )
  {
    if ( v18 )
      MiUnlockPageTableInternal(v8, v18);
    MiUnlockWorkingSetShared(v8, v25);
  }
  else
  {
    LOBYTE(v22) = v25;
    MiUnlockWorkingSetExclusive(v8, v22, v23, v24);
  }
}
