/*
 * XREFs of MmFreeLoaderBlock @ 0x1409FDF14
 * Callers:
 *     KeInitSystem @ 0x1409FD758 (KeInitSystem.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiMakeTransitionPte @ 0x14002C970 (MiMakeTransitionPte.c)
 *     MiFlushTbList @ 0x140050080 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140058D70 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     MiMarkPfnTradable @ 0x14008FE98 (MiMarkPfnTradable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockPageTableInternal @ 0x1400ABA00 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x1400CA970 (MiGetAnyMultiplexedVm.c)
 *     MiGetWsleContents @ 0x1400CAFE0 (MiGetWsleContents.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiWriteWsle @ 0x1400FA424 (MiWriteWsle.c)
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
 *     MiDeleteBootRange @ 0x14018B138 (MiDeleteBootRange.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MmFreeBootRegistry @ 0x14075C5E8 (MmFreeBootRegistry.c)
 *     MiFreeRegistryPageRange @ 0x1409FE414 (MiFreeRegistryPageRange.c)
 */

void MmFreeLoaderBlock()
{
  __int64 *v0; // r14
  unsigned int v1; // esi
  __int64 v2; // rdi
  __int64 *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  int v6; // eax
  _QWORD *PoolWithTag; // rax
  signed __int64 v8; // r15
  char *AnyMultiplexedVm; // r13
  unsigned __int8 v10; // al
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // rbx
  __int64 v14; // r15
  _QWORD *v15; // rax
  _QWORD *v16; // rsi
  __int64 *v17; // rcx
  _QWORD *v18; // rbx
  unsigned int v19; // eax
  int v20; // edx
  _QWORD *i; // rbx
  __int64 v22; // r8
  __int64 v23; // rdx
  _QWORD *v24; // rcx
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rdi
  unsigned __int64 v28; // rdi
  __int64 v29; // rcx
  unsigned __int64 v30; // r14
  __int64 v31; // rsi
  unsigned __int64 v32; // r12
  unsigned __int64 *v33; // rax
  unsigned __int64 v34; // rbp
  unsigned __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rcx
  unsigned __int64 v39; // rax
  __int64 v40; // rdx
  int v41; // r9d
  __int64 v42; // r12
  char v44; // r8
  bool v45; // zf
  unsigned __int8 v46; // [rsp+20h] [rbp-148h]
  unsigned int v47; // [rsp+24h] [rbp-144h]
  __int64 TransitionPte; // [rsp+28h] [rbp-140h] BYREF
  __int64 v49; // [rsp+30h] [rbp-138h]
  __int64 v50; // [rsp+38h] [rbp-130h]
  unsigned __int64 v51; // [rsp+40h] [rbp-128h]
  unsigned __int64 *v52; // [rsp+48h] [rbp-120h]
  _QWORD *v53; // [rsp+50h] [rbp-118h]
  __int64 v54; // [rsp+58h] [rbp-110h]
  __int64 *v55; // [rsp+60h] [rbp-108h]
  _QWORD v56[24]; // [rsp+70h] [rbp-F8h] BYREF

  memset(v56, 0, 0xB8uLL);
  v0 = (__int64 *)(KeLoaderBlock_0 + 32);
  v1 = 0;
  v55 = v0;
  TransitionPte = 0LL;
  v2 = 0LL;
  v49 = 0LL;
  v3 = *(__int64 **)(KeLoaderBlock_0 + 32);
  if ( (__int64 *)*v0 != v0 )
  {
    do
    {
      v4 = v3[4];
      v5 = v2;
      if ( v4 )
      {
        v6 = *((_DWORD *)v3 + 4);
        v2 += v4;
        if ( v6 != 19 )
          v2 = v5;
        if ( v6 == 7 || v6 == 21 || v6 == 14 )
          ++v1;
      }
      v3 = (__int64 *)*v3;
    }
    while ( v3 != v0 );
    v47 = v1;
    if ( v2 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v2 + 8, 0x624D6D4Du);
      v53 = PoolWithTag;
      v8 = (signed __int64)PoolWithTag;
      if ( PoolWithTag )
      {
        *PoolWithTag = v2;
        v56[3] = 0LL;
        v52 = PoolWithTag + 1;
        LODWORD(v56[1]) = 20;
        AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
        v10 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
        v13 = (__int64 *)*v0;
        v46 = v10;
        if ( (__int64 *)*v0 != v0 )
        {
          v14 = TransitionPte;
          while ( *((_DWORD *)v13 + 4) != 19 || !v13[4] )
          {
LABEL_14:
            v13 = (__int64 *)*v13;
            if ( v13 == v0 )
            {
              v8 = (signed __int64)v53;
              v1 = v47;
              v10 = v46;
              goto LABEL_16;
            }
          }
          v50 = 0LL;
          v28 = 0LL;
          v51 = v13[3];
          v29 = 0LL;
          v54 = 0LL;
          v30 = v51;
          v31 = 48 * v51 - 0x58000000000LL;
          while ( 1 )
          {
            v32 = *(_QWORD *)(v31 + 8) | 0x8000000000000000uLL;
            v33 = v52;
            v34 = (__int64)((v32 << 25) - v29) >> 16;
            *v52 = v34;
            v52 = v33 + 1;
            v35 = ((v32 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v51 = v35;
            if ( v28 != v35 )
            {
              if ( v28 )
              {
                MiFlushTbList((int *)v56, 0xFFFFF68000000000uLL, v11, v12);
                MiFreeRegistryPageRange(v49, v14);
                MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v28);
                v35 = v51;
              }
              v28 = v35;
              MiLockPageTableInternal((__int64)AnyMultiplexedVm, v35, 0LL);
            }
            TransitionPte = MI_READ_PTE_LOCK_FREE(v32);
            MiMarkPfnTradable(v31, 0);
            LOBYTE(v37) = MiGetWsleContents(v36, v34) & 0xF0 | 0xA;
            MiWriteWsle(v38, v34, v37);
            v39 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&TransitionPte);
            TransitionPte = MiMakeTransitionPte((v39 >> 12) & 0xFFFFFFFFFLL, 4);
            if ( !MiPteInShadowRange(v32) )
              goto LABEL_40;
            if ( (unsigned int)MiPteHasShadow() )
            {
              v41 = 1;
              if ( !HIBYTE(word_1404658EC) )
              {
                v45 = (v44 & 1) == 0;
                goto LABEL_55;
              }
            }
            else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
            {
              v45 = (v44 & 1) == 0;
LABEL_55:
              if ( !v45 )
                v40 |= 0x8000000000000000uLL;
            }
LABEL_40:
            *(_QWORD *)v32 = v40;
            if ( v41 )
              MiWritePteShadow(v32);
            if ( HIDWORD(v56[1]) )
            {
              v42 = v49;
              ++v14;
            }
            else
            {
              v14 = 1LL;
              v42 = v30 + v50;
              v49 = v30 + v50;
            }
            MiInsertTbFlushEntry((__int64)v56, v34, 1LL, 0);
            v31 += 48LL;
            v29 = v54;
            if ( ++v50 >= (unsigned __int64)v13[4] )
            {
              v0 = v55;
              MiFlushTbList((int *)v56, 0xFFFFF68000000000uLL, v11, v12);
              MiFreeRegistryPageRange(v42, v14);
              MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v28);
              goto LABEL_14;
            }
          }
        }
LABEL_16:
        MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v10);
        if ( _InterlockedCompareExchange64(&qword_140466648, v8, 0LL) )
        {
          qword_140466648 = v8;
          MmFreeBootRegistry();
        }
      }
    }
  }
  v15 = ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * v1, 0x624D6D4Du);
  v16 = v15;
  if ( v15 )
  {
    v17 = (__int64 *)*v0;
    v18 = v15;
    if ( (__int64 *)*v0 != v0 )
    {
      do
      {
        v19 = *((_DWORD *)v17 + 4);
        if ( v19 <= 0x15 )
        {
          v20 = 2113664;
          if ( _bittest(&v20, v19) )
          {
            if ( v17[4] )
            {
              *v18 = v17[3];
              v18[1] = v17[4];
              v18 += 2;
            }
          }
        }
        v17 = (__int64 *)*v17;
      }
      while ( v17 != v0 );
      if ( v18 != v16 )
      {
        for ( i = v18 - 2; i >= v16; i -= 2 )
        {
          v22 = 48LL * *i;
          v23 = i[1];
          v24 = (_QWORD *)(v22 - 0x57FFFFFFFF8LL);
          v25 = *(_QWORD *)(v22 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL;
          while ( --v23 )
          {
            v24 += 6;
            v25 += 8LL;
            if ( (*v24 | 0x8000000000000000uLL) != v25 )
            {
              v26 = *(_QWORD *)(v22 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL;
              v27 = (__int64)(v25 - v26) >> 3;
              MiDeleteBootRange(v26, v27, v22);
              i[1] -= v27;
              *i += v27;
              i += 2;
              if ( v27 )
                goto LABEL_30;
              break;
            }
          }
          MiDeleteBootRange(*(_QWORD *)(48LL * *i - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL, i[1], v22);
LABEL_30:
          ;
        }
      }
    }
    ExFreePoolWithTag(v16, 0);
  }
}
