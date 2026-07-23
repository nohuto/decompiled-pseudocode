/*
 * XREFs of MmFreeLoaderBlock @ 0x1409C6164
 * Callers:
 *     KeInitSystem @ 0x1409C5988 (KeInitSystem.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiLockPageTableInternal @ 0x14006CA10 (MiLockPageTableInternal.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiGetWsleContents @ 0x140085F30 (MiGetWsleContents.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     MiWriteWsle @ 0x1400DB218 (MiWriteWsle.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiMarkPfnTradable @ 0x14013DA44 (MiMarkPfnTradable.c)
 *     MiDeleteBootRange @ 0x140181240 (MiDeleteBootRange.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MmFreeBootRegistry @ 0x1407378C8 (MmFreeBootRegistry.c)
 *     MiFreeRegistryPageRange @ 0x1409C6664 (MiFreeRegistryPageRange.c)
 */

void MmFreeLoaderBlock()
{
  __int64 *v0; // rdi
  unsigned int v1; // r15d
  __int64 v2; // rbx
  __int64 *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  int v6; // eax
  _QWORD *PoolWithTag; // rax
  signed __int64 v8; // r12
  char *v9; // rsi
  unsigned __int8 v10; // al
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // rbx
  _QWORD *v14; // rax
  _QWORD *v15; // rsi
  __int64 *v16; // rcx
  _QWORD *v17; // rbx
  unsigned int v18; // eax
  int v19; // edx
  _QWORD *i; // rbx
  __int64 v21; // r8
  __int64 v22; // rdx
  _QWORD *v23; // rcx
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // rsi
  __int64 v28; // rcx
  char *v29; // r12
  __int64 v30; // r14
  __int64 v31; // rdi
  unsigned __int64 v32; // r13
  unsigned __int64 *v33; // rax
  unsigned __int64 v34; // r15
  unsigned __int64 v35; // rax
  __int64 v36; // rcx
  char WsleContents; // al
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rdx
  int v41; // r9d
  __int64 v42; // r13
  __int64 v44; // r14
  unsigned __int64 v45; // rdx
  char v46; // r8
  bool v47; // zf
  unsigned __int8 v48; // [rsp+28h] [rbp-E0h]
  unsigned int v49; // [rsp+2Ch] [rbp-DCh]
  __int64 v50; // [rsp+30h] [rbp-D8h]
  __int64 v51; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v52; // [rsp+40h] [rbp-C8h]
  __int64 v53; // [rsp+48h] [rbp-C0h]
  unsigned __int64 *v54; // [rsp+50h] [rbp-B8h]
  char *AnyMultiplexedVm; // [rsp+58h] [rbp-B0h]
  _QWORD *v56; // [rsp+60h] [rbp-A8h]
  __int64 v57; // [rsp+68h] [rbp-A0h]
  __int64 v58; // [rsp+70h] [rbp-98h]
  __int64 v59; // [rsp+78h] [rbp-90h]
  int v60; // [rsp+88h] [rbp-80h] BYREF
  __int16 v61; // [rsp+8Ch] [rbp-7Ch]
  __int64 v62; // [rsp+90h] [rbp-78h]
  __int64 v63; // [rsp+98h] [rbp-70h]
  __int64 v64; // [rsp+A0h] [rbp-68h]

  v0 = (__int64 *)(KeLoaderBlock_0 + 32);
  v52 = 0LL;
  v1 = 0;
  v50 = 0LL;
  v2 = 0LL;
  v59 = KeLoaderBlock_0 + 32;
  v3 = *(__int64 **)(KeLoaderBlock_0 + 32);
  if ( v3 != (__int64 *)(KeLoaderBlock_0 + 32) )
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
    v49 = v1;
    if ( v2 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v2 + 8, 0x624D6D4Du);
      v56 = PoolWithTag;
      v8 = (signed __int64)PoolWithTag;
      if ( PoolWithTag )
      {
        *PoolWithTag = v2;
        v62 = 20LL;
        v54 = PoolWithTag + 1;
        v60 = 0;
        v61 = 0;
        v63 = 0LL;
        v64 = 0LL;
        AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
        v9 = AnyMultiplexedVm;
        v10 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
        v13 = (__int64 *)*v0;
        v48 = v10;
        if ( (__int64 *)*v0 != v0 )
        {
          while ( *((_DWORD *)v13 + 4) != 19 || !v13[4] )
          {
LABEL_13:
            v13 = (__int64 *)*v13;
            if ( v13 == v0 )
            {
              v8 = (signed __int64)v56;
              v1 = v49;
              v10 = v48;
              goto LABEL_15;
            }
          }
          v53 = 0LL;
          v27 = 0LL;
          v57 = v13[3];
          v28 = 0LL;
          v58 = 0LL;
          v29 = AnyMultiplexedVm;
          v30 = 48 * v57 - 0x58000000000LL;
          v31 = v50;
          while ( 1 )
          {
            v32 = *(_QWORD *)(v30 + 8) | 0x8000000000000000uLL;
            v33 = v54;
            v34 = (__int64)((v32 << 25) - v28) >> 16;
            *v54 = v34;
            v54 = v33 + 1;
            v35 = ((v32 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v51 = v35;
            if ( v27 != v35 )
            {
              if ( v27 )
              {
                MiFlushTbList(&v60, 0xFFFFF68000000000uLL, v11, v12);
                MiFreeRegistryPageRange(v52, v31);
                MiUnlockPageTableInternal((__int64)v29, v27);
                v35 = v51;
              }
              v27 = v35;
              MiLockPageTableInternal((__int64)v29, v35, 0);
            }
            v51 = MI_READ_PTE_LOCK_FREE(v32);
            MiMarkPfnTradable(v30, 0);
            WsleContents = MiGetWsleContents(v36, v34);
            MiWriteWsle(v38, v34, WsleContents & 0xF0 | 0xA);
            v39 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v51);
            v51 = MiSwizzleInvalidPte(v39 & 0xFFFFFFFFF000LL | 0x880);
            if ( !MiPteInShadowRange(v32) )
              goto LABEL_39;
            if ( (unsigned int)MiPteHasShadow() )
            {
              v41 = 1;
              if ( !HIBYTE(word_14043B26C) )
              {
                v47 = (v46 & 1) == 0;
                goto LABEL_54;
              }
            }
            else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
            {
              v47 = (v46 & 1) == 0;
LABEL_54:
              if ( !v47 )
                v40 |= 0x8000000000000000uLL;
            }
LABEL_39:
            *(_QWORD *)v32 = v40;
            if ( v41 )
              MiWritePteShadow(v32, v40);
            if ( HIDWORD(v62) )
            {
              v42 = v52;
              ++v31;
            }
            else
            {
              v31 = 1LL;
              v42 = v57 + v53;
              v52 = v57 + v53;
            }
            MiInsertTbFlushEntry((__int64)&v60, v34, 1LL, 0);
            v30 += 48LL;
            v28 = v58;
            if ( ++v53 >= (unsigned __int64)v13[4] )
            {
              v50 = v31;
              v44 = v31;
              v0 = (__int64 *)v59;
              MiFlushTbList(&v60, 0xFFFFF68000000000uLL, v11, v12);
              MiFreeRegistryPageRange(v42, v44);
              v45 = v27;
              v9 = AnyMultiplexedVm;
              MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v45);
              goto LABEL_13;
            }
          }
        }
LABEL_15:
        MiUnlockWorkingSetShared((__int64)v9, v10);
        if ( _InterlockedCompareExchange64(&qword_14043BF88, v8, 0LL) )
        {
          qword_14043BF88 = v8;
          MmFreeBootRegistry();
        }
      }
    }
  }
  v14 = ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * v1, 0x624D6D4Du);
  v15 = v14;
  if ( v14 )
  {
    v16 = (__int64 *)*v0;
    v17 = v14;
    if ( (__int64 *)*v0 != v0 )
    {
      do
      {
        v18 = *((_DWORD *)v16 + 4);
        if ( v18 <= 0x15 )
        {
          v19 = 2113664;
          if ( _bittest(&v19, v18) )
          {
            if ( v16[4] )
            {
              *v17 = v16[3];
              v17[1] = v16[4];
              v17 += 2;
            }
          }
        }
        v16 = (__int64 *)*v16;
      }
      while ( v16 != v0 );
      if ( v17 != v15 )
      {
        for ( i = v17 - 2; i >= v15; i -= 2 )
        {
          v21 = 48LL * *i;
          v22 = i[1];
          v23 = (_QWORD *)(v21 - 0x57FFFFFFFF8LL);
          v24 = *(_QWORD *)(v21 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL;
          while ( --v22 )
          {
            v23 += 6;
            v24 += 8LL;
            if ( (*v23 | 0x8000000000000000uLL) != v24 )
            {
              v25 = *(_QWORD *)(v21 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL;
              v26 = (__int64)(v24 - v25) >> 3;
              MiDeleteBootRange(v25, v26, v21);
              i[1] -= v26;
              *i += v26;
              i += 2;
              if ( v26 )
                goto LABEL_29;
              break;
            }
          }
          MiDeleteBootRange(*(_QWORD *)(48LL * *i - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL, i[1], v21);
LABEL_29:
          ;
        }
      }
    }
    ExFreePoolWithTag(v15, 0);
  }
}
