/*
 * XREFs of MiWriteAwePtes @ 0x1402B2468
 * Callers:
 *     MiDeleteVadAwePtes @ 0x1402B0708 (MiDeleteVadAwePtes.c)
 *     NtMapUserPhysicalPages @ 0x140852620 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x140852910 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiGetLeafVa @ 0x140076400 (MiGetLeafVa.c)
 *     MiLocateAddress @ 0x140087850 (MiLocateAddress.c)
 *     MiMakeSystemAddressValid @ 0x140088170 (MiMakeSystemAddressValid.c)
 *     MiPageTableLockIsContended @ 0x140096344 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x1400991E0 (MiWorkingSetIsContended.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     MiWriteValidPteNewPage @ 0x1400EEBAC (MiWriteValidPteNewPage.c)
 *     KeShouldYieldProcessor @ 0x1400F9D60 (KeShouldYieldProcessor.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiInsertLargeTbFlushEntry @ 0x140121554 (MiInsertLargeTbFlushEntry.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     MiDecrementAweMapCount @ 0x1402B031C (MiDecrementAweMapCount.c)
 *     MiDeleteAwePageTable @ 0x1402B0424 (MiDeleteAwePageTable.c)
 *     MiGetAweNode @ 0x1402B0F08 (MiGetAweNode.c)
 *     MiUpdateAwePageTable @ 0x1402B2338 (MiUpdateAwePageTable.c)
 *     MiRewritePteWithLockBit @ 0x1402BF86C (MiRewritePteWithLockBit.c)
 */

