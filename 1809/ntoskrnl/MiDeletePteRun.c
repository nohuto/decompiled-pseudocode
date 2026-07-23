/*
 * XREFs of MiDeletePteRun @ 0x140037620
 * Callers:
 *     MiDeleteVaTail @ 0x140075870 (MiDeleteVaTail.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     MiPfnShareCountIsZero @ 0x1400382F0 (MiPfnShareCountIsZero.c)
 *     MiDeleteBatch @ 0x140039750 (MiDeleteBatch.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiGetContainingPageTable @ 0x140079840 (MiGetContainingPageTable.c)
 *     MiReleasePageFileSpace @ 0x140082394 (MiReleasePageFileSpace.c)
 *     MiLocateCloneAddress @ 0x1400946C8 (MiLocateCloneAddress.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1400946E4 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiTryDeleteTransitionPte @ 0x140094E6C (MiTryDeleteTransitionPte.c)
 *     MiIdentifyPfn @ 0x1400A7E20 (MiIdentifyPfn.c)
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     MiCapturePageFileInfoInline @ 0x140119E40 (MiCapturePageFileInfoInline.c)
 *     MiDecrementCombinedPte @ 0x14011FA64 (MiDecrementCombinedPte.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiDereferenceIoPages @ 0x140123704 (MiDereferenceIoPages.c)
 *     MiPteIsSessionDynamicBuffer @ 0x140158C54 (MiPteIsSessionDynamicBuffer.c)
 *     MiWriteTopLevelPxe @ 0x140170A50 (MiWriteTopLevelPxe.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiDeleteClusterPage @ 0x1402C641C (MiDeleteClusterPage.c)
 *     MiDecrementCloneBlockReference @ 0x1402C9820 (MiDecrementCloneBlockReference.c)
 */

