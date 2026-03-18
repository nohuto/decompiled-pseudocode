/*
 * XREFs of MiDeletePteList @ 0x140026F90
 * Callers:
 *     MiDecommitPages @ 0x140057740 (MiDecommitPages.c)
 *     MiDeletePteWsleCluster @ 0x14012EFA0 (MiDeletePteWsleCluster.c)
 * Callees:
 *     MiGetContainingPageTable @ 0x1400236B0 (MiGetContainingPageTable.c)
 *     MiInsertPageInList @ 0x1400262A0 (MiInsertPageInList.c)
 *     MiPfnShareCountIsZero @ 0x140026B30 (MiPfnShareCountIsZero.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002AEF0 (MiInsertPageInFreeOrZeroedList.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiFlushTbList @ 0x14004FFE0 (MiFlushTbList.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x14005B0C0 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiCaptureDirtyBitToPfn @ 0x14005C184 (MiCaptureDirtyBitToPfn.c)
 *     MiGetPagingFileOffset @ 0x1400761B4 (MiGetPagingFileOffset.c)
 *     MiSwizzleInvalidPte @ 0x1400763F0 (MiSwizzleInvalidPte.c)
 *     MiReleasePageFileInfo @ 0x140088F50 (MiReleasePageFileInfo.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiSetNonResidentPteHeat @ 0x1400DBAC0 (MiSetNonResidentPteHeat.c)
 *     MiDecrementShareCount @ 0x1400DBB10 (MiDecrementShareCount.c)
 *     MiUpdatePageFileHighInPte @ 0x1400DBC30 (MiUpdatePageFileHighInPte.c)
 *     MiLocateCloneAddress @ 0x1400DFC38 (MiLocateCloneAddress.c)
 *     MiMakeProtoTransition @ 0x140115FD0 (MiMakeProtoTransition.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiReduceShareCount @ 0x140130C4C (MiReduceShareCount.c)
 *     MiDecrementCombinedPte @ 0x140140850 (MiDecrementCombinedPte.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     MiDecrementCloneBlockReference @ 0x1402E3984 (MiDecrementCloneBlockReference.c)
 */

