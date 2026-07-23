/*
 * XREFs of CmpWalkOneLevel @ 0x1405D5560
 * Callers:
 *     CmpDoParseKey @ 0x140642CC0 (CmpDoParseKey.c)
 *     CmpDoBuildVirtualStack @ 0x1407F3C18 (CmpDoBuildVirtualStack.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmEqualTrans @ 0x1405AA4E8 (CmEqualTrans.c)
 *     CmpDeleteHive @ 0x1405B0DEC (CmpDeleteHive.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1405B0FE0 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1405D03BC (CmpUpdateKeyNodeAccessBits.c)
 *     CmpUnlockHashEntry @ 0x1405D29F8 (CmpUnlockHashEntry.c)
 *     CmpFindSubKeyInRoot @ 0x1405D5F64 (CmpFindSubKeyInRoot.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1405D6370 (CmpFindSubKeyInLeafWithStatus.c)
 *     RtlUpcaseUnicodeChar @ 0x1405D6C10 (RtlUpcaseUnicodeChar.c)
 *     CmpDoCompareKeyName @ 0x1405D6C70 (CmpDoCompareKeyName.c)
 *     CmpSetKcbAtLayerHeight @ 0x1405D6E8C (CmpSetKcbAtLayerHeight.c)
 *     CmpCreateKeyControlBlock @ 0x1405D6EB0 (CmpCreateKeyControlBlock.c)
 *     CmpFindKcbInHashEntryByName @ 0x1405D739C (CmpFindKcbInHashEntryByName.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405D9AC0 (CmpGetKcbAtLayerHeight.c)
 *     CmpPopulateKcbStack @ 0x1406450B0 (CmpPopulateKcbStack.c)
 *     CmpDereferenceKeyControlBlock @ 0x1406451C0 (CmpDereferenceKeyControlBlock.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x140692E2C (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmpFreeKeyControlBlock @ 0x140693DB4 (CmpFreeKeyControlBlock.c)
 *     CmListGetNextElement @ 0x140695A80 (CmListGetNextElement.c)
 *     CmpRecordParseFailure @ 0x140699420 (CmpRecordParseFailure.c)
 *     CmpLockHashEntryShared @ 0x1406F9610 (CmpLockHashEntryShared.c)
 */