__int64 __fastcall MiDeletePteRun(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r15
  __int64 v3; // r14
  ULONG_PTR v4; // rdi
  ULONG_PTR v5; // rsi
  __int64 v6; // rax
  __int64 v7; // r10
  unsigned __int64 v8; // rcx
  BOOL v9; // r9d
  __int64 v10; // r8
  __int64 v11; // rcx
  unsigned int v12; // ebx
  ULONG_PTR v13; // r12
  struct _KEVENT *v14; // r11
  __int64 v15; // rdi
  int v16; // r13d
  unsigned __int64 v17; // r10
  ULONG_PTR v18; // rdi
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // rbx
  __int64 v21; // rdi
  __int64 v22; // r15
  unsigned __int64 v23; // r9
  __int64 v24; // rdi
  unsigned __int64 v25; // r14
  __int64 v26; // rax
  __int64 v27; // r14
  __int64 v28; // r9
  _QWORD *v29; // r12
  char v30; // r8
  struct _KEVENT *v31; // r10
  int IsZero; // r15d
  __int64 v33; // rcx
  unsigned __int64 v34; // r13
  char v35; // dl
  __int64 v36; // rcx
  __int64 v37; // r11
  _QWORD *v38; // rbx
  __int64 v39; // rdx
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // r8
  unsigned __int8 v42; // dl
  char v43; // cl
  __int64 v44; // rdx
  __int64 result; // rax
  ULONG_PTR v46; // r9
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // r8
  __int64 v49; // r12
  int v50; // r11d
  __int64 v51; // rax
  int v52; // eax
  char v53; // al
  __int64 v54; // rcx
  unsigned __int64 v55; // rdx
  __int64 v56; // rax
  unsigned __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rdx
  unsigned __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rdx
  unsigned __int64 v63; // rdx
  __int64 v64; // rax
  int v65; // eax
  unsigned __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rdx
  unsigned __int64 v69; // rdx
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  ULONG_PTR v76; // rbx
  __int64 v77; // r8
  __int64 v78; // rcx
  _QWORD *v79; // [rsp+30h] [rbp-D0h]
  char v80; // [rsp+38h] [rbp-C8h]
  BOOL v81; // [rsp+3Ch] [rbp-C4h]
  char v82; // [rsp+40h] [rbp-C0h]
  struct _KEVENT *v83; // [rsp+48h] [rbp-B8h]
  ULONG_PTR BugCheckParameter3; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v85; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v86; // [rsp+60h] [rbp-A0h]
  __int64 v87; // [rsp+68h] [rbp-98h]
  int v88; // [rsp+70h] [rbp-90h]
  unsigned int v89; // [rsp+74h] [rbp-8Ch]
  struct _KEVENT *v90; // [rsp+78h] [rbp-88h]
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-80h]
  int v92; // [rsp+88h] [rbp-78h] BYREF
  int v93; // [rsp+8Ch] [rbp-74h] BYREF
  int v94; // [rsp+90h] [rbp-70h] BYREF
  int v95; // [rsp+94h] [rbp-6Ch] BYREF
  unsigned __int64 v96; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v97; // [rsp+A0h] [rbp-60h] BYREF
  ULONG_PTR v98; // [rsp+A8h] [rbp-58h]
  ULONG_PTR v99; // [rsp+B0h] [rbp-50h]
  ULONG_PTR v100; // [rsp+B8h] [rbp-48h]
  __int64 v101; // [rsp+C0h] [rbp-40h]
  __int64 v102; // [rsp+C8h] [rbp-38h]
  _QWORD v103[4]; // [rsp+D0h] [rbp-30h] BYREF
  __int16 v104; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v105; // [rsp+F8h] [rbp-8h]
  _QWORD v106[16]; // [rsp+100h] [rbp+0h]
  _QWORD v107[2]; // [rsp+180h] [rbp+80h] BYREF

  v2 = *(_QWORD **)(a2 + 24);
  v3 = a1;
  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(_QWORD *)a2;
  v80 = *(_BYTE *)(a2 + 16);
  v6 = *(_QWORD *)(a2 + 40);
  LODWORD(a2) = *(_DWORD *)(a2 + 32);
  v101 = v6;
  v85 = a1;
  v79 = v2;
  v100 = v4;
  v104 = 0;
  v105 = 0LL;
  v82 = a2;
  v7 = 0LL;
  v102 = 0LL;
  v8 = (__int64)(v5 << 25) >> 16;
  v9 = v8 >= 0xFFFFF68000000000uLL && v8 <= 0xFFFFF6FFFFFFFFFFuLL;
  v10 = v3 - 1280;
  v11 = *(unsigned __int16 *)(v3 + 174);
  v12 = 0;
  if ( (*(_BYTE *)(v3 + 184) & 7) != 0 )
    v10 = 0LL;
  v81 = v9;
  v13 = 0LL;
  v87 = v10;
  v88 = 0;
  v14 = *(struct _KEVENT **)(qword_14043B808 + 8 * v11);
  v90 = v14;
  v89 = 0;
  v83 = 0LL;
  v98 = 0LL;
  if ( v5 <= v4 )
  {
    while ( 1 )
    {
      v15 = *(_QWORD *)v5;
      if ( v5 >= 0xFFFFF6FB7DBED000uLL
        && v5 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v15 & 1) != 0
        && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
      {
        v55 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v55 )
        {
          v56 = *(_QWORD *)(v55 + 8 * ((v5 >> 3) & 0x1FF));
          a2 = v15 | 0x20;
          if ( (v56 & 0x20) == 0 )
            a2 = *(_QWORD *)v5;
          v15 = a2;
          LOBYTE(a2) = v82;
          if ( (v56 & 0x42) != 0 )
            v15 |= 0x42uLL;
        }
        else
        {
          LOBYTE(a2) = v82;
        }
      }
      if ( v15 )
      {
        v16 = a2 & 0x40;
        if ( (a2 & 0x40) != 0 && (v5 < 0xFFFFF6FB7DBED000uLL || v5 > 0xFFFFF6FB7DBEDFFFuLL) && (v89 = v12 + 1, !v13) )
        {
          v47 = ((((__int64)((v5 << 25) - v7) >> 16) & 0xFFFFFFE00000uLL) >> 18) - 0x904C0000000LL;
          v17 = 0xFFFFF6FB7DBED000uLL;
          v48 = *(_QWORD *)v47;
          if ( v47 >= 0xFFFFF6FB7DBED000uLL
            && v47 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v48 & 1) != 0
            && ((v48 & 0x20) == 0 || (v48 & 0x42) == 0) )
          {
            v57 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
            if ( v57 )
            {
              v58 = *(_QWORD *)(v57 + 8 * ((v47 >> 3) & 0x1FF));
              v59 = v48 | 0x20;
              if ( (v58 & 0x20) == 0 )
                v59 = v48;
              v48 = v59;
              if ( (v58 & 0x42) != 0 )
                v48 = v59 | 0x42;
            }
          }
          v96 = v48;
          if ( (unsigned __int64)&v96 >= 0xFFFFF6FB7DBED000uLL
            && (unsigned __int64)&v96 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v48 & 1) != 0
            && ((v48 & 0x20) == 0 || (v48 & 0x42) == 0) )
          {
            v60 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
            if ( v60 )
            {
              v61 = *(_QWORD *)(v60 + 8 * (((unsigned __int64)&v96 >> 3) & 0x1FF));
              v62 = v48 | 0x20;
              if ( (v61 & 0x20) == 0 )
                v62 = v48;
              v48 = v62;
              if ( (v61 & 0x42) != 0 )
                v48 = v62 | 0x42;
            }
          }
          v49 = 48 * ((v48 >> 12) & 0xFFFFFFFFFLL);
          v10 = v87;
          v98 = v49 - 0x58000000000LL;
        }
        else
        {
          v17 = 0xFFFFF6FB7DBED000uLL;
        }
        if ( (v15 & 0x400) != 0 )
        {
          v18 = v15 & 0xFFFFFFFFFFFFFBFEuLL | 1;
          v86 = 0LL;
          BugCheckParameter3 = v18;
          v19 = 0LL;
          BugCheckParameter2 = 0LL;
          v20 = 0LL;
          v99 = 0LL;
          if ( (unsigned __int64)&BugCheckParameter3 >= 0xFFFFF6FB7DBED000uLL
            && (unsigned __int64)&BugCheckParameter3 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
          {
            v63 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
            if ( v63 )
            {
              v64 = *(_QWORD *)(v63 + 8 * (((unsigned __int64)&BugCheckParameter3 >> 3) & 0x1FF));
              if ( (v64 & 0x20) != 0 )
                v18 |= 0x20uLL;
              v10 = v87;
              if ( (v64 & 0x42) != 0 )
                v18 |= 0x42uLL;
            }
            else
            {
              v18 = BugCheckParameter3;
              v10 = v87;
            }
          }
          v21 = (v18 >> 12) & 0xFFFFFFFFFLL;
          v22 = 48 * v21;
          if ( (*(_QWORD *)(48 * v21 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
          {
            MiDeleteBatch(&v104);
            MiDereferenceIoPages(1LL, v21, 1LL);
            v27 = 48 * MiGetContainingPageTable(v5) - 0x58000000000LL;
            IsZero = 4;
            v34 = 0LL;
            goto LABEL_42;
          }
          if ( (*(_BYTE *)(v3 + 184) & 7) == 0 && v9 && (v21 & 0xF) == 0 && ((__int64)(v100 - v5) >> 3) + 1 >= 16 )
          {
            v65 = MiDeleteClusterPage(v5, &v104, v79);
            if ( v65 == 1 )
            {
              v5 += 120LL;
              goto LABEL_8;
            }
            v10 = v87;
            v14 = v90;
            v17 = 0xFFFFF6FB7DBED000uLL;
          }
          v23 = 0xFFFFFA8000000000uLL;
          v24 = v22 - 0x58000000000LL;
          v25 = *(_QWORD *)(v22 - 0x58000000000LL + 8) | 0x8000000000000000uLL;
          if ( (*(_QWORD *)(v22 - 0x58000000000LL + 40) & 0x200000000000000LL) == 0 )
          {
            if ( v24 == qword_14043BE80 )
            {
              if ( !(unsigned int)MiPteInShadowRange(v5, ZeroPte, v10) )
                goto LABEL_59;
              if ( !(unsigned int)MiPteHasShadow(v54, v39) )
              {
LABEL_124:
                if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
                  && (v39 & 1) != 0 )
                {
                  goto LABEL_271;
                }
                goto LABEL_59;
              }
              if ( HIBYTE(word_14043B26C) || (v39 & 1) == 0 )
                goto LABEL_155;
            }
            else
            {
              v79[1] += MiDeleteBatch(&v104);
              if ( v25 != v5 )
                KeBugCheckEx(0x1Au, 0x403uLL, v5, BugCheckParameter3, *(_QWORD *)(v24 + 8));
              v26 = *(_QWORD *)(v24 + 40) & 0xFFFFFFFFFLL;
              if ( v26 == 0xFFFFFFFFFLL )
                v27 = 0LL;
              else
                v27 = 48 * v26 - 0x58000000000LL;
              ++v79[3];
              v93 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v93);
                while ( *(__int64 *)(v24 + 24) < 0 );
              }
              *(_QWORD *)(v24 + 24) |= 0x4000000000000000uLL;
              if ( v80 && v81 )
              {
                memset(v103, 0, 24);
                MiIdentifyPfn(v22 - 0x58000000000LL);
                v88 = 1;
              }
              v28 = v85;
              if ( (*(_BYTE *)(v85 + 184) & 7) == 0 )
                goto LABEL_28;
              v29 = v79;
              if ( ((*(_QWORD *)(v24 + 40) >> 54) & 7) == 2 )
                *(_QWORD *)(v24 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
LABEL_29:
              v30 = *(_BYTE *)(v24 + 34);
              if ( (v30 & 7) != 6 )
                KeBugCheckEx(0x4Eu, 0x99uLL, v22 / 48, v30 & 7, *(_QWORD *)(v24 + 24) & 0x3FFFFFFFFFFFFFFFLL);
              v31 = *(struct _KEVENT **)(qword_14043B808 + 8 * ((*(_QWORD *)(v24 + 40) >> 40) & 0x3FFLL));
              v83 = v31;
              if ( (BugCheckParameter3 & 0x42) != 0 && (v30 & 0x10) == 0 )
              {
                v53 = *(_BYTE *)(v24 + 34);
                if ( (*(_DWORD *)(v24 + 16) & 0x400LL) == 0 )
                {
                  v53 = *(_BYTE *)(v24 + 34);
                  if ( (v30 & 8) == 0 )
                  {
                    v74 = MiCapturePageFileInfoInline(v24 + 16, 1LL);
                    v28 = v85;
                    v20 = v74;
                    v53 = *(_BYTE *)(v24 + 34);
                    v31 = v83;
                  }
                }
                *(_BYTE *)(v24 + 34) = v53 | 0x10;
              }
              if ( (((*(_BYTE *)(v28 + 184) & 7) != 0) & _bittest64((const signed __int64 *)(v24 + 40), 0x39u)) != 0 )
              {
                v75 = *(_QWORD *)(v24 + 16);
                if ( (v75 & 0x400) == 0 || (BugCheckParameter3 & 0x200) != 0 )
                  goto LABEL_258;
                if ( qword_14043B180 && (v75 & 0x10) == 0 )
                  v75 &= ~qword_14043B180;
                if ( (*(_DWORD *)(*(_QWORD *)(v75 >> 16) + 56LL) & 0x820) == 0x820 )
LABEL_258:
                  ++v29[3];
              }
              LODWORD(v19) = 0;
              IsZero = 4;
              if ( v81 && v16 )
                LODWORD(v19) = (*(_QWORD *)(v24 + 24) & 0x3FFFFFFFFFFFFFFFuLL) >= 0x10000;
              v33 = *(_QWORD *)(v24 + 24) ^ (*(_QWORD *)(v24 + 24) ^ (*(_QWORD *)(v24 + 24) - 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
              *(_QWORD *)(v24 + 24) = v33;
              if ( (v33 & 0x3FFFFFFFFFFFFFFFLL) != 0 )
              {
                v34 = v86;
                if ( v81 )
                {
                  IsZero = 2;
                  if ( v82 >= 0 )
                    *(_QWORD *)v24 &= ~1uLL;
                }
              }
              else
              {
                IsZero = MiPfnShareCountIsZero(v24);
                if ( IsZero != 3 )
                {
                  v34 = v86;
                  goto LABEL_37;
                }
                if ( v81 && v16 )
                  LODWORD(v19) = 1;
                v34 = v86;
                if ( (*(_QWORD *)(v24 + 40) & 0x200000000000000LL) == 0 || v86 )
                {
LABEL_37:
                  v31 = v83;
                }
                else
                {
                  v31 = v83;
                  if ( !BugCheckParameter2 )
                    IsZero = v86 + 4;
                }
              }
              if ( (_DWORD)v19 == 1 )
                MiChargeCommit(v31, 1LL, 4LL);
              _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( v88 )
              {
                v107[1] = 24LL;
                v107[0] = v103;
                EtwTraceKernelEvent((unsigned int)v107, 1, 536870913, 631, 289413890);
                v88 = 0;
              }
LABEL_42:
              if ( v27 )
              {
                v94 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) )
                {
                  do
                    KeYieldProcessorEx(&v94);
                  while ( *(__int64 *)(v27 + 24) < 0 );
                }
                v35 = *(_BYTE *)(v27 + 34);
                v36 = *(_QWORD *)(v27 + 24);
                if ( (v35 & 7) != 6 )
                  KeBugCheckEx(0x4Eu, 0x99uLL, (v27 + 0x58000000000LL) / 48, v35 & 7, v36 & 0x3FFFFFFFFFFFFFFFLL);
                *(_QWORD *)(v27 + 24) = v36 ^ (v36 ^ ((v36 & 0x3FFFFFFFFFFFFFFFLL) - 1)) & 0x3FFFFFFFFFFFFFFFLL;
                if ( (v36 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
                  MiPfnShareCountIsZero(v27);
                _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              }
              if ( v20 )
                MiReleasePageFileInfo(v83, v20, 1);
              if ( v34 )
              {
                v52 = MiDecrementCombinedPte(v87 + 1280, v34);
              }
              else
              {
                if ( !BugCheckParameter2 )
                  goto LABEL_52;
                v52 = MiDecrementCloneBlockReference(BugCheckParameter2, v99);
              }
              IsZero = v52;
LABEL_52:
              v37 = v85;
              if ( (_DWORD)v19 == 1 )
                goto LABEL_172;
              if ( IsZero != 3 )
              {
                v38 = v79;
                if ( IsZero == 5 )
                  ++v79[2];
                goto LABEL_56;
              }
              if ( (*(_BYTE *)(v85 + 184) & 7) != 0 && v83 != v90 )
              {
LABEL_172:
                v38 = v79;
              }
              else
              {
                v38 = v79;
                ++v79[1];
              }
LABEL_56:
              if ( (*(_BYTE *)(v37 + 184) & 7) != 0 && !(unsigned int)MiPteIsSessionDynamicBuffer(v5) )
                ++*v38;
              if ( v5 >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBEDFFFuLL && (*(_BYTE *)(v37 + 184) & 7) != 0 )
              {
                MiWriteTopLevelPxe(v5, ZeroPte);
                goto LABEL_8;
              }
              v39 = ZeroPte;
              if ( v5 < 0xFFFFF6FB7DBED000uLL || v5 > 0xFFFFF6FB7DBED7F8uLL )
                goto LABEL_59;
              if ( !(unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED000uLL, ZeroPte) )
                goto LABEL_124;
LABEL_153:
              if ( HIBYTE(word_14043B26C) || (v39 & 1) == 0 )
              {
LABEL_155:
                *(_QWORD *)v5 = v39;
                MiWritePteShadow(v5);
                goto LABEL_8;
              }
            }
            v39 |= 0x8000000000000000uLL;
            goto LABEL_155;
          }
          if ( *(__int64 *)(v22 - 0x58000000000LL + 8) >= 0 )
          {
            v19 = *(_QWORD *)(v22 - 0x58000000000LL + 8) | 0x8000000000000000uLL;
            v86 = v19;
            goto LABEL_135;
          }
          if ( v5 <= 0xFFFFF6BFFFFFFF78uLL && v5 >= 0xFFFFF68000000000uLL )
          {
            if ( *(_QWORD *)(v10 + 912) )
            {
              v99 = *(_QWORD *)(v22 - 0x58000000000LL + 8) | 0x8000000000000000uLL;
              BugCheckParameter2 = MiLocateCloneAddress(v10, v99);
              if ( BugCheckParameter2 )
              {
LABEL_135:
                v51 = MiDeleteBatch(&v104);
                v14 = v90;
                v23 = 0xFFFFFA8000000000uLL;
                v17 = 0xFFFFF6FB7DBED000uLL;
                v79[1] += v51;
              }
            }
          }
          v40 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v41 = *(_QWORD *)v40;
          if ( v40 >= v17
            && v40 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v41 & 1) != 0
            && ((v41 & 0x20) == 0 || (v41 & 0x42) == 0) )
          {
            v66 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
            if ( v66 )
            {
              v67 = *(_QWORD *)(v66 + 8 * ((v40 >> 3) & 0x1FF));
              v68 = v41 | 0x20;
              if ( (v67 & 0x20) == 0 )
                v68 = v41;
              v41 = v68;
              if ( (v67 & 0x42) != 0 )
                v41 = v68 | 0x42;
            }
          }
          v97 = v41;
          if ( (unsigned __int64)&v97 >= v17
            && (unsigned __int64)&v97 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v41 & 1) != 0
            && ((v41 & 0x20) == 0 || (v41 & 0x42) == 0) )
          {
            v69 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
            if ( v69 )
            {
              v70 = *(_QWORD *)(v69 + 8 * (((unsigned __int64)&v97 >> 3) & 0x1FF));
              v71 = v41 | 0x20;
              if ( (v70 & 0x20) == 0 )
                v71 = v41;
              v41 = v71;
              if ( (v70 & 0x42) != 0 )
                v41 = v71 | 0x42;
            }
          }
          v27 = v23 + 48 * ((v41 >> 12) & 0xFFFFFFFFFLL);
          if ( !(_BYTE)v104 )
            goto LABEL_67;
          if ( v27 != v105
            || *(struct _KEVENT **)(qword_14043B808 + 8 * ((*(_QWORD *)(v24 + 40) >> 40) & 0x3FFLL)) != v14
            || _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
          {
            v79[1] += MiDeleteBatch(&v104);
          }
          v42 = v104;
          if ( !(_BYTE)v104 )
          {
LABEL_67:
            v105 = v27;
            v92 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v92);
              while ( *(__int64 *)(v24 + 24) < 0 );
            }
            v42 = v104;
          }
          v28 = v85;
          if ( (*(_BYTE *)(v85 + 184) & 7) != 0
            || (v43 = *(_BYTE *)(v24 + 34), (v43 & 7) != 6)
            || (*(_DWORD *)(v24 + 16) & 0x400LL) != 0
            || (BugCheckParameter3 & 0x42) == 0 && (v43 & 0x10) == 0
            || v19
            || BugCheckParameter2 )
          {
            if ( v42 )
            {
              HIBYTE(v104) = 1;
              v72 = MiDeleteBatch(&v104);
              v29 = v79;
              v28 = v85;
              HIBYTE(v104) = 0;
              v79[1] += v72;
              goto LABEL_29;
            }
LABEL_28:
            v29 = v79;
            goto LABEL_29;
          }
          v106[v42] = BugCheckParameter3;
          if ( !(_BYTE)v104 )
            v83 = *(struct _KEVENT **)(qword_14043B808 + 8 * ((*(_QWORD *)(v24 + 40) >> 40) & 0x3FFLL));
          v44 = ZeroPte;
          if ( v5 >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBED7F8uLL )
          {
            if ( (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED000uLL, ZeroPte) )
            {
              if ( !HIBYTE(word_14043B26C) && (v44 & 1) != 0 )
                v44 |= 0x8000000000000000uLL;
              *(_QWORD *)v5 = v44;
              MiWritePteShadow(v5);
              goto LABEL_87;
            }
            if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
              && (v44 & 1) != 0 )
            {
              v44 |= 0x8000000000000000uLL;
            }
          }
          *(_QWORD *)v5 = v44;
LABEL_87:
          LOBYTE(v104) = v104 + 1;
          if ( (_BYTE)v104 == 16 )
            v79[1] += MiDeleteBatch(&v104);
          goto LABEL_8;
        }
        v2[1] += MiDeleteBatch(&v104);
        v50 = MiTryDeleteTransitionPte(v5);
        if ( v50 == 1 )
        {
          BugCheckParameter3 = MI_READ_PTE_LOCK_FREE(v5);
          v76 = BugCheckParameter3;
          MiReleasePageFileSpace(v90, BugCheckParameter3, 1LL);
          if ( (*(_BYTE *)(v3 + 184) & 7) != 0 )
          {
            ++v2[3];
            if ( !(unsigned int)MiPteIsSessionDynamicBuffer(v5) )
              ++*v2;
          }
          else if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v76) )
          {
            ++v2[3];
          }
          if ( !(unsigned int)MiPteInShadowRange(v5, ZeroPte, v77) )
            goto LABEL_59;
          if ( !(unsigned int)MiPteHasShadow(v78, v39) )
          {
            if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
              && (v39 & 1) != 0 )
            {
LABEL_271:
              v39 |= 0x8000000000000000uLL;
            }
