/*
 * XREFs of MiFlushTbAsNeeded @ 0x140097F10
 * Callers:
 *     MiReservePtes @ 0x14005C890 (MiReservePtes.c)
 *     MiAssignNonPagedPoolPtes @ 0x140099220 (MiAssignNonPagedPoolPtes.c)
 *     MiCommitPoolMemory @ 0x1400994D0 (MiCommitPoolMemory.c)
 * Callees:
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiCompareTbFlushTimeStamp @ 0x14009825C (MiCompareTbFlushTimeStamp.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     MiCompressTbFlushList @ 0x140113B10 (MiCompressTbFlushList.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiCanMergeTbFlushEntryBackwards @ 0x140158D88 (MiCanMergeTbFlushEntryBackwards.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     qsort @ 0x140196420 (qsort.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

void __fastcall MiFlushTbAsNeeded(__int64 BugCheckParameter2, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r15
  ULONG_PTR v5; // rdi
  int v6; // r13d
  int v7; // r12d
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // r11
  ULONG_PTR BugCheckParameter4; // rbx
  ULONG_PTR v12; // rbx
  __int64 v13; // r14
  unsigned __int64 v14; // rbx
  __int64 *v15; // r9
  __int64 v16; // rax
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rax
  unsigned int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned int v22; // [rsp+30h] [rbp-D0h]
  int v23; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v24; // [rsp+44h] [rbp-BCh]
  __int64 v25; // [rsp+48h] [rbp-B8h]
  __int64 v26; // [rsp+50h] [rbp-B0h]
  _QWORD Base[21]; // [rsp+58h] [rbp-A8h] BYREF

  v22 = a4;
  v25 = 20LL;
  v4 = a2;
  v23 = a3;
  v5 = BugCheckParameter2;
  v24 = 0;
  v6 = 0;
  v26 = 0LL;
  v7 = 0;
  Base[0] = 0LL;
  v8 = 0LL;
  if ( a2 )
  {
    a3 = 0xFFFFF6FB7DBED000uLL;
    v9 = 0xFFFFF6FB7DBED7F8uLL;
    v10 = 0xFFFFF68000000000uLL;
    while ( 1 )
    {
      BugCheckParameter4 = *(_QWORD *)v5;
      if ( v5 >= a3 && v5 <= v9 && (MiFlags & 0xC00000) != 0 )
      {
        BugCheckParameter2 = (__int64)KeGetCurrentThread()->ApcState.Process;
        if ( *(_BYTE *)(BugCheckParameter2 + 640) != 1
          && (BugCheckParameter4 & 1) != 0
          && ((BugCheckParameter4 & 0x20) == 0 || (BugCheckParameter4 & 0x42) == 0) )
        {
          BugCheckParameter2 = (__int64)KeGetCurrentThread()->ApcState.Process;
          a2 = *(_QWORD *)(BugCheckParameter2 + 1544);
          if ( a2 )
          {
            v20 = *(_QWORD *)(a2 + 8 * ((v5 >> 3) & 0x1FF));
            a2 = BugCheckParameter4 | 0x20;
            BugCheckParameter2 = (unsigned __int8)v20;
            if ( (v20 & 0x20) == 0 )
              a2 = *(_QWORD *)v5;
            BugCheckParameter4 = a2;
            if ( (v20 & 0x42) != 0 )
              BugCheckParameter4 = a2 | 0x42;
          }
        }
      }
      LOBYTE(BugCheckParameter2) = (BugCheckParameter4 & 0xC01) == 0;
      if ( ((unsigned __int8)BugCheckParameter2 & ((BugCheckParameter4 & 0x3E0) == 0)) == 0 )
      {
        if ( !(_DWORD)a4 )
          KeBugCheckEx(0x1Au, 0x5100uLL, v5, v4 - v8, BugCheckParameter4);
        goto LABEL_14;
      }
      if ( qword_14043B180 && (BugCheckParameter4 & 0x10) == 0 )
        BugCheckParameter4 &= ~qword_14043B180;
      a2 = ZeroPte;
      v12 = HIDWORD(BugCheckParameter4);
      if ( v5 < a3 || v5 > v9 )
        goto LABEL_11;
      if ( !(unsigned int)MiPteHasShadow(BugCheckParameter2, ZeroPte) )
        break;
      if ( !HIBYTE(word_14043B26C) && (a2 & 1) != 0 )
        a2 |= 0x8000000000000000uLL;
      *(_QWORD *)v5 = a2;
      MiWritePteShadow(v5);
      a4 = v22;
      a3 = 0xFFFFF6FB7DBED000uLL;
      v9 = 0xFFFFF6FB7DBED7F8uLL;
LABEL_12:
      if ( (_DWORD)v12 )
      {
        if ( (_DWORD)v12 != v6 )
        {
          if ( (unsigned __int8)MiCompareTbFlushTimeStamp((unsigned int)v12, 0xFFFFFFFFLL) )
          {
            MiInsertTbFlushEntry(&v23, (__int64)(v5 << 25) >> 16, 1LL);
            v7 = 1;
          }
          else
          {
            v7 = 0;
          }
          v6 = v12;
          goto LABEL_32;
        }
        if ( v7 == 1 )
        {
          v13 = 1LL;
          v14 = (__int64)((v5 << 25) - (v10 << 25)) >> 16;
          if ( v23 != 1 && (v24 & 8) == 0 && v14 >= v10 && v14 <= 0xFFFFF6FFFFFFFFFFuLL )
            LOBYTE(v24) = v24 | 8;
          if ( HIDWORD(v25) )
          {
            if ( (v24 & 4) == 0 )
            {
              v15 = &Base[HIDWORD(v25) - 1];
              v16 = *v15;
              if ( (*v15 & 0xC00) == 0 )
              {
                v17 = *v15 & 0x3FF;
                a2 = (v16 & 0xFFFFFFFFFFFFF000uLL) + ((v17 + 1) << 12);
                if ( a2 == v14 && v17 + 1 >= v17 && v17 + 1 <= 0x3FF )
                {
                  ++v26;
                  BugCheckParameter2 = v16 ^ ((unsigned __int16)v16 ^ (unsigned __int16)(v16 + 1)) & 0x3FF;
                  *v15 = BugCheckParameter2;
LABEL_28:
                  a4 = v22;
                  a3 = 0xFFFFF6FB7DBED000uLL;
                  goto LABEL_14;
                }
              }
            }
          }
          if ( (unsigned int)MiCanMergeTbFlushEntryBackwards(&v23, (__int64)((v5 << 25) - (v10 << 25)) >> 16, 1LL, 0LL) )
          {
            a2 = (__int64)&Base[HIDWORD(v25) - 1];
            v21 = *(_QWORD *)a2;
            ++v26;
            BugCheckParameter2 = (v21 - 4096) ^ ((unsigned __int16)(v21 - 4096) ^ (unsigned __int16)(v21 - 4096 + 1)) & 0x3FF;
            *(_QWORD *)a2 = BugCheckParameter2;
          }
          else
          {
            if ( HIDWORD(v25) < (unsigned int)v25 )
            {
              while ( 1 )
              {
                a2 = (unsigned __int64)(v13 - 1) > 0x3FF ? 1024LL : v13;
                v18 = v14 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)a2 - 1) & 0x3FF;
                v13 -= a2;
                v14 += a2 << 12;
                BugCheckParameter2 = HIDWORD(v25);
                Base[HIDWORD(v25)] = v18;
                v26 += a2;
                v19 = HIDWORD(v25) + 1;
                HIDWORD(v25) = v19;
                if ( v19 == (_DWORD)v25 && (v24 & 4) == 0 )
                {
                  qsort(Base, v19, 8uLL, MiTbFlushSort);
                  MiCompressTbFlushList(&v23);
                  if ( HIDWORD(v25) == (_DWORD)v25 )
                    break;
                }
                if ( !v13 )
                  goto LABEL_32;
              }
              a4 = v22;
              a3 = 0xFFFFF6FB7DBED000uLL;
              v9 = 0xFFFFF6FB7DBED7F8uLL;
              v10 = 0xFFFFF68000000000uLL;
              if ( v13 )
              {
                v26 = HIDWORD(v25);
                HIBYTE(v24) = 1;
              }
              goto LABEL_14;
            }
            HIBYTE(v24) = 1;
          }
LABEL_32:
          v10 = 0xFFFFF68000000000uLL;
          v9 = 0xFFFFF6FB7DBED7F8uLL;
          goto LABEL_28;
        }
      }
      else
      {
        v7 = 0;
        v6 = 0;
      }
LABEL_14:
      ++v8;
      v5 += 8LL;
      if ( v8 >= v4 )
        goto LABEL_15;
    }
    BugCheckParameter2 = (__int64)KeGetCurrentThread()->ApcState.Process;
    if ( (*(_DWORD *)(BugCheckParameter2 + 1740) & 0x1000) != 0 && (a2 & 1) != 0 )
      a2 |= 0x8000000000000000uLL;
LABEL_11:
    *(_QWORD *)v5 = a2;
    goto LABEL_12;
  }
LABEL_15:
  MiFlushTbList(&v23, a2, a3, a4);
}
