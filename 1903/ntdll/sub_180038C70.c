/*
 * XREFs of sub_180038C70 @ 0x180038C70
 * Callers:
 *     sub_180040830 @ 0x180040830 (sub_180040830.c)
 *     sub_180040B50 @ 0x180040B50 (sub_180040B50.c)
 *     sub_180044D74 @ 0x180044D74 (sub_180044D74.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x1800380E0 (RtlRbInsertNodeEx.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     sub_180039500 @ 0x180039500 (sub_180039500.c)
 *     sub_180051408 @ 0x180051408 (sub_180051408.c)
 *     sub_180051450 @ 0x180051450 (sub_180051450.c)
 *     sub_180068434 @ 0x180068434 (sub_180068434.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     RtlInterlockedPushEntrySList_0 @ 0x1800A01F0 (RtlInterlockedPushEntrySList_0.c)
 *     RtlInterlockedFlushSList_0 @ 0x1800A0230 (RtlInterlockedFlushSList_0.c)
 *     sub_18010A694 @ 0x18010A694 (sub_18010A694.c)
 *     sub_18010BC08 @ 0x18010BC08 (sub_18010BC08.c)
 */

__int64 __fastcall sub_180038C70(
        PRTL_SRWLOCK SRWLock,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5)
{
  char v6; // bp
  PRTL_SRWLOCK v8; // rdi
  int Ptr; // edx
  unsigned __int64 v10; // rbx
  unsigned int v11; // ecx
  PSLIST_ENTRY v12; // rax
  _QWORD *v13; // rsi
  int v14; // r12d
  _RTL_SRWLOCK *v15; // rbp
  __int64 v16; // r15
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  __int64 v19; // r14
  int v20; // ecx
  int v21; // edx
  unsigned __int64 v22; // r14
  unsigned int i; // ebx
  _RTL_SRWLOCK *v24; // r13
  __int64 v25; // rax
  unsigned __int64 v26; // rcx
  unsigned int v27; // r10d
  unsigned int v28; // r9d
  unsigned int v29; // r8d
  __int64 v30; // rcx
  unsigned int v31; // r9d
  unsigned int v32; // r8d
  unsigned int v33; // r10d
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rax
  __int64 v36; // rax
  PVOID v37; // r9
  unsigned __int64 v38; // rdx
  BOOLEAN v39; // al
  int v40; // r9d
  unsigned __int64 v41; // rax
  unsigned __int64 v43; // rax
  unsigned int v44; // edx
  unsigned int v45; // r9d
  unsigned __int64 v46; // rbx
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rbp
  volatile signed __int64 *v49; // r12
  unsigned __int64 v50; // rdi
  int v51; // ecx
  int v52; // ecx
  unsigned __int64 v53; // r8
  int v54; // ecx
  _SLIST_HEADER *v55; // rcx
  unsigned __int64 v56; // r8
  unsigned __int64 v57; // r8
  __int64 v58; // rax
  _RTL_SRWLOCK *SRWLocka; // [rsp+38h] [rbp-70h]
  int SRWLockb; // [rsp+38h] [rbp-70h]
  __int64 v61; // [rsp+40h] [rbp-68h]
  __int64 v62; // [rsp+48h] [rbp-60h]
  int v64; // [rsp+B8h] [rbp+10h]
  unsigned int v65; // [rsp+C0h] [rbp+18h] BYREF
  unsigned int v66; // [rsp+C8h] [rbp+20h]

  v66 = a4;
  v6 = a4;
  v8 = SRWLock;
  Ptr = (int)SRWLock[22].Ptr;
  v10 = a3 - 16;
  if ( (Ptr & 1) != 0 && (a3 & 0xFFF) == 0 )
    v10 = a3 - 32;
  if ( !a2 )
  {
    v51 = HIDWORD(qword_180163540) ^ HIDWORD(v10) ^ HIDWORD(*(_QWORD *)v10);
    if ( (v51 & 0xFF0000) != 0 )
    {
      v52 = (unsigned __int8)(qword_180163540 ^ v10 ^ *(_BYTE *)(v10 + 8));
    }
    else
    {
      if ( (_WORD)v51 )
      {
        v53 = v10 - 16LL * (unsigned __int16)((v10 ^ qword_180163540 ^ *(_QWORD *)v10) >> 32);
        v54 = HIDWORD(qword_180163540) ^ HIDWORD(*(_QWORD *)v53) ^ HIDWORD(v53);
        if ( (v54 & 0xFF0000) != 0 )
        {
          v52 = (unsigned __int8)(qword_180163540 ^ v53 ^ *(_BYTE *)(v53 + 8));
        }
        else if ( (_WORD)v54 )
        {
          v53 -= 16LL * (unsigned __int16)((qword_180163540 ^ *(_QWORD *)v53 ^ v53) >> 32);
          v52 = (unsigned __int8)(qword_180163540 ^ v53 ^ *(_BYTE *)(v53 + 8));
        }
        else
        {
          v52 = 0;
        }
        goto LABEL_78;
      }
      v52 = 0;
    }
    v53 = v10;
LABEL_78:
    a2 = (v53 - (unsigned int)(v52 << 12)) & 0xFFFFFFFFFFFFF000uLL;
  }
  if ( (((unsigned __int16)(*(_WORD *)(a2 + 32) ^ *(_WORD *)(a2 + 34)) ^ 0x2BED) & 0x7FFF) != 0 )
  {
    sub_18010A694(18, (unsigned int)v8 ^ LODWORD(v8[16].Ptr), a2, 0, 0LL, 0LL);
    return 0LL;
  }
  else
  {
    if ( ((v10 ^ qword_180163540 ^ *(_QWORD *)v10) & 0xFF000000000000LL) != 0 )
    {
      v11 = 16 * (WORD1(qword_180163540) ^ WORD1(v10) ^ *(unsigned __int16 *)(v10 + 2)) - 16;
      *a5 = v11;
      v12 = 0LL;
      if ( (Ptr & 4) != 0 && v11 < 0x1000 )
      {
        v55 = (_SLIST_HEADER *)&v8[8];
        if ( LOWORD(v8[8].Ptr) < 0x20u )
        {
          RtlInterlockedPushEntrySList_0(v55, (PSLIST_ENTRY)(v10 + 16));
          return 1LL;
        }
        v12 = RtlInterlockedFlushSList_0(v55);
      }
      v13 = (_QWORD *)(v10 + 16);
      *(_QWORD *)(v10 + 16) = v12;
      v14 = v6 & 1;
      v64 = v14;
      if ( (v6 & 1) != 0 )
      {
        v15 = SRWLock;
        SRWLocka = SRWLock;
      }
      else
      {
        SRWLocka = v8;
        v15 = v8;
        RtlAcquireSRWLockExclusive(v8);
      }
      if ( v10 == -16LL )
      {
LABEL_37:
        if ( !v14 )
          RtlReleaseSRWLockExclusive(v15);
        return 1LL;
      }
      while ( 1 )
      {
        v16 = (__int64)(v13 - 2);
        v17 = *(v13 - 2);
        v18 = (unsigned __int64)(v13 - 2);
        v13 = (_QWORD *)*v13;
        v19 = v16;
        v20 = ((qword_180163540 ^ v17 ^ v18) >> 32) & 0xFF0000;
        if ( v20 )
        {
          v21 = (unsigned __int8)(qword_180163540 ^ v16 ^ *(_BYTE *)(v16 + 8));
        }
        else
        {
          v56 = (v17 ^ qword_180163540 ^ (unsigned __int64)v16) >> 32;
          if ( !(_WORD)v56 )
            goto LABEL_90;
          v19 = v16 - 16LL * (unsigned __int16)v56;
          if ( ((qword_180163540 ^ *(_QWORD *)v19 ^ v19) & 0xFF000000000000LL) != 0 )
          {
            v21 = (unsigned __int8)(qword_180163540 ^ v19 ^ *(_BYTE *)(v19 + 8));
          }
          else
          {
            v57 = (qword_180163540 ^ (unsigned __int64)v19 ^ *(_QWORD *)v19) >> 32;
            if ( !(_WORD)v57 )
            {
LABEL_90:
              v21 = 0;
              goto LABEL_11;
            }
            v19 -= 16LL * (unsigned __int16)v57;
            v21 = (unsigned __int8)(qword_180163540 ^ v19 ^ *(_BYTE *)(v19 + 8));
          }
        }
LABEL_11:
        v22 = (v19 - (unsigned int)(v21 << 12)) & 0xFFFFFFFFFFFFF000uLL;
        if ( (((unsigned __int16)(*(_WORD *)(v22 + 32) ^ *(_WORD *)(v22 + 34)) ^ 0x2BED) & 0x7FFF) != 0 )
        {
          sub_18010A694(18, (unsigned int)v8 ^ LODWORD(v8[16].Ptr), v22, 0, 0LL, 0LL);
        }
        else if ( v20 )
        {
          for ( i = 0; ; i = v65 )
          {
            v24 = v15;
            v25 = sub_180039500(v8, v22, v16, &v65);
            v26 = v65;
            v16 = v25;
            if ( v65 == *(unsigned __int16 *)(v22 + 32) )
            {
              sub_180051450(v8, v22);
              if ( !v14 )
                RtlReleaseSRWLockExclusive(v15);
              sub_180051408(v8, v22, v66);
              v15 = 0LL;
              if ( v14 )
                v15 = v24;
              SRWLocka = v15;
              if ( !v14 )
              {
                SRWLocka = v8;
                v15 = v8;
                RtlAcquireSRWLockExclusive(v8);
              }
              goto LABEL_36;
            }
            if ( v65 <= i )
              break;
            v27 = v25 - v22;
            v28 = (v25 - v22 + 4127) & 0xFFFFF000;
            v29 = (v25 + 16 * (WORD1(qword_180163540) ^ WORD1(v25) ^ *(unsigned __int16 *)(v25 + 2)) - v22) & 0xFFFFF000;
            if ( v28 >= v29 )
              break;
            v44 = v29 - v28;
            v45 = v28 >> 12;
            v26 = (unsigned __int8)v45;
            v46 = *(_QWORD *)(v22 + 16) & (-1LL << v45) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                   - (unsigned __int8)((unsigned __int64)(v29 - 1) >> 12)));
            if ( v44 < 0x1000 || !v46 )
              break;
            v47 = v46 - ((v46 >> 1) & 0x5555555555555555LL);
            v26 = v47 & 0x3333333333333333LL;
            v48 = (0x101010101010101LL
                 * (((v47 & 0x3333333333333333LL)
                   + ((v47 >> 2) & 0x3333333333333333LL)
                   + (((v47 & 0x3333333333333333LL) + ((v47 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
            if ( *(__int16 *)(v22 + 34) < 0 )
            {
              v15 = SRWLocka;
              break;
            }
            v49 = (volatile signed __int64 *)&v8[6];
            if ( ((__int64)v8[22].Ptr & 2) == 0 )
            {
              v26 = (unsigned __int64)*v49 >> 7;
              if ( v26 <= 8 )
                v26 = 8LL;
              if ( (char *)v8[7].Ptr + (unsigned int)v48 <= (PVOID)v26 )
              {
                v15 = SRWLocka;
                v14 = v64;
                break;
              }
            }
            HIDWORD(v62) = HIDWORD(v62) & 0xFF00FFFF | 0x10000;
            v62 ^= qword_180163540 ^ v16;
            *(_BYTE *)(v16 + 6) = BYTE6(v62);
            *(_DWORD *)(v16 + 8) = (unsigned __int8)(qword_180163540 ^ v16 ^ (v27 >> 12)) | 0x200;
            if ( !v64 )
              RtlReleaseSRWLockExclusive(SRWLocka);
            _BitScanForward64(&v50, v46);
            _BitScanReverse64(&v46, v46);
            SRWLockb = v46 - v50 + 1;
            RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v22 + 24));
            ((void (__fastcall *)(unsigned __int64, unsigned __int64, _QWORD))((unsigned __int64)SRWLock ^ qword_180163540 ^ (__int64)SRWLock[20].Ptr))(
              (unsigned __int64)SRWLock ^ (unsigned __int64)SRWLock[16].Ptr,
              v22 + (unsigned int)((_DWORD)v50 << 12),
              (unsigned int)(SRWLockb << 12));
            *(_QWORD *)(v22 + 16) &= ~(((1LL << SRWLockb) - 1) << v50);
            _InterlockedExchangeAdd64(v49, -(int)v48);
            RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v22 + 24));
            v14 = v64;
            v15 = 0LL;
            v8 = SRWLock;
            if ( v64 )
              v15 = v24;
            SRWLocka = v15;
            if ( !v64 )
            {
              SRWLocka = SRWLock;
              v15 = SRWLock;
              RtlAcquireSRWLockExclusive(SRWLock);
            }
            *(_DWORD *)(v16 + 8) &= ~0x200u;
          }
          if ( ((__int64)v8[22].Ptr & 1) != 0 && ((v16 + 32) & 0xFFF) != 0 )
          {
            v58 = sub_18010BC08(v26, v22, v16);
            if ( v58 )
              sub_180068434(v8, v22, v58);
          }
          v30 = 16 * (WORD1(qword_180163540) ^ WORD1(v16) ^ *(unsigned __int16 *)(v16 + 2));
          v31 = (v30 + v16 - v22) & 0xFFFFF000;
          v32 = (v16 - v22 + 4127) & 0xFFFFF000;
          if ( v32 < v31 )
          {
            v33 = v31 - v32;
            v34 = *(_QWORD *)(v22 + 16) & (-1LL << (v32 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                           - (unsigned __int8)((unsigned __int64)(v31 - 1) >> 12)));
          }
          else
          {
            v33 = 0;
            v34 = 0LL;
          }
          v35 = v34 - ((v34 >> 1) & 0x5555555555555555LL);
          v8[7].Ptr = (char *)v8[7].Ptr
                    + ((unsigned int)((0x101010101010101LL
                                     * (((v35 & 0x3333333333333333LL)
                                       + ((v35 >> 2) & 0x3333333333333333LL)
                                       + (((v35 & 0x3333333333333333LL) + ((v35 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24);
          LODWORD(v61) = (unsigned __int16)(v61 ^ (((v30 + (unsigned __int64)(v16 & 0xFFF) + 4095) >> 12)
                                                 - ((unsigned __int64)(v30 + 4095) >> 12)
                                                 + (v33 >> 12)
                                                 - ((unsigned int)((0x101010101010101LL
                                                                  * (((v35 & 0x3333333333333333LL)
                                                                    + ((v35 >> 2) & 0x3333333333333333LL)
                                                                    + (((v35 & 0x3333333333333333LL)
                                                                      + ((v35 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24))) ^ (unsigned int)v61;
          v36 = qword_180163540 ^ v16 ^ v61;
          *(_WORD *)v16 = v36;
          v37 = v8[3].Ptr;
          v61 = v36;
          if ( ((unsigned __int8)v37 & 1) != 0 )
          {
            v43 = (unsigned __int64)v8[2].Ptr;
            if ( v43 )
              v38 = v43 ^ (unsigned __int64)&v8[2];
            else
              v38 = 0LL;
          }
          else
          {
            v38 = (unsigned __int64)v8[2].Ptr;
          }
          v39 = 0;
          v40 = (unsigned __int8)v37 & 1;
          if ( v38 )
          {
            while ( 1 )
            {
              if ( ((unsigned int)qword_180163540 ^ *(_DWORD *)v16 ^ (unsigned int)v16) < ((unsigned int)qword_180163540 ^ *(_DWORD *)(v38 - 8) ^ ((_DWORD)v38 - 8)) )
              {
                v41 = *(_QWORD *)v38;
                if ( v40 )
                {
                  if ( !v41 )
                    goto LABEL_33;
                  v41 ^= v38;
                }
                if ( !v41 )
                {
LABEL_33:
                  v39 = 0;
                  break;
                }
              }
              else
              {
                v41 = *(_QWORD *)(v38 + 8);
                if ( v40 )
                {
                  if ( !v41 )
                    goto LABEL_34;
                  v41 ^= v38;
                }
                if ( !v41 )
                {
LABEL_34:
                  v39 = 1;
                  break;
                }
              }
              v38 = v41;
            }
          }
          RtlRbInsertNodeEx((PRTL_RB_TREE)&v8[2], (PRTL_BALANCED_NODE)v38, v39, (PRTL_BALANCED_NODE)(v16 + 8));
        }
        else
        {
          sub_18010A694(8, (unsigned int)v8 ^ LODWORD(v8[16].Ptr), v16, 0, 0LL, 0LL);
        }
LABEL_36:
        if ( !v13 )
          goto LABEL_37;
      }
    }
    sub_18010A694(8, (unsigned int)v8 ^ LODWORD(v8[16].Ptr), a3, v10, 0LL, 0LL);
    return 0LL;
  }
}
