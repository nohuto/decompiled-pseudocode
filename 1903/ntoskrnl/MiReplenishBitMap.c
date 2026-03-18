/*
 * XREFs of MiReplenishBitMap @ 0x1400F29A0
 * Callers:
 *     MiInsertCachedPte @ 0x14006B2A0 (MiInsertCachedPte.c)
 *     MiEmptyPteBins @ 0x1400F27D0 (MiEmptyPteBins.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     RtlInterlockedSetClearRunEx @ 0x14002F870 (RtlInterlockedSetClearRunEx.c)
 *     MiFlushTbList @ 0x14004FFE0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140058CD0 (MiInsertTbFlushEntry.c)
 *     MiReturnSystemPtes @ 0x1400AAEDC (MiReturnSystemPtes.c)
 *     MiFlushTbListEarly @ 0x1400F31E0 (MiFlushTbListEarly.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

ULONG_PTR __fastcall MiReplenishBitMap(ULONG_PTR *a1, ULONG_PTR a2, int a3)
{
  ULONG_PTR *v4; // r12
  unsigned __int64 v5; // r8
  unsigned int v6; // r14d
  int v7; // ebx
  __int64 v8; // rdx
  ULONG_PTR BugCheckParameter4; // r15
  ULONG_PTR v10; // rsi
  ULONG_PTR v11; // rbp
  ULONG_PTR v12; // r9
  unsigned __int64 v13; // rdi
  ULONG_PTR v14; // r11
  __int64 v15; // rcx
  ULONG_PTR v16; // rdi
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r9
  __int64 v19; // rcx
  ULONG_PTR v20; // rdx
  ULONG_PTR v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // r11
  unsigned __int64 v25; // rdx
  unsigned int v26; // eax
  unsigned __int64 v27; // r14
  unsigned __int64 v28; // r13
  __int64 v29; // rbp
  unsigned __int64 v30; // r15
  ULONG_PTR *v31; // rdi
  unsigned __int64 v32; // rbx
  unsigned __int64 v33; // rdx
  ULONG_PTR v34; // rcx
  ULONG_PTR v35; // r10
  ULONG_PTR v36; // rcx
  __int64 v37; // r8
  _QWORD *v38; // r9
  _QWORD *v39; // r10
  bool v40; // zf
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rcx
  bool v43; // zf
  _QWORD *v45; // r9
  unsigned __int64 v46; // rcx
  unsigned __int64 DeepFreezeStartTime; // rdx
  __int64 v48; // rax
  __int64 v49; // rdx
  unsigned __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  unsigned __int64 v53; // rax
  __int64 v54; // rax
  signed __int32 v55[8]; // [rsp+0h] [rbp-168h] BYREF
  int v56; // [rsp+30h] [rbp-138h]
  int v57; // [rsp+34h] [rbp-134h]
  ULONG_PTR v58; // [rsp+38h] [rbp-130h]
  ULONG_PTR v59; // [rsp+40h] [rbp-128h]
  ULONG_PTR *v60; // [rsp+48h] [rbp-120h]
  ULONG_PTR v61; // [rsp+50h] [rbp-118h]
  _QWORD v62[24]; // [rsp+60h] [rbp-108h] BYREF

  v61 = a2;
  v4 = a1;
  v60 = a1;
  memset(v62, 0, 0xB8uLL);
  v6 = 0;
  v58 = 0LL;
  v56 = 0;
  if ( a3 == 1 )
  {
    LODWORD(v62[1]) = 20;
    v62[3] = 0LL;
    _InterlockedOr(v55, 0);
    v7 = KiTbFlushTimeStamp;
  }
  else
  {
    v6 = 1;
    v7 = 0;
    v56 = 1;
  }
  v57 = v7;
  v8 = 0xFFFFF6FB7DBED000uLL;
  do
  {
    BugCheckParameter4 = v61;
    v10 = 0LL;
    v11 = v58;
    while ( 2 )
    {
      v12 = v4[2];
      v13 = *(_QWORD *)(v12 + 8 * BugCheckParameter4);
      v14 = v12 + 8 * BugCheckParameter4;
      if ( v14 >= 0xFFFFF6FB7DBED000uLL
        && v14 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v13 & 1) != 0
        && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
      {
        DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
        if ( DeepFreezeStartTime )
        {
          v48 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v14 >> 3) & 0x1FF));
          v49 = v13 | 0x20;
          if ( (v48 & 0x20) == 0 )
            v49 = *(_QWORD *)(v12 + 8 * BugCheckParameter4);
          v13 = v49;
          if ( (v48 & 0x42) != 0 )
            v13 = v49 | 0x42;
        }
        v8 = 0xFFFFF6FB7DBED000uLL;
      }
      if ( (v13 & 0xF000) == 0x1000 )
      {
        v15 = 1LL;
      }
      else
      {
        v41 = *(_QWORD *)(v14 + 8);
        v5 = v14 + 8;
        if ( v14 + 8 >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
        {
          if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1
            || (v41 & 1) == 0
            || (v41 & 0x20) != 0 && (v41 & 0x42) != 0
            || (v50 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime) == 0 )
          {
            v8 = 0xFFFFF6FB7DBED000uLL;
          }
          else
          {
            v51 = *(_QWORD *)(v50 + 8 * ((v5 >> 3) & 0x1FF));
            v5 = v41 | 0x20;
            v8 = 0xFFFFF6FB7DBED000uLL;
            if ( (v51 & 0x20) == 0 )
              v5 = *(_QWORD *)(v14 + 8);
            v41 = v5;
            if ( (v51 & 0x42) != 0 )
              v41 = v5 | 0x42;
          }
        }
        if ( qword_140465B00 && (v41 & 0x10) == 0 )
          v41 &= ~qword_140465B00;
        v15 = HIDWORD(v41);
      }
      v10 += v15;
      if ( qword_140465B00 && (v13 & 0x10) == 0 )
        v13 &= ~qword_140465B00;
      v16 = HIDWORD(v13);
      v59 = v16;
      if ( v16 )
      {
        v17 = *(_QWORD *)(v12 + 8 * v16);
        v18 = v12 + 8 * v16;
        if ( v18 >= 0xFFFFF6FB7DBED000uLL && v18 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
        {
          if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1
            || (v17 & 1) == 0
            || (v17 & 0x20) != 0 && (v17 & 0x42) != 0
            || (v5 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime) == 0 )
          {
            v8 = 0xFFFFF6FB7DBED000uLL;
          }
          else
          {
            v52 = *(_QWORD *)(v5 + 8 * ((v18 >> 3) & 0x1FF));
            v5 = v17 | 0x20;
            v8 = 0xFFFFF6FB7DBED000uLL;
            if ( (v52 & 0x20) == 0 )
              v5 = v17;
            LOWORD(v17) = v5;
            if ( (v52 & 0x42) != 0 )
              LOWORD(v17) = v5 | 0x42;
          }
        }
        if ( (v17 & 0xF000) == 0x1000 )
        {
          v19 = 1LL;
        }
        else
        {
          v42 = *(_QWORD *)(v18 + 8);
          v18 += 8LL;
          if ( v18 >= 0xFFFFF6FB7DBED000uLL && v18 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
          {
            if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1
              || (v42 & 1) == 0
              || (v42 & 0x20) != 0 && (v42 & 0x42) != 0
              || (v53 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime) == 0 )
            {
              v8 = 0xFFFFF6FB7DBED000uLL;
            }
            else
            {
              v18 = (v18 >> 3) & 0x1FF;
              v5 = v42 | 0x20;
              v54 = *(_QWORD *)(v53 + 8 * v18);
              v8 = 0xFFFFF6FB7DBED000uLL;
              if ( (v54 & 0x20) == 0 )
                v5 = v42;
              v42 = v5;
              if ( (v54 & 0x42) != 0 )
                v42 = v5 | 0x42;
            }
          }
          if ( qword_140465B00 && (v42 & 0x10) == 0 )
            v42 &= ~qword_140465B00;
          v19 = HIDWORD(v42);
        }
        if ( v19 + v16 == BugCheckParameter4 )
          goto LABEL_40;
      }
      v20 = BugCheckParameter4 + v10 - 1;
      if ( v20 >= *v4 )
        goto LABEL_150;
      if ( v10 > 1 )
      {
        v36 = v4[1];
        v37 = *(_QWORD *)(v36 + 8 * (BugCheckParameter4 >> 6));
        v38 = (_QWORD *)(v36 + 8 * (BugCheckParameter4 >> 6));
        v39 = (_QWORD *)(v36 + 8 * (v20 >> 6));
        if ( v38 == v39 )
        {
          v40 = ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v10) << BugCheckParameter4) & v37) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v10) << BugCheckParameter4;
        }
        else
        {
          if ( ((-1LL << BugCheckParameter4) & v37) != -1LL << BugCheckParameter4 )
            goto LABEL_150;
          v45 = v38 + 1;
          if ( v45 != v39 )
          {
            while ( *v45 == -1LL )
            {
              if ( ++v45 == v39 )
                goto LABEL_81;
            }
LABEL_150:
            KeBugCheckEx(0xDAu, 0x504uLL, v14, v10, BugCheckParameter4);
          }
LABEL_81:
          v40 = ((0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v20) & *v45) == 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v20;
        }
        if ( !v40 )
          goto LABEL_150;
      }
      else if ( v10 != 1 || !_bittest64((const signed __int64 *)v4[1], BugCheckParameter4) )
      {
        goto LABEL_150;
      }
      if ( !v6 )
      {
        MiInsertTbFlushEntry((__int64)v62, (__int64)(v14 << 25) >> 16, v10, 0);
        if ( (unsigned int)MiFlushTbListEarly(v62, 1LL) == 1 )
        {
          _InterlockedOr(v55, 0);
          if ( (unsigned int)(KiTbFlushTimeStamp - v7) > 2
            || (v7 & 1) == 0 && (unsigned int)(KiTbFlushTimeStamp - v7) >= 2 )
          {
            goto LABEL_87;
          }
        }
        goto LABEL_39;
      }
      v21 = v10;
      do
      {
        if ( !MiPteInShadowRange(v14) )
          goto LABEL_23;
        if ( !(unsigned int)MiPteHasShadow(v23) )
        {
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
            && (v22 & 1) != 0 )
          {
            v22 |= 0x8000000000000000uLL;
          }
LABEL_23:
          *v24 = v22;
          goto LABEL_24;
        }
        if ( !HIBYTE(word_140465BEC) && (v22 & 1) != 0 )
          v22 |= 0x8000000000000000uLL;
        *v24 = v22;
        MiWritePteShadow(v24, v22);
LABEL_24:
        v14 = (ULONG_PTR)(v24 + 1);
        --v21;
      }
      while ( v21 );
      v16 = v59;
      v5 = BugCheckParameter4 & 0x1F;
      v25 = v10;
      v18 = v4[1] + 4 * (BugCheckParameter4 >> 5);
      if ( v5 + v10 > 0x20 )
      {
        if ( (BugCheckParameter4 & 0x1F) != 0 )
        {
          _InterlockedAnd((volatile signed __int32 *)v18, ~(((1 << (32 - (BugCheckParameter4 & 0x1F))) - 1) << v5));
          v25 = v10 - (32 - (unsigned int)(BugCheckParameter4 & 0x1F));
          v18 += 4LL;
        }
        if ( v25 >= 0x20 )
        {
          v46 = v25 >> 5;
          v25 += -32LL * (v25 >> 5);
          do
          {
            *(_DWORD *)v18 = 0;
            v18 += 4LL;
            --v46;
          }
          while ( v46 );
        }
        if ( v25 )
        {
          v26 = -1 << v25;
LABEL_28:
          _InterlockedAnd((volatile signed __int32 *)v18, v26);
        }
      }
      else
      {
        if ( v10 != 32 )
        {
          v26 = ~(((1 << v10) - 1) << v5);
          goto LABEL_28;
        }
        *(_DWORD *)v18 = 0;
      }
      v27 = 512LL;
      if ( (v4[3] & 4) != 0 )
        v27 = 32LL;
      v28 = v27 - 1;
      v29 = BugCheckParameter4 & ~(v27 - 1);
      v30 = (~(v27 - 1) & (v27 + BugCheckParameter4 + v10 - 1)) - v29;
      if ( v30 )
      {
        v31 = v60;
        v32 = v29;
        while ( 1 )
        {
          v33 = v32 + v28;
          if ( v32 + v28 < *v31 )
          {
            v34 = v31[1];
            v18 = *(_QWORD *)(v34 + 8 * (v32 >> 6));
            v5 = v34 + 8 * (v32 >> 6);
            v35 = v34 + 8 * (v33 >> 6);
            if ( v5 == v35 )
            {
              v43 = (v18 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v27) << v32)) == 0;
LABEL_68:
              if ( v43 && (unsigned int)RtlInterlockedSetClearRunEx((__int64)v31, v32, v27) == 1 )
                MiReturnSystemPtes((__int64)v31, v32, v27, 0);
              goto LABEL_36;
            }
            if ( (v18 & (-1LL << v32)) == 0 )
            {
              v5 += 8LL;
              if ( v5 != v35 )
              {
                while ( !*(_QWORD *)v5 )
                {
                  v5 += 8LL;
                  if ( v5 == v35 )
                    goto LABEL_67;
                }
                goto LABEL_36;
              }
LABEL_67:
              v43 = ((0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v33) & *(_QWORD *)v5) == 0;
              goto LABEL_68;
            }
          }
LABEL_36:
          v32 += v27;
          if ( v32 - v29 >= v30 )
          {
            v16 = v59;
            v4 = v60;
            break;
          }
        }
      }
      v6 = v56;
      v11 = v10 + v58;
      v58 += v10;
LABEL_39:
      v10 = 0LL;
      v8 = 0xFFFFF6FB7DBED000uLL;
LABEL_40:
      BugCheckParameter4 = v16;
      if ( v16 )
      {
        v7 = v57;
        continue;
      }
      break;
    }
    if ( !v6 )
    {
LABEL_87:
      if ( HIDWORD(v62[1]) )
        MiFlushTbList((int *)v62, v8, v5, v18);
    }
    v7 = v57;
    v56 = ++v6;
    v8 = 0xFFFFF6FB7DBED000uLL;
  }
  while ( v6 < 2 );
  return v11;
}
