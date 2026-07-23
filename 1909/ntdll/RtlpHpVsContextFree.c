/*
 * XREFs of RtlpHpVsContextFree @ 0x180038C70
 * Callers:
 *     RtlpHpFreeHeap @ 0x180040830 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x180040B50 (RtlpFreeHeapInternal.c)
 *     RtlpHpSegFree @ 0x180044D74 (RtlpHpSegFree.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x1800380E0 (RtlRbInsertNodeEx.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpVsChunkCoalesce @ 0x180039500 (RtlpHpVsChunkCoalesce.c)
 *     RtlpHpVsSubsegmentFree @ 0x1800514A8 (RtlpHpVsSubsegmentFree.c)
 *     RtlpHpVsSubsegmentCleanup @ 0x1800514F0 (RtlpHpVsSubsegmentCleanup.c)
 *     RtlpHpVsFreeChunkInsert @ 0x180068684 (RtlpHpVsFreeChunkInsert.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A09A0 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x1800A09E0 (RtlpInterlockedFlushSList.c)
 *     RtlpLogHeapFailure @ 0x18010A7C4 (RtlpLogHeapFailure.c)
 *     RtlpHpVsChunkAlignSplit @ 0x18010BD38 (RtlpHpVsChunkAlignSplit.c)
 */

