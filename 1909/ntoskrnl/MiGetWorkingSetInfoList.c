/*
 * XREFs of MiGetWorkingSetInfoList @ 0x14011DB2C
 * Callers:
 *     MmQueryVirtualMemory @ 0x140606470 (MmQueryVirtualMemory.c)
 * Callees:
 *     MiWorkingSetIsContended @ 0x140023440 (MiWorkingSetIsContended.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14002FE40 (MmMapLockedPagesSpecifyCache.c)
 *     MiLockLowestValidPageTable @ 0x14004AE30 (MiLockLowestValidPageTable.c)
 *     MiObtainReferencedVadEx @ 0x140050810 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140053A30 (MiUnlockAndDereferenceVadShared.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     MmUnlockPages @ 0x14006A600 (MmUnlockPages.c)
 *     MiGetPagingFileOffset @ 0x140076424 (MiGetPagingFileOffset.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x1400A7E70 (MiGetProtoPteAddress.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiGetPfnPriority @ 0x1400BBB00 (MiGetPfnPriority.c)
 *     MiLockLeafPage @ 0x1400BC6F0 (MiLockLeafPage.c)
 *     MiInvalidPteConforms @ 0x1400BD280 (MiInvalidPteConforms.c)
 *     MiLockTransitionLeafPage @ 0x1400BD5EC (MiLockTransitionLeafPage.c)
 *     MiRotatedToFrameBuffer @ 0x1400C02A0 (MiRotatedToFrameBuffer.c)
 *     MiGetPfnProtection @ 0x1400CAE80 (MiGetPfnProtection.c)
 *     MiGetWsleContents @ 0x1400CAFE0 (MiGetWsleContents.c)
 *     MiIsPrototypePteVadLookup @ 0x1400CBD20 (MiIsPrototypePteVadLookup.c)
 *     MiProbeAndLockPages @ 0x1400CBF90 (MiProbeAndLockPages.c)
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140108920 (KeShouldYieldProcessor.c)
 *     MiLockProtoPage @ 0x14011E578 (MiLockProtoPage.c)
 *     MiQueryPfn @ 0x14011E680 (MiQueryPfn.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiGetValidAweProtection @ 0x1402D62F8 (MiGetValidAweProtection.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x1402D8A04 (MiWorkingSetInfoCheckPageTable.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiGetWorkingSetInfoList(
        _KPROCESS *BugCheckParameter1,
        int a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v8; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 *MappedSystemVa; // r15
  __int64 v11; // r13
  __int64 v12; // r8
  unsigned __int8 v13; // dl
  unsigned __int64 v14; // rdi
  __int64 v15; // r10
  unsigned __int64 v16; // rax
  int v17; // ecx
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // r10
  unsigned int v22; // edx
  unsigned int v23; // ecx
  unsigned __int64 v24; // r12
  char v25; // dl
  __int64 v26; // r11
  unsigned __int64 v27; // r15
  unsigned __int64 v28; // r10
  __int64 v29; // rax
  __int64 v30; // r9
  int v31; // r10d
  __int64 v32; // r11
  signed __int64 v33; // rdi
  int v34; // eax
  __int64 v35; // rax
  int v36; // r13d
  __int64 v37; // r15
  char PfnPriority; // al
  unsigned __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  unsigned __int64 v42; // r10
  __int64 v43; // rcx
  unsigned __int64 v44; // rbx
  __int64 v45; // r10
  int PfnProtection; // eax
  char v47; // r11
  unsigned int v48; // ebx
  PVOID v49; // rsi
  __int64 v51; // rbx
  __int64 ProtoPteAddress; // rdx
  __int64 v53; // rbx
  __int64 v54; // rax
  __int64 v55; // r11
  __int64 v56; // r11
  unsigned int v57; // ecx
  struct _MDL *PoolWithTag; // rax
  struct _MDL *v59; // rsi
  char PreviousMode; // dl
  unsigned __int64 v61; // r10
  int v62; // ecx
  unsigned int v63; // r11d
  unsigned int v64; // eax
  int v65; // r9d
  __int64 v66; // r8
  unsigned __int64 v67; // rdx
  __int64 v68; // r10
  __int64 v69; // r10
  int PagingFileOffset; // eax
  __int64 v71; // r10
  unsigned __int64 v72; // rax
  __int64 v73; // r15
  unsigned __int64 v74; // r12
  __int64 v75; // rdx
  int v76; // r8d
  unsigned __int64 v77; // rcx
  __int64 v78; // rsi
  _QWORD *v79; // rcx
  unsigned __int64 v80; // rdx
  unsigned __int64 v81; // r8
  int ValidAweProtection; // eax
  unsigned __int64 v83; // rsi
  bool v84; // zf
  __int64 v85; // rsi
  char v86; // [rsp+30h] [rbp-1C8h]
  __int64 v87; // [rsp+38h] [rbp-1C0h]
  unsigned __int64 valid; // [rsp+40h] [rbp-1B8h]
  unsigned int v89; // [rsp+48h] [rbp-1B0h]
  __int64 v90; // [rsp+50h] [rbp-1A8h]
  unsigned __int64 v91; // [rsp+58h] [rbp-1A0h]
  unsigned __int64 *v92; // [rsp+60h] [rbp-198h]
  unsigned int v93; // [rsp+70h] [rbp-188h] BYREF
  unsigned __int64 v94; // [rsp+78h] [rbp-180h]
  __int64 v95; // [rsp+80h] [rbp-178h] BYREF
  __int64 v96; // [rsp+88h] [rbp-170h] BYREF
  unsigned __int64 v97; // [rsp+90h] [rbp-168h]
  __int64 v98; // [rsp+98h] [rbp-160h]
  PVOID v99; // [rsp+A0h] [rbp-158h]
  unsigned __int64 *v100; // [rsp+A8h] [rbp-150h]
  PVOID P; // [rsp+B0h] [rbp-148h]
  _KPROCESS *v102; // [rsp+B8h] [rbp-140h]
  unsigned __int64 v103; // [rsp+C0h] [rbp-138h] BYREF
  void *v104; // [rsp+C8h] [rbp-130h]
  _KPROCESS *v105; // [rsp+D0h] [rbp-128h]
  unsigned __int64 v106; // [rsp+D8h] [rbp-120h]
  unsigned __int64 v107; // [rsp+E0h] [rbp-118h]
  __int64 v108; // [rsp+E8h] [rbp-110h] BYREF
  unsigned __int64 v109; // [rsp+F0h] [rbp-108h]
  __int64 v110; // [rsp+F8h] [rbp-100h]
  _BYTE v111[48]; // [rsp+100h] [rbp-F8h] BYREF
  _BYTE Src[128]; // [rsp+130h] [rbp-C8h] BYREF

  v104 = (void *)a3;
  v102 = BugCheckParameter1;
  v105 = BugCheckParameter1;
  v106 = a3;
  v96 = 0LL;
  memset(v111, 0, sizeof(v111));
  v89 = 0;
  if ( a4 > 0xFFFFFFFF )
    return 3221225990LL;
  v8 = a4 >> 4;
  v91 = a4 >> 4;
  if ( !(a4 >> 4) )
    return 3221225476LL;
  if ( (a2 & 0x3FFFFFFC) != 0 || (a2 & 3) == 3 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  if ( v8 > 8 )
  {
    PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(
                                   NonPagedPoolNx,
                                   8 * ((a4 >> 12) + 7 - ((unsigned __int128)-(__int128)(a4 & 0xFFF) >> 64)),
                                   0x20206D4Du);
    v59 = PoolWithTag;
    P = PoolWithTag;
    if ( PoolWithTag )
    {
      PoolWithTag->Next = 0LL;
      PoolWithTag->Size = 8 * ((((a3 & 0xFFF) + a4 + 4095) >> 12) + 6);
      PoolWithTag->MdlFlags = 0;
      PoolWithTag->StartVa = (PVOID)(a3 & 0xFFFFFFFFFFFFF000uLL);
      PoolWithTag->ByteOffset = a3 & 0xFFF;
      PoolWithTag->ByteCount = a4;
      PreviousMode = CurrentThread->PreviousMode;
      MiProbeAndLockPages(PoolWithTag, PreviousMode != 0, 1);
      if ( (v59->MdlFlags & 5) != 0 )
        MappedSystemVa = (unsigned __int64 *)v59->MappedSystemVa;
      else
        MappedSystemVa = (unsigned __int64 *)MmMapLockedPagesSpecifyCache(v59, 0, MmCached, 0LL, 0, 0x40000010u);
      v100 = MappedSystemVa;
      v92 = MappedSystemVa;
      if ( MappedSystemVa )
        goto LABEL_7;
      MmUnlockPages(v59);
      ExFreePoolWithTag(v59, 0);
    }
    return 3221225626LL;
  }
  memmove(Src, (const void *)a3, 16 * v8);
  P = 0LL;
  MappedSystemVa = (unsigned __int64 *)Src;
  v92 = (unsigned __int64 *)Src;
  v100 = (unsigned __int64 *)Src;
LABEL_7:
  if ( CurrentThread->ApcState.Process != BugCheckParameter1 )
  {
    KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v111);
    v89 = 1;
  }
  v11 = 0LL;
  v99 = 0LL;
  v12 = (__int64)&BugCheckParameter1[1].IdealNode[6];
  v87 = (__int64)&BugCheckParameter1[1].IdealNode[6];
  v13 = 17;
  v86 = 17;
  v14 = 0LL;
  valid = 0LL;
  v15 = 0LL;
  v90 = 0LL;
  v93 = 0;
  v16 = a4 >> 4;
  v17 = a2;
  while ( 1 )
  {
    v18 = 0LL;
    v97 = 0LL;
    v89 &= ~4u;
    v19 = *MappedSystemVa;
    v94 = v19;
    if ( v19 > 0x7FFFFFFEFFFFLL )
      goto LABEL_58;
    v20 = v19 >> 12;
    v109 = v19 >> 12;
    if ( !v11 )
      goto LABEL_231;
    if ( v20 < (*(unsigned int *)(v11 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 32) << 32))
      || v20 > (*(unsigned int *)(v11 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 33) << 32)) )
    {
      if ( v15 )
      {
        MiLockProtoPage(0LL);
        v90 = 0LL;
        v13 = v86;
        v12 = v87;
      }
      if ( v13 != 17 )
      {
        if ( v14 )
        {
          MiUnlockPageTableInternal(v12, v14);
          v14 = 0LL;
          valid = 0LL;
          v13 = v86;
        }
        MiUnlockWorkingSetShared(v87, v13);
        v86 = 17;
      }
      MiUnlockAndDereferenceVadShared((char *)v11);
      v11 = 0LL;
      v99 = 0LL;
    }
    if ( !v11 )
    {
LABEL_231:
      v11 = MiObtainReferencedVadEx(v19, 2, (int *)&v93);
      v99 = (PVOID)v11;
      if ( !v11 )
        break;
    }
    v21 = v19;
    if ( ((v19 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000
       || (v19 & 0xFFFFFFFFFFFFF000uLL) == qword_140465720 && qword_140465720)
      && (v102[2].ActiveProcessors.Bitmap[4] & 0x100000000LL) == 0 )
    {
      v89 |= 4u;
    }
    if ( (*(_DWORD *)(v11 + 48) & 0x70) == 0x10 )
    {
      v18 = (16LL * (MmProtectToValue[((unsigned __int64)*(unsigned int *)(v11 + 48) >> 7) & 0x1F] & 0x7FF)) | 0x400001;
      goto LABEL_55;
    }
LABEL_18:
    v22 = v89 & 0xFFFFFFFD;
    v89 &= ~2u;
    v23 = *(_DWORD *)(v11 + 48);
    if ( (v23 & 0x100000) == 0 )
      goto LABEL_19;
    if ( (v23 & 0x400000) != 0 )
    {
      v57 = v23 >> 18;
    }
    else
    {
      v57 = v23 >> 18;
      if ( (v57 & 3) < 2 )
        goto LABEL_19;
    }
    if ( (v57 & 3) < 2 )
    {
LABEL_19:
      if ( (*(_DWORD *)(v11 + 48) & 0x100000) == 0 && (*(_DWORD *)(v11 + 64) & 0x1000000) != 0 )
        v89 |= 2u;
      goto LABEL_22;
    }
    v89 = v22 | 2;
LABEL_22:
    if ( ((v89 >> 1) & 1) != 0 && v86 != 17 )
    {
      if ( v14 )
      {
        MiUnlockPageTableInternal(v87, v14);
        v14 = 0LL;
        valid = 0LL;
      }
      MiUnlockWorkingSetShared(v87, v86);
      v86 = 17;
      v21 = v94;
    }
    v24 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v107 = v24;
    v25 = v86;
    if ( v86 != 17 )
    {
      if ( (((_BYTE)v24 + 8) & 0x78) == 0 && MiWorkingSetIsContended(v87) || KeShouldYieldProcessor() )
      {
        if ( v14 )
        {
          MiUnlockPageTableInternal(v87, v14);
          v14 = 0LL;
          valid = 0LL;
        }
        MiUnlockWorkingSetShared(v87, v86);
        v25 = 17;
        v86 = 17;
      }
      else
      {
        v25 = v86;
      }
    }
    v26 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v98 = v26;
    while ( 1 )
    {
      if ( v25 == 17 )
      {
        v86 = MiLockWorkingSetShared(v87);
        v26 = v98;
      }
      v27 = -1LL;
      v18 = 0LL;
      v97 = 0LL;
      if ( v14 == v26 )
      {
        v28 = v24;
        v103 = v24;
      }
      else
      {
        if ( v14 )
          MiUnlockPageTableInternal(v87, v14);
        valid = MiLockLowestValidPageTable(v87, v24, &v103);
        v28 = v103;
      }
      v29 = MI_READ_PTE_LOCK_FREE(v28);
      v33 = v29;
      v95 = v29;
      if ( v29 )
      {
        if ( (v29 & 1) != 0 && (v29 & 0x80u) != 0LL )
        {
          v27 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v95) >> 12) & 0xFFFFFFFFFLL;
          v62 = ((v33 & 0x800) != 0 ? 4 : 1) | 2;
          if ( v33 < 0 )
            v62 = (v33 & 0x800) != 0 ? 4 : 1;
          v63 = *(_DWORD *)(v11 + 48);
          v64 = (v63 >> 7) & 0x1F;
          if ( v64 >> 3 == 3 && (v64 & 7) != 0 )
          {
            v62 |= 0x18u;
          }
          else if ( v64 >> 3 == 1 )
          {
            v62 |= 8u;
          }
          v65 = -1;
          while ( v61 >= 0xFFFFF68000000000uLL && v61 <= 0xFFFFF6FFFFFFFFFFuLL )
          {
            v61 = (__int64)(v61 << 25) >> 16;
            ++v65;
          }
          v66 = 1LL;
          v21 = v94;
          v67 = v94 >> 12;
          while ( v65 )
          {
            v27 += v66 * (v67 & 0x1FF);
            v67 >>= 9;
            v66 <<= 9;
            --v65;
          }
          v18 = (16LL * (MmProtectToValue[v62] & 0x7FF)) | 0x800001;
          v97 = v18;
          v34 = (v89 >> 1) & 1;
          if ( (v63 & 0x1100000) == 0x1100000 )
            v97 = v18;
        }
        else
        {
          if ( v30 != v32 )
          {
            if ( (unsigned int)MiWorkingSetInfoCheckPageTable(v87, v31, (unsigned int)&v96, a2, v86) == 1 )
            {
              v14 = 0LL;
              valid = 0LL;
              goto LABEL_107;
            }
            v18 = v97;
          }
          v21 = v94;
          v34 = (v89 >> 1) & 1;
        }
      }
      else
      {
        v51 = 0LL;
        v34 = (v89 >> 1) & 1;
        v21 = v94;
        if ( !v34 )
          goto LABEL_113;
      }
      if ( v27 != -1LL )
        goto LABEL_43;
      if ( v34 )
      {
        v14 = valid;
        goto LABEL_18;
      }
      v14 = valid;
      if ( valid != ((v21 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
      {
        MappedSystemVa = v92;
        goto LABEL_55;
      }
      v35 = MI_READ_PTE_LOCK_FREE(v24);
      v33 = v35;
      v95 = v35;
      if ( (v35 & 1) != 0 )
      {
        v18 |= 1uLL;
        v36 = *(_DWORD *)(v11 + 48);
        if ( (v36 & 0x70) != 0x40 )
        {
          v27 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v95) >> 12) & 0xFFFFFFFFFLL;
          v11 = (__int64)v99;
LABEL_43:
          v37 = 48 * v27 - 0x58000000000LL;
          PfnPriority = MiGetPfnPriority(v37);
          v43 = (v39 >> 42) & 0x3F0000;
          v44 = v18 & 0xFFFFFFFFF8C07FFFuLL | v43 | ((v40 | ((unsigned __int64)(PfnPriority & 7) << 9)) << 15);
          if ( (*(_BYTE *)(v37 + 35) & 0x40) != 0 )
            v44 |= 0x80000000uLL;
          if ( (v44 & 0x800000) == 0 )
          {
            if ( ((v39 >> 54) & 7) != 1 )
            {
              if ( (MiGetWsleContents(v43, v42) & 0xF) == 8 )
                v44 |= 0x400000uLL;
              if ( (*(_QWORD *)(v37 + 40) & 0x200000000000000LL) == 0 )
              {
                v18 = v44 & 0xFFFFFFFFFFFF8001uLL | (16LL
                                                   * (MmProtectToValue[(*(_DWORD *)(v37 + 16) >> 5) & 0x1F] & 0x7FF));
                MappedSystemVa = v92;
                v14 = valid;
                v13 = v86;
                v12 = v87;
                v15 = v90;
                v17 = a2;
                if ( (*(_DWORD *)(v11 + 48) & 0x1100000) == 0x1100000 )
                  v18 &= 0xFFFFFFF0FFFFFFFFuLL;
                goto LABEL_57;
              }
              PfnProtection = MiGetPfnProtection(0x3FFFFFFFFFFFFFFFLL, v45);
              v18 = v44 & 0xFFFFFFFFFFFF8001uLL | (2 * (v47 & 7 | (8LL * (MmProtectToValue[PfnProtection] & 0x7FF))));
              if ( (v89 & 4) != 0
                || (*(_DWORD *)(v11 + 48) & 0x100000) == 0
                && MiGetProtoPteAddress(v11, v109, 0, &v108) == (*(_QWORD *)(v37 + 8) | 0x8000000000000000uLL) )
              {
                v18 |= 0x40000000uLL;
              }
LABEL_54:
              MappedSystemVa = v92;
              v14 = valid;
              goto LABEL_55;
            }
            if ( !v40 )
            {
              v79 = (_QWORD *)qword_1404658C8;
              if ( !qword_1404658C8 )
                goto LABEL_215;
              v80 = v41 / 48;
              v110 = v41 / 48;
              while ( v79 )
              {
                v81 = v79[3];
                if ( v80 < v81 )
                {
                  v79 = (_QWORD *)*v79;
                }
                else
                {
                  if ( v80 - v81 < v79[4] )
                    break;
                  v79 = (_QWORD *)v79[1];
                }
              }
              if ( v79 )
                ValidAweProtection = (*(_DWORD *)(v37 + 16) >> 5) & 0x1F;
              else
LABEL_215:
                ValidAweProtection = MiGetValidAweProtection(v11, v33);
              v83 = v44 ^ ((unsigned __int16)v44 ^ (unsigned __int16)(16 * MmProtectToValue[ValidAweProtection])) & 0x7FF0;
              if ( (*(_DWORD *)(v11 + 48) & 0x1100000) == 0x1100000 )
                v83 &= 0xFFFFFFF0FFFFFFFFuLL;
              v18 = v83 | 0x400000;
              goto LABEL_54;
            }
          }
          if ( (v44 & 0x800000) == 0 )
          {
            v44 ^= ((unsigned __int16)v44 ^ (unsigned __int16)(16 * MmProtectToValue[(*(_DWORD *)(v11 + 48) >> 7) & 0x1F])) & 0x7FF0;
            if ( (*(_DWORD *)(v11 + 48) & 0x1100000) == 0x1100000 )
              v44 &= 0xFFFFFFF0FFFFFFFFuLL;
          }
          v18 = v44 | 0x400000;
          v14 = valid;
          v15 = v90;
          v84 = v40 == 0;
          v12 = v87;
          if ( !v84 )
          {
            LOBYTE(v85) = 7;
            if ( (*(_QWORD *)(v37 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 7 )
              v85 = *(_QWORD *)(v37 + 24) & 0x3FFFFFFFFFFFFFFFLL;
            v18 = v44 & 0xFFFFFFFFFFBFFFF1uLL | 0x400000 | (2 * (v85 & 7 | 0x20000000));
          }
          MappedSystemVa = v92;
          v13 = v86;
          v17 = a2;
          goto LABEL_57;
        }
        v72 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v95);
        v73 = 48 * ((v72 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        v74 = v18;
        if ( ((*(_QWORD *)(48 * ((v72 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) >> 53) & 1) != 0
          && (*(_BYTE *)(v73 + 35) & 0x40) != 0 )
        {
          v18 |= 0x80000000uLL;
          v74 = v18;
        }
        if ( MiRotatedToFrameBuffer(v107) )
        {
          LODWORD(v75) = (v33 & 0x800) != 0 ? 4 : 1;
          v76 = v36 & 0xC00;
          if ( (v36 & 0x380) != 0 && v76 == 3072 )
          {
            LODWORD(v75) = v75 | 0x18;
          }
          else if ( v76 == 1024 )
          {
            LODWORD(v75) = v75 | 8;
          }
        }
        else
        {
          v18 = v74 & 0xFFFFFFFFF8C0FFFFuLL | (*(_QWORD *)(v73 + 40) >> 42) & 0x3F0000LL | ((MiGetPfnPriority(v73) & 7) << 24);
          v77 = v18;
          v75 = (*(_DWORD *)(v73 + 16) >> 5) & 0x1F;
          if ( *(__int64 *)(v73 + 8) >= 0 )
          {
            LOBYTE(v78) = 7;
            if ( (*(_QWORD *)(v73 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 7 )
              v78 = *(_QWORD *)(v73 + 24) & 0x3FFFFFFFFFFFFFFFLL;
            v18 = v77 & 0xFFFFFFFFFFFFFFF1uLL | (2 * (v78 & 7 | 0x4000));
            LODWORD(v75) = MmMakeProtectNotWriteCopy[v75];
          }
        }
        v18 ^= ((unsigned __int16)v18 ^ (unsigned __int16)(16 * MmProtectToValue[(unsigned int)v75])) & 0x7FF0;
LABEL_96:
        MappedSystemVa = v92;
        v14 = valid;
LABEL_55:
        v17 = a2;
        v12 = v87;
        v13 = v86;
        goto LABEL_56;
      }
      v51 = v35;
      if ( (v35 & 0x400) != 0 )
        goto LABEL_83;
      if ( (v35 & 0x800) == 0 )
        break;
      v68 = MiLockTransitionLeafPage(v24, 0LL);
      if ( v68 )
      {
        MiQueryPfn((v68 + 0x58000000000LL) / 48, &v96);
        _InterlockedAnd64((volatile signed __int64 *)(v69 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v18 = v97;
        goto LABEL_54;
      }
      v14 = valid;
LABEL_107:
      v26 = v98;
      v25 = v86;
    }
    if ( (unsigned int)MiGetPagingFileOffset((unsigned __int64)&v95) )
    {
      v18 = v18 & 0xFFFFFFFFFF3FFFFFuLL | 0x800000;
      goto LABEL_54;
    }
    if ( v33 )
      goto LABEL_54;
LABEL_113:
    if ( (v89 & 4) == 0 && (*(_DWORD *)(v11 + 48) & 0x100000) != 0 )
      goto LABEL_54;
LABEL_83:
    ProtoPteAddress = 0LL;
    if ( (v89 & 4) != 0 )
    {
      ProtoPteAddress = qword_140465718;
      if ( (v21 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
        ProtoPteAddress = qword_140465710;
LABEL_87:
      v53 = ProtoPteAddress;
      goto LABEL_88;
    }
    if ( (*(_DWORD *)(v11 + 48) & 0x100000) != 0 )
    {
      if ( qword_140465800 )
      {
        if ( (v51 & 0x10) != 0 )
        {
LABEL_182:
          v51 &= ~0x10uLL;
          goto LABEL_183;
        }
        v51 &= ~qword_140465800;
      }
    }
    else
    {
      ProtoPteAddress = MiGetProtoPteAddress(v11, v21 >> 12, 0, &v108);
      if ( !v51 || MiIsPrototypePteVadLookup(v33) )
        goto LABEL_87;
      if ( qword_140465800 )
      {
        if ( (v51 & 0x10) != 0 )
          goto LABEL_182;
        v51 &= ~qword_140465800;
      }
    }
LABEL_183:
    v53 = v51 >> 16;
LABEL_88:
    if ( !v53 )
      goto LABEL_54;
    v18 |= 0x8000uLL;
    v97 = v18;
    if ( v53 == ProtoPteAddress )
    {
      v18 |= 0x40000000uLL;
      v97 = v18;
    }
    if ( ((v90 ^ v53) & 0xFFFFFFFFFFFFF000uLL) != 0 )
    {
      v14 = valid;
      if ( valid )
      {
        MiUnlockPageTableInternal(v87, valid);
        v14 = 0LL;
        valid = 0LL;
      }
      v90 = MiLockProtoPage(v53);
      goto LABEL_107;
    }
    MiLockLeafPage((unsigned __int64 *)v53, 0);
    v54 = MI_READ_PTE_LOCK_FREE(v53);
    v95 = v54;
    if ( v55 )
    {
      MiQueryPfn((v55 + 0x58000000000LL) / 48, &v96);
      _InterlockedAnd64((volatile signed __int64 *)(v56 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v18 = v97;
      goto LABEL_96;
    }
    if ( (v54 & 0x400) != 0 || (v54 & 0x800) != 0 || !MiInvalidPteConforms(v54) )
      goto LABEL_54;
    PagingFileOffset = MiGetPagingFileOffset((unsigned __int64)&v95);
    MappedSystemVa = v92;
    v14 = valid;
    v13 = v86;
    v12 = v87;
    v17 = a2;
    if ( PagingFileOffset )
      v18 = v18 & 0xFFFFFFFFFF3FFFFFuLL | 0x800000;
    else
      v18 &= -(__int64)(v71 != 0);
LABEL_56:
    v15 = v90;
LABEL_57:
    v16 = v91;
LABEL_58:
    if ( (v17 & 0x40000000) != 0 )
    {
      if ( (v18 & 1) != 0 )
      {
        if ( (v18 & 0x40000000) != 0 )
          v18 = v18 & 0xFFFFFFFFF8C0FFF1uLL | 0xE;
      }
      else if ( (v18 & 0x40000000) != 0 )
      {
        v18 &= 0xFFFFFFFFF03FFFFFuLL;
      }
    }
    MappedSystemVa[1] = v18;
    MappedSystemVa += 2;
    v92 = MappedSystemVa;
    v100 = MappedSystemVa;
    v91 = --v16;
    v11 = (__int64)v99;
    if ( !v16 )
    {
      v48 = 0;
      goto LABEL_61;
    }
  }
  v48 = v93;
  if ( v93 != -1073741558 )
    goto LABEL_55;
LABEL_61:
  if ( v86 != 17 )
  {
    if ( v14 )
      MiUnlockPageTableInternal(v87, v14);
    MiUnlockWorkingSetShared(v87, v86);
  }
  if ( v90 )
    MiLockProtoPage(0LL);
  if ( v11 )
    MiUnlockAndDereferenceVadShared((char *)v11);
  if ( (v89 & 1) != 0 )
    KiUnstackDetachProcess((struct _KTHREAD *)v111, 0);
  v49 = P;
  if ( P )
  {
    MmUnlockPages((PMDL)P);
    ExFreePoolWithTag(v49, 0);
  }
  else
  {
    memmove(v104, Src, ((char *)MappedSystemVa - Src) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  return v48;
}
