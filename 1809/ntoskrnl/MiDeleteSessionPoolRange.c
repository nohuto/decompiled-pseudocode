/*
 * XREFs of MiDeleteSessionPoolRange @ 0x1402AC414
 * Callers:
 *     MiDeleteLeakedSessionPool @ 0x1406E1BA0 (MiDeleteLeakedSessionPool.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiLockPageTableInternal @ 0x14006CA10 (MiLockPageTableInternal.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiDeleteSystemPagableVm @ 0x140079F00 (MiDeleteSystemPagableVm.c)
 *     MiPageTableLockIsContended @ 0x140096344 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x1400991E0 (MiWorkingSetIsContended.c)
 *     MiGetSessionVm @ 0x1400E94DC (MiGetSessionVm.c)
 *     KeShouldYieldProcessor @ 0x1400F9D60 (KeShouldYieldProcessor.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 */

__int64 __fastcall MiDeleteSessionPoolRange(unsigned __int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 SessionVm; // rsi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r14
  unsigned __int8 v10; // bp
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // r8d
  bool v14; // zf

  SessionVm = MiGetSessionVm();
  v6 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = 0LL;
  v9 = v6 + 8 * (v7 >> 12);
  v10 = MiLockWorkingSetShared(SessionVm);
  if ( v6 >= v9 )
    return MiUnlockWorkingSetShared(SessionVm, v10);
  do
  {
    if ( v8 )
    {
      if ( (v6 & 0xFFF) != 0 )
        goto LABEL_6;
      MiUnlockPageTableInternal(SessionVm, v8);
    }
    v8 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal(SessionVm, v8, 0);
LABEL_6:
    v11 = MI_READ_PTE_LOCK_FREE(v6);
    if ( (v11 & 0xC01) == 0 && (v11 & 0x3E0) == 0 )
    {
      if ( !v11 )
        goto LABEL_20;
    }
    else
    {
      MiUnlockPageTableInternal(SessionVm, v8);
      MiUnlockWorkingSetShared(SessionVm, v10);
      MiDeleteSystemPagableVm(SessionVm, 0LL, v6, 1LL, 0, a3);
      v10 = MiLockWorkingSetShared(SessionVm);
      MiLockPageTableInternal(SessionVm, v8, 0);
    }
    if ( MiPteInShadowRange(v6) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v13 = 1;
        if ( !HIBYTE(word_14043B26C) )
        {
          v14 = (v12 & 1) == 0;
          goto LABEL_16;
        }
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
      {
        v14 = (v12 & 1) == 0;
LABEL_16:
        if ( !v14 )
          v12 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v6 = v12;
    if ( v13 )
      MiWritePteShadow(v6, v12);
LABEL_20:
    v6 += 8LL;
    if ( v6 == v9 )
      break;
    if ( (v6 & 0x78) == 0
      && (MiWorkingSetIsContended(SessionVm)
       || (unsigned int)MiPageTableLockIsContended(SessionVm, v8)
       || KeShouldYieldProcessor()) )
    {
      MiUnlockPageTableInternal(SessionVm, v8);
      MiUnlockWorkingSetShared(SessionVm, v10);
      v8 = 0LL;
      MiLockWorkingSetShared(SessionVm);
    }
  }
  while ( v6 < v9 );
  if ( v8 )
    MiUnlockPageTableInternal(SessionVm, v8);
  return MiUnlockWorkingSetShared(SessionVm, v10);
}