__int64 __fastcall RtlpHpVsContextFree(
        PRTL_SRWLOCK SRWLock,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5)
{
  char v6; // bp
  PRTL_SRWLOCK v8; // rdi
  __int64 Value_low; // rdx
  unsigned __int64 v10; // rbx
  __int64 v11; // r9
  unsigned int v12; // ecx
  __int64 v13; // rax
  _QWORD *v14; // rsi
  int v15; // r12d
  _RTL_SRWLOCK *v16; // rbp
  __int64 v17; // r15
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  __int64 v20; // r14
  int v21; // ecx
  int v22; // edx
  unsigned __int64 v23; // r14
  unsigned int i; // ebx
  _RTL_SRWLOCK *v25; // r13
  __int64 v26; // rax
  unsigned __int64 v27; // rcx
  unsigned int v28; // r10d
  unsigned int v29; // r9d
  unsigned int v30; // r8d
  __int64 v31; // rcx
  unsigned int v32; // r9d
  unsigned int v33; // r8d
  unsigned int v34; // r10d
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  unsigned __int64 Value; // r9
  unsigned __int64 v39; // rdx
  BOOLEAN v40; // al
  int v41; // r9d
  unsigned __int64 v42; // rax
  unsigned __int64 v44; // rax
  unsigned int v45; // edx
  unsigned int v46; // r9d
  unsigned __int64 v47; // rbx
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rbp
  volatile signed __int64 *v50; // r12
  unsigned __int64 v51; // rdi
  int v52; // ecx
  int v53; // ecx
  unsigned __int64 v54; // r8
  int v55; // ecx
  PRTL_SRWLOCK v56; // rcx
  unsigned __int64 v57; // r8
  unsigned __int64 v58; // r8
  __int64 v59; // rax
  _RTL_SRWLOCK *SRWLocka; // [rsp+38h] [rbp-70h]
  int SRWLockb; // [rsp+38h] [rbp-70h]
  __int64 v62; // [rsp+40h] [rbp-68h]
  __int64 v63; // [rsp+48h] [rbp-60h]
  int v65; // [rsp+B8h] [rbp+10h]
  unsigned int v66; // [rsp+C0h] [rbp+18h] BYREF
  unsigned int v67; // [rsp+C8h] [rbp+20h]

  v67 = a4;
  v6 = a4;
  v8 = SRWLock;
  Value_low = LODWORD(SRWLock[22].Value);
  v10 = a3 - 16;
  if ( (Value_low & 1) != 0 && (a3 & 0xFFF) == 0 )
    v10 = a3 - 32;
  v11 = RtlpHpHeapGlobals;
  if ( !a2 )
  {
    v52 = HIDWORD(RtlpHpHeapGlobals) ^ HIDWORD(v10) ^ HIDWORD(*(_QWORD *)v10);
    if ( (v52 & 0xFF0000) != 0 )
    {
      v53 = (unsigned __int8)(RtlpHpHeapGlobals ^ v10 ^ *(_BYTE *)(v10 + 8));
    }
    else
    {
      if ( (_WORD)v52 )
      {
        v54 = v10 - 16LL * (unsigned __int16)((v10 ^ RtlpHpHeapGlobals ^ *(_QWORD *)v10) >> 32);
        v55 = HIDWORD(RtlpHpHeapGlobals) ^ HIDWORD(*(_QWORD *)v54) ^ HIDWORD(v54);
        if ( (v55 & 0xFF0000) != 0 )
        {
          v53 = (unsigned __int8)(RtlpHpHeapGlobals ^ v54 ^ *(_BYTE *)(v54 + 8));
        }
        else if ( (_WORD)v55 )
        {
          v54 -= 16LL * (unsigned __int16)((RtlpHpHeapGlobals ^ *(_QWORD *)v54 ^ v54) >> 32);
          v53 = (unsigned __int8)(RtlpHpHeapGlobals ^ v54 ^ *(_BYTE *)(v54 + 8));
        }
        else
        {
          v53 = 0;
        }
        goto LABEL_78;
      }
      v53 = 0;
    }
    v54 = v10;
LABEL_78:
    a2 = (v54 - (unsigned int)(v53 << 12)) & 0xFFFFFFFFFFFFF000uLL;
  }
  if ( (((unsigned __int16)(*(_WORD *)(a2 + 32) ^ *(_WORD *)(a2 + 34)) ^ 0x2BED) & 0x7FFF) != 0 )
  {
    RtlpLogHeapFailure(18, (unsigned int)v8 ^ *(_DWORD *)&v8[16].0, a2, 0, 0LL, 0LL);
    return 0LL;
  }
  else
  {
    if ( ((v10 ^ RtlpHpHeapGlobals ^ *(_QWORD *)v10) & 0xFF000000000000LL) != 0 )
    {
      v12 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v10) ^ *(unsigned __int16 *)(v10 + 2)) - 16;
      *a5 = v12;
      v13 = 0LL;
      if ( (Value_low & 4) != 0 && v12 < 0x1000 )
      {
        v56 = v8 + 8;
        if ( *(_WORD *)&v8[8].0 < 0x20u )
        {
          RtlpInterlockedPushEntrySList(v56, v10 + 16);
          return 1LL;
        }
        v13 = RtlpInterlockedFlushSList(v56, Value_low, a2, v11);
      }
      v14 = (_QWORD *)(v10 + 16);
      *(_QWORD *)(v10 + 16) = v13;
      v15 = v6 & 1;
      v65 = v15;
      if ( (v6 & 1) != 0 )
      {
        v16 = SRWLock;
        SRWLocka = SRWLock;
      }
      else
      {
        SRWLocka = v8;
        v16 = v8;
        RtlAcquireSRWLockExclusive(v8);
      }
      if ( v10 == -16LL )
      {
LABEL_37:
        if ( !v15 )
          RtlReleaseSRWLockExclusive(v16);
        return 1LL;
      }
      while ( 1 )
      {
        v17 = (__int64)(v14 - 2);
        v18 = *(v14 - 2);
        v19 = (unsigned __int64)(v14 - 2);
        v14 = (_QWORD *)*v14;
        v20 = v17;
        v21 = ((RtlpHpHeapGlobals ^ v18 ^ v19) >> 32) & 0xFF0000;
        if ( v21 )
        {
          v22 = (unsigned __int8)(RtlpHpHeapGlobals ^ v17 ^ *(_BYTE *)(v17 + 8));
        }
        else
        {
          v57 = (v18 ^ RtlpHpHeapGlobals ^ (unsigned __int64)v17) >> 32;
          if ( !(_WORD)v57 )
            goto LABEL_90;
          v20 = v17 - 16LL * (unsigned __int16)v57;
          if ( ((RtlpHpHeapGlobals ^ *(_QWORD *)v20 ^ v20) & 0xFF000000000000LL) != 0 )
          {
            v22 = (unsigned __int8)(RtlpHpHeapGlobals ^ v20 ^ *(_BYTE *)(v20 + 8));
          }
          else
          {
            v58 = (RtlpHpHeapGlobals ^ (unsigned __int64)v20 ^ *(_QWORD *)v20) >> 32;
            if ( !(_WORD)v58 )
            {
LABEL_90:
              v22 = 0;
              goto LABEL_11;
            }
            v20 -= 16LL * (unsigned __int16)v58;
            v22 = (unsigned __int8)(RtlpHpHeapGlobals ^ v20 ^ *(_BYTE *)(v20 + 8));
          }
        }
LABEL_11:
        v23 = (v20 - (unsigned int)(v22 << 12)) & 0xFFFFFFFFFFFFF000uLL;
        if ( (((unsigned __int16)(*(_WORD *)(v23 + 32) ^ *(_WORD *)(v23 + 34)) ^ 0x2BED) & 0x7FFF) != 0 )
        {
          RtlpLogHeapFailure(18, (unsigned int)v8 ^ *(_DWORD *)&v8[16].0, v23, 0, 0LL, 0LL);
        }
        else if ( v21 )
        {
          for ( i = 0; ; i = v66 )
          {
            v25 = v16;
            v26 = RtlpHpVsChunkCoalesce(v8, v23, v17, &v66);
            v27 = v66;
            v17 = v26;
            if ( v66 == *(unsigned __int16 *)(v23 + 32) )
            {
              RtlpHpVsSubsegmentCleanup(v8, v23);
              if ( !v15 )
                RtlReleaseSRWLockExclusive(v16);
              RtlpHpVsSubsegmentFree(v8, v23, v67);
              v16 = 0LL;
              if ( v15 )
                v16 = v25;
              SRWLocka = v16;
              if ( !v15 )
              {
                SRWLocka = v8;
                v16 = v8;
                RtlAcquireSRWLockExclusive(v8);
              }
              goto LABEL_36;
            }
            if ( v66 <= i )
              break;
            v28 = v26 - v23;
            v29 = (v26 - v23 + 4127) & 0xFFFFF000;
            v30 = (v26 + 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v26) ^ *(unsigned __int16 *)(v26 + 2)) - v23) & 0xFFFFF000;
            if ( v29 >= v30 )
              break;
            v45 = v30 - v29;
            v46 = v29 >> 12;
            v27 = (unsigned __int8)v46;
            v47 = *(_QWORD *)(v23 + 16) & (-1LL << v46) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                   - (unsigned __int8)((unsigned __int64)(v30 - 1) >> 12)));
            if ( v45 < 0x1000 || !v47 )
              break;
            v48 = v47 - ((v47 >> 1) & 0x5555555555555555LL);
            v27 = v48 & 0x3333333333333333LL;
            v49 = (0x101010101010101LL
                 * (((v48 & 0x3333333333333333LL)
                   + ((v48 >> 2) & 0x3333333333333333LL)
                   + (((v48 & 0x3333333333333333LL) + ((v48 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
            if ( *(__int16 *)(v23 + 34) < 0 )
            {
              v16 = SRWLocka;
              break;
            }
            v50 = (volatile signed __int64 *)&v8[6];
            if ( (*(_BYTE *)&v8[22].0 & 2) == 0 )
            {
              v27 = (unsigned __int64)*v50 >> 7;
              if ( v27 <= 8 )
                v27 = 8LL;
              if ( v8[7].Value + (unsigned int)v49 <= v27 )
              {
                v16 = SRWLocka;
                v15 = v65;
                break;
              }
            }
            HIDWORD(v63) = HIDWORD(v63) & 0xFF00FFFF | 0x10000;
            v63 ^= RtlpHpHeapGlobals ^ v17;
            *(_BYTE *)(v17 + 6) = BYTE6(v63);
            *(_DWORD *)(v17 + 8) = (unsigned __int8)(RtlpHpHeapGlobals ^ v17 ^ (v28 >> 12)) | 0x200;
            if ( !v65 )
              RtlReleaseSRWLockExclusive(SRWLocka);
            _BitScanForward64(&v51, v47);
            _BitScanReverse64(&v47, v47);
            SRWLockb = v47 - v51 + 1;
            RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v23 + 24));
            ((void (__fastcall *)(unsigned __int64, unsigned __int64, _QWORD))((unsigned __int64)SRWLock ^ RtlpHpHeapGlobals ^ SRWLock[20].Value))(
              (unsigned __int64)SRWLock ^ SRWLock[16].Value,
              v23 + (unsigned int)((_DWORD)v51 << 12),
              (unsigned int)(SRWLockb << 12));
            *(_QWORD *)(v23 + 16) &= ~(((1LL << SRWLockb) - 1) << v51);
            _InterlockedExchangeAdd64(v50, -(int)v49);
            RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v23 + 24));
            v15 = v65;
            v16 = 0LL;
            v8 = SRWLock;
            if ( v65 )
              v16 = v25;
            SRWLocka = v16;
            if ( !v65 )
            {
              SRWLocka = SRWLock;
              v16 = SRWLock;
              RtlAcquireSRWLockExclusive(SRWLock);
            }
            *(_DWORD *)(v17 + 8) &= ~0x200u;
          }
          if ( (*(_BYTE *)&v8[22].0 & 1) != 0 && ((v17 + 32) & 0xFFF) != 0 )
          {
            v59 = RtlpHpVsChunkAlignSplit(v27, v23, v17);
            if ( v59 )
              RtlpHpVsFreeChunkInsert(v8, v23, v59);
          }
          v31 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v17) ^ *(unsigned __int16 *)(v17 + 2));
          v32 = (v31 + v17 - v23) & 0xFFFFF000;
          v33 = (v17 - v23 + 4127) & 0xFFFFF000;
          if ( v33 < v32 )
          {
            v34 = v32 - v33;
            v35 = *(_QWORD *)(v23 + 16) & (-1LL << (v33 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                           - (unsigned __int8)((unsigned __int64)(v32 - 1) >> 12)));
          }
          else
          {
            v34 = 0;
            v35 = 0LL;
          }
          v36 = v35 - ((v35 >> 1) & 0x5555555555555555LL);
          v8[7].Value += (unsigned int)((0x101010101010101LL
                                       * (((v36 & 0x3333333333333333LL)
                                         + ((v36 >> 2) & 0x3333333333333333LL)
                                         + (((v36 & 0x3333333333333333LL) + ((v36 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
          LODWORD(v62) = (unsigned __int16)(v62 ^ (((v31 + (unsigned __int64)(v17 & 0xFFF) + 4095) >> 12)
                                                 - ((unsigned __int64)(v31 + 4095) >> 12)
                                                 + (v34 >> 12)
                                                 - ((unsigned int)((0x101010101010101LL
                                                                  * (((v36 & 0x3333333333333333LL)
                                                                    + ((v36 >> 2) & 0x3333333333333333LL)
                                                                    + (((v36 & 0x3333333333333333LL)
                                                                      + ((v36 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24))) ^ (unsigned int)v62;
          v37 = RtlpHpHeapGlobals ^ v17 ^ v62;
          *(_WORD *)v17 = v37;
          Value = v8[3].Value;
          v62 = v37;
          if ( (Value & 1) != 0 )
          {
            v44 = v8[2].Value;
            if ( v44 )
              v39 = v44 ^ (unsigned __int64)&v8[2];
            else
              v39 = 0LL;
          }
          else
          {
            v39 = v8[2].Value;
          }
          v40 = 0;
          v41 = Value & 1;
          if ( v39 )
          {
            while ( 1 )
            {
              if ( ((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)v17 ^ (unsigned int)v17) < ((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)(v39 - 8) ^ ((_DWORD)v39 - 8)) )
              {
                v42 = *(_QWORD *)v39;
                if ( v41 )
                {
                  if ( !v42 )
                    goto LABEL_33;
                  v42 ^= v39;
                }
                if ( !v42 )
                {
LABEL_33:
                  v40 = 0;
                  break;
                }
              }
              else
              {
                v42 = *(_QWORD *)(v39 + 8);
                if ( v41 )
                {
                  if ( !v42 )
                    goto LABEL_34;
                  v42 ^= v39;
                }
                if ( !v42 )
                {
LABEL_34:
                  v40 = 1;
                  break;
                }
              }
              v39 = v42;
            }
          }
          RtlRbInsertNodeEx((PRTL_RB_TREE)&v8[2], (PRTL_BALANCED_NODE)v39, v40, (PRTL_BALANCED_NODE)(v17 + 8));
        }
        else
        {
          RtlpLogHeapFailure(8, (unsigned int)v8 ^ *(_DWORD *)&v8[16].0, v17, 0, 0LL, 0LL);
        }
LABEL_36:
        if ( !v14 )
          goto LABEL_37;
      }
    }
    RtlpLogHeapFailure(8, (unsigned int)v8 ^ *(_DWORD *)&v8[16].0, a3, v10, 0LL, 0LL);
    return 0LL;
  }
}