LABEL_59:
            *(_QWORD *)v5 = v39;
            goto LABEL_8;
          }
          goto LABEL_153;
        }
        ++v2[3];
        if ( (*(_BYTE *)(v3 + 184) & 7) != 0 && !(unsigned int)MiPteIsSessionDynamicBuffer(v5) )
          ++*v2;
        if ( v50 == 3 )
          ++v2[1];
      }
LABEL_8:
      v12 = v89;
      v5 += 8LL;
      v13 = v98;
      if ( v5 > v100 )
        break;
      v3 = v85;
      v2 = v79;
      v9 = v81;
      v10 = v87;
      LOBYTE(a2) = v82;
      v7 = v102;
      v14 = v90;
    }
  }
  result = MiDeleteBatch(&v104);
  if ( v12 )
  {
    v46 = HIWORD(*(_DWORD *)(v13 + 16)) & 0x3FF;
    if ( v46 < v12 )
      KeBugCheckEx(0x1Au, 0x41790uLL, v13, v46, v12);
    v95 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v95);
      while ( *(__int64 *)(v13 + 24) < 0 );
    }
    result = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)(v13 + 16) ^= ((unsigned int)*(_QWORD *)(v13 + 16) ^ (((unsigned int)(*(_QWORD *)(v13 + 16) >> 16) - v12) << 16)) & 0x3FF0000;
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return result;
}
