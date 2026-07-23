/*
 * XREFs of MiMapWithLargePages @ 0x1401835A0
 * Callers:
 *     MiInsertInSystemSpace @ 0x1400273C0 (MiInsertInSystemSpace.c)
 *     MiMapContiguousMemoryLarge @ 0x140183324 (MiMapContiguousMemoryLarge.c)
 *     MiUseLargeDriverPage @ 0x140684420 (MiUseLargeDriverPage.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x140063CD0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     MiLockPageTableInternal @ 0x14006CA10 (MiLockPageTableInternal.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
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
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v14; // r12
  int v15; // ebx
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // rsi
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rbp
  unsigned __int64 v21; // r12
  char ValidPte; // bl
  unsigned __int8 v23; // al
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int8 v26; // r15
  __int64 v27; // rdx
  __int64 *v28; // rdi
  unsigned __int64 v29; // rbp
  __int64 v30; // rdx
  int v31; // r8d
  char v32; // r11
  bool v33; // zf
  __int64 v34; // rcx
  LONG *SharedVm; // rdi
  bool v36; // zf
  unsigned __int8 v38[8]; // [rsp+80h] [rbp+28h]

  v7 = a5;
  v8 = a1;
  v9 = a2 >> 9;
  v10 = MiLargePageSizes[a5];
  v12 = a4 % v10;
  v14 = a4 / v10;
  v15 = a6 & 7;
  v16 = v10 * (a4 / v10);
  v17 = (v9 & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( a3 <= 0xFFFFFFFFFLL && ((*(_QWORD *)(48 * a3 - 0x57FFFFFFFD8LL) >> 53) & 1) != 0 )
    a7 = *(unsigned __int8 *)(48 * a3 - 0x57FFFFFFFDELL) >> 6;
  if ( a7 )
  {
    if ( a7 == 2 )
      v15 |= 0x18u;
  }
  else
  {
    v15 |= 8u;
  }
  if ( v12 )
  {
    v28 = (__int64 *)(v17 + 8 * v16);
    v29 = v17 + 8 * a4;
    MiMakeValidPte(0LL, v16 + a3, v15 | 0xA0000000);
    if ( (unsigned __int64)v28 < v29 )
    {
      while ( 1 )
      {
        if ( MiPteInShadowRange((unsigned __int64)v28) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v31 = 1;
            if ( !HIBYTE(word_14043B26C) )
            {
              v33 = (v32 & 1) == 0;
              goto LABEL_38;
            }
          }
          else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
          {
            v33 = (v32 & 1) == 0;
LABEL_38:
            if ( !v33 )
              v30 |= 0x8000000000000000uLL;
          }
        }
        *v28 = v30;
        if ( v31 )
          MiWritePteShadow((__int64)v28, v30);
        if ( (unsigned __int64)++v28 >= v29 )
        {
          v8 = a1;
          v7 = a5;
          break;
        }
      }
    }
  }
  v19 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !v7 )
  {
    v34 = 1LL;
    do
    {
      v19 = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v34;
    }
    while ( v34 );
  }
  v20 = 0LL;
  v21 = v19 + 8 * v14;
  ValidPte = MiMakeValidPte(0LL, a3, v15 | 0xA4000000);
  if ( v7 )
  {
    v23 = MiLockWorkingSetShared(v8);
  }
  else
  {
    SharedVm = MiGetSharedVm(v8);
    v23 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
  }
  v38[0] = v23;
  v26 = v23;
  if ( v19 < v21 )
  {
    while ( 1 )
    {
      if ( !v7 )
        goto LABEL_13;
      if ( v20 )
      {
        if ( (v19 & 0xFFF) != 0 )
          goto LABEL_13;
        MiUnlockPageTableInternal(v8, v20);
      }
      v20 = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(v8, v20, 0);
LABEL_13:
      if ( MiPteInShadowRange(v19) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v24 = 1LL;
          if ( !HIBYTE(word_14043B26C) )
          {
            v36 = (ValidPte & 1) == 0;
            goto LABEL_49;
          }
        }
        else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
        {
          v36 = (ValidPte & 1) == 0;
LABEL_49:
          if ( !v36 )
            v27 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v19 = v27;
      if ( (_DWORD)v24 )
        MiWritePteShadow(v19, v27);
      v19 += 8LL;
      if ( v19 >= v21 )
      {
        v26 = v38[0];
        break;
      }
    }
  }
  if ( v7 )
  {
    if ( v20 )
      MiUnlockPageTableInternal(v8, v20);
    MiUnlockWorkingSetShared(v8, v26);
  }
  else
  {
    MiUnlockWorkingSetExclusive(v8, v26, v24, v25);
  }
}
