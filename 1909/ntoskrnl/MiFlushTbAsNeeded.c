/*
 * XREFs of MiFlushTbAsNeeded @ 0x140022380
 * Callers:
 *     MiLinkPoolCommitChain @ 0x1400231B0 (MiLinkPoolCommitChain.c)
 *     MiReservePtes @ 0x140030600 (MiReservePtes.c)
 * Callees:
 *     MiCompareTbFlushTimeStamp @ 0x1400226D8 (MiCompareTbFlushTimeStamp.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140050080 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140058D70 (MiInsertTbFlushEntry.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiCompressTbFlushList @ 0x140116650 (MiCompressTbFlushList.c)
 *     MiCanMergeTbFlushEntryBackwards @ 0x14011CE1C (MiCanMergeTbFlushEntryBackwards.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     qsort @ 0x1401A11F0 (qsort.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall MiFlushTbAsNeeded(ULONG_PTR BugCheckParameter2, unsigned __int64 a2, int a3, int a4)
{
  int v7; // r14d
  __int64 DeepFreezeStartTime; // rdx
  unsigned __int64 v9; // r9
  __int64 v10; // r8
  int v11; // r13d
  int v12; // r12d
  unsigned __int64 v13; // rsi
  ULONG_PTR BugCheckParameter4; // rbx
  ULONG_PTR v15; // rbx
  unsigned __int64 v16; // r10
  __int64 v18; // r14
  unsigned __int64 v19; // rbx
  __int64 *v20; // r9
  __int64 v21; // rax
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rax
  unsigned int v24; // eax
  __int64 v25; // rax
  __int64 v26; // r11
  __int64 v27; // rax
  bool v28; // zf
  int v30; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v31; // [rsp+44h] [rbp-BCh]
  __int16 v32; // [rsp+46h] [rbp-BAh]
  __int64 v33; // [rsp+48h] [rbp-B8h]
  __int64 v34; // [rsp+50h] [rbp-B0h]
  _QWORD Base[21]; // [rsp+58h] [rbp-A8h] BYREF

  v32 = 0;
  v7 = a4;
  memset(&Base[1], 0, 0x98uLL);
  v10 = 0LL;
  v33 = 20LL;
  v30 = a3;
  v11 = 0;
  v31 = 0;
  v12 = 0;
  v34 = 0LL;
  v13 = 0LL;
  Base[0] = 0LL;
  if ( a2 )
  {
    v9 = 0xFFFFF68000000000uLL;
    while ( 1 )
    {
      BugCheckParameter4 = *(_QWORD *)BugCheckParameter2;
      if ( BugCheckParameter2 >= 0xFFFFF6FB7DBED000uLL
        && BugCheckParameter2 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (BugCheckParameter4 & 1) != 0
        && ((BugCheckParameter4 & 0x20) == 0 || (BugCheckParameter4 & 0x42) == 0) )
      {
        DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
        if ( DeepFreezeStartTime )
        {
          v25 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((BugCheckParameter2 >> 3) & 0x1FF));
          DeepFreezeStartTime = BugCheckParameter4 | 0x20;
          if ( (v25 & 0x20) == 0 )
            DeepFreezeStartTime = *(_QWORD *)BugCheckParameter2;
          BugCheckParameter4 = DeepFreezeStartTime;
          if ( (v25 & 0x42) != 0 )
            BugCheckParameter4 = DeepFreezeStartTime | 0x42;
        }
      }
      if ( (BugCheckParameter4 & 0xC01) != 0 || (BugCheckParameter4 & 0x3E0) != 0 )
      {
        if ( !v7 )
          KeBugCheckEx(0x1Au, 0x5100uLL, BugCheckParameter2, a2 - v13, BugCheckParameter4);
        goto LABEL_15;
      }
      if ( qword_140465800 && (BugCheckParameter4 & 0x10) == 0 )
        BugCheckParameter4 &= ~qword_140465800;
      v15 = HIDWORD(BugCheckParameter4);
      if ( !(unsigned int)MiPteInShadowRange(BugCheckParameter2, ZeroPte, v10, v9) )
        goto LABEL_12;
      if ( !(unsigned int)MiPteHasShadow() )
        break;
      if ( !HIBYTE(word_1404658EC) && (DeepFreezeStartTime & 1) != 0 )
        DeepFreezeStartTime |= v26;
      *(_QWORD *)BugCheckParameter2 = DeepFreezeStartTime;
      MiWritePteShadow(BugCheckParameter2, DeepFreezeStartTime);
      v10 = 0LL;
      v9 = 0xFFFFF68000000000uLL;
      v16 = 0xFFFFF6FFFFFFFFFFuLL;
LABEL_13:
      if ( (_DWORD)v15 )
      {
        if ( (_DWORD)v15 != v11 )
        {
          if ( (unsigned __int8)MiCompareTbFlushTimeStamp((unsigned int)v15, 0xFFFFFFFFLL) )
          {
            MiInsertTbFlushEntry(&v30, (__int64)(BugCheckParameter2 << 25) >> 16, 1LL);
            v12 = 1;
          }
          else
          {
            v12 = 0;
          }
          v11 = v15;
LABEL_31:
          v10 = 0LL;
          v9 = 0xFFFFF68000000000uLL;
          goto LABEL_15;
        }
        if ( v12 == 1 )
        {
          v18 = 1LL;
          v19 = (__int64)((BugCheckParameter2 << 25) - (v9 << 25)) >> 16;
          if ( v30 != 1 && (v31 & 8) == 0 && v19 >= v9 && v19 <= v16 )
            LOBYTE(v31) = v31 | 8;
          if ( !HIDWORD(v33)
            || (v31 & 4) != 0
            || (v20 = &Base[HIDWORD(v33) - 1], v21 = *v20, (*v20 & 0xC00) != 0)
            || (v22 = *v20 & 0x3FF,
                DeepFreezeStartTime = (v21 & 0xFFFFFFFFFFFFF000uLL) + ((v22 + 1) << 12),
                DeepFreezeStartTime != v19)
            || v22 + 1 < v22
            || v22 + 1 > 0x3FF )
          {
            if ( (unsigned int)MiCanMergeTbFlushEntryBackwards(&v30, v19, 1LL, 0LL) )
            {
              DeepFreezeStartTime = (__int64)&Base[HIDWORD(v33) - 1];
              v27 = *(_QWORD *)DeepFreezeStartTime;
              ++v34;
              *(_QWORD *)DeepFreezeStartTime = (v27 - 4096) ^ ((unsigned __int16)(v27 - 4096) ^ (unsigned __int16)(v27 - 4096 + 1)) & 0x3FF;
LABEL_43:
              v7 = a4;
            }
            else
            {
              if ( HIDWORD(v33) < (unsigned int)v33 )
              {
                while ( 1 )
                {
                  DeepFreezeStartTime = (unsigned __int64)(v18 - 1) > 0x3FF ? 1024LL : v18;
                  v23 = v19 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)DeepFreezeStartTime - 1) & 0x3FF;
                  v18 -= DeepFreezeStartTime;
                  v19 += DeepFreezeStartTime << 12;
                  Base[HIDWORD(v33)] = v23;
                  v34 += DeepFreezeStartTime;
                  v24 = HIDWORD(v33) + 1;
                  HIDWORD(v33) = v24;
                  if ( v24 == (_DWORD)v33 && (v31 & 4) == 0 )
                  {
                    qsort(Base, v24, 8uLL, MiTbFlushSort);
                    MiCompressTbFlushList(&v30);
                    if ( HIDWORD(v33) == (_DWORD)v33 )
                      break;
                  }
                  if ( !v18 )
                    goto LABEL_43;
                }
                v10 = 0LL;
                v9 = 0xFFFFF68000000000uLL;
                v28 = v18 == 0;
                v7 = a4;
                if ( !v28 )
                {
                  v34 = HIDWORD(v33);
                  HIBYTE(v31) = 1;
                }
                goto LABEL_15;
              }
              HIBYTE(v31) = 1;
              v7 = a4;
            }
          }
          else
          {
            ++v34;
            v7 = a4;
            *v20 = v21 ^ ((unsigned __int16)v21 ^ (unsigned __int16)(v21 + 1)) & 0x3FF;
          }
          goto LABEL_31;
        }
      }
      else
      {
        v12 = v10;
        v11 = v10;
      }
LABEL_15:
      ++v13;
      BugCheckParameter2 += 8LL;
      if ( v13 >= a2 )
        return MiFlushTbList(&v30, DeepFreezeStartTime, v10, v9);
    }
    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
      && (DeepFreezeStartTime & 1) != 0 )
    {
      DeepFreezeStartTime |= v26;
    }
LABEL_12:
    *(_QWORD *)BugCheckParameter2 = DeepFreezeStartTime;
    goto LABEL_13;
  }
  return MiFlushTbList(&v30, DeepFreezeStartTime, v10, v9);
}
