/*
 * XREFs of CmQueryValueKey @ 0x1406461B0
 * Callers:
 *     NtQueryValueKey @ 0x140641360 (NtQueryValueKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x140013040 (CmpAllocateTransientPoolWithTag.c)
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     PsBoostThreadIo @ 0x1400BBEB0 (PsBoostThreadIo.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     CmpRecordRegistryLockAcquire @ 0x1401B3134 (CmpRecordRegistryLockAcquire.c)
 *     CmpRecordRegistryLockRelease @ 0x1401B3164 (CmpRecordRegistryLockRelease.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmEqualTrans @ 0x1405AA4E8 (CmEqualTrans.c)
 *     CmpLockKcbStackExclusive @ 0x1405AB5D8 (CmpLockKcbStackExclusive.c)
 *     CmpTryConvertKcbLockSharedToExclusive @ 0x1405D040C (CmpTryConvertKcbLockSharedToExclusive.c)
 *     CmpFindNameInListWithStatus @ 0x1405D1670 (CmpFindNameInListWithStatus.c)
 *     CmpQueryKeyValueData @ 0x1405D2B30 (CmpQueryKeyValueData.c)
 *     CmpCleanUpKcbValueCache @ 0x1405D532C (CmpCleanUpKcbValueCache.c)
 *     RtlUpcaseUnicodeChar @ 0x1405D6C10 (RtlUpcaseUnicodeChar.c)
 *     CmpSetKcbAtLayerHeight @ 0x1405D6E8C (CmpSetKcbAtLayerHeight.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1405D8310 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockKcbStackShared @ 0x140645050 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x1406450E0 (CmpUnlockKcbStack.c)
 *     CmpFreeKeyControlBlock @ 0x140693DB4 (CmpFreeKeyControlBlock.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140695010 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmListGetNextElement @ 0x140695A80 (CmListGetNextElement.c)
 *     RtlCompareUnicodeStrings @ 0x14069C310 (RtlCompareUnicodeStrings.c)
 */

