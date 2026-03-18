/*
 * XREFs of MiDeletePteRun @ 0x140027C60
 * Callers:
 *     MiDeleteVaTail @ 0x14004DE20 (MiDeleteVaTail.c)
 * Callees:
 *     MiIdentifyPfn @ 0x1400054D0 (MiIdentifyPfn.c)
 *     MiGetContainingPageTable @ 0x1400236B0 (MiGetContainingPageTable.c)
 *     MiInsertProtectedStandbyPage @ 0x140024110 (MiInsertProtectedStandbyPage.c)
 *     MiInsertPageInList @ 0x1400262A0 (MiInsertPageInList.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140026A60 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPfnShareCountIsZero @ 0x140026B30 (MiPfnShareCountIsZero.c)
 *     MiDeleteBatch @ 0x140028CD0 (MiDeleteBatch.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiGetUltraMapping @ 0x14002A890 (MiGetUltraMapping.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002AEF0 (MiInsertPageInFreeOrZeroedList.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiChargeCommit @ 0x1400521D0 (MiChargeCommit.c)
 *     MiIsAddressGlobal @ 0x14006D7F0 (MiIsAddressGlobal.c)
 *     MiGetPagingFileOffset @ 0x1400761B4 (MiGetPagingFileOffset.c)
 *     MiReleasePageFileInfo @ 0x140088F50 (MiReleasePageFileInfo.c)
 *     MiDeleteClusterPage @ 0x1400B8200 (MiDeleteClusterPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPfnPriority @ 0x1400DBC80 (MiGetPfnPriority.c)
 *     MiLocateCloneAddress @ 0x1400DFC38 (MiLocateCloneAddress.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1400DFC54 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiTryDeleteTransitionPte @ 0x1400DFC94 (MiTryDeleteTransitionPte.c)
 *     MiDereferenceIoPages @ 0x1401174CC (MiDereferenceIoPages.c)
 *     MiUserPdeOrAbove @ 0x14011A7F0 (MiUserPdeOrAbove.c)
 *     MiCapturePageFileInfoInline @ 0x14011B568 (MiCapturePageFileInfoInline.c)
 *     EtwTraceKernelEvent @ 0x140120D40 (EtwTraceKernelEvent.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiReleasePageFileSpace @ 0x1401248E4 (MiReleasePageFileSpace.c)
 *     MiDecrementCombinedPte @ 0x140140850 (MiDecrementCombinedPte.c)
 *     MiPteIsSessionDynamicBuffer @ 0x140168C60 (MiPteIsSessionDynamicBuffer.c)
 *     MiWriteTopLevelPxe @ 0x14017A110 (MiWriteTopLevelPxe.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiDecrementCloneBlockReference @ 0x1402E3984 (MiDecrementCloneBlockReference.c)
 */

