/*
 * XREFs of CmpWalkOneLevel @ 0x140665590
 * Callers:
 *     CmpDoParseKey @ 0x1405FBD70 (CmpDoParseKey.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     NLS_UPCASE @ 0x1400CFCA0 (NLS_UPCASE.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     CmpPopulateKcbStack @ 0x1405FE060 (CmpPopulateKcbStack.c)
 *     CmpGetKcbAtLayerHeight @ 0x140600710 (CmpGetKcbAtLayerHeight.c)
 *     CmpDereferenceKeyControlBlock @ 0x140603F90 (CmpDereferenceKeyControlBlock.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140631924 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x140635944 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmEqualTrans @ 0x140635A74 (CmEqualTrans.c)
 *     CmListGetNextElement @ 0x140636B74 (CmListGetNextElement.c)
 *     CmpUnlockHashEntry @ 0x140661CE4 (CmpUnlockHashEntry.c)
 *     CmpFindSubKeyInRoot @ 0x1406660B0 (CmpFindSubKeyInRoot.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1406667C0 (CmpFindSubKeyInLeafWithStatus.c)
 *     CmpDoCompareKeyName @ 0x140667370 (CmpDoCompareKeyName.c)
 *     CmpCreateKeyControlBlock @ 0x1406676D0 (CmpCreateKeyControlBlock.c)
 *     CmpFindKcbInHashEntryByName @ 0x140667A54 (CmpFindKcbInHashEntryByName.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x1406B8B24 (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmpDeleteHive @ 0x1406B97A0 (CmpDeleteHive.c)
 *     CmpFreeKeyControlBlock @ 0x1406BA6D0 (CmpFreeKeyControlBlock.c)
 *     CmpRecordParseFailure @ 0x1406BD080 (CmpRecordParseFailure.c)
 *     CmpLockHashEntryShared @ 0x140715164 (CmpLockHashEntryShared.c)
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
        char a10,
        __int64 a11)
{
  __int64 v12; // r14
  __int16 v13; // di
  __int64 v14; // r12
  ULONG_PTR v15; // r15
  __int16 v16; // si
  __int16 v17; // r12
  __int64 v18; // r14
  ULONG_PTR v19; // r14
  ULONG_PTR v20; // rdi
  signed __int32 v21; // eax
  signed __int32 v22; // ett
  __int16 v23; // cx
  __int16 i; // di
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rdx
  _KPROCESS *Process; // rcx
  int v29; // r14d
  __int16 v30; // si
  __int64 v31; // r14
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r15
  __int64 v36; // rsi
  unsigned int v37; // eax
  unsigned int v38; // eax
  unsigned __int8 v39; // al
  __int16 v40; // r12
  __int16 v41; // di
  ULONG_PTR v42; // rsi
  bool v43; // r15
  __int16 v44; // r15
  __int64 v45; // rsi
  __int64 v46; // rdi
  __int64 v47; // rdi
  ULONG_PTR v48; // rcx
  _WORD *v50; // r15
  int v51; // r12d
  __int16 v52; // ax
  unsigned __int16 *v53; // r9
  __int64 v54; // r10
  unsigned __int16 v55; // ax
  unsigned __int16 v56; // si
  unsigned int v57; // eax
  int v58; // eax
  __int16 v59; // ax
  __int16 v60; // ax
  int v61; // eax
  char *NextElement; // rax
  __int64 v63; // r9
  int v64; // ecx
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // rax
  unsigned int v68; // r8d
  ULONG_PTR v69; // rcx
  __int64 v70; // rsi
  __int64 KcbAtLayerHeight; // rsi
  void *v72; // r14
  ULONG_PTR KcbInHashEntryByName; // rax
  __int16 v74; // [rsp+50h] [rbp-79h]
  int SubKeyInLeafWithStatus; // [rsp+54h] [rbp-75h]
  __int16 v76; // [rsp+58h] [rbp-71h]
  __int16 v77; // [rsp+5Ah] [rbp-6Fh]
  unsigned int v78; // [rsp+5Ch] [rbp-6Dh] BYREF
  ULONG_PTR v79; // [rsp+60h] [rbp-69h]
  __int16 v80; // [rsp+68h] [rbp-61h]
  _DWORD v81[2]; // [rsp+70h] [rbp-59h] BYREF
  __int64 v82; // [rsp+78h] [rbp-51h] BYREF
  __int64 v83; // [rsp+80h] [rbp-49h]
  unsigned int v84; // [rsp+88h] [rbp-41h]
  int v85; // [rsp+8Ch] [rbp-3Dh]
  __int64 v86; // [rsp+90h] [rbp-39h]
  __int64 v87; // [rsp+98h] [rbp-31h]
  _QWORD *v88; // [rsp+A0h] [rbp-29h] BYREF
  ULONG_PTR v89; // [rsp+A8h] [rbp-21h] BYREF
  char v90[8]; // [rsp+B0h] [rbp-19h] BYREF
  __m128i v91; // [rsp+B8h] [rbp-11h]

  v12 = a4;
  v13 = *(_WORD *)(a1 + 66) - 1;
  v14 = a1;
  v82 = 0xFFFFFFFFLL;
  v74 = -1;
  v15 = 0LL;
  v79 = 0LL;
  if ( v13 >= 0 )
  {
    while ( 1 )
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a2, v13);
      CmpLockHashEntryShared(*(_QWORD *)(KcbAtLayerHeight + 32), (unsigned int)a8);
      v72 = *(void **)(KcbAtLayerHeight + 32);
      KcbInHashEntryByName = CmpFindKcbInHashEntryByName(v72, (unsigned int)a8, KcbAtLayerHeight, a6);
      v79 = KcbInHashEntryByName;
      v15 = KcbInHashEntryByName;
      if ( KcbInHashEntryByName )
        break;
      CmpUnlockHashEntry(v72, a8);
      if ( --v13 < 0 )
      {
        v12 = a4;
        goto LABEL_2;
      }
    }
    CmpReferenceKeyControlBlockLockNotHeld(KcbInHashEntryByName);
    CmpUnlockHashEntry(*(PVOID *)(KcbAtLayerHeight + 32), a8);
    CmpPopulateKcbStack(a4, v15);
    v16 = *(_WORD *)(v15 + 66) + 1;
  }
  else
  {
LABEL_2:
    v16 = 0;
    *(_WORD *)(v12 + 2) = -1;
  }
  v77 = v16;
  if ( v16 <= *(__int16 *)(v14 + 66) )
  {
    do
    {
      v17 = v16;
      if ( v16 >= 2 )
        v18 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL * v16 - 16);
      else
        v18 = *(_QWORD *)(a2 + 8LL * v16 + 8);
      v19 = *(_QWORD *)(v18 + 32);
      v20 = *(_QWORD *)(v19 + 1640)
          + 24
          * (((101027 * ((unsigned int)a8 ^ ((unsigned int)a8 >> 9))) ^ ((unsigned __int64)(101027
                                                                                          * ((unsigned int)a8 ^ ((unsigned int)a8 >> 9))) >> 9)) & (unsigned int)(*(_DWORD *)(v19 + 1648) - 1));
      ExAcquirePushLockExclusiveEx(v20, 0LL);
      *(_QWORD *)(v20 + 8) = KeGetCurrentThread();
      _m_prefetchw((const void *)(v19 + 4272));
      v21 = *(_DWORD *)(v19 + 4272);
      if ( !v21 )
LABEL_134:
        KeBugCheckEx(0x51u, 0x17uLL, v19, 0xCuLL, (unsigned int)a8);
      while ( 1 )
      {
        v22 = v21;
        v21 = _InterlockedCompareExchange((volatile signed __int32 *)(v19 + 4272), v21 + 1, v21);
        if ( v22 == v21 )
          break;
        if ( !v21 )
          goto LABEL_134;
      }
      v74 = v16++;
    }
    while ( v17 < *(__int16 *)(a1 + 66) );
    v15 = v79;
    v14 = a1;
  }
  v23 = *(_WORD *)(a2 + 2);
  for ( i = 0; i <= v23; ++i )
  {
    if ( i >= 2 )
      v25 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL * i - 16);
    else
      v25 = *(_QWORD *)(a2 + 8LL * i + 8);
    ExAcquirePushLockSharedEx(v25 + 48, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)(v25 + 56));
    v23 = *(_WORD *)(a2 + 2);
  }
  v88 = 0LL;
  if ( v23 < 0 )
    goto LABEL_120;
  while ( 1 )
  {
    if ( v23 >= 2 )
      v26 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL * v23 - 16);
    else
      v26 = *(_QWORD *)(a2 + 8LL * v23 + 8);
    if ( *(_WORD *)(v26 + 66) && *(_BYTE *)(v26 + 65) == 1 )
      goto LABEL_120;
    if ( *(_DWORD *)(v26 + 40) != -1 )
      break;
    if ( --v23 < 0 )
      goto LABEL_120;
  }
  if ( a9 )
  {
    NextElement = CmListGetNextElement((_QWORD **)(*(_QWORD *)(a2 + 8) + 208LL), &v88, 32);
    if ( NextElement )
    {
      do
      {
        v64 = *((_DWORD *)NextElement + 17);
        if ( v64 == 2 || v64 == 11 )
          break;
        NextElement = CmListGetNextElement((_QWORD **)(v63 + 208), &v88, 32);
      }
      while ( NextElement );
      if ( CmEqualTrans(*((_QWORD *)NextElement + 7), a9) )
      {
LABEL_120:
        v65 = 328192LL;
LABEL_121:
        v29 = -1073741772;
        SubKeyInLeafWithStatus = -1073741772;
        goto LABEL_122;
      }
    }
  }
  v27 = *(_QWORD *)(v14 + 240);
  if ( v27 && !CmEqualTrans(a9, v27) )
  {
    v65 = 328448LL;
    goto LABEL_121;
  }
  if ( (*(_DWORD *)(v14 + 184) & 0x20000) != 0 )
  {
    v65 = 328704LL;
    goto LABEL_121;
  }
  if ( (*(_DWORD *)(a11 + 160) & 1) == 0 )
  {
    Process = (_KPROCESS *)qword_140463548;
    if ( !qword_140463548 )
      Process = KeGetCurrentThread()->ApcState.Process;
    KiStackAttachProcess(Process, 0, a11 + 168);
    *(_DWORD *)(a11 + 160) |= 1u;
  }
  if ( v15 )
  {
    v30 = *(_WORD *)(v15 + 66) + 1;
    v76 = v30;
    v29 = 0;
  }
  else
  {
    v29 = 0;
    v30 = 0;
    v76 = 0;
  }
  if ( v30 > *(__int16 *)(v14 + 66) )
  {
LABEL_99:
    v79 = 0LL;
    SubKeyInLeafWithStatus = 0;
    v60 = v74 - 1;
    if ( !a10 )
      v60 = v74;
    v40 = v60;
    v74 = v60;
    *a5 = a10 != 0;
    *a3 = v15;
    goto LABEL_46;
  }
  while ( 1 )
  {
    v80 = v30;
    if ( v30 >= 2 )
      v31 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL * v30 - 16);
    else
      v31 = *(_QWORD *)(a2 + 8LL * v30 + 8);
    v32 = *(unsigned int *)(v31 + 40);
    v83 = v31;
    if ( (_DWORD)v32 == -1 )
    {
      v38 = -1;
      goto LABEL_41;
    }
    v33 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(*(_QWORD *)(v31 + 32) + 8LL))(
            *(_QWORD *)(v31 + 32),
            v32,
            &v82);
    v34 = *(_QWORD *)(v31 + 32);
    v35 = v33;
    v87 = v33;
    if ( (*(_DWORD *)(v34 + 160) & 0x8001) == 0 && (*(_BYTE *)(v33 + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0 )
    {
      (*(void (__fastcall **)(__int64, __int64 *))(v34 + 16))(v34, &v82);
      ExAcquirePushLockSharedEx(*(_QWORD *)(v31 + 32) + 72LL, 0LL);
      v67 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v31 + 32) + 8LL))(
              *(_QWORD *)(v31 + 32),
              *(unsigned int *)(v31 + 40),
              &v82);
      v68 = *(_DWORD *)(v31 + 40);
      v69 = *(_QWORD *)(v31 + 32);
      v35 = v67;
      v87 = v67;
      CmpUpdateKeyNodeAccessBits(v69, v67, v68);
      v70 = *(_QWORD *)(v31 + 32);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v70 + 72), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v70 + 72));
      KeAbPostRelease(v70 + 72);
    }
    v36 = *(_QWORD *)(v31 + 32);
    v81[1] = 0;
    v29 = -1073741772;
    v86 = v36;
    v85 = -1;
    v37 = 0;
    SubKeyInLeafWithStatus = -1073741772;
    v81[0] = -1;
    v84 = 0;
    if ( !*(_DWORD *)(v36 + 208) )
      goto LABEL_38;
    while ( !*(_DWORD *)(v35 + 4LL * v37 + 20) )
    {
LABEL_36:
      v37 = v84 + 1;
      v84 = v37;
      if ( v37 >= *(_DWORD *)(v36 + 208) )
        goto LABEL_37;
    }
    v50 = (_WORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v36 + 8))(
                     v36,
                     *(unsigned int *)(v35 + 4LL * v37 + 28),
                     v81);
    if ( !v50 )
      goto LABEL_147;
    if ( *v50 == 26994 )
    {
      if ( (int)CmpFindSubKeyInRoot(v36, v50, a6, &v78) < 0 )
      {
        v29 = -1073741670;
        goto LABEL_85;
      }
      (*(void (__fastcall **)(__int64, _DWORD *))(v36 + 16))(v36, v81);
      if ( v78 == -1 )
        goto LABEL_80;
      v50 = (_WORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v36 + 8))(v36, v78, v81);
      if ( !v50 )
      {
LABEL_147:
        v29 = -1073741670;
        SubKeyInLeafWithStatus = -1073741670;
        goto LABEL_37;
      }
    }
    if ( *v50 != 26732 )
    {
      SubKeyInLeafWithStatus = CmpFindSubKeyInLeafWithStatus(
                                 v36,
                                 (_DWORD)v50,
                                 (_DWORD)a6,
                                 (unsigned int)&v78,
                                 (__int64)v90);
      v29 = SubKeyInLeafWithStatus;
      if ( (int)(SubKeyInLeafWithStatus + 0x80000000) >= 0 && SubKeyInLeafWithStatus != -1073741772 )
        goto LABEL_86;
      v57 = v78;
LABEL_83:
      if ( v57 != -1 )
      {
        v85 = v57;
        v29 = 0;
        goto LABEL_85;
      }
      goto LABEL_79;
    }
    v51 = 0;
    v52 = _mm_cvtsi128_si32(*a6);
    v91 = *a6;
    if ( v52 )
    {
      v53 = (unsigned __int16 *)v91.m128i_i64[1];
      v54 = (unsigned __int16)(((unsigned __int16)(v52 - 1) >> 1) + 1);
      do
      {
        v55 = *v53;
        if ( *v53 >= 0x61u )
        {
          if ( v55 > 0x7Au )
            v55 = NLS_UPCASE(v55);
          else
            v55 -= 32;
        }
        ++v53;
        v51 = v55 + 37 * v51;
        --v54;
      }
      while ( v54 );
      v91.m128i_i64[1] = (__int64)v53;
    }
    v56 = 0;
    v78 = -1;
    if ( !v50[1] )
    {
LABEL_78:
      v36 = v86;
      v29 = -1073741772;
      SubKeyInLeafWithStatus = -1073741772;
LABEL_79:
      (*(void (__fastcall **)(__int64, _DWORD *))(v36 + 16))(v36, v81);
LABEL_80:
      v35 = v87;
      goto LABEL_36;
    }
    while ( 1 )
    {
      if ( v51 != *(_DWORD *)&v50[4 * v56 + 4] )
        goto LABEL_77;
      v61 = CmpDoCompareKeyName(v86, a6, *(unsigned int *)&v50[4 * v56 + 2]);
      if ( v61 == 2 )
        break;
      if ( !v61 )
      {
        v57 = *(_DWORD *)&v50[4 * v56 + 2];
        v36 = v86;
        v29 = 0;
        SubKeyInLeafWithStatus = 0;
        v78 = v57;
        goto LABEL_83;
      }
LABEL_77:
      if ( ++v56 >= v50[1] )
        goto LABEL_78;
    }
    v36 = v86;
    v29 = -1073741670;
LABEL_85:
    SubKeyInLeafWithStatus = v29;
LABEL_86:
    (*(void (__fastcall **)(__int64, _DWORD *))(v36 + 16))(v36, v81);
LABEL_37:
    v14 = a1;
LABEL_38:
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v83 + 32) + 16LL))(*(_QWORD *)(v83 + 32), &v82);
    if ( v29 == -1073741772 )
    {
      v38 = -1;
      goto LABEL_40;
    }
    if ( v29 < 0 )
    {
      v65 = 328960LL;
LABEL_122:
      v66 = (unsigned int)v29;
LABEL_123:
      CmpRecordParseFailure(a11, v65, v66);
      goto LABEL_45;
    }
    v38 = v85;
    if ( v85 != -1 )
    {
      v31 = v83;
      v15 = v79;
      goto LABEL_90;
    }
LABEL_40:
    v15 = v79;
    v31 = v83;
LABEL_41:
    if ( !*(_WORD *)(v14 + 66) && !a10 )
      break;
LABEL_90:
    v58 = CmpCreateKeyControlBlock(*(_QWORD *)(v31 + 32), v38, v31, v15, 0, a6, a7, a8, &v89);
    SubKeyInLeafWithStatus = v58;
    v29 = v58;
    if ( v58 < 0 )
    {
      v66 = (unsigned int)v58;
      v65 = 329472LL;
      goto LABEL_123;
    }
    if ( v15 )
      CmpDereferenceKeyControlBlockUnsafe((volatile signed __int64 *)v15);
    v15 = v89;
    v89 = 0LL;
    v79 = v15;
    ++*(_WORD *)(a4 + 2);
    if ( v76 >= 2 )
      *(_QWORD *)(*(_QWORD *)(a4 + 24) + 8LL * v76 - 16) = v15;
    else
      *(_QWORD *)(a4 + 8LL * v76 + 8) = v15;
    v59 = *(_WORD *)(v14 + 66);
    if ( v76 != v59 )
    {
      CmpUnlockHashEntry(*(PVOID *)(v83 + 32), a8);
      ++v77;
      v59 = *(_WORD *)(v14 + 66);
    }
    v30 = ++v76;
    if ( v80 >= v59 )
    {
      v29 = 0;
      goto LABEL_99;
    }
  }
  v29 = -1073741772;
  SubKeyInLeafWithStatus = -1073741772;
  v39 = *(_BYTE *)(a11 + 258);
  if ( v39 < 4u )
  {
    *(_DWORD *)(a11 + 4LL * v39 + 260) = 329216;
    *(_DWORD *)(a11 + 4LL * (unsigned __int8)(*(_BYTE *)(a11 + 258))++ + 276) = -1073741772;
  }
LABEL_45:
  v40 = v74;
LABEL_46:
  v41 = 0;
  if ( *(__int16 *)(a2 + 2) >= 0 )
  {
    do
    {
      if ( v41 >= 2 )
        v42 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL * v41 - 16);
      else
        v42 = *(_QWORD *)(a2 + 8LL * v41 + 8);
      v43 = (*(_DWORD *)(v42 + 8) & 0x80000) != 0;
      if ( *(struct _KTHREAD **)(v42 + 56) == KeGetCurrentThread() )
        *(_QWORD *)(v42 + 56) = 0LL;
      else
        _InterlockedDecrement((volatile signed __int32 *)(v42 + 56));
      ExReleasePushLockEx(v42 + 48, 0LL);
      if ( v43 && (*(_DWORD *)(v42 + 8) & 0x80000) != 0 )
        CmpFreeKeyControlBlock(v42);
      ++v41;
    }
    while ( v41 <= *(__int16 *)(a2 + 2) );
    v40 = v74;
  }
  v44 = v77;
  if ( v77 <= v40 )
  {
    v45 = 8LL * v77 - 16;
    do
    {
      if ( v44 >= 2 )
        v46 = *(_QWORD *)(v45 + *(_QWORD *)(a2 + 24));
      else
        v46 = *(_QWORD *)(v45 + a2 + 24);
      v47 = *(_QWORD *)(v46 + 32);
      v48 = *(_QWORD *)(v47 + 1640)
          + 24
          * (((101027 * ((unsigned int)a8 ^ ((unsigned int)a8 >> 9))) ^ ((unsigned __int64)(101027
                                                                                          * ((unsigned int)a8 ^ ((unsigned int)a8 >> 9))) >> 9)) & (unsigned int)(*(_DWORD *)(v47 + 1648) - 1));
      *(_QWORD *)(v48 + 8) = 0LL;
      ExReleasePushLockEx(v48, 0LL);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v47 + 4272), 0xFFFFFFFF) == 1 )
        CmpDeleteHive((PVOID)v47);
      ++v44;
      v45 += 8LL;
    }
    while ( v44 <= v40 );
    v29 = SubKeyInLeafWithStatus;
  }
  if ( v79 )
    CmpDereferenceKeyControlBlock(v79);
  return (unsigned int)v29;
}