__int64 __fastcall CmQueryValueKey(__int64 a1, unsigned __int16 *a2, int a3, void *a4, unsigned int a5, __int64 a6)
{
  struct _PRIVILEGE_SET *v6; // r12
  __int16 v7; // si
  __int64 v8; // r15
  __int64 v9; // r14
  __int64 v10; // r13
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // rax
  struct _PRIVILEGE_SET *v13; // rdi
  __int16 v14; // bx
  __int16 v15; // dx
  SIZE_T v16; // rsi
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  int KeyValueData; // ebx
  __int16 v19; // di
  __int16 v20; // si
  signed __int64 v21; // r12
  ULONG_PTR *v22; // r14
  ULONG_PTR *v23; // rdi
  __int64 v24; // r10
  __int64 v25; // r10
  __int16 v26; // dx
  signed __int64 v27; // r12
  __int64 *v28; // rdi
  __int64 *v29; // rbx
  __int64 v30; // rbx
  char v31; // r8
  int v32; // eax
  __int64 v33; // r10
  __int64 NextElement; // rax
  __int64 v35; // r9
  int v36; // ecx
  __int16 i; // di
  int v38; // edx
  char v39; // al
  int NameInListWithStatus; // eax
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rcx
  unsigned int v44; // ebx
  __int64 v45; // rdi
  __int64 v46; // rax
  __int64 v47; // rdx
  unsigned int v48; // r14d
  unsigned int *v49; // r15
  __int64 v50; // rax
  unsigned __int16 v51; // si
  const WCHAR *v52; // r12
  unsigned __int16 v53; // r14
  WCHAR *v54; // r15
  WCHAR v55; // di
  unsigned int v56; // ebx
  LONG v57; // ebx
  int v58; // ebx
  __int64 v59; // rdx
  int v60; // ebx
  int v61; // ecx
  int v62; // edx
  char v63; // al
  __int64 v64; // rsi
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rdi
  ULONG_PTR v68; // rdi
  int v69; // r15d
  __int64 v70; // rdx
  char v72; // [rsp+40h] [rbp-C0h]
  __int16 v73; // [rsp+42h] [rbp-BEh]
  int v74; // [rsp+44h] [rbp-BCh]
  unsigned int v75; // [rsp+44h] [rbp-BCh]
  int v76; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v77; // [rsp+4Ch] [rbp-B4h]
  __int64 v78; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v79[2]; // [rsp+58h] [rbp-A8h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+68h] [rbp-98h]
  unsigned __int16 *v81; // [rsp+70h] [rbp-90h]
  PPRIVILEGE_SET v82; // [rsp+78h] [rbp-88h]
  __int64 v83; // [rsp+80h] [rbp-80h] BYREF
  __int64 v84; // [rsp+88h] [rbp-78h] BYREF
  __int64 v85; // [rsp+90h] [rbp-70h]
  __int64 v86; // [rsp+98h] [rbp-68h] BYREF
  __int64 v87; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v88; // [rsp+A8h] [rbp-58h]
  __int64 v89; // [rsp+B0h] [rbp-50h] BYREF
  int v90; // [rsp+B8h] [rbp-48h]
  __int64 v91; // [rsp+C0h] [rbp-40h]
  __int64 v92; // [rsp+C8h] [rbp-38h]
  unsigned int *v93; // [rsp+D0h] [rbp-30h]
  __int64 v94; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v95; // [rsp+E0h] [rbp-20h]
  __int64 v96; // [rsp+E8h] [rbp-18h]
  void *Src; // [rsp+F0h] [rbp-10h]
  _BYTE v98[48]; // [rsp+F8h] [rbp-8h] BYREF

  v6 = 0LL;
  v7 = 0;
  v96 = a6;
  v78 = 4294901760LL;
  v8 = (__int64)a2;
  v81 = a2;
  v9 = a1;
  v95 = a1;
  v10 = 0LL;
  v90 = a3;
  v89 = 0xFFFFFFFFLL;
  v83 = 0xFFFFFFFFLL;
  Src = a4;
  v87 = 0LL;
  v79[0] = 0LL;
  v79[1] = 0LL;
  Privileges = 0LL;
  v88 = 0LL;
  v76 = -1;
  if ( qword_140438CE8 )
  {
    KiStackAttachProcess((_KPROCESS *)qword_140438CE8, 0LL, (__int64)v98);
  }
  else
  {
    KiStackAttachProcess(KeGetCurrentThread()->ApcState.Process, 0LL, (__int64)v98);
    v6 = Privileges;
  }
  if ( !CmpPuntBoot )
  {
    PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    CmpRecordRegistryLockAcquire();
    ExAcquireResourceSharedLite((PERESOURCE)&CmpRegistryLock, 1u);
    v6 = Privileges;
  }
  v12 = *(_QWORD *)(v9 + 8);
  v13 = 0LL;
  v91 = v12;
  v14 = *(_WORD *)(v12 + 58);
  v73 = v14;
  v15 = v14;
  if ( v14 >= 2 )
  {
    v73 = *(_WORD *)(v12 + 58);
    if ( v14 == 1 )
    {
      v12 = v91;
    }
    else
    {
      v16 = 8LL * (unsigned int)(v14 - 1);
      TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(PagedPool, v16, 0x35364D43u);
      v13 = TransientPoolWithTag;
      if ( !TransientPoolWithTag )
      {
        KeyValueData = -1073741670;
        goto LABEL_131;
      }
      memset(TransientPoolWithTag, 0, v16);
      v12 = v91;
      v7 = 0;
      v15 = *(_WORD *)(v91 + 58);
      v73 = v15;
    }
  }
  LOWORD(v78) = v14;
  v6 = v13;
  v82 = v13;
  Privileges = v13;
  WORD1(v78) = v15;
  if ( v15 )
  {
    v24 = *(_QWORD *)(v12 + 184);
    if ( v24 )
    {
      do
      {
        CmpSetKcbAtLayerHeight((__int64)&v78, v15, *(_QWORD *)(v24 + 16));
        v24 = *(_QWORD *)(v25 + 24);
        v15 = v26 - 1;
      }
      while ( v24 );
      v6 = Privileges;
      v19 = WORD1(v78);
      v82 = Privileges;
      v73 = WORD1(v78);
      goto LABEL_15;
    }
  }
  else
  {
    v79[0] = v12;
  }
  v19 = v73;
LABEL_15:
  if ( *(_QWORD *)(v9 + 56) || *(_QWORD *)(v9 + 64) )
  {
    CmpLockKcbStackShared((__int64)&v78);
    if ( CmpIsKeyDeletedForKeyBody(v9, 0LL) )
    {
      KeyValueData = -1073740763;
      if ( (*(_BYTE *)(v9 + 48) & 1) == 0 )
        KeyValueData = -1073741444;
LABEL_20:
      v74 = KeyValueData;
      goto LABEL_21;
    }
    CmpUnlockKcbStack((__int64)&v78);
    KeyValueData = CmpTransSearchAddTransFromKeyBody(v9, &v87);
    if ( KeyValueData < 0 )
      goto LABEL_131;
  }
  if ( v19 >= 0 )
  {
    v27 = (char *)v6 - (char *)v79;
    v28 = v79;
    do
    {
      if ( v7 < 2 )
        v29 = v28;
      else
        v29 = (__int64 *)((char *)v28 + v27 - 16);
      v30 = *v29;
      ExAcquirePushLockSharedEx(v30 + 40, 0LL);
      _InterlockedIncrement((volatile signed __int32 *)(v30 + 48));
      ++v7;
      ++v28;
      v73 = WORD1(v78);
    }
    while ( v7 <= SWORD1(v78) );
    v6 = Privileges;
    v8 = (__int64)v81;
    v82 = Privileges;
  }
  v31 = 0;
  v20 = 0;
  while ( 2 )
  {
    v72 = v31;
    v32 = *(_DWORD *)(v9 + 48);
    v94 = 0LL;
    if ( (v32 & 9) != 0 )
      goto LABEL_119;
    v33 = v87;
    if ( v87 )
    {
      NextElement = CmListGetNextElement(*(_QWORD *)(v9 + 8) + 200LL, &v94, 32LL);
      if ( !NextElement )
      {
LABEL_47:
        v31 = v72;
        goto LABEL_48;
      }
      while ( 1 )
      {
        v36 = *(_DWORD *)(NextElement + 68);
        if ( v36 == 2 || v36 == 11 )
          break;
        NextElement = CmListGetNextElement(v35 + 200, &v94, 32LL);
        if ( !NextElement )
          goto LABEL_47;
      }
      if ( !CmEqualTrans(*(_QWORD *)(NextElement + 56), v33) )
      {
        v33 = v87;
        goto LABEL_47;
      }
LABEL_119:
      KeyValueData = -1073740763;
      if ( (*(_BYTE *)(v9 + 48) & 1) == 0 )
        KeyValueData = -1073741444;
      v74 = KeyValueData;
      goto LABEL_22;
    }
LABEL_48:
    for ( i = *(_WORD *)(v91 + 58); ; --i )
    {
      while ( 1 )
      {
        v77 = i;
        if ( i < 0 )
        {
LABEL_102:
          v64 = v88;
          goto LABEL_103;
        }
        v10 = i < 2 ? v79[i] : *((_QWORD *)v6 + i - 2);
        v38 = *(__int16 *)(v10 + 58);
        if ( v38 == *(unsigned __int16 *)(v9 + 4) )
        {
          v39 = *(_BYTE *)(v10 + 57);
          if ( !v39 )
            goto LABEL_59;
        }
        else
        {
          if ( !(_WORD)v38 )
            goto LABEL_59;
          v39 = *(_BYTE *)(v10 + 57);
        }
        if ( v39 == 1 )
          goto LABEL_102;
LABEL_59:
        if ( *(_DWORD *)(v10 + 32) != -1 )
          break;
        --i;
      }
      if ( !v33 || *(_QWORD *)(v10 + 280) != v33 )
        break;
      NameInListWithStatus = CmpFindNameInListWithStatus(
                               *(_QWORD *)(v10 + 24),
                               (unsigned int *)(v10 + 272),
                               v8,
                               0,
                               0LL,
                               (__int64)&v76);
      v74 = NameInListWithStatus;
      KeyValueData = NameInListWithStatus;
      if ( NameInListWithStatus >= 0 )
        goto LABEL_111;
      if ( NameInListWithStatus != -1073741772 )
        goto LABEL_22;
LABEL_100:
      v62 = *(__int16 *)(v10 + 58);
      if ( v62 == *(unsigned __int16 *)(v9 + 4) )
      {
        v63 = *(_BYTE *)(v10 + 57);
        if ( !v63 )
          goto LABEL_102;
      }
      else
      {
        if ( !(_WORD)v62 )
          goto LABEL_109;
        v63 = *(_BYTE *)(v10 + 57);
      }
      if ( v63 )
        goto LABEL_102;
LABEL_109:
      v33 = v87;
      v31 = v72;
    }
    if ( (*(_DWORD *)(v10 + 4) & 8) != 0 )
    {
      if ( !v31 && !CmpTryConvertKcbLockSharedToExclusive(v10) )
      {
        CmpUnlockKcbStack((__int64)&v78);
        CmpLockKcbStackExclusive((__int64)&v78);
        v31 = 1;
        continue;
      }
      CmpCleanUpKcbValueCache(v10);
      v41 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v10 + 24) + 8LL))(
              *(_QWORD *)(v10 + 24),
              *(unsigned int *)(v10 + 32),
              &v83);
      v42 = *(unsigned int *)(v41 + 40);
      LODWORD(v41) = *(_DWORD *)(v41 + 36);
      *(_QWORD *)(v10 + 96) = v42;
      v43 = *(_QWORD *)(v10 + 24);
      *(_DWORD *)(v10 + 88) = v41;
      (*(void (__fastcall **)(__int64, __int64 *))(v43 + 16))(v43, &v83);
    }
    break;
  }
  v44 = *(_DWORD *)(v10 + 88);
  v45 = *(_QWORD *)(v10 + 24);
  v46 = 0LL;
  v47 = *(unsigned int *)(v10 + 96);
  v86 = 0xFFFFFFFFLL;
  v75 = v44;
  v92 = v45;
  v85 = 0LL;
  if ( v44 )
  {
    v46 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(v45 + 8))(v45, v47, &v86);
    v85 = v46;
  }
  v84 = 0xFFFFFFFFLL;
  if ( v44 )
  {
    v48 = 0;
    v76 = 0;
    v49 = (unsigned int *)v46;
    v93 = (unsigned int *)v46;
    while ( 1 )
    {
      v50 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(v45 + 8))(v45, *v49, &v84);
      v51 = *(_WORD *)(v50 + 2);
      v52 = (const WCHAR *)(v50 + 20);
      if ( (*(_BYTE *)(v50 + 16) & 1) != 0 )
      {
        v53 = *v81 >> 1;
        v54 = (WCHAR *)*((_QWORD *)v81 + 1);
        if ( v53 )
        {
          while ( 1 )
          {
            if ( !v51 )
            {
LABEL_88:
              v45 = v92;
              goto LABEL_89;
            }
            v55 = *v54++;
            v56 = *(unsigned __int8 *)v52;
            v52 = (const WCHAR *)((char *)v52 + 1);
            if ( v55 != (_WORD)v56 )
            {
              if ( v55 >= 0x61u )
              {
                if ( v55 <= 0x7Au )
                  v55 -= 32;
                else
                  v55 = RtlUpcaseUnicodeChar(v55);
              }
              if ( v56 >= 0x61 )
              {
                if ( v56 <= 0x7A )
                  LOWORD(v56) = v56 - 32;
                else
                  LOWORD(v56) = RtlUpcaseUnicodeChar(v56);
              }
              v57 = v55 - (unsigned __int16)v56;
              if ( v57 )
                break;
            }
            --v51;
            if ( !--v53 )
              goto LABEL_88;
          }
          v48 = v76;
          v45 = v92;
          v49 = v93;
        }
        else
        {
LABEL_89:
          v49 = v93;
          v58 = v53;
          v48 = v76;
          v57 = v58 - v51;
        }
      }
      else
      {
        v57 = RtlCompareUnicodeStrings(
                *((PCWCH *)v81 + 1),
                (unsigned __int64)*v81 >> 1,
                v52,
                (unsigned __int64)v51 >> 1,
                1u);
      }
      (*(void (__fastcall **)(__int64, __int64 *))(v45 + 16))(v45, &v84);
      if ( !v57 )
        break;
      ++v48;
      ++v49;
      v76 = v48;
      v93 = v49;
      if ( v48 >= v75 )
      {
        v8 = (__int64)v81;
        v20 = 0;
        v9 = v95;
        goto LABEL_95;
      }
    }
    v59 = v85;
    v20 = 0;
    v8 = (__int64)v81;
    v60 = 0;
    v65 = v48;
    v9 = v95;
    v61 = *(_DWORD *)(v85 + 4 * v65);
  }
  else
  {
LABEL_95:
    v59 = v85;
    v60 = -1073741772;
    v61 = -1;
  }
  v76 = v61;
  if ( v59 )
    (*(void (__fastcall **)(__int64, __int64 *))(v45 + 16))(v45, &v86);
  if ( v60 < 0 )
  {
    i = v77;
    v6 = v82;
    goto LABEL_100;
  }
