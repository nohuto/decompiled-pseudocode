/*
 * XREFs of MiReplenishBitMap @ 0x1400EFE70
 * Callers:
 *     MiInsertCachedPte @ 0x1400344D0 (MiInsertCachedPte.c)
 *     MiEmptyPteBins @ 0x1400EFC90 (MiEmptyPteBins.c)
 * Callees:
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiFlushTbListEarly @ 0x1400854CC (MiFlushTbListEarly.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     MiReturnSystemPtes @ 0x140100CB8 (MiReturnSystemPtes.c)
 *     RtlInterlockedSetClearRunEx @ 0x140100D60 (RtlInterlockedSetClearRunEx.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall MiReplenishBitMap(_QWORD *a1, unsigned __int64 Process, unsigned __int64 a3)
{
  unsigned int v3; // ebp
  ULONG_PTR *v4; // r12
  int v5; // r14d
  unsigned __int64 v6; // r10
  ULONG_PTR BugCheckParameter4; // r15
  ULONG_PTR v8; // rsi
  ULONG_PTR v9; // rbx
  ULONG_PTR v10; // r9
  unsigned __int64 v11; // rdi
  ULONG_PTR v12; // r11
  __int64 v13; // rcx
  ULONG_PTR v14; // rdi
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r9
  ULONG_PTR v17; // rdx
  ULONG_PTR v18; // rbx
  __int64 v19; // rdx
  ULONG_PTR v20; // rbx
  unsigned int v21; // eax
  __int64 v22; // r14
  __int64 v23; // r13
  __int64 v24; // rbp
  ULONG_PTR v25; // r15
  _QWORD *v26; // rdi
  unsigned __int64 v27; // rbx
  __int64 v28; // rcx
  __int64 v29; // r10
  ULONG_PTR v30; // rcx
  __int64 v31; // r8
  _QWORD *v32; // r9
  _QWORD *v33; // r10
  bool v34; // zf
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rcx
  bool v37; // zf
  _QWORD *v39; // r9
  unsigned __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  signed __int32 v47[8]; // [rsp+0h] [rbp-168h] BYREF
  int v48; // [rsp+30h] [rbp-138h]
  int v49; // [rsp+34h] [rbp-134h]
  ULONG_PTR v50; // [rsp+38h] [rbp-130h]
  ULONG_PTR v51; // [rsp+40h] [rbp-128h]
  _QWORD *v52; // [rsp+48h] [rbp-120h]
  ULONG_PTR v53; // [rsp+50h] [rbp-118h]
  int v54; // [rsp+60h] [rbp-108h] BYREF
  __int16 v55; // [rsp+64h] [rbp-104h]
  __int64 v56; // [rsp+68h] [rbp-100h]
  __int64 v57; // [rsp+70h] [rbp-F8h]
  __int64 v58; // [rsp+78h] [rbp-F0h]

  v53 = Process;
  v3 = 0;
  v52 = a1;
  v50 = 0LL;
  v4 = a1;
  v48 = 0;
  if ( (_DWORD)a3 == 1 )
  {
    v56 = 20LL;
    v54 = 0;
    v55 = 0;
    v57 = 0LL;
    v58 = 0LL;
    _InterlockedOr(v47, 0);
    v5 = KiTbFlushTimeStamp;
  }
  else
  {
    v3 = 1;
    HIDWORD(v56) = 0;
    v48 = 1;
    v5 = 0;
  }
  v49 = v5;
  v6 = 0xFFFFF6FB7DBED000uLL;
  do
  {
    BugCheckParameter4 = v53;
    v8 = 0LL;
    v9 = v50;
    while ( 2 )
    {
      v10 = v4[2];
      v11 = *(_QWORD *)(v10 + 8 * BugCheckParameter4);
      v12 = v10 + 8 * BugCheckParameter4;
      if ( v12 >= 0xFFFFF6FB7DBED000uLL
        && v12 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v11 & 1) != 0
        && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
      {
        Process = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( Process )
        {
          v41 = *(_QWORD *)(Process + 8 * ((v12 >> 3) & 0x1FF));
          Process = v11 | 0x20;
          if ( (v41 & 0x20) == 0 )
            Process = *(_QWORD *)(v10 + 8 * BugCheckParameter4);
          v11 = Process;
          if ( (v41 & 0x42) != 0 )
            v11 = Process | 0x42;
        }
      }
      if ( (v11 & 0xF000) == 0x1000 )
      {
        v13 = 1LL;
      }
      else
      {
        v35 = *(_QWORD *)(v12 + 8);
        a3 = v12 + 8;
        if ( v12 + 8 >= 0xFFFFF6FB7DBED000uLL && a3 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
        {
          Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
          if ( *(_BYTE *)(Process + 640) != 1 && (v35 & 1) != 0 && ((v35 & 0x20) == 0 || (v35 & 0x42) == 0) )
          {
            Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
            v42 = *(_QWORD *)(Process + 1544);
            if ( v42 )
            {
              v43 = *(_QWORD *)(v42 + 8 * ((a3 >> 3) & 0x1FF));
              a3 = v35 | 0x20;
              Process = (unsigned __int8)v43;
              LOBYTE(Process) = v43 & 0x20;
              if ( (v43 & 0x20) == 0 )
                a3 = *(_QWORD *)(v12 + 8);
              v35 = a3;
              if ( (v43 & 0x42) != 0 )
                v35 = a3 | 0x42;
            }
          }
        }
        if ( qword_14043B180 && (v35 & 0x10) == 0 )
          v35 &= ~qword_14043B180;
        v13 = HIDWORD(v35);
      }
      v8 += v13;
      if ( qword_14043B180 && (v11 & 0x10) == 0 )
        v11 &= ~qword_14043B180;
      v14 = HIDWORD(v11);
      v51 = v14;
      if ( v14 )
      {
        v15 = *(_QWORD *)(v10 + 8 * v14);
        v16 = v10 + 8 * v14;
        if ( v16 >= 0xFFFFF6FB7DBED000uLL && v16 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
        {
          Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
          if ( *(_BYTE *)(Process + 640) != 1 && (v15 & 1) != 0 && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
          {
            Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
            a3 = *(_QWORD *)(Process + 1544);
            if ( a3 )
            {
              v44 = *(_QWORD *)(a3 + 8 * ((v16 >> 3) & 0x1FF));
              a3 = v15 | 0x20;
              Process = (unsigned __int8)v44;
              LOBYTE(Process) = v44 & 0x20;
              if ( (v44 & 0x20) == 0 )
                a3 = v15;
              LOWORD(v15) = a3;
              if ( (v44 & 0x42) != 0 )
                LOWORD(v15) = a3 | 0x42;
            }
          }
        }
        if ( (v15 & 0xF000) == 0x1000 )
        {
          v13 = 1LL;
        }
        else
        {
          v36 = *(_QWORD *)(v16 + 8);
          v16 += 8LL;
          if ( v16 >= 0xFFFFF6FB7DBED000uLL && v16 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
          {
            Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
            if ( *(_BYTE *)(Process + 640) != 1 && (v36 & 1) != 0 && ((v36 & 0x20) == 0 || (v36 & 0x42) == 0) )
            {
              Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
              v45 = *(_QWORD *)(Process + 1544);
              if ( v45 )
              {
                v16 = (v16 >> 3) & 0x1FF;
                a3 = v36 | 0x20;
                v46 = *(_QWORD *)(v45 + 8 * v16);
                Process = (unsigned __int8)v46;
                LOBYTE(Process) = v46 & 0x20;
                if ( (v46 & 0x20) == 0 )
                  a3 = v36;
                v36 = a3;
                if ( (v46 & 0x42) != 0 )
                  v36 = a3 | 0x42;
              }
            }
          }
          if ( qword_14043B180 && (v36 & 0x10) == 0 )
            v36 &= ~qword_14043B180;
          v13 = HIDWORD(v36);
        }
        if ( v13 + v14 == BugCheckParameter4 )
          goto LABEL_43;
      }
      v17 = BugCheckParameter4 + v8 - 1;
      if ( v17 >= *v4 )
        goto LABEL_145;
      if ( v8 > 1 )
      {
        v30 = v4[1];
        v31 = *(_QWORD *)(v30 + 8 * (BugCheckParameter4 >> 6));
        v32 = (_QWORD *)(v30 + 8 * (BugCheckParameter4 >> 6));
        v33 = (_QWORD *)(v30 + 8 * (v17 >> 6));
        if ( v32 == v33 )
        {
          v13 = BugCheckParameter4;
          v34 = ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v8) << BugCheckParameter4) & v31) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v8) << BugCheckParameter4;
        }
        else
        {
          if ( ((-1LL << BugCheckParameter4) & v31) != -1LL << BugCheckParameter4 )
            goto LABEL_145;
          v39 = v32 + 1;
          if ( v39 != v33 )
          {
            while ( *v39 == -1LL )
            {
              if ( ++v39 == v33 )
                goto LABEL_80;
            }
LABEL_145:
            KeBugCheckEx(0xDAu, 0x504uLL, v12, v8, BugCheckParameter4);
          }
LABEL_80:
          v13 = (unsigned __int8)v17;
          LOBYTE(v13) = ~(_BYTE)v17;
          v34 = ((0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v17) & *v39) == 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v17;
        }
        if ( !v34 )
          goto LABEL_145;
        v6 = 0xFFFFF6FB7DBED000uLL;
      }
      else if ( v8 != 1 || !_bittest64((const signed __int64 *)v4[1], BugCheckParameter4) )
      {
        goto LABEL_145;
      }
      if ( !v3 )
      {
        MiInsertTbFlushEntry((__int64)&v54, (__int64)(v12 << 25) >> 16, v8, 0);
        if ( (unsigned int)MiFlushTbListEarly((__int64)&v54, (_KPROCESS *)1) == 1 )
        {
          _InterlockedOr(v47, 0);
          if ( (unsigned int)(KiTbFlushTimeStamp - v5) > 2
            || (v5 & 1) == 0 && (unsigned int)(KiTbFlushTimeStamp - v5) >= 2 )
          {
            goto LABEL_87;
          }
        }
        goto LABEL_42;
      }
      v18 = v8;
      do
      {
        v19 = ZeroPte;
        if ( v12 < v6 || v12 > 0xFFFFF6FB7DBED7F8uLL )
          goto LABEL_26;
        if ( !(unsigned int)MiPteHasShadow(v13, ZeroPte) )
        {
          v13 = (__int64)KeGetCurrentThread()->ApcState.Process;
          if ( (*(_DWORD *)(v13 + 1740) & 0x1000) != 0 && (v19 & 1) != 0 )
            v19 |= 0x8000000000000000uLL;
LABEL_26:
          *(_QWORD *)v12 = v19;
          goto LABEL_27;
        }
        if ( !HIBYTE(word_14043B26C) && (v19 & 1) != 0 )
          v19 |= 0x8000000000000000uLL;
        *(_QWORD *)v12 = v19;
        MiWritePteShadow(v12);
        v6 = 0xFFFFF6FB7DBED000uLL;
LABEL_27:
        v12 += 8LL;
        --v18;
      }
      while ( v18 );
      v14 = v51;
      v20 = v50;
      a3 = BugCheckParameter4 & 0x1F;
      Process = v8;
      v16 = v4[1] + 4 * (BugCheckParameter4 >> 5);
      if ( a3 + v8 > 0x20 )
      {
        if ( (BugCheckParameter4 & 0x1F) != 0 )
        {
          _InterlockedAnd((volatile signed __int32 *)v16, ~(((1 << (32 - (BugCheckParameter4 & 0x1F))) - 1) << a3));
          Process = v8 - (32 - (unsigned int)(BugCheckParameter4 & 0x1F));
          v16 += 4LL;
        }
        if ( Process >= 0x20 )
        {
          v40 = Process >> 5;
          Process += -32LL * (Process >> 5);
          do
          {
            *(_DWORD *)v16 = 0;
            v16 += 4LL;
            --v40;
          }
          while ( v40 );
        }
        if ( Process )
        {
          v21 = -1 << Process;
LABEL_31:
          _InterlockedAnd((volatile signed __int32 *)v16, v21);
        }
      }
      else
      {
        if ( v8 != 32 )
        {
          v21 = ~(((1 << v8) - 1) << a3);
          goto LABEL_31;
        }
        *(_DWORD *)v16 = 0;
      }
      v22 = 512LL;
      if ( (v4[3] & 4) != 0 )
        v22 = 32LL;
      v23 = v22 - 1;
      v24 = BugCheckParameter4 & ~(v22 - 1);
      v25 = (~(v22 - 1) & (v22 + BugCheckParameter4 + v8 - 1)) - v24;
      if ( v25 )
      {
        v26 = v52;
        v27 = v24;
        while ( 1 )
        {
          Process = v27 + v23;
          if ( v27 + v23 < *v26 )
          {
            v28 = v26[1];
            v16 = *(_QWORD *)(v28 + 8 * (v27 >> 6));
            a3 = v28 + 8 * (v27 >> 6);
            v29 = v28 + 8 * (Process >> 6);
            if ( a3 == v29 )
            {
              v37 = (v16 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v22) << v27)) == 0;
LABEL_67:
              if ( v37 && (unsigned int)RtlInterlockedSetClearRunEx(v26, v27, v22) == 1 )
                MiReturnSystemPtes(v26, v27, v22, 0LL);
              goto LABEL_39;
            }
            if ( (v16 & (-1LL << v27)) == 0 )
            {
              a3 += 8LL;
              if ( a3 != v29 )
              {
                while ( !*(_QWORD *)a3 )
                {
                  a3 += 8LL;
                  if ( a3 == v29 )
                    goto LABEL_66;
                }
                goto LABEL_39;
              }
LABEL_66:
              Process = 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)Process;
              v37 = (Process & *(_QWORD *)a3) == 0;
              goto LABEL_67;
            }
          }
LABEL_39:
          v27 += v22;
          if ( v27 - v24 >= v25 )
          {
            v14 = v51;
            v4 = v52;
            v20 = v50;
            break;
          }
        }
      }
      v3 = v48;
      v9 = v8 + v20;
      v50 = v9;
LABEL_42:
      v8 = 0LL;
      v6 = 0xFFFFF6FB7DBED000uLL;
LABEL_43:
      BugCheckParameter4 = v14;
      if ( v14 )
      {
        v5 = v49;
        continue;
      }
      break;
    }
    if ( !v3 )
    {
LABEL_87:
      if ( HIDWORD(v56) )
        MiFlushTbList(&v54, Process, a3, v16);
    }
    v5 = v49;
    v48 = ++v3;
    v6 = 0xFFFFF6FB7DBED000uLL;
  }
  while ( v3 < 2 );
  return v9;
}