__int64 __fastcall CmpWalkOneLevel(
        __int64 a1,
        __int64 a2,
        ULONG_PTR *a3,
        __int64 a4,
        bool *a5,
        __m128i *a6,
        int a7,
        ULONG_PTR a8,
        __int64 a9,
        unsigned __int8 a10,
        __int64 a11)
{
  unsigned int v12; // ebx
  __int16 v13; // si
  __int64 KcbAtLayerHeight; // rdi
  _QWORD *v15; // r14
  ULONG_PTR KcbInHashEntryByName; // rax
  ULONG_PTR v17; // r12
  __int16 v18; // r14
  __int16 v19; // r15
  __int64 v20; // rsi
  char v21; // al
  _QWORD *v22; // rcx
  int v23; // esi
  ULONG_PTR v24; // rsi
  ULONG_PTR v25; // rdi
  signed __int32 v26; // eax
  signed __int32 v27; // ett
  __int64 v28; // r15
  ULONG_PTR v29; // r12
  __int16 v30; // di
  __int16 v31; // cx
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int16 v35; // r14
  ULONG_PTR v36; // rdi
  __int64 NextElement; // rax
  __int64 v38; // r9
  int v39; // ecx
  __int64 v40; // r14
  __int64 v41; // rdx
  _KPROCESS *Process; // rcx
  ULONG_PTR v43; // r8
  __int16 v44; // si
  __int64 v45; // r9
  __int64 v46; // r13
  __int64 v47; // rdx
  unsigned int v48; // ecx
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // r14
  __int64 v52; // rax
  unsigned int v53; // r8d
  ULONG_PTR v54; // rcx
  __int64 v55; // rsi
  __int64 v56; // r13
  bool v57; // zf
  __int64 v58; // rax
  _WORD *v59; // r15
  __m128i *v60; // rcx
  int v61; // r14d
  __int16 v62; // ax
  WCHAR *v63; // rsi
  __int64 v64; // r12
  WCHAR v65; // ax
  unsigned __int16 v66; // si
  int v67; // eax
  unsigned int v68; // eax
  unsigned __int8 v69; // al
  ULONG_PTR v70; // r8
  __int16 v71; // cx
  __int16 v72; // ax
  int v73; // r15d
  __int16 v74; // r13
  unsigned __int64 v75; // r14
  __int64 v76; // rdi
  __int64 v77; // rbx
  __int64 v78; // rbx
  ULONG_PTR v79; // rcx
  int SubKeyInLeafWithStatus; // [rsp+50h] [rbp-81h]
  __int16 v82; // [rsp+54h] [rbp-7Dh]
  unsigned __int16 v83; // [rsp+56h] [rbp-7Bh]
  __int16 v84; // [rsp+58h] [rbp-79h]
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-71h]
  unsigned int v86; // [rsp+68h] [rbp-69h] BYREF
  _DWORD v87[2]; // [rsp+70h] [rbp-61h] BYREF
  __int64 v88; // [rsp+78h] [rbp-59h] BYREF
  int v89; // [rsp+80h] [rbp-51h]
  int v90; // [rsp+88h] [rbp-49h]
  unsigned int v91; // [rsp+90h] [rbp-41h]
  __int64 v92; // [rsp+98h] [rbp-39h]
  __int64 v93; // [rsp+A0h] [rbp-31h] BYREF
  __int64 v94; // [rsp+A8h] [rbp-29h]
  ULONG_PTR v95; // [rsp+B0h] [rbp-21h] BYREF
  char v96[8]; // [rsp+B8h] [rbp-19h] BYREF
  __m128i v97; // [rsp+C0h] [rbp-11h]

  v12 = a8;
  v82 = -1;
  v13 = *(_WORD *)(a1 + 58) - 1;
  v88 = 0xFFFFFFFFLL;
  BugCheckParameter2 = 0LL;
  v91 = a8;
  if ( v13 < 0 )
  {
LABEL_4:
    v18 = 0;
    *(_WORD *)(a4 + 2) = -1;
  }
  else
  {
    while ( 1 )
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a2);
      CmpLockHashEntryShared(*(_QWORD *)(KcbAtLayerHeight + 24), (unsigned int)a8);
      v15 = *(_QWORD **)(KcbAtLayerHeight + 24);
      KcbInHashEntryByName = CmpFindKcbInHashEntryByName(v15, (unsigned int)a8, KcbAtLayerHeight, a6);
      BugCheckParameter2 = KcbInHashEntryByName;
      v17 = KcbInHashEntryByName;
      if ( KcbInHashEntryByName )
        break;
      CmpUnlockHashEntry(v15, a8);
      if ( --v13 < 0 )
        goto LABEL_4;
    }
    v21 = CmpReferenceKeyControlBlockLockNotHeld(KcbInHashEntryByName);
    v22 = *(_QWORD **)(KcbAtLayerHeight + 24);
    if ( !v21 )
    {
      CmpUnlockHashEntry(v22, a8);
      v23 = -1073741670;
      CmpRecordParseFailure(a11, 327936LL);
      return (unsigned int)v23;
    }
    CmpUnlockHashEntry(v22, a8);
    CmpPopulateKcbStack(a4, v17);
    v18 = *(_WORD *)(v17 + 58) + 1;
  }
  v84 = v18;
  if ( v18 <= *(__int16 *)(a1 + 58) )
  {
    do
    {
      v19 = v18;
      if ( v18 < 2 )
        v20 = *(_QWORD *)(a2 + 8LL * v18 + 8);
      else
        v20 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL * v18 - 16);
      v24 = *(_QWORD *)(v20 + 24);
      v25 = *(_QWORD *)(v24 + 1640)
          + 24
          * (((101027 * ((unsigned int)a8 ^ ((unsigned int)a8 >> 9))) ^ ((unsigned __int64)(101027
                                                                                          * ((unsigned int)a8 ^ ((unsigned int)a8 >> 9))) >> 9)) & (unsigned int)(*(_DWORD *)(v24 + 1648) - 1));
      ExAcquirePushLockExclusiveEx(v25, 0LL);
      *(_QWORD *)(v25 + 8) = KeGetCurrentThread();
      _m_prefetchw((const void *)(v24 + 4288));
      v26 = *(_DWORD *)(v24 + 4288);
      if ( !v26 )
LABEL_148:
        KeBugCheckEx(0x51u, 0x17uLL, v24, 0xCuLL, (unsigned int)a8);
      while ( 1 )
      {
        v27 = v26;
        v26 = _InterlockedCompareExchange((volatile signed __int32 *)(v24 + 4288), v26 + 1, v26);
        if ( v27 == v26 )
          break;
        if ( !v26 )
          goto LABEL_148;
      }
      v82 = v18++;
    }
    while ( v19 < *(__int16 *)(a1 + 58) );
  }
  v28 = a2;
  v29 = 0LL;
  v30 = 0;
  v31 = *(_WORD *)(a2 + 2);
  if ( v31 >= 0 )
  {
    do
    {
      if ( v30 < 2 )
        v32 = *(_QWORD *)(a2 + 8LL * v30 + 8);
      else
        v32 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL * v30 - 16);
      ExAcquirePushLockSharedEx(v32 + 40, 0LL);
      _InterlockedIncrement((volatile signed __int32 *)(v32 + 48));
      v31 = *(_WORD *)(a2 + 2);
      ++v30;
    }
    while ( v30 <= v31 );
  }
  v93 = 0LL;
  if ( v31 < 0 )
    goto LABEL_30;
  while ( 1 )
  {
    if ( v31 < 2 )
      v33 = *(_QWORD *)(a2 + 8LL * v31 + 8);
    else
      v33 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL * v31 - 16);
    if ( *(_WORD *)(v33 + 58) && *(_BYTE *)(v33 + 57) == 1 )
      goto LABEL_30;
    if ( *(_DWORD *)(v33 + 32) != -1 )
      break;
    if ( --v31 < 0 )
      goto LABEL_30;
  }
  if ( a9 )
  {
    NextElement = CmListGetNextElement(*(_QWORD *)(a2 + 8) + 200LL, &v93, 32LL);
    if ( NextElement )
    {
      do
      {
        v39 = *(_DWORD *)(NextElement + 68);
        if ( v39 == 2 || v39 == 11 )
          break;
        NextElement = CmListGetNextElement(v38, &v93, 32LL);
      }
      while ( NextElement );
      if ( CmEqualTrans(*(_QWORD *)(NextElement + 56), a9) )
      {
LABEL_30:
        v34 = 328192LL;
LABEL_31:
        v23 = -1073741772;
        SubKeyInLeafWithStatus = -1073741772;
LABEL_32:
        CmpRecordParseFailure(a11, v34);
LABEL_33:
        v29 = BugCheckParameter2;
        goto LABEL_34;
      }
    }
  }
  v40 = a1;
  v41 = *(_QWORD *)(a1 + 232);
  if ( v41 && !CmEqualTrans(a9, v41) )
  {
    v34 = 328448LL;
    goto LABEL_31;
  }
  if ( (*(_DWORD *)(a1 + 176) & 0x20000) != 0 )
  {
    v34 = 328704LL;
    goto LABEL_31;
  }
  if ( (*(_DWORD *)(a11 + 160) & 1) == 0 )
  {
    Process = (_KPROCESS *)qword_140438CE8;
    if ( !qword_140438CE8 )
      Process = KeGetCurrentThread()->ApcState.Process;
    KiStackAttachProcess(Process, 0LL, a11 + 168);
    *(_DWORD *)(a11 + 160) |= 1u;
  }
  v43 = BugCheckParameter2;
  if ( BugCheckParameter2 )
  {
    v44 = *(_WORD *)(BugCheckParameter2 + 58) + 1;
    v83 = v44;
  }
  else
  {
    v44 = 0;
    v83 = 0;
  }
  v45 = a10;
  if ( v44 <= *(__int16 *)(a1 + 58) )
  {
    while ( 2 )
    {
      if ( v44 < 2 )
        v46 = *(_QWORD *)(v28 + 8LL * v44 + 8);
      else
        v46 = *(_QWORD *)(*(_QWORD *)(v28 + 24) + 8LL * v44 - 16);
      v47 = *(unsigned int *)(v46 + 32);
      v94 = v46;
      if ( (_DWORD)v47 == -1 )
      {
        v48 = -1;
LABEL_111:
        if ( *(_WORD *)(v40 + 58) || (_BYTE)v45 )
          goto LABEL_116;
        v23 = -1073741772;
        SubKeyInLeafWithStatus = -1073741772;
        v69 = *(_BYTE *)(a11 + 258);
        if ( v69 < 4u )
        {
          *(_DWORD *)(a11 + 4LL * v69 + 260) = 329216;
          *(_DWORD *)(a11 + 4LL * (unsigned __int8)(*(_BYTE *)(a11 + 258))++ + 276) = -1073741772;
        }
        goto LABEL_33;
      }
      v49 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *, __int64))(*(_QWORD *)(v46 + 24) + 8LL))(
              *(_QWORD *)(v46 + 24),
              v47,
              &v88,
              v45);
      v50 = *(_QWORD *)(v46 + 24);
      v51 = v49;
      v92 = v49;
      if ( (*(_DWORD *)(v50 + 160) & 0x8001) == 0 && (*(_BYTE *)(v49 + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0 )
      {
        (*(void (__fastcall **)(__int64, __int64 *))(v50 + 16))(v50, &v88);
        ExAcquirePushLockSharedEx(*(_QWORD *)(v46 + 24) + 72LL, 0LL);
        v52 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v46 + 24) + 8LL))(
                *(_QWORD *)(v46 + 24),
                *(unsigned int *)(v46 + 32),
                &v88);
        v53 = *(_DWORD *)(v46 + 32);
        v54 = *(_QWORD *)(v46 + 24);
        v51 = v52;
        v92 = v52;
        CmpUpdateKeyNodeAccessBits(v54, v52, v53);
        v55 = *(_QWORD *)(v46 + 24);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v55 + 72), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v55 + 72));
        KeAbPostRelease(v55 + 72);
      }
      v56 = *(_QWORD *)(v46 + 24);
      v87[1] = 0;
      v23 = -1073741772;
      SubKeyInLeafWithStatus = -1073741772;
      v90 = -1;
      v57 = *(_DWORD *)(v56 + 208) == 0;
      v58 = 0LL;
      v89 = 0;
      v87[0] = -1;
      if ( v57 )
        goto LABEL_106;
      while ( !*(_DWORD *)(v51 + 4 * v58 + 20) )
      {
LABEL_97:
        v58 = (unsigned int)(v89 + 1);
        v89 = v58;
        if ( (unsigned int)v58 >= *(_DWORD *)(v56 + 208) )
          goto LABEL_105;
      }
      v59 = (_WORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v56 + 8))(
                       v56,
                       *(unsigned int *)(v51 + 4 * v58 + 28),
                       v87);
      if ( !v59 )
        goto LABEL_104;
      if ( *v59 == 26994 )
      {
        if ( (int)CmpFindSubKeyInRoot(v56, (_DWORD)v59, (_DWORD)a6, 0, (__int64)&v86) < 0 )
        {
          v23 = -1073741670;
          goto LABEL_102;
        }
        (*(void (__fastcall **)(__int64, _DWORD *))(v56 + 16))(v56, v87);
        if ( v86 == -1 )
        {
LABEL_96:
          v51 = v92;
          goto LABEL_97;
        }
        v59 = (_WORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v56 + 8))(v56, v86, v87);
        if ( !v59 )
        {
LABEL_104:
          v23 = -1073741670;
          SubKeyInLeafWithStatus = -1073741670;
LABEL_105:
          v28 = a2;
LABEL_106:
          v46 = v94;
          (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v94 + 24) + 16LL))(*(_QWORD *)(v94 + 24), &v88);
          if ( v23 == -1073741772 )
          {
            v48 = -1;
            goto LABEL_110;
          }
          if ( v23 < 0 )
          {
            v34 = 328960LL;
            goto LABEL_32;
          }
          v48 = v90;
          if ( v90 == -1 )
          {
LABEL_110:
            LOBYTE(v45) = a10;
            v40 = a1;
            goto LABEL_111;
          }
          v40 = a1;