LABEL_111:
  v64 = *(_QWORD *)(v10 + 24);
LABEL_103:
  if ( v76 == -1 )
  {
    KeyValueData = -1073741772;
    goto LABEL_20;
  }
  v66 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(v64 + 8))(v64, (unsigned int)v76, &v89);
  v67 = v66;
  if ( (*(_DWORD *)(v64 + 160) & 0x80000) != 0 && (*(_BYTE *)(v66 + 16) & 2) != 0 )
  {
    KeyValueData = -1073741772;
  }
  else
  {
    KeyValueData = CmpQueryKeyValueData(v10, v76, v66, v90, Src, a5, (int *)v96);
    if ( KeyValueData >= 0 )
      KeyValueData = 0;
  }
  v74 = KeyValueData;
  if ( v67 )
    (*(void (__fastcall **)(__int64, __int64 *))(v64 + 16))(v64, &v89);
LABEL_21:
  v20 = 0;
LABEL_22:
  v6 = v82;
  if ( v73 >= 0 )
  {
    v21 = (char *)v82 - (char *)v79;
    v22 = v79;
    do
    {
      if ( v20 < 2 )
        v23 = v22;
      else
        v23 = (ULONG_PTR *)((char *)v22 + v21 - 16);
      v68 = *v23;
      v69 = *(_DWORD *)(v68 + 4) & 0x80000;
      if ( *(struct _KTHREAD **)(v68 + 48) == KeGetCurrentThread() )
        *(_QWORD *)(v68 + 48) = 0LL;
      else
        _InterlockedDecrement((volatile signed __int32 *)(v68 + 48));
      ExReleasePushLockEx(v68 + 40, 0LL);
      if ( v69 && (*(_DWORD *)(v68 + 4) & 0x80000) != 0 )
        CmpFreeKeyControlBlock(v68);
      ++v20;
      ++v22;
    }
    while ( v20 <= SWORD1(v78) );
    v6 = Privileges;
    KeyValueData = v74;
  }
LABEL_131:
  if ( !CmpPuntBoot )
  {
    CmpRecordRegistryLockRelease();
    ExReleaseResourceLite((PERESOURCE)&CmpRegistryLock);
    KeLeaveCriticalRegion();
    LOBYTE(v70) = 1;
    PsBoostThreadIo((__int64)KeGetCurrentThread(), v70);
    v6 = Privileges;
  }
  KiUnstackDetachProcess((__int64)v98, 0LL);
  if ( v6 )
    CmSiFreeMemory(v6);
  return (unsigned int)KeyValueData;
}