__int64 __fastcall MiDeletePteRun(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  _QWORD *v4; // r12
  unsigned __int64 v5; // r9
  __int64 v6; // rdx
  unsigned __int64 v7; // r15
  __int64 v8; // r8
  unsigned __int64 v9; // rcx
  int v10; // r10d
  __int64 v11; // r11
  __int64 v12; // rcx
  unsigned int v13; // ebx
  ULONG_PTR v14; // rdi
  __int64 v15; // r14
  __int64 v16; // r9
  int v17; // esi
  __int64 v18; // r14
  ULONG_PTR v19; // rdi
  int v20; // r10d
  __int64 v21; // r11
  __int64 v22; // r12
  unsigned __int64 v23; // rbx
  __int64 v24; // r9
  __int64 v25; // rax
  ULONG_PTR v26; // r13
  __int64 v27; // rbx
  __int64 v28; // r8
  int v29; // r10d
  int v30; // ebx
  unsigned __int64 v31; // rdx
  __int64 v32; // rdx
  char v33; // al
  __int64 v34; // r9
  __int64 v35; // rax
  unsigned __int64 v36; // rdi
  BOOL v37; // r12d
  char v38; // dl
  __int64 v39; // rcx
  unsigned __int64 v40; // rdx
  __int64 v41; // r11
  __int64 v42; // rdx
  __int64 v43; // rcx
  unsigned __int64 v44; // r8
  __int64 v45; // rcx
  __int64 v46; // r8
  unsigned __int64 v47; // r13
  unsigned __int8 v48; // dl
  char v49; // cl
  __int64 v50; // rdx
  __int64 v51; // rcx
  unsigned __int64 v52; // rsi
  unsigned __int64 v53; // rdx
  int v54; // r9d
  __int64 v55; // r8
  unsigned __int64 v56; // rsi
  __int64 v57; // rdx
  __int64 v58; // r9
  unsigned __int64 v59; // rbx
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int64 v61; // rdi
  _QWORD *MmInternal; // rbx
  unsigned __int64 UltraMapping; // rax
  __int64 v64; // r8
  __int64 v65; // rcx
  unsigned __int64 *v66; // r8
  __int64 v67; // r11
  __int64 v68; // rax
  __int64 v69; // rcx
  unsigned __int64 v70; // r11
  __int64 v71; // rdx
  __int64 v72; // r8
  unsigned __int64 v73; // r9
  __int64 v74; // r11
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r9
  _QWORD *v78; // r11
  __int64 v79; // rcx
  __int64 v80; // rax
  char v81; // al
  unsigned __int64 v82; // r8
  unsigned int v83; // edx
  __int64 result; // rax
  ULONG_PTR v85; // r9
  unsigned __int64 v86; // r8
  __int64 v87; // rcx
  __int64 v88; // r8
  int v89; // r11d
  int v90; // eax
  char v91; // al
  char v92; // al
  __int64 v93; // rax
  __int64 v94; // rcx
  unsigned __int64 DeepFreezeStartTime; // rdx
  __int64 v96; // rax
  unsigned __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // r8
  unsigned __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // r8
  __int64 v103; // rax
  __int64 v105; // r8
  __int64 v106; // rax
  unsigned __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rdx
  unsigned __int64 v110; // r8
  __int64 v111; // rax
  __int64 v112; // r8
  int v113; // eax
  ULONG_PTR v114; // rbx
  __int64 v115; // r8
  __int64 v116; // r9
  __int64 v117; // rcx
  char v118; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v119; // [rsp+38h] [rbp-C8h]
  BOOL v120; // [rsp+40h] [rbp-C0h]
  _QWORD *v121; // [rsp+48h] [rbp-B8h]
  int v122; // [rsp+50h] [rbp-B0h]
  char v123; // [rsp+54h] [rbp-ACh]
  unsigned int v124; // [rsp+58h] [rbp-A8h]
  int v126; // [rsp+68h] [rbp-98h]
  ULONG_PTR BugCheckParameter3; // [rsp+70h] [rbp-90h] BYREF
  int v128; // [rsp+78h] [rbp-88h]
  __int64 v129; // [rsp+80h] [rbp-80h]
  __int64 v130; // [rsp+88h] [rbp-78h]
  ULONG_PTR BugCheckParameter2; // [rsp+90h] [rbp-70h]
  int v132; // [rsp+98h] [rbp-68h] BYREF
  int v133; // [rsp+9Ch] [rbp-64h] BYREF
  int v134; // [rsp+A0h] [rbp-60h]
  int v135; // [rsp+A4h] [rbp-5Ch] BYREF
  int v136; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v137; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v138; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v139; // [rsp+C0h] [rbp-40h]
  struct _KPRCB *v140; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v141; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v142; // [rsp+D8h] [rbp-28h]
  ULONG_PTR v143; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v144; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v145; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v146; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v147; // [rsp+100h] [rbp+0h]
  __int64 v148; // [rsp+108h] [rbp+8h]
  __int64 v149; // [rsp+110h] [rbp+10h] BYREF
  __int64 v150; // [rsp+118h] [rbp+18h] BYREF
  ULONG_PTR v151; // [rsp+120h] [rbp+20h]
  __int64 v152; // [rsp+128h] [rbp+28h]
  _QWORD v153[18]; // [rsp+130h] [rbp+30h] BYREF
  _QWORD v154[2]; // [rsp+1C0h] [rbp+C0h] BYREF

  v146 = 0LL;
  v3 = a1;
  v147 = 0LL;
  v148 = 0LL;
  memset(v153, 0, sizeof(v153));
  v4 = *(_QWORD **)(a2 + 16);
  v5 = *(_QWORD *)(a2 + 8);
  LODWORD(v6) = *(_DWORD *)(a2 + 32);
  v7 = *(_QWORD *)a2;
  v118 = *(_BYTE *)(a2 + 36);
  v142 = *(_QWORD *)(a2 + 24);
  v121 = v4;
  v144 = v5;
  v123 = v6;
  v8 = 0LL;
  v152 = 0LL;
  v9 = (__int64)(v7 << 25) >> 16;
  v10 = 1;
  if ( v9 < 0xFFFFF68000000000uLL || v9 > 0xFFFFF6FFFFFFFFFFuLL )
    v10 = 0;
  v11 = v3 - 1280;
  v12 = *(unsigned __int16 *)(v3 + 174);
  v13 = 0;
  if ( (*(_BYTE *)(v3 + 184) & 7) != 0 )
    v11 = 0LL;
  v122 = v10;
  v14 = 0LL;
  v130 = v11;
  v126 = 0;
  v15 = *(_QWORD *)(qword_140466188 + 8 * v12);
  v138 = v15;
  v124 = 0;
  v129 = 0LL;
  v139 = 0LL;
  if ( v7 <= v5 )
  {
    while ( 1 )
    {
      v16 = *(_QWORD *)v7;
      if ( v7 >= 0xFFFFF6FB7DBED000uLL
        && v7 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v16 & 1) != 0
        && ((v16 & 0x20) == 0 || (v16 & 0x42) == 0) )
      {
        DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
        if ( DeepFreezeStartTime )
        {
          v96 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v7 >> 3) & 0x1FF));
          v6 = v16 | 0x20;
          if ( (v96 & 0x20) == 0 )
            v6 = *(_QWORD *)v7;
          v16 = v6;
          LOBYTE(v6) = v123;
          if ( (v96 & 0x42) != 0 )
            v16 |= 0x42uLL;
        }
        else
        {
          LOBYTE(v6) = v123;
        }
      }
      if ( v16 )
      {
        v17 = v6 & 0x40;
        v134 = v17;
        if ( (v6 & 0x40) != 0 && (v7 < 0xFFFFF6FB7DBED000uLL || v7 > 0xFFFFF6FB7DBEDFFFuLL) )
        {
          v124 = v13 + 1;
          if ( !v14 )
          {
            v86 = ((((__int64)((v7 << 25) - v8) >> 16) & 0xFFFFFFE00000uLL) >> 18) - 0x904C0000000LL;
            v87 = *(_QWORD *)v86;
            if ( v86 >= 0xFFFFF6FB7DBED000uLL
              && v86 <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0xC00000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v87 & 1) != 0
              && ((v87 & 0x20) == 0 || (v87 & 0x42) == 0) )
            {
              v97 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
              if ( v97 )
              {
                v98 = *(_QWORD *)(v97 + 8 * ((v86 >> 3) & 0x1FF));
                v99 = v87 | 0x20;
                if ( (v98 & 0x20) == 0 )
                  v99 = v87;
                v87 = v99;
                if ( (v98 & 0x42) != 0 )
                  v87 = v99 | 0x42;
              }
            }
            v149 = v87;
            v139 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v149) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          }
        }
        if ( (v16 & 0x400) != 0 )
        {
          v119 = 0LL;
          BugCheckParameter2 = 0LL;
          BugCheckParameter3 = v16 & 0xFFFFFFFFFFFFFBFEuLL | 1;
          v18 = 0LL;
          v143 = 0LL;
          v19 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&BugCheckParameter3) >> 12) & 0xFFFFFFFFFLL;
          v151 = v19;
          if ( (*(_QWORD *)(48 * v19 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
          {
            MiDeleteBatch(v153);
            MiDereferenceIoPages(1LL, v19, 1LL);
            v26 = 48 * MiGetContainingPageTable(v7) - 0x58000000000LL;
            v30 = 4;
            v37 = 0;
            v36 = 0LL;
            goto LABEL_51;
          }
          if ( (*(_BYTE *)(v3 + 184) & 7) != 0 || v20 || (v19 & 0xF) != 0 || ((__int64)(v144 - v7) >> 3) + 1 < 16 )
            goto LABEL_18;
          if ( (unsigned int)MiDeleteClusterPage(v7, v153, v4) != 1 )
          {
            v21 = v130;
LABEL_18:
            v22 = 48 * v19 - 0x58000000000LL;
            v23 = *(_QWORD *)(v22 + 8) | 0x8000000000000000uLL;
            if ( (*(_QWORD *)(v22 + 40) & 0x200000000000000LL) == 0 )
            {
              if ( v22 == qword_140466840 )
              {
                if ( !(unsigned int)MiPteInShadowRange(v7, ZeroPte, 0x8000000000000000uLL, 0xFFFFFA8000000000uLL) )
                  goto LABEL_68;
                if ( !(unsigned int)MiPteHasShadow(v94) )
                {
                  if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
                    && (v42 & 1) != 0 )
                  {
                    v42 |= v105;
                  }
                  goto LABEL_68;
                }
                if ( !HIBYTE(word_140465BEC) && (v42 & 1) != 0 )
                  v42 |= v105;
                goto LABEL_253;
              }
              v121[1] += MiDeleteBatch(v153);
              if ( v23 != v7 )
                KeBugCheckEx(0x1Au, 0x403uLL, v7, BugCheckParameter3, *(_QWORD *)(v22 + 8));
              v25 = *(_QWORD *)(v22 + 40) & 0xFFFFFFFFFLL;
              if ( v25 == 0xFFFFFFFFFLL )
                v26 = 0LL;
              else
                v26 = 48 * v25 - 0x58000000000LL;
              ++v121[3];
              v133 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v133);
                while ( *(__int64 *)(v22 + 24) < 0 );
              }
              *(_QWORD *)(v22 + 24) |= 0x4000000000000000uLL;
              if ( v118 && v122 )
              {
                v146 = 0LL;
                v147 = 0LL;
                v148 = 0LL;
                MiIdentifyPfn(v22, &v146);
                v126 = 1;
              }
              v27 = a1;
              if ( (*(_BYTE *)(a1 + 184) & 7) != 0 && ((*(_QWORD *)(v22 + 40) >> 54) & 7) == 2 )
                *(_QWORD *)(v22 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
LABEL_26:
              v28 = *(unsigned __int8 *)(v22 + 34);
              if ( (v28 & 7) != 6 )
                KeBugCheckEx(0x4Eu, 0x99uLL, v19, v28 & 7, *(_QWORD *)(v22 + 24) & 0x3FFFFFFFFFFFFFFFLL);
              v129 = *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v22 + 40) >> 40) & 0x3FFLL));
              if ( (BugCheckParameter3 & 0x42) != 0 )
              {
                v18 = 0LL;
                if ( (v28 & 0x10) == 0 )
                {
                  if ( (!_bittest64((const signed __int64 *)(v22 + 16), 0xAu) & (unsigned __int8)~((unsigned __int8)v28 >> 3)) != 0 )
                  {
                    v93 = MiCapturePageFileInfoInline(v22 + 16, 1LL);
                    v28 = *(unsigned __int8 *)(v22 + 34);
                    v18 = v93;
                  }
                  LOBYTE(v28) = v28 | 0x10;
                  *(_BYTE *)(v22 + 34) = v28;
                }
              }
              if ( (((*(_BYTE *)(v27 + 184) & 7) != 0) & _bittest64((const signed __int64 *)(v22 + 40), 0x39u)) != 0 )
              {
                v106 = *(_QWORD *)(v22 + 16);
                if ( (v106 & 0x400) == 0 || (BugCheckParameter3 & 0x200) != 0 )
                  goto LABEL_268;
                if ( qword_140465B00 && (v106 & 0x10) == 0 )
                  v106 &= ~qword_140465B00;
                if ( (*(_DWORD *)(*(_QWORD *)(v106 >> 16) + 56LL) & 0x820) == 0x820 )
LABEL_268:
                  ++v121[3];
              }
              v29 = v122;
              v30 = 4;
              v120 = 0;
              if ( v122 && v17 )
              {
                v24 = 0x3FFFFFFFFFFFFFFFLL;
                v120 = (*(_QWORD *)(v22 + 24) & 0x3FFFFFFFFFFFFFFFuLL) >= 0x10000;
              }
              v31 = *(_QWORD *)(v22 + 24) ^ ((*(_QWORD *)(v22 + 24) - 1LL) ^ *(_QWORD *)(v22 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
              *(_QWORD *)(v22 + 24) = v31;
              if ( (v31 & 0x3FFFFFFFFFFFFFFFLL) != 0 )
              {
                v36 = v119;
                if ( v122 )
                {
                  v30 = 2;
                  if ( v123 >= 0 )
                    *(_QWORD *)v22 &= ~1uLL;
                }
              }
              else
              {
                v28 = *(_QWORD *)(v22 + 40);
                if ( (v28 & 0x200000000000000LL) == 0 )
                  goto LABEL_33;
                v52 = *(_QWORD *)(v22 + 16);
                v53 = v22 + 16;
                if ( (unsigned __int64)(v22 + 16) >= 0xFFFFF6FB7DBED000uLL
                  && v53 <= 0xFFFFF6FB7DBED7F8uLL
                  && (MiFlags & 0xC00000) != 0
                  && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                  && (v52 & 1) != 0
                  && ((v52 & 0x20) == 0 || (v52 & 0x42) == 0) )
                {
                  v107 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
                  if ( v107 )
                  {
                    v108 = *(_QWORD *)(v107 + 8 * ((v53 >> 3) & 0x1FF));
                    v109 = v52 | 0x20;
                    if ( (v108 & 0x20) == 0 )
                      v109 = *(_QWORD *)(v22 + 16);
                    v52 = v109;
                    if ( (v108 & 0x42) != 0 )
                      v52 = v109 | 0x42;
                  }
                }
                v54 = 4;
                v145 = *(_QWORD *)(v22 + 8);
                v55 = v28 & 0xFFFFFFFFFLL;
                v56 = v52 >> 5;
                v57 = *(unsigned __int8 *)(48 * v55 - 0x57FFFFFFFDELL) >> 6;
                if ( !(_DWORD)v57 || (_DWORD)v57 == 3 )
                {
                  v54 = 12;
                }
                else if ( (_DWORD)v57 == 2 )
                {
                  v54 = 28;
                }
                v58 = v54 | 0xA0000000;
                v128 = v58;
                v59 = (v55 << 12) | MmProtectToPteMask[v58 & 0x1F] & 0xFFFF000000000E7FuLL | 0x121;
                if ( (v58 & 5) == 4 && (int)v58 < 0 )
                  v59 = (v55 << 12) | MmProtectToPteMask[v58 & 0x1F] & 0xFFFF000000000E7FuLL | 0x163;
                CurrentPrcb = KeGetCurrentPrcb();
                v61 = v59 & 0xFAFFFFFFFFFFFEFFuLL | ((word_140465BEC & 1 | 0xA000000000000LL) << 8);
                v140 = CurrentPrcb;
                MmInternal = CurrentPrcb->MmInternal;
                if ( MmInternal )
                {
                  UltraMapping = MiGetUltraMapping(MmInternal + 1556, 3LL, 1LL);
                  v64 = ((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                  MmInternal[1543] = v64;
                  if ( UltraMapping )
                    goto LABEL_106;
                  CurrentPrcb = v140;
                }
                v64 = (((((unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL)
                       + (((__int64)CurrentPrcb->HyperPte & 0xFFF) << 12)) >> 9) & 0x7FFFFFFFF8LL)
                    - 0x98000000000LL;
LABEL_106:
                if ( (unsigned int)MiPteInShadowRange(v64, v57, v64, v58) )
                {
                  if ( !(unsigned int)MiPteHasShadow(v65) )
                  {
                    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
                      v61 |= 0x8000000000000000uLL;
                    goto LABEL_107;
                  }
                  if ( !HIBYTE(word_140465BEC) )
                    v61 |= 0x8000000000000000uLL;
                  *v66 = v61;
                  MiWritePteShadow(v66, v61);
                }
                else
                {
LABEL_107:
                  *v66 = v61;
                }
                v68 = (v145 >> 3) & 0x1FF;
                v69 = *(_QWORD *)(v67 + 8 * v68);
                v70 = v67 + 8 * v68;
                if ( v70 >= 0xFFFFF6FB7DBED000uLL
                  && v70 <= 0xFFFFF6FB7DBED7F8uLL
                  && (MiFlags & 0xC00000) != 0
                  && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                  && (v69 & 1) != 0
                  && ((v69 & 0x20) == 0 || (v69 & 0x42) == 0) )
                {
                  v110 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
                  if ( v110 )
                  {
                    v111 = *(_QWORD *)(v110 + 8 * ((v70 >> 3) & 0x1FF));
                    v112 = v69 | 0x20;
                    if ( (v111 & 0x20) == 0 )
                      v112 = v69;
                    v69 = v112;
                    if ( (v111 & 0x42) != 0 )
                      v69 = v112 | 0x42;
                  }
                }
                v141 = v69;
                v73 = 32
                    * (v56 & 0x1F | ((((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v141) >> 12) & 0xFFFFFFFFFLL) << 7) | 0x40);
                if ( qword_140465B00 )
                {
                  if ( (v73 & qword_140465B00) != 0 )
                    v73 |= 0x10uLL;
                  else
                    v73 |= qword_140465B00;
                }
                v141 = v73;
                if ( (unsigned int)MiPteInShadowRange(v74, v71, v72, v73) )
                {
                  if ( !(unsigned int)MiPteHasShadow(v76) )
                  {
                    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
                      && (v77 & 1) != 0 )
                    {
                      v77 |= 0x8000000000000000uLL;
                    }
                    goto LABEL_113;
                  }
                  if ( !HIBYTE(word_140465BEC) && (v77 & 1) != 0 )
                    v77 |= 0x8000000000000000uLL;
                  *v78 = v77;
                  MiWritePteShadow(v78, v77);
                }
                else
                {
LABEL_113:
                  *v78 = v77;
                }
                LOBYTE(v75) = 17;
                MiUnmapPageInHyperSpaceWorker((unsigned __int64)v78, v75, 0x80000000LL);
                v31 = *(_QWORD *)(v22 + 24);
                v29 = v122;
                v19 = v151;
                v17 = v134;
LABEL_33:
                --*(_WORD *)(v22 + 32);
                v32 = (v31 >> 62) & 1;
                if ( *(_WORD *)(v22 + 32) )
                {
                  v91 = *(_BYTE *)(v22 + 34);
                  if ( (_DWORD)v32 )
                  {
                    v92 = v91 | 7;
                  }
                  else if ( (v91 & 0x10) != 0 )
                  {
                    v92 = v91 & 0xF8 | 3;
                  }
                  else
                  {
                    v92 = v91 & 0xF8 | 2;
                  }
                  *(_BYTE *)(v22 + 34) = v92;
                  if ( (*(_DWORD *)(v22 + 16) & 0x400LL) == 0 && (unsigned int)MiGetPagingFileOffset(v22 + 16) )
                    *(_BYTE *)(*(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v22 + 40) >> 40) & 0x3FFLL)) + 667LL) = 1;
                  v30 = 3;
                  if ( v29 )
                  {
                    v113 = v120;
                    if ( v17 )
                      v113 = 1;
                    v120 = v113;
                  }
                  v36 = v119;
                  if ( (*(_QWORD *)(v22 + 40) & 0x200000000000000LL) != 0 && !v119 && !BugCheckParameter2 )
                    goto LABEL_45;
                }
                else
                {
                  if ( !(_DWORD)v32 )
                  {
                    v79 = *(_QWORD *)(v22 + 16);
                    v80 = -9LL;
                    if ( (v79 & 0x400) != 0 )
                      v80 = -2049LL;
                    *(_QWORD *)(v22 + 16) = v79 & v80;
                    v81 = *(_BYTE *)(v22 + 34);
                    if ( (v81 & 0x10) != 0 )
                    {
                      v83 = 8;
                      if ( v142 == 1 )
                        v83 = 136;
                    }
                    else
                    {
                      v82 = v142;
                      *(_BYTE *)(v22 + 34) = v81 & 0xF8 | 2;
                      if ( v82 > 1 && (unsigned int)MiGetPfnPriority(v22, -2049LL, v82, v24) < 5 )
                      {
                        MiInsertProtectedStandbyPage(v88, v22);
                        goto LABEL_44;
                      }
                      v83 = 4;
                    }
                    MiInsertPageInList(v22, v83);
                    goto LABEL_44;
                  }
                  v33 = *(_BYTE *)(v22 + 35);
                  if ( (v33 & 0x10) != 0 )
                    *(_BYTE *)(v22 + 35) = v33 & 0xEF;
                  v34 = *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v22 + 40) >> 40) & 0x3FFLL));
                  v137 = *(_QWORD *)(v22 + 16);
                  if ( (v137 & 0x400) == 0 )
                  {
                    v35 = (v137 & 4) != 0 || (v137 & 2) != 0 ? MI_READ_PTE_LOCK_FREE(&v137) : 0LL;
                    v137 = v35;
                    if ( v35 )
                      MiReleasePageFileInfo(v34, v35, 0LL);
                  }
                  MiInsertPageInFreeOrZeroedList(v19);