LABEL_116:
          v29 = BugCheckParameter2;
          SubKeyInLeafWithStatus = CmpCreateKeyControlBlock(
                                     *(_QWORD *)(v46 + 24),
                                     v48,
                                     v46,
                                     BugCheckParameter2,
                                     0,
                                     a6,
                                     a7,
                                     a8,
                                     &v95);
          v23 = SubKeyInLeafWithStatus;
          if ( SubKeyInLeafWithStatus < 0 )
          {
            CmpRecordParseFailure(a11, 329472LL);
            goto LABEL_34;
          }
          if ( BugCheckParameter2 )
            CmpDereferenceKeyControlBlockUnsafe((volatile signed __int32 *)BugCheckParameter2);
          v29 = 0LL;
          v70 = v95;
          BugCheckParameter2 = v95;
          ++*(_WORD *)(a4 + 2);
          v95 = 0LL;
          CmpSetKcbAtLayerHeight(a4, v83, v70);
          v71 = *(_WORD *)(v40 + 58);
          if ( v83 != v71 )
          {
            CmpUnlockHashEntry(*(_QWORD **)(v46 + 24), a8);
            ++v84;
            v71 = *(_WORD *)(v40 + 58);
            v43 = BugCheckParameter2;
          }
          v45 = a10;
          v44 = v83 + 1;
          v83 = v44;
          if ( v44 > v71 )
            goto LABEL_122;
          continue;
        }
      }
      break;
    }
    if ( *v59 == 26732 )
    {
      v60 = a6;
      v61 = 0;
      v62 = _mm_cvtsi128_si32(*a6);
      v97 = *a6;
      if ( v62 )
      {
        v63 = (WCHAR *)v97.m128i_i64[1];
        v64 = (unsigned __int16)(((unsigned __int16)(v62 - 1) >> 1) + 1);
        do
        {
          v65 = *v63;
          if ( *v63 >= 0x61u )
          {
            if ( v65 <= 0x7Au )
              v65 -= 32;
            else
              v65 = RtlUpcaseUnicodeChar(v65);
          }
          ++v63;
          v61 = v65 + 37 * v61;
          --v64;
        }
        while ( v64 );
        v60 = a6;
      }
      v66 = 0;
      v86 = -1;
      if ( v59[1] )
      {
        while ( 1 )
        {
          if ( v61 == *(_DWORD *)&v59[4 * v66 + 4] )
          {
            v67 = CmpDoCompareKeyName(v56, v60, 0LL, *(unsigned int *)&v59[4 * v66 + 2]);
            if ( v67 == 2 )
            {
              v23 = -1073741670;
              goto LABEL_102;
            }
            if ( !v67 )
            {
              v68 = *(_DWORD *)&v59[4 * v66 + 2];
              v23 = 0;
              SubKeyInLeafWithStatus = 0;
              v86 = v68;
              goto LABEL_94;
            }
          }
          if ( ++v66 >= v59[1] )
            break;
          v60 = a6;
        }
      }
      v23 = -1073741772;
      SubKeyInLeafWithStatus = -1073741772;
    }
    else
    {
      SubKeyInLeafWithStatus = CmpFindSubKeyInLeafWithStatus(
                                 v56,
                                 (_DWORD)v59,
                                 (_DWORD)a6,
                                 0,
                                 (__int64)&v86,
                                 (__int64)v96);
      v23 = SubKeyInLeafWithStatus;
      if ( (int)(SubKeyInLeafWithStatus + 0x80000000) >= 0 && SubKeyInLeafWithStatus != -1073741772 )
        goto LABEL_103;
      v68 = v86;
LABEL_94:
      if ( v68 != -1 )
      {
        v90 = v68;
        v23 = 0;
LABEL_102:
        SubKeyInLeafWithStatus = v23;
LABEL_103:
        (*(void (__fastcall **)(__int64, _DWORD *))(v56 + 16))(v56, v87);
        goto LABEL_105;
      }
    }
    (*(void (__fastcall **)(__int64, _DWORD *))(v56 + 16))(v56, v87);
    goto LABEL_96;
  }