void __fastcall MiDeletePteList(__int64 a1, __int64 a2, unsigned __int64 a3, _QWORD *a4, int a5)
{
  __int64 v6; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r13
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __int64 v16; // r11
  ULONG_PTR v17; // r12
  __int64 v18; // r14
  unsigned __int64 v19; // r15
  __int64 v20; // r10
  unsigned __int64 v21; // r15
  unsigned __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // r8
  unsigned __int64 v25; // rdx
  __int64 v26; // rdx
  char v27; // al
  __int64 v28; // r9
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r9
  bool v34; // zf
  ULONG_PTR v35; // rbx
  __int64 v36; // r8
  ULONG_PTR BugCheckParameter4; // rcx
  ULONG_PTR v38; // rcx
  __int64 v39; // rbx
  unsigned __int64 v40; // rdi
  __int64 v41; // rdx
  __int64 v42; // r10
  unsigned __int64 v43; // rax
  __int64 v44; // r8
  __int64 updated; // rax
  unsigned __int64 v46; // r15
  bool v47; // r12
  __int64 v48; // rbx
  int v49; // eax
  unsigned __int64 DeepFreezeStartTime; // r8
  __int64 v51; // rax
  __int64 v52; // r8
  ULONG_PTR CloneAddress; // rax
  ULONG_PTR v54; // rdx
  char v55; // al
  char v56; // al
  char v57; // cl
  unsigned int v58; // edx
  unsigned int v59; // [rsp+30h] [rbp-51h]
  __int64 v60; // [rsp+38h] [rbp-49h]
  unsigned __int64 v61; // [rsp+40h] [rbp-41h] BYREF
  unsigned int v62; // [rsp+48h] [rbp-39h]
  unsigned __int64 v63; // [rsp+50h] [rbp-31h] BYREF
  int v64; // [rsp+58h] [rbp-29h] BYREF
  int v65; // [rsp+5Ch] [rbp-25h] BYREF
  int v66; // [rsp+60h] [rbp-21h] BYREF
  int v67; // [rsp+64h] [rbp-1Dh] BYREF
  __int64 v68; // [rsp+68h] [rbp-19h] BYREF
  __int64 v69; // [rsp+70h] [rbp-11h]
  __int64 v70; // [rsp+78h] [rbp-9h]
  unsigned __int64 v71; // [rsp+80h] [rbp-1h]
  __int64 v72; // [rsp+88h] [rbp+7h]
  unsigned __int64 ContainingPageTable; // [rsp+90h] [rbp+Fh]
  __int64 v74; // [rsp+E0h] [rbp+5Fh]
  int v77; // [rsp+100h] [rbp+7Fh]

  v74 = a1;
  v6 = *(unsigned int *)(a1 + 12);
  v62 = *(_DWORD *)(a1 + 12);
  v69 = 0LL;
  v59 = 0;
  v70 = -1LL;
  if ( a5 )
  {
    MiFlushTbList(a1, v6, a3, a4);
    a1 = v74;
    LODWORD(v6) = v62;
  }
  if ( !a4[4] && !a4[5] )
  {
    v8 = 0LL;
    v9 = 0LL;
    v77 = 0;
    if ( (_DWORD)v6 )
    {
      while ( 1 )
      {
        v10 = *(_QWORD *)(a1 + 8 * v8 + 24);
        v11 = (v10 & 0x3FF) + 1;
        v12 = v10 & 0xFFFFFFFFFFFFF000uLL;
        v72 = v11;
        v71 = v12;
        do
        {
          v13 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v14 = *(_QWORD *)v13;
          if ( v13 >= 0xFFFFF6FB7DBED000uLL
            && v13 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v14 & 1) != 0
            && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
          {
            DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
            if ( DeepFreezeStartTime )
            {
              v51 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v13 >> 3) & 0x1FF));
              v52 = v14 | 0x20;
              if ( (v51 & 0x20) == 0 )
                v52 = *(_QWORD *)v13;
              v14 = v52;
              if ( (v51 & 0x42) != 0 )
                v14 = v52 | 0x42;
            }
          }
          v61 = v14 & 0xFFFFFFFFFFFFFBFEuLL | 1;
          v15 = MI_READ_PTE_LOCK_FREE(&v61);
          v17 = v16 & (v15 >> 12);
          v18 = 48 * v17 - 0x58000000000LL;
          v19 = *(_QWORD *)(v18 + 40);
          v20 = *(_QWORD *)(qword_140466188 + 8 * ((v19 >> 40) & 0x3FF));
          v60 = v20;
          if ( (v19 & 0x200000000000000LL) != 0 )
          {
            v46 = *(_QWORD *)(v18 + 8) | 0x8000000000000000uLL;
            v47 = *(_QWORD *)(v18 + 8) >= 0LL;
            v48 = 0LL;
            ContainingPageTable = MiGetContainingPageTable(v13);
            v64 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v64);
              while ( *(__int64 *)(v18 + 24) < 0 );
            }
            if ( (v61 & 0x42) != 0 )
              v48 = MiCaptureDirtyBitToPfn(v18);
            MiDecrementShareCount(v18);
            _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v48 )
              MiReleasePageFileInfo(v60, v48, 1LL);
            if ( v47 )
            {
              v49 = MiDecrementCombinedPte(a2 + 1280, v46);
            }
            else
            {
              CloneAddress = MiLocateCloneAddress(a2, v46);
              v49 = MiDecrementCloneBlockReference(CloneAddress, v54);
            }
            if ( v49 == 3 )
            {
              ++a4[1];
            }
            else if ( v49 == 5 )
            {
              ++a4[2];
            }
            v21 = ContainingPageTable;
            v30 = a3;
            v61 = a3;
          }
          else
          {
            v21 = v16 & v19;
            v65 = 0;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
            {
              do
              {
                do
                  KeYieldProcessorEx(&v65);
                while ( *(__int64 *)(v18 + 24) < 0 );
              }
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) );
              v20 = v60;
            }
            v22 = *(_QWORD *)(v18 + 16);
            *(_QWORD *)(v18 + 24) |= 0x4000000000000000uLL;
            if ( (v22 & 2) != 0
              && !(unsigned int)MI_IS_PTE_IN_WS_SWAP_SET(v20, v18 + 16)
              && *(_WORD *)(v18 + 32) == 1
              && a3 )
            {
              v9 = v22;
              v22 &= ~2uLL;
              *(_QWORD *)(v18 + 16) = v22;
            }
            v23 = *(_QWORD *)(v18 + 24);
            if ( (*(_BYTE *)(v18 + 34) & 7) != 6 )
              KeBugCheckEx(0x4Eu, 0x99uLL, v17, *(_BYTE *)(v18 + 34) & 7, v23 & 0x3FFFFFFFFFFFFFFFLL);
            v24 = 0x3FFFFFFFFFFFFFFFLL;
            v25 = v23 ^ (((v23 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ v23) & 0x3FFFFFFFFFFFFFFFLL;
            *(_QWORD *)(v18 + 24) = v25;
            if ( (v23 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
            {
              if ( (*(_QWORD *)(v18 + 40) & 0x200000000000000LL) != 0 )
              {
                MiMakeProtoTransition(48 * v17 - 0x58000000000LL);
                v25 = *(_QWORD *)(v18 + 24);
              }
              --*(_WORD *)(v18 + 32);
              v26 = (v25 >> 62) & 1;
              if ( *(_WORD *)(v18 + 32) )
              {
                v55 = *(_BYTE *)(v18 + 34);
                if ( (_DWORD)v26 )
                {
                  v56 = v55 | 7;
                }
                else if ( (v55 & 0x10) != 0 )
                {
                  v56 = v55 & 0xF8 | 3;
                }
                else
                {
                  v56 = v55 & 0xF8 | 2;
                }
                *(_BYTE *)(v18 + 34) = v56;
                if ( (*(_DWORD *)(v18 + 16) & 0x400LL) == 0 && (unsigned int)MiGetPagingFileOffset(v18 + 16) )
                  *(_BYTE *)(*(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v18 + 40) >> 40) & 0x3FFLL)) + 667LL) = 1;
                ++a4[1];
              }
              else if ( (_DWORD)v26 )
              {
                v27 = *(_BYTE *)(v18 + 35);
                if ( (v27 & 0x10) != 0 )
                  *(_BYTE *)(v18 + 35) = v27 & 0xEF;
                v28 = *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v18 + 40) >> 40) & 0x3FFLL));
                v68 = *(_QWORD *)(v18 + 16);
                if ( (v68 & 0x400) == 0 )
                {
                  v29 = (v68 & 4) != 0 || (v68 & 2) != 0 ? MI_READ_PTE_LOCK_FREE(&v68) : 0LL;
                  v68 = v29;
                  if ( v29 )
                    MiReleasePageFileInfo(v28, v29, 0LL);
                }
                MiInsertPageInFreeOrZeroedList(v17);
              }
              else
              {
                MiSetNonResidentPteHeat(v18 + 16, 0LL);
                v57 = *(_BYTE *)(v18 + 34);
                if ( (v57 & 0x10) != 0 )
                {
                  v58 = 8;
                }
                else
                {
                  v58 = 4;
                  *(_BYTE *)(v18 + 34) = v57 & 0xF8 | 2;
                }
                MiInsertPageInList(48 * v17 - 0x58000000000LL, v58);
              }
            }
            _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v61 = a3;
            if ( v9 )
            {
              if ( qword_140465B00 && (v9 & 0x10) == 0 )
                v9 &= ~qword_140465B00;
              v40 = HIDWORD(v9);
              v63 = a3;
              MiSetNonResidentPteHeat(&v63, 0LL);
              v43 = v63;
              if ( (a3 & 0x400) == 0 )
              {
                v43 = v63 & 0xFFFFFFFFFFFFFFF9uLL;
                v63 &= 0xFFFFFFFFFFFFFFF9uLL;
              }
              if ( v42 )
              {
                v44 = *(unsigned __int16 *)(v42 + 204);
                if ( v43 )
                  updated = MiUpdatePageFileHighInPte(v43, v40, v44);
                else
                  updated = MiSwizzleInvalidPte(v40 << 32, v41, v44, v22);
                v43 = updated ^ (unsigned __int16)(updated ^ ((_WORD)v24 << 12)) & 0xF000 | 2;
                v63 = v43;
              }
              v61 = v43;
              v9 = 0LL;
            }
            _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 928), 0xFFFFFFFFFFFFFFFFuLL);
            v30 = v61;
          }
          if ( !(unsigned int)MiPteInShadowRange(v13, v30, v24, v22) )
            goto LABEL_29;
          if ( !(unsigned int)MiPteHasShadow(v32) )
          {
            if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
              && (v31 & 1) != 0 )
            {
              v31 |= 0x8000000000000000uLL;
            }