LABEL_44:
                  v36 = v119;
LABEL_45:
                  v30 = 4;
                }
              }
              if ( v120 )
                MiChargeCommit(v129, 1LL, 4LL);
              _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( v126 )
              {
                v154[1] = 24LL;
                v154[0] = &v146;
                EtwTraceKernelEvent((unsigned int)v154, 1, 536870913, 631, 289413890);
                v126 = 0;
              }
              v37 = v120;
LABEL_51:
              if ( v26 )
              {
                v135 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) )
                {
                  do
                    KeYieldProcessorEx(&v135);
                  while ( *(__int64 *)(v26 + 24) < 0 );
                }
                v38 = *(_BYTE *)(v26 + 34);
                v39 = *(_QWORD *)(v26 + 24);
                if ( (v38 & 7) != 6 )
                  KeBugCheckEx(
                    0x4Eu,
                    0x99uLL,
                    (__int64)(v26 + 0x58000000000LL) / 48,
                    v38 & 7,
                    v39 & 0x3FFFFFFFFFFFFFFFLL);
                v28 = 0x3FFFFFFFFFFFFFFFLL;
                v40 = (v39 & 0x3FFFFFFFFFFFFFFFLL) - 1;
                *(_QWORD *)(v26 + 24) = v39 ^ (v40 ^ v39) & 0x3FFFFFFFFFFFFFFFLL;
                if ( (v39 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
                  MiPfnShareCountIsZero(v26, v40, 0x3FFFFFFFFFFFFFFFLL, v24);
                _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              }
              if ( v18 )
                MiReleasePageFileInfo(v129, v18, 1LL);
              if ( v36 )
              {
                v90 = MiDecrementCombinedPte(v130 + 1280, v36);
              }
              else
              {
                if ( !BugCheckParameter2 )
                  goto LABEL_61;
                v90 = MiDecrementCloneBlockReference(BugCheckParameter2, v143);
              }
              v30 = v90;
LABEL_61:
              v41 = a1;
              if ( !v37 )
              {
                if ( v30 == 3 )
                {
                  if ( (*(_BYTE *)(a1 + 184) & 7) == 0 || v129 == v138 )
                    ++v121[1];
                }
                else if ( v30 == 5 )
                {
                  ++v121[2];
                }
              }
              if ( (*(_BYTE *)(a1 + 184) & 7) != 0 && !(unsigned int)MiPteIsSessionDynamicBuffer(v7) )
                ++*v121;
              if ( v7 >= 0xFFFFF6FB7DBED000uLL && v7 <= 0xFFFFF6FB7DBEDFFFuLL && (*(_BYTE *)(v41 + 184) & 7) != 0 )
              {
                MiWriteTopLevelPxe(v7, ZeroPte);
                goto LABEL_8;
              }
              if ( !(unsigned int)MiPteInShadowRange(v7, ZeroPte, v28, v24) )
                goto LABEL_68;
              if ( !(unsigned int)MiPteHasShadow(v43) )
              {
                if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
                  && (v42 & 1) != 0 )
                {
                  goto LABEL_330;
                }
                goto LABEL_68;
              }
              if ( !HIBYTE(word_140465BEC) && (v42 & 1) != 0 )
