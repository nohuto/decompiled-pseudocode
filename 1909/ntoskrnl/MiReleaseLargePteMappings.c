/*
 * XREFs of MiReleaseLargePteMappings @ 0x1402DD99C
 * Callers:
 *     MiInsertCachedPte @ 0x14006B510 (MiInsertCachedPte.c)
 *     MiEmptyPteBins @ 0x1400DAD10 (MiEmptyPteBins.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140050080 (MiFlushTbList.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockPageTableInternal @ 0x1400ABA00 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x1400CA970 (MiGetAnyMultiplexedVm.c)
 *     MiReturnSystemVa @ 0x1400E6D50 (MiReturnSystemVa.c)
 *     MiInsertLargeTbFlushEntry @ 0x1400F86C0 (MiInsertLargeTbFlushEntry.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall MiReleaseLargePteMappings(__int64 a1, _DWORD *a2, BOOL a3)
{
  unsigned __int64 v3; // r13
  unsigned __int64 v6; // rdi
  __int64 v7; // r13
  char *AnyMultiplexedVm; // r15
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdi
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // r11
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // rbp
  int v18; // r15d
  __int64 v19; // r13
  __int64 v20; // rdx
  int v21; // r8d
  bool v22; // zf
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int v26; // eax
  signed __int32 v28[8]; // [rsp+0h] [rbp-168h] BYREF
  unsigned __int8 v29; // [rsp+20h] [rbp-148h]
  char *v30; // [rsp+28h] [rbp-140h]
  __int64 v31; // [rsp+30h] [rbp-138h]
  unsigned __int64 v32; // [rsp+38h] [rbp-130h]
  __int64 v33; // [rsp+40h] [rbp-128h]
  _DWORD *v34; // [rsp+48h] [rbp-120h]
  unsigned __int64 v35; // [rsp+50h] [rbp-118h]
  __int64 v36; // [rsp+58h] [rbp-110h]
  _QWORD v37[24]; // [rsp+60h] [rbp-108h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v34 = a2;
  memset(v37, 0, 0xB8uLL);
  v6 = (unsigned int)a2[1];
  v37[3] = 0LL;
  v7 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v33 = v7;
  LODWORD(v37[1]) = 20;
  v36 = 0LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(3);
  v30 = AnyMultiplexedVm;
  do
  {
    v9 = v7 + 8 * v6;
    v10 = MI_READ_PTE_LOCK_FREE(v9);
    if ( (v10 & 0xF000) == 0x1000 )
    {
      v14 = 1LL;
    }
    else
    {
      v15 = MI_READ_PTE_LOCK_FREE(v9 + 8);
      if ( qword_140465800 )
      {
        if ( (v15 & 0x10) != 0 )
          v15 &= ~0x10uLL;
        else
          v15 &= ~qword_140465800;
      }
      v14 = HIDWORD(v15);
    }
    if ( qword_140465800 )
    {
      if ( (v10 & 0x10) != 0 )
        v10 &= ~0x10uLL;
      else
        v10 &= ~qword_140465800;
    }
    v6 = HIDWORD(v10);
    v35 = v14 << 21;
    v16 = (((__int64)((v9 << 25) - v12) >> 16 << 25) - v12) >> 16;
    v32 = v16;
    v31 = v14 + v11;
    v17 = v13 + ((v9 >> 9) & 0x7FFFFFFFF8LL);
    v29 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
    MiLockPageTableInternal((__int64)AnyMultiplexedVm, v17, 0LL);
    v18 = 0;
    if ( v14 )
    {
      v19 = (__int64)v30;
      while ( 1 )
      {
        if ( MiPteInShadowRange(v9) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v21 = 1;
            if ( !HIBYTE(word_1404658EC) )
            {
              v22 = (v20 & 1) == 0;
              goto LABEL_21;
            }
          }
          else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
          {
            v22 = (v20 & 1) == 0;
LABEL_21:
            if ( !v22 )
              v20 |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v9 = v20;
        if ( v21 )
          MiWritePteShadow(v9);
        if ( a3 )
          MiInsertLargeTbFlushEntry((__int64)v37, 1u, v9);
        v9 += 8LL;
        if ( (v9 & 0xFFF) == 0 && (unsigned int)(v18 + 1) < v14 )
        {
          MiUnlockPageTableInternal(v19, v17);
          v17 += 8LL;
          MiLockPageTableInternal(v19, v17, 0LL);
        }
        if ( (unsigned int)++v18 >= v14 )
        {
          v16 = v32;
          v7 = v33;
          break;
        }
      }
    }
    AnyMultiplexedVm = v30;
    MiUnlockPageTableInternal((__int64)v30, v17);
    MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v29);
    if ( a3 )
    {
      MiFlushTbList((int *)v37, v23, v24, v25);
      if ( v6 )
      {
        _InterlockedOr(v28, 0);
        v26 = KiTbFlushTimeStamp - *v34;
        a3 = v26 <= 2 && ((*v34 & 1) != 0 || v26 < 2);
      }
    }
    MiReturnSystemVa(v16, v16 + v35, 13);
  }
  while ( v6 );
  return v31;
}
