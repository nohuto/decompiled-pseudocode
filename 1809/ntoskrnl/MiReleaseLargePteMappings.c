/*
 * XREFs of MiReleaseLargePteMappings @ 0x1402C3B8C
 * Callers:
 *     MiInsertCachedPte @ 0x1400344D0 (MiInsertCachedPte.c)
 *     MiEmptyPteBins @ 0x1400EFC90 (MiEmptyPteBins.c)
 * Callees:
 *     MiReturnSystemVa @ 0x14002840C (MiReturnSystemVa.c)
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiLockPageTableInternal @ 0x14006CA10 (MiLockPageTableInternal.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiInsertLargeTbFlushEntry @ 0x140121554 (MiInsertLargeTbFlushEntry.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

__int64 __fastcall MiReleaseLargePteMappings(__int64 a1, _DWORD *a2, BOOL a3)
{
  unsigned __int64 v3; // rdi
  __int64 v5; // r12
  __int64 v6; // r12
  char *AnyMultiplexedVm; // r15
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdi
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 v12; // r11
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // rbp
  int v17; // r15d
  __int64 v18; // r12
  __int64 v19; // rdx
  int v20; // r8d
  bool v21; // zf
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned int v25; // eax
  signed __int32 v27[8]; // [rsp+0h] [rbp-168h] BYREF
  unsigned __int8 v28; // [rsp+20h] [rbp-148h]
  char *v29; // [rsp+28h] [rbp-140h]
  __int64 v30; // [rsp+30h] [rbp-138h]
  __int64 v31; // [rsp+38h] [rbp-130h]
  unsigned __int64 v32; // [rsp+40h] [rbp-128h]
  _DWORD *v33; // [rsp+48h] [rbp-120h]
  unsigned __int64 v34; // [rsp+50h] [rbp-118h]
  __int64 v35; // [rsp+58h] [rbp-110h]
  int v36; // [rsp+60h] [rbp-108h] BYREF
  __int16 v37; // [rsp+64h] [rbp-104h]
  __int64 v38; // [rsp+68h] [rbp-100h]
  __int64 v39; // [rsp+70h] [rbp-F8h]
  __int64 v40; // [rsp+78h] [rbp-F0h]

  v3 = (unsigned int)a2[1];
  v5 = (*(_QWORD *)(a1 + 16) >> 9) & 0x7FFFFFFFF8LL;
  v33 = a2;
  v6 = v5 - 0x98000000000LL;
  v38 = 20LL;
  v31 = v6;
  v36 = 0;
  v37 = 0;
  v39 = 0LL;
  v40 = 0LL;
  v35 = 0LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(3);
  v29 = AnyMultiplexedVm;
  do
  {
    v8 = v6 + 8 * v3;
    v9 = MI_READ_PTE_LOCK_FREE(v8);
    if ( (v9 & 0xF000) == 0x1000 )
    {
      v13 = 1LL;
    }
    else
    {
      v14 = MI_READ_PTE_LOCK_FREE(v8 + 8);
      if ( qword_14043B180 )
      {
        if ( (v14 & 0x10) != 0 )
          v14 &= ~0x10uLL;
        else
          v14 &= ~qword_14043B180;
      }
      v13 = HIDWORD(v14);
    }
    if ( qword_14043B180 )
    {
      if ( (v9 & 0x10) != 0 )
        v9 &= ~0x10uLL;
      else
        v9 &= ~qword_14043B180;
    }
    v3 = HIDWORD(v9);
    v34 = v13 << 21;
    v15 = (((__int64)((v8 << 25) - v11) >> 16 << 25) - v11) >> 16;
    v32 = v15;
    v30 = v13 + v10;
    v16 = v12 + ((v8 >> 9) & 0x7FFFFFFFF8LL);
    v28 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
    MiLockPageTableInternal((__int64)AnyMultiplexedVm, v16, 0);
    v17 = 0;
    if ( v13 )
    {
      v18 = (__int64)v29;
      while ( 1 )
      {
        if ( MiPteInShadowRange(v8) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v20 = 1;
            if ( !HIBYTE(word_14043B26C) )
            {
              v21 = (v19 & 1) == 0;
              goto LABEL_21;
            }
          }
          else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
          {
            v21 = (v19 & 1) == 0;
LABEL_21:
            if ( !v21 )
              v19 |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v8 = v19;
        if ( v20 )
          MiWritePteShadow(v8, v19);
        if ( a3 )
          MiInsertLargeTbFlushEntry((__int64)&v36, 1u, v8);
        v8 += 8LL;
        if ( (v8 & 0xFFF) == 0 && (unsigned int)(v17 + 1) < v13 )
        {
          MiUnlockPageTableInternal(v18, v16);
          v16 += 8LL;
          MiLockPageTableInternal(v18, v16, 0);
        }
        if ( (unsigned int)++v17 >= v13 )
        {
          v6 = v31;
          v15 = v32;
          break;
        }
      }
    }
    AnyMultiplexedVm = v29;
    MiUnlockPageTableInternal((__int64)v29, v16);
    MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v28);
    if ( a3 )
    {
      MiFlushTbList(&v36, v22, v23, v24);
      if ( v3 )
      {
        _InterlockedOr(v27, 0);
        v25 = KiTbFlushTimeStamp - *v33;
        a3 = v25 <= 2 && ((*v33 & 1) != 0 || v25 < 2);
      }
    }
    MiReturnSystemVa(v15, v15 + v34, 14);
  }
  while ( v3 );
  return v30;
}