LABEL_327:
                v42 |= 0x8000000000000000uLL;
LABEL_253:
              *(_QWORD *)v7 = v42;
              MiWritePteShadow(v7, v42);
              goto LABEL_8;
            }
            if ( *(__int64 *)(48 * v19 - 0x58000000000LL + 8) >= 0 )
            {
              v119 = *(_QWORD *)(48 * v19 - 0x58000000000LL + 8) | 0x8000000000000000uLL;
              v121[1] += MiDeleteBatch(v153);
            }
            else
            {
              if ( v7 <= 0xFFFFF6BFFFFFFF78uLL && v7 >= 0xFFFFF68000000000uLL )
              {
                if ( *(_QWORD *)(v21 + 920) )
                {
                  v143 = *(_QWORD *)(48 * v19 - 0x58000000000LL + 8) | 0x8000000000000000uLL;
                  BugCheckParameter2 = MiLocateCloneAddress(v21, v23);
                  if ( BugCheckParameter2 )
                    v121[1] += MiDeleteBatch(v153);
                }
              }
              v23 = 0LL;
            }
            v44 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v45 = *(_QWORD *)v44;
            if ( v44 >= 0xFFFFF6FB7DBED000uLL
              && v44 <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0xC00000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v45 & 1) != 0
              && ((v45 & 0x20) == 0 || (v45 & 0x42) == 0) )
            {
              v100 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
              if ( v100 )
              {
                v101 = *(_QWORD *)(v100 + 8 * ((v44 >> 3) & 0x1FF));
                v102 = v45 | 0x20;
                if ( (v101 & 0x20) == 0 )
                  v102 = v45;
                v45 = v102;
                if ( (v101 & 0x42) != 0 )
                  v45 = v102 | 0x42;
              }
            }
            v150 = v45;
            v47 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v150) >> 12) & 0xFFFFFFFFFLL);
            v26 = v24 + v47;
            if ( !LOBYTE(v153[0]) )
              goto LABEL_76;
            if ( v26 != v153[1]
              || *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v22 + 40) >> 40) & 0x3FFLL)) != v138
              || _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
            {
              v121[1] += MiDeleteBatch(v153);
            }
            v48 = v153[0];
            if ( !LOBYTE(v153[0]) )
            {
LABEL_76:
              v153[1] = v26;
              v132 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v132);
                while ( *(__int64 *)(v22 + 24) < 0 );
              }
              v48 = v153[0];
            }
            if ( (*(_BYTE *)(a1 + 184) & 7) != 0
              || (v49 = *(_BYTE *)(v22 + 34), (v49 & 7) != 6)
              || (*(_DWORD *)(v22 + 16) & 0x400LL) != 0
              || (BugCheckParameter3 & 0x42) == 0 && (v49 & 0x10) == 0
              || v23
              || BugCheckParameter2 )
            {
              if ( v48 )
              {
                BYTE1(v153[0]) = 1;
                v103 = MiDeleteBatch(v153);
                v27 = a1;
                BYTE1(v153[0]) = 0;
                v121[1] += v103;
              }
              else
              {
                v27 = a1;
              }
              goto LABEL_26;
            }
            v153[v48 + 2] = BugCheckParameter3;
            if ( !LOBYTE(v153[0]) )
              v129 = *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v22 + 40) >> 40) & 0x3FFLL));
            if ( (unsigned int)MiPteInShadowRange(v7, ZeroPte, v46, v24) )
            {
              if ( !(unsigned int)MiPteHasShadow(v51) )
              {
                if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
                  && (v50 & 1) != 0 )
                {
                  v50 |= 0x8000000000000000uLL;
                }
                goto LABEL_93;
              }
              if ( !HIBYTE(word_140465BEC) && (v50 & 1) != 0 )
                v50 |= 0x8000000000000000uLL;
              *(_QWORD *)v7 = v50;
              MiWritePteShadow(v7, v50);
            }
            else
            {
LABEL_93:
              *(_QWORD *)v7 = v50;
            }
            if ( ++LOBYTE(v153[0]) == 16 )
              v121[1] += MiDeleteBatch(v153);
            goto LABEL_8;
          }
          if ( v17 )
            v124 += 15;
          v7 += 120LL;
        }
        else
        {
          v4[1] += MiDeleteBatch(v153);
          v89 = MiTryDeleteTransitionPte(v7);
          if ( v89 == 1 )
          {
            BugCheckParameter3 = MI_READ_PTE_LOCK_FREE(v7);
            v114 = BugCheckParameter3;
            MiReleasePageFileSpace(v15, BugCheckParameter3, 1LL);
            if ( (*(_BYTE *)(v3 + 184) & 7) != 0 )
            {
              ++v4[3];
              if ( !(unsigned int)MiPteIsSessionDynamicBuffer(v7) )
                ++*v4;
            }
            else if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v114) )
            {
              ++v4[3];
            }
            if ( !(unsigned int)MiPteInShadowRange(v7, ZeroPte, v115, v116) )
              goto LABEL_68;
            if ( !(unsigned int)MiPteHasShadow(v117) )
            {
              if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
                && (v42 & 1) != 0 )
              {
LABEL_330:
                v42 |= 0x8000000000000000uLL;
              }