__int64 __fastcall MiWriteAwePtes(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int64 a7)
{
  __int64 v7; // r10
  __int64 v8; // rsi
  ULONG_PTR v9; // r12
  __int64 v10; // r14
  __int64 v11; // rax
  unsigned int v12; // edx
  unsigned int v13; // ebx
  unsigned __int64 v14; // r15
  unsigned int v15; // ebx
  int v16; // eax
  unsigned __int64 v17; // rdi
  unsigned __int8 v18; // al
  __int64 v19; // r10
  __int64 v20; // r8
  _QWORD *v21; // r11
  unsigned __int64 LeafVa; // rax
  unsigned __int64 Address; // rax
  __int64 v24; // rax
  _QWORD *v25; // r9
  __int64 v26; // rdx
  unsigned __int64 v27; // r8
  unsigned int v28; // ecx
  unsigned int v29; // r14d
  int v30; // eax
  unsigned __int64 v31; // rax
  __int64 v32; // rbx
  __int64 v33; // rcx
  unsigned __int64 v34; // r14
  int updated; // esi
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r8
  __int64 v40; // r14
  __int64 v41; // rdi
  __int64 v42; // r15
  ULONG_PTR v43; // rax
  unsigned __int64 v44; // rsi
  __int64 v45; // rcx
  __int64 v46; // rsi
  unsigned __int64 v47; // r14
  int v48; // ebx
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // r8
  __int64 v53; // r9
  bool v54; // cf
  __int64 v55; // rdx
  int v56; // ebx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // r8
  __int64 v60; // r9
  unsigned __int8 v62; // [rsp+30h] [rbp-D0h]
  int v63[3]; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v64; // [rsp+40h] [rbp-C0h]
  int v65; // [rsp+44h] [rbp-BCh]
  unsigned int v66; // [rsp+48h] [rbp-B8h]
  ULONG_PTR v67; // [rsp+50h] [rbp-B0h]
  _QWORD *v68; // [rsp+58h] [rbp-A8h]
  __int64 v69; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v70; // [rsp+68h] [rbp-98h]
  __int64 v71; // [rsp+70h] [rbp-90h]
  unsigned int v72; // [rsp+78h] [rbp-88h]
  int v73; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned __int64 ValidPte; // [rsp+80h] [rbp-80h]
  unsigned __int64 v75; // [rsp+88h] [rbp-78h]
  unsigned __int64 v76; // [rsp+90h] [rbp-70h]
  _QWORD *v77; // [rsp+98h] [rbp-68h]
  __int64 v78; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v79; // [rsp+A8h] [rbp-58h]
  __int64 v80; // [rsp+B0h] [rbp-50h]
  __int64 v81; // [rsp+B8h] [rbp-48h]
  _DWORD *v82; // [rsp+C0h] [rbp-40h]
  __int64 v83; // [rsp+C8h] [rbp-38h]
  __int64 v84; // [rsp+D0h] [rbp-30h]
  int v85; // [rsp+E0h] [rbp-20h] BYREF
  __int16 v86; // [rsp+E4h] [rbp-1Ch]
  __int64 v87; // [rsp+E8h] [rbp-18h]
  __int64 v88; // [rsp+F0h] [rbp-10h]
  __int64 v89; // [rsp+F8h] [rbp-8h]

  v7 = *(_QWORD *)(a1 + 8);
  v8 = a6;
  v9 = a7;
  v10 = a4;
  v77 = a2;
  v11 = v7;
  v81 = a4;
  v12 = -2080374784;
  v76 = a3;
  if ( v7 == 512 )
    v11 = 1LL;
  v82 = (_DWORD *)a1;
  v75 = v11;
  if ( v7 != 512 )
    v12 = 0x80000000;
  v71 = a6;
  v69 = v7;
  v72 = v12;
  v79 = 0LL;
  v13 = v7 == 512;
  v70 = 0LL;
  v66 = v13;
  v14 = 0LL;
  v67 = 0LL;
  memset(v63, 0, sizeof(v63));
  v78 = 0LL;
  v87 = 20LL;
  v85 = 1;
  v86 = 0;
  v88 = 0LL;
  v89 = 0LL;
  if ( a6 )
  {
    v15 = *(_DWORD *)(a6 + 48);
    if ( (*(_DWORD *)a1 & 1) != 0 )
      v16 = 4;
    else
      v16 = (unsigned __int8)v15 >> 3;
    ValidPte = MiMakeValidPte(0xFFFFF6BFFFFFFF78uLL, 0LL, v16 | v12);
    v17 = ValidPte;
    v64 = (v15 >> 8) & 0x3F;
    v18 = MiLockWorkingSetShared(a5);
    v19 = v69;
    v20 = 1LL;
    v21 = v77;
    v10 = v81;
    v62 = v18;
    v65 = HIWORD(v15) & 1;
    v13 = v66;
  }
  else
  {
    ValidPte = 0LL;
    v17 = 0LL;
    v64 = 0;
    v62 = 17;
    LeafVa = MiGetLeafVa(a7);
    Address = MiLocateAddress(LeafVa);
    v20 = 1LL;
    v65 = (*(_DWORD *)(Address + 48) & 0x10000) != 0;
  }
  if ( !v76 )
  {
LABEL_99:
    MiUnlockWorkingSetShared(a5, v62);
    return v78;
  }
  v80 = 0LL;
  v24 = v10 - (_QWORD)v21;
  v68 = v21;
  v84 = v10 - (_QWORD)v21;
  v25 = v21;
  v26 = 0x7FFFFFFFF8LL;
  while ( 1 )
  {
    if ( v10 )
    {
      v27 = *(_QWORD *)((char *)v25 + v24);
      v9 = ((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v28 = v13;
      if ( v19 == 512 )
      {
        do
        {
          v9 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v28;
        }
        while ( v28 );
      }
      if ( v27 < (*(unsigned int *)(v8 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 32) << 32)) << 12
        || v27 > (((*(unsigned int *)(v8 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 33) << 32)) << 12) | 0xFFF) )
      {
        v8 = MiGetAweNode(v27)[3];
        v71 = v8;
        v29 = *(_DWORD *)(v8 + 48);
        if ( (*v82 & 1) != 0 )
          v30 = 4;
        else
          v30 = (unsigned __int8)v29 >> 3;
        v31 = MiMakeValidPte(0xFFFFF6BFFFFFFF78uLL, 0LL, v30 | v72);
        v25 = v68;
        v17 = v31;
        v21 = v77;
        ValidPte = v31;
        v64 = (v29 >> 8) & 0x3F;
      }
      if ( !v21 || (v32 = v17, !*v25) )
        v32 = ZeroPte;
      v26 = 0x7FFFFFFFF8LL;
      v20 = 1LL;
    }
    else
    {
      v32 = ZeroPte;
      if ( v21 )
        v32 = v17;
    }
    if ( (v32 & 1) != 0 )
      v32 ^= (v32 ^ (*v25 << 12)) & 0xFFFFFFFFF000LL;
    v33 = (v9 >> 9) & 0x7FFFFFFFF8LL;
    if ( v8 )
    {
      v34 = v33 - 0x98000000000LL;
      if ( v14 != v33 - 0x98000000000LL )
      {
        if ( v14 )
        {
          updated = MiUpdateAwePageTable(v14, *(__int64 *)&v63[1], v63[0]);
          MiFlushTbList(&v85, v36, v37, v38);
          if ( v65 )
            v67 = 0LL;
          MiUnlockPageTableInternal(a5, v14);
          if ( updated )
            MiDeleteAwePageTable(a5, v14, v39, (__int64)v25);
          memset(v63, 0, sizeof(v63));
        }
        LOBYTE(v25) = v62;
        MiMakeSystemAddressValid(v9, 0LL, v64, (__int64)v25, 0);
        v20 = 1LL;
        v70 = v34;
        v14 = v34;
      }
    }
    else
    {
      v14 = v33 - 0x98000000000LL;
      v70 = v33 - 0x98000000000LL;
    }
    v40 = 0LL;
    if ( v75 )
    {
      v41 = v71;
      v42 = *(_QWORD *)&v63[1];
      while ( 1 )
      {
        v43 = v9;
        v44 = *(_QWORD *)v9;
        *(_QWORD *)&v63[1] = *(_QWORD *)v9;
        if ( v67 )
          v43 = v67;
        v67 = v43;
        v83 = v32 & 1;
        if ( (v32 & 1) != 0 )
        {
          if ( (v44 & 1) == 0 )
          {
            *(_QWORD *)v9 = v32;
            if ( (v44 & 0x800) == 0 )
            {
              ++v42;
              if ( v44 )
                goto LABEL_60;
              ++v63[0];
            }
            goto LABEL_59;
          }
          if ( v32 != v44 )
          {
            if ( v69 == 512 )
LABEL_56:
              MiRewritePteWithLockBit(a5, v9, v32);
            else
              MiWriteValidPteNewPage((__int64 *)v9, v32, 1);
            v20 = 1LL;
          }
        }
        else
        {
          if ( !v44 )
            goto LABEL_79;
          --v63[0];
          --v42;
          if ( (v44 & 1) != 0 && v69 == 512 )
            goto LABEL_56;
          *(_QWORD *)v9 = v32;
        }
LABEL_59:
        if ( v44 )
        {
LABEL_60:
          if ( (v44 & 1) != 0 )
          {
            if ( v41 )
            {
              if ( v69 == 512 )
                MiInsertLargeTbFlushEntry((__int64)&v85, v66, v9);
              else
                MiInsertTbFlushEntry((__int64)&v85, (__int64)(v9 << 25) >> 16, 1LL, 0);
            }
            v44 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v63[1]);
            v20 = 1LL;
          }
          else
          {
            v45 = qword_14043B180;
            if ( qword_14043B180 && (v44 & 0x10) == 0 )
              v44 &= ~qword_14043B180;
          }
          v46 = 48 * ((v44 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          if ( !v40 )
          {
            if ( (*(_QWORD *)(v46 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
              goto LABEL_78;
            v73 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v46 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v73, v26, v20);
              while ( *(__int64 *)(v46 + 24) < 0 );
            }
            v26 = *(_QWORD *)(v46 + 24);
            v45 = v26 & 0x3FFFFFFFFFFFFFFFLL;
            if ( (v26 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
              v45 = 1LL;
            else
              *(_QWORD *)(v46 + 24) = v26 ^ (v26 ^ (v45 - 1)) & 0x3FFFFFFFFFFFFFFFLL;
            _InterlockedAnd64((volatile signed __int64 *)(v46 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v45 == 1 )
LABEL_78:
              MiDecrementAweMapCount(v45, v46, &v78, 0);
          }
        }
LABEL_79:
        v9 += 8LL;
        if ( v83 )
          v32 ^= (v32 ^ (v32 + 4096)) & 0xFFFFFFFFF000LL;
        v20 = 1LL;
        if ( ++v40 >= v75 )
        {
          v17 = ValidPte;
          *(_QWORD *)&v63[1] = v42;
          v14 = v70;
          break;
        }
      }
    }
    v47 = v79 + 1;
    v25 = v68 + 1;
    ++v79;
    ++v68;
    v80 += v75;
    if ( (v80 & 0x3F) == 0 )
    {
      if ( MiWorkingSetIsContended(a5) || (unsigned int)MiPageTableLockIsContended(a5, v14) || KeShouldYieldProcessor() )
      {
        if ( v47 == v76 )
          break;
        v48 = MiUpdateAwePageTable(v14, *(__int64 *)&v63[1], v63[0]);
        MiFlushTbList(&v85, v49, v50, v51);
        if ( v65 )
          v67 = 0LL;
        MiUnlockPageTableInternal(a5, v14);
        if ( v48 )
          MiDeleteAwePageTable(a5, v14, v52, v53);
        MiUnlockWorkingSetShared(a5, v62);
        v14 = 0LL;
        memset(v63, 0, sizeof(v63));
        v70 = 0LL;
        MiLockWorkingSetShared(a5);
      }
      v25 = v68;
      v20 = 1LL;
    }
    v54 = v47 < v76;
    v26 = 0x7FFFFFFFF8LL;
    v10 = v81;
    v19 = v69;
    v24 = v84;
    v21 = v77;
    v13 = v66;
    if ( !v54 )
      break;
    v8 = v71;
  }
  if ( !v14 )
    goto LABEL_99;
  v56 = MiUpdateAwePageTable(v14, *(__int64 *)&v63[1], v63[0]);
  if ( v71 )
  {
    MiFlushTbList(&v85, v55, v57, v58);
    MiUnlockPageTableInternal(a5, v14);
    if ( v56 )
      MiDeleteAwePageTable(a5, v14, v59, v60);
    goto LABEL_99;
  }
  return v78;
}