LABEL_29:
            *(_QWORD *)v13 = v31;
            goto LABEL_30;
          }
          if ( !HIBYTE(word_140465BEC) && (v31 & 1) != 0 )
            v31 |= 0x8000000000000000uLL;
          *(_QWORD *)v13 = v31;
          MiWritePteShadow(v13, v31);
LABEL_30:
          if ( v21 != v70 )
          {
            v39 = v69;
            if ( v69 )
            {
              v66 = 0;
              if ( _interlockedbittestandset64((volatile signed __int32 *)(v69 + 24), 0x3FuLL) )
              {
                do
                {
                  do
                    KeYieldProcessorEx(&v66);
                  while ( *(__int64 *)(v39 + 24) < 0 );
                }
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v39 + 24), 0x3FuLL) );
              }
              MiReduceShareCount(v39, v59);
              _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v59 = 0;
            }
            v70 = v21;
            v69 = 48 * v21 - 0x58000000000LL;
          }
          v33 = v59 + 1;
          v12 = v71 + 4096;
          ++v59;
          v34 = v72-- == 1;
          v71 += 4096LL;
        }
        while ( !v34 );
        a1 = v74;
        v8 = (unsigned int)(v77 + 1);
        v77 = v8;
        if ( (unsigned int)v8 >= v62 )
        {
          if ( (_DWORD)v33 )
          {
            v35 = v69;
            v67 = 0;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v69 + 24), 0x3FuLL) )
            {
              do
              {
                do
                  KeYieldProcessorEx(&v67);
                while ( *(__int64 *)(v35 + 24) < 0 );
              }
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v35 + 24), 0x3FuLL) );
              v33 = v59;
            }
            v36 = *(unsigned __int8 *)(v35 + 34);
            BugCheckParameter4 = *(_QWORD *)(v35 + 24) & 0x3FFFFFFFFFFFFFFFLL;
            if ( (v36 & 7) != 6 )
              KeBugCheckEx(0x4Eu, 0x99uLL, (__int64)(v35 + 0x58000000000LL) / 48, v36 & 7, BugCheckParameter4);
            v38 = BugCheckParameter4 - (unsigned int)v33;
            *(_QWORD *)(v35 + 24) ^= (v38 ^ *(_QWORD *)(v35 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
            if ( !v38 )
              MiPfnShareCountIsZero(v35, 0LL, v36, v33);
            _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          return;
        }
      }
    }
  }
}