LABEL_68:
              *(_QWORD *)v7 = v42;
              goto LABEL_8;
            }
            if ( !HIBYTE(word_140465BEC) && (v42 & 1) != 0 )
              goto LABEL_327;
            goto LABEL_253;
          }
          ++v4[3];
          if ( (*(_BYTE *)(v3 + 184) & 7) != 0 && !(unsigned int)MiPteIsSessionDynamicBuffer(v7) )
            ++*v4;
          if ( v89 == 3 )
            ++v4[1];
        }
      }
LABEL_8:
      v13 = v124;
      v7 += 8LL;
      v14 = v139;
      if ( v7 > v144 )
        break;
      v3 = a1;
      v4 = v121;
      LOBYTE(v6) = v123;
      v8 = v152;
      v15 = v138;
    }
  }
  result = MiDeleteBatch(v153);
  if ( v13 )
  {
    v85 = HIWORD(*(_DWORD *)(v14 + 16)) & 0x3FF;
    if ( v85 < v13 )
      KeBugCheckEx(0x1Au, 0x41790uLL, v14, v85, v13);
    v136 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v136);
      while ( *(__int64 *)(v14 + 24) < 0 );
    }
    result = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)(v14 + 16) ^= ((unsigned int)*(_QWORD *)(v14 + 16) ^ (((unsigned int)(*(_QWORD *)(v14 + 16) >> 16) - v13) << 16)) & 0x3FF0000;
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return result;
}
