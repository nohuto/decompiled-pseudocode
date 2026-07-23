/*
 * XREFs of MiMakeImageReadOnly @ 0x1401293E8
 * Callers:
 *     MiCreateNewSection @ 0x14061C7E0 (MiCreateNewSection.c)
 * Callees:
 *     MiLockProtoPoolPage @ 0x14002F030 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14002F1F0 (MiUnlockProtoPoolPage.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 *     MiLockLeafPage @ 0x140080EC0 (MiLockLeafPage.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 */

char __fastcall MiMakeImageReadOnly(__int64 a1)
{
  __int64 CurrentThread; // rax
  __int64 v2; // rsi
  __int64 v3; // rdi
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rbp
  __int64 v6; // r11
  __int64 v7; // rdx
  int v8; // r8d
  __int64 v9; // rdx
  int v10; // r8d
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF
  unsigned __int8 v13; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = (__int64)&retaddr;
  v2 = 0LL;
  v13 = 17;
  v3 = a1 + 128;
  if ( a1 == -128 )
    return CurrentThread;
  do
  {
    LOBYTE(CurrentThread) = *(_WORD *)(v3 + 32) & 0x3E;
    if ( (_BYTE)CurrentThread == 2 )
      goto LABEL_3;
    v4 = *(_QWORD *)(v3 + 8);
    CurrentThread = *(unsigned int *)(v3 + 44);
    *(_WORD *)(v3 + 32) = *(_WORD *)(v3 + 32) & 0xFFC1 | 2;
    v5 = v4 + 8 * CurrentThread;
    while ( v4 < v5 )
    {
      if ( (v4 & 0xFFF) == 0 || v13 == 17 )
      {
        if ( v13 != 17 )
          MiUnlockProtoPoolPage(v2, v13);
        while ( 1 )
        {
          v2 = MiLockProtoPoolPage(v4, &v13);
          if ( v2 )
            break;
          MmAccessFault(2uLL, v4, 0LL, 0LL);
        }
      }
      MiLockLeafPage((__int64 *)v4, 0);
      CurrentThread = MI_READ_PTE_LOCK_FREE(v4);
      if ( v6 )
      {
        if ( (CurrentThread & 1) == 0 )
        {
          if ( !MiPteInShadowRange(v4) )
            goto LABEL_17;
          if ( (unsigned int)MiPteHasShadow() )
          {
            v10 = 1;
            if ( !HIBYTE(word_14043B26C) )
              goto LABEL_40;
          }
          else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
          {
LABEL_40:
            if ( (v9 & 1) != 0 )
              v9 |= 0x8000000000000000uLL;
          }
LABEL_17:
          *(_QWORD *)v4 = v9;
          if ( v10 )
            MiWritePteShadow(v4, v9);
          *(_QWORD *)(v6 + 16) = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x20;
        }
        LOBYTE(CurrentThread) = -1;
        _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_14;
      }
      if ( (CurrentThread & 0x400) != 0 || CurrentThread )
      {
        LODWORD(CurrentThread) = MiPteInShadowRange(v4);
        if ( !(_DWORD)CurrentThread )
          goto LABEL_12;
        LODWORD(CurrentThread) = MiPteHasShadow();
        if ( (_DWORD)CurrentThread )
        {
          v8 = 1;
          if ( !HIBYTE(word_14043B26C) )
          {
LABEL_34:
            if ( (v7 & 1) != 0 )
              v7 |= 0x8000000000000000uLL;
          }
        }
        else
        {
          CurrentThread = (__int64)KeGetCurrentThread();
          if ( (*(_DWORD *)(*(_QWORD *)(CurrentThread + 184) + 1740LL) & 0x1000) != 0 )
            goto LABEL_34;
        }
LABEL_12:
        *(_QWORD *)v4 = v7;
        if ( v8 )
          LOBYTE(CurrentThread) = MiWritePteShadow(v4, v7);
      }
LABEL_14:
      v4 += 8LL;
    }
    if ( v13 != 17 )
    {
      LOBYTE(CurrentThread) = MiUnlockProtoPoolPage(v2, v13);
      v13 = 17;
    }
LABEL_3:
    v3 = *(_QWORD *)(v3 + 16);
  }
  while ( v3 );
  return CurrentThread;
}
