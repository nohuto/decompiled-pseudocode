/*
 * XREFs of MiTerminateWsleCluster @ 0x14004E0A0
 * Callers:
 *     MiDeleteVa @ 0x14004B520 (MiDeleteVa.c)
 *     MiDeleteVaTail @ 0x14004DEC0 (MiDeleteVaTail.c)
 *     MiDecommitPages @ 0x1400577E0 (MiDecommitPages.c)
 *     MiRemoveMappedPtes @ 0x14005E8F0 (MiRemoveMappedPtes.c)
 *     MiAppendWsleCluster @ 0x14005ED10 (MiAppendWsleCluster.c)
 *     MiDeletePteWsleCluster @ 0x14012F8B0 (MiDeletePteWsleCluster.c)
 * Callees:
 *     MiUnlockWsle @ 0x14001FE74 (MiUnlockWsle.c)
 *     MiDeleteValidSystemPage @ 0x140024940 (MiDeleteValidSystemPage.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiRemoveWsle @ 0x14004C5E0 (MiRemoveWsle.c)
 *     MiFlushTbList @ 0x140050080 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140058D70 (MiInsertTbFlushEntry.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCountWslesInPageTable @ 0x1400F2590 (MiCountWslesInPageTable.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiCompressTbFlushList @ 0x140116650 (MiCompressTbFlushList.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     qsort @ 0x1401A11F0 (qsort.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall MiTerminateWsleCluster(__int64 a1)
{
  unsigned __int64 v2; // r13
  __int64 result; // rax
  unsigned __int64 v4; // r10
  __int64 v5; // r14
  unsigned __int64 v6; // r15
  unsigned __int8 v7; // al
  int v8; // ecx
  __int64 v9; // r8
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  char v19; // r9
  __int64 v20; // rsi
  unsigned __int64 v21; // r15
  unsigned int v22; // r8d
  char v23; // r9
  __int64 v24; // rax
  unsigned __int64 v25; // r10
  unsigned __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned __int64 *v30; // rbx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rdx
  unsigned __int64 v36; // rax
  char v37; // r11
  char v38; // cl
  unsigned __int64 i; // rbx
  unsigned __int64 DeepFreezeStartTime; // r8
  __int64 v41; // rax
  __int64 v42; // r8
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rbx
  unsigned __int64 v46; // rdi
  unsigned __int64 v47; // rsi
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // r8
  __int64 v52; // [rsp+40h] [rbp-C0h]
  __int64 v53; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v54; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v55; // [rsp+58h] [rbp-A8h]
  __int64 v56; // [rsp+60h] [rbp-A0h]
  __int64 v57; // [rsp+68h] [rbp-98h]
  __int64 v58; // [rsp+70h] [rbp-90h]
  __int64 v59; // [rsp+78h] [rbp-88h]
  int v60; // [rsp+80h] [rbp-80h] BYREF
  __int16 v61; // [rsp+84h] [rbp-7Ch]
  __int16 v62; // [rsp+86h] [rbp-7Ah]
  __int64 v63; // [rsp+88h] [rbp-78h]
  __int64 v64; // [rsp+90h] [rbp-70h]
  _QWORD Base[21]; // [rsp+98h] [rbp-68h] BYREF
  _DWORD v66[8]; // [rsp+140h] [rbp+40h] BYREF

  v62 = 0;
  memset(&Base[1], 0, 0x98uLL);
  v2 = *(_QWORD *)(a1 + 8);
  result = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  if ( v2 )
  {
    v4 = 0xFFFFF68000000000uLL;
    v5 = *(_QWORD *)a1;
    v52 = *(_QWORD *)a1;
    v6 = (__int64)(v2 << 25) >> 16;
    v7 = *(_BYTE *)(*(_QWORD *)a1 + 184LL) & 7;
    if ( v7 )
    {
      v8 = 2;
      if ( v7 >= 2u )
        v8 = 0;
    }
    else
    {
      v8 = 1;
    }
    v9 = *(_QWORD *)(a1 + 16);
    v63 = 20LL;
    v60 = v8;
    v61 = 0;
    v64 = 0LL;
    Base[0] = 0LL;
    v10 = 0xFFFFF6FB7DBED7F8uLL;
    if ( (*(_BYTE *)(v5 + 184) & 7) != 0 )
    {
      MiInsertTbFlushEntry(&v60, (__int64)(v2 << 25) >> 16, v9);
      if ( (*(_BYTE *)(a1 + 26) & 0xF) == 8 )
      {
        v45 = 0LL;
        if ( *(_QWORD *)(a1 + 16) )
        {
          v46 = (__int64)(v2 << 25) >> 16;
          v47 = v2;
          do
          {
            v48 = MI_READ_PTE_LOCK_FREE(v47);
            MiUnlockWsle(v5, v46, 48 * ((v48 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
            ++v45;
            v47 += 8LL;
            v46 += 4096LL;
          }
          while ( v45 < *(_QWORD *)(a1 + 16) );
          v6 = (__int64)(v2 << 25) >> 16;
        }
      }
    }
    else
    {
      v11 = 0LL;
      if ( v9 )
      {
        v12 = v2;
        v13 = (__int64)(v2 << 25) >> 16;
        while ( 1 )
        {
          v14 = *(_QWORD *)v12;
          if ( v12 >= 0xFFFFF6FB7DBED000uLL
            && v12 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v14 & 1) != 0
            && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
          {
            DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
            if ( DeepFreezeStartTime )
            {
              v41 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v12 >> 3) & 0x1FF));
              v42 = v14 | 0x20;
              if ( (v41 & 0x20) == 0 )
                v42 = *(_QWORD *)v12;
              v14 = v42;
              if ( (v41 & 0x42) != 0 )
                v14 = v42 | 0x42;
            }
          }
          v15 = *(_QWORD *)v12;
          v16 = v14 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
          if ( v12 >= 0xFFFFF6FB7DBED000uLL && v12 <= 0xFFFFF6FB7DBED7F8uLL )
          {
            if ( (unsigned int)MiPteHasShadow(0xFFFFF6FFFFFFFFFFuLL) )
              LOBYTE(v15) = v15 | 0x20;
          }
          if ( (MiFlags & 0x800) != 0 )
          {
            LOBYTE(v15) = 32;
          }
          else if ( (MiFlags & 0x4000000) != 0 )
          {
            _mm_lfence();
          }
          if ( (v15 & 0x20) != 0 )
          {
            if ( MiPteInShadowRange(v12) && (unsigned int)MiPteHasShadow(v18) )
            {
              *(_QWORD *)v12 = v17;
              MiWritePteShadow(v12, v17);
              v4 = 0xFFFFF68000000000uLL;
            }
            else
            {
              *(_QWORD *)v12 = v17;
            }
          }
          else
          {
            v37 = _InterlockedExchange64((volatile __int64 *)v12, v16);
            if ( v12 >= 0xFFFFF6FB7DBED000uLL && v12 <= v10 )
            {
              MiWritePteShadow(v12, v16);
              v4 = 0xFFFFF68000000000uLL;
            }
            if ( (v37 & 0x20) == 0 )
              goto LABEL_23;
          }
          v19 = v61;
          v20 = 1LL;
          v21 = v13;
          if ( v60 != 1 && (v61 & 8) == 0 && v13 >= v4 && v13 <= 0xFFFFF6FFFFFFFFFFuLL )
          {
            v19 = v61 | 8;
            LOBYTE(v61) = v61 | 8;
          }
          v22 = HIDWORD(v63);
          if ( !HIDWORD(v63) )
          {
LABEL_34:
            if ( HIDWORD(v63) >= (unsigned int)v63 )
            {
              HIBYTE(v61) = 1;
            }
            else
            {
              while ( 1 )
              {
                v35 = (unsigned __int64)(v20 - 1) > 0x3FF ? 1024LL : v20;
                v36 = v21 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v35 - 1) & 0x3FF;
                v20 -= v35;
                v21 += v35 << 12;
                Base[v22] = v36;
                v64 += v35;
                v22 = HIDWORD(v63) + 1;
                HIDWORD(v63) = v22;
                if ( v22 == (_DWORD)v63 && (v61 & 4) == 0 )
                {
                  qsort(Base, v22, 8uLL, MiTbFlushSort);
                  MiCompressTbFlushList(&v60);
                  v22 = HIDWORD(v63);
                  if ( HIDWORD(v63) == (_DWORD)v63 )
                    break;
                }
                if ( !v20 )
                  goto LABEL_23;
              }
              if ( v20 )
              {
                HIBYTE(v61) = 1;
                v64 = HIDWORD(v63);
              }
            }
            goto LABEL_23;
          }
          v23 = v19 & 4;
          if ( v23
            || (v24 = Base[HIDWORD(v63) - 1], (v24 & 0xC00) != 0)
            || (v25 = Base[HIDWORD(v63) - 1] & 0x3FFLL, (v24 & 0xFFFFFFFFFFFFF000uLL) + ((v25 + 1) << 12) != v13)
            || v25 + 1 < v25
            || v25 + 1 > 0x3FF )
          {
            if ( v23 )
              goto LABEL_34;
            v34 = Base[HIDWORD(v63) - 1];
            if ( (v34 & 0xC00) != 0 )
              goto LABEL_34;
            if ( (v34 & 0xFFFFFFFFFFFFF000uLL) != v13 + 4096 )
              goto LABEL_34;
            v44 = Base[HIDWORD(v63) - 1] & 0x3FFLL;
            if ( v44 + 1 < v44 || v44 + 1 > 0x3FF )
              goto LABEL_34;
            ++v64;
            Base[HIDWORD(v63) - 1] = (v34 - 4096) ^ ((unsigned __int16)(v34 - 4096) ^ (unsigned __int16)(v34 - 4096 + 1)) & 0x3FF;
          }
          else
          {
            ++v64;
            Base[HIDWORD(v63) - 1] = v24 ^ ((unsigned __int16)v24 ^ (unsigned __int16)(v24 + 1)) & 0x3FF;
          }
LABEL_23:
          ++v11;
          v4 = 0xFFFFF68000000000uLL;
          v12 += 8LL;
          v13 += 4096LL;
          v10 = 0xFFFFF6FB7DBED7F8uLL;
          if ( v11 >= *(_QWORD *)(a1 + 16) )
          {
            v6 = (__int64)(v2 << 25) >> 16;
            v5 = v52;
            goto LABEL_25;
          }
        }
      }
      v5 = v52;
    }
LABEL_25:
    MiRemoveWsle(v5, v6, *(_QWORD *)(a1 + 16), *(_BYTE *)(a1 + 26), 10, *(unsigned __int8 *)(a1 + 24));
    v26 = ((v6 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v27 = *(_QWORD *)v26;
    if ( v26 >= 0xFFFFF6FB7DBED000uLL
      && v26 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v27 & 1) != 0
      && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
    {
      v49 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
      if ( v49 )
      {
        v50 = *(_QWORD *)(v49 + 8 * ((v26 >> 3) & 0x1FF));
        v51 = v27 | 0x20;
        if ( (v50 & 0x20) == 0 )
          v51 = v27;
        v27 = v51;
        if ( (v50 & 0x42) != 0 )
          v27 = v51 | 0x42;
      }
    }
    v53 = v27;
    v30 = (unsigned __int64 *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v53) >> 12) & 0xFFFFFFFFFLL)
                             - 0x58000000000LL);
    if ( ((*(_DWORD *)v30 >> 4) & 0x3FF) == 0 )
    {
      MiCountWslesInPageTable(v29, v6, v66);
      v38 = 8;
      while ( 1 )
      {
        v28 = (unsigned int)v66[(unsigned __int8)--v38];
        if ( (_DWORD)v28 )
          break;
        if ( !v38 )
          goto LABEL_27;
      }
      v28 &= 0x3FFu;
      *v30 = *v30 & 0xFFFFFFFFFFFE000FuLL | (16 * (v28 | ((unsigned __int64)(v38 & 7) << 10)));
    }
LABEL_27:
    if ( (*(_BYTE *)(v5 + 184) & 7) != 0 )
    {
      for ( i = 0LL; i < *(_QWORD *)(a1 + 16); v2 += 8LL )
      {
        MiDeleteValidSystemPage(v5, v2, 0, (__int64)&v54);
        ++i;
      }
    }
    v33 = 0LL;
    if ( *(_BYTE *)(a1 + 24) )
      v33 = v55;
    MiFlushTbList(&v60, v28, v31, v32);
    result = v33;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