LABEL_122:
  BugCheckParameter2 = 0LL;
  v72 = v82 - 1;
  if ( !(_BYTE)v45 )
    v72 = v82;
  v82 = v72;
  *a5 = (_BYTE)v45 != 0;
  *a3 = v43;
  v23 = 0;
  SubKeyInLeafWithStatus = 0;
LABEL_34:
  v35 = 0;
  if ( *(__int16 *)(v28 + 2) >= 0 )
  {
    do
    {
      if ( v35 < 2 )
        v36 = *(_QWORD *)(v28 + 8LL * v35 + 8);
      else
        v36 = *(_QWORD *)(*(_QWORD *)(v28 + 24) + 8LL * v35 - 16);
      v73 = *(_DWORD *)(v36 + 4) & 0x80000;
      if ( *(struct _KTHREAD **)(v36 + 48) == KeGetCurrentThread() )
        *(_QWORD *)(v36 + 48) = 0LL;
      else
        _InterlockedDecrement((volatile signed __int32 *)(v36 + 48));
      ExReleasePushLockEx(v36 + 40, 0LL);
      if ( v73 && (*(_DWORD *)(v36 + 4) & 0x80000) != 0 )
        CmpFreeKeyControlBlock(v36);
      v28 = a2;
      ++v35;
    }
    while ( v35 <= *(__int16 *)(a2 + 2) );
    v12 = v91;
  }
  v74 = v84;
  if ( v84 <= v82 )
  {
    v75 = (101027 * (v12 ^ (v12 >> 9))) ^ ((unsigned __int64)(101027 * (v12 ^ (v12 >> 9))) >> 9);
    v76 = 8LL * v84 - 16;
    do
    {
      if ( v74 < 2 )
        v77 = *(_QWORD *)(v28 + v76 + 24);
      else
        v77 = *(_QWORD *)(v76 + *(_QWORD *)(v28 + 24));
      v78 = *(_QWORD *)(v77 + 24);
      v79 = *(_QWORD *)(v78 + 1640) + 24LL * ((unsigned int)v75 & (*(_DWORD *)(v78 + 1648) - 1));
      *(_QWORD *)(v79 + 8) = 0LL;
      ExReleasePushLockEx(v79, 0LL);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v78 + 4288), 0xFFFFFFFF) == 1 )
        CmpDeleteHive((_QWORD *)v78);
      ++v74;
      v76 += 8LL;
    }
    while ( v74 <= v82 );
    v23 = SubKeyInLeafWithStatus;
    v29 = BugCheckParameter2;
  }
  if ( v29 )
    CmpDereferenceKeyControlBlock(v29);
  return (unsigned int)v23;
}
