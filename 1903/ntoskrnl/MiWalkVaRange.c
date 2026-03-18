/*
 * XREFs of MiWalkVaRange @ 0x1400DE274
 * Callers:
 *     MiResetVirtualMemory @ 0x14013345C (MiResetVirtualMemory.c)
 *     MiProcessVaRangesInfoClass @ 0x1406E0178 (MiProcessVaRangesInfoClass.c)
 * Callees:
 *     MiWorkingSetIsContended @ 0x140023050 (MiWorkingSetIsContended.c)
 *     MiFlushTbList @ 0x14004FFE0 (MiFlushTbList.c)
 *     MiLockProtoPoolPage @ 0x140054D30 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x140054F90 (MiUnlockProtoPoolPage.c)
 *     MiInsertTbFlushEntry @ 0x140058CD0 (MiInsertTbFlushEntry.c)
 *     MiCopyOnWrite @ 0x140059090 (MiCopyOnWrite.c)
 *     MiLockWorkingSetShared @ 0x14005D630 (MiLockWorkingSetShared.c)
 *     MiGetNextPageTable @ 0x14005DF80 (MiGetNextPageTable.c)
 *     MiReleasePageFileInfo @ 0x140088F50 (MiReleasePageFileInfo.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x1400C7FF0 (MiGetProtoPteAddress.c)
 *     MmAccessFault @ 0x1400CA7B0 (MmAccessFault.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiActOnPte @ 0x1400DE740 (MiActOnPte.c)
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140102110 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiIsPrototypePteVadLookup @ 0x140102370 (MiIsPrototypePteVadLookup.c)
 *     KeShouldYieldProcessor @ 0x140109950 (KeShouldYieldProcessor.c)
 *     MiMakeProtoLeafValid @ 0x1401284F4 (MiMakeProtoLeafValid.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiCopyOnWriteCheckConditions @ 0x1402E575C (MiCopyOnWriteCheckConditions.c)
 */

__int64 __fastcall MiWalkVaRange(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // rdi
  unsigned int v8; // r13d
  ULONG_PTR v9; // r14
  unsigned __int64 v10; // rsi
  __int64 v11; // r15
  __int64 v12; // r12
  __int64 v13; // rdx
  unsigned __int8 v14; // bl
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 NextPageTable; // rax
  int v19; // ecx
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // r9
  __int64 ProtoPteAddress; // rdi
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rbx
  unsigned int v26; // eax
  unsigned __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // edi
  unsigned __int64 v31; // rbx
  __int64 v32; // rbx
  bool v33; // zf
  int v34; // edi
  __int64 v35; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdi
  __int64 v42; // rax
  int ProtoLeafValid; // eax
  __int64 v44; // rcx
  __int64 v45; // rdi
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  unsigned __int8 v49; // [rsp+40h] [rbp-168h] BYREF
  unsigned __int8 v50; // [rsp+41h] [rbp-167h]
  int v51; // [rsp+44h] [rbp-164h]
  __int64 v52; // [rsp+48h] [rbp-160h]
  unsigned int v53; // [rsp+50h] [rbp-158h]
  unsigned int v54; // [rsp+54h] [rbp-154h]
  int v55; // [rsp+58h] [rbp-150h]
  __int64 v56; // [rsp+60h] [rbp-148h]
  unsigned __int64 v57; // [rsp+68h] [rbp-140h]
  __int64 v58; // [rsp+70h] [rbp-138h] BYREF
  int v59; // [rsp+78h] [rbp-130h] BYREF
  _KPROCESS *Process; // [rsp+80h] [rbp-128h]
  unsigned __int64 v61; // [rsp+88h] [rbp-120h] BYREF
  __int64 v62; // [rsp+90h] [rbp-118h] BYREF
  _QWORD v63[24]; // [rsp+A0h] [rbp-108h] BYREF

  v5 = a3;
  v56 = a3;
  v54 = a4;
  memset(v63, 0, 0xB8uLL);
  v52 = 0LL;
  v8 = 0;
  v49 = 17;
  v9 = 0LL;
  v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  WORD2(v63[0]) = 0;
  v63[2] = 0LL;
  v11 = 0LL;
  v63[3] = 0LL;
  LODWORD(v63[0]) = 1;
  LODWORD(v63[1]) = 20;
  v57 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v12 = (__int64)&Process[1].IdealNode[6];
  v14 = MiLockWorkingSetShared((__int64)&Process[1].IdealNode[6]);
  v50 = v14;
  v17 = v57;
  if ( v10 <= v57 )
  {
    while ( 1 )
    {
      NextPageTable = MiGetNextPageTable(v10, v17, (__int64)v63, v14, 0, &v59);
      v19 = 1;
      v20 = NextPageTable;
      v53 = 1;
      if ( NextPageTable != v10 )
      {
        if ( (*(_DWORD *)(v5 + 48) & 0x100000) != 0 || !*(_QWORD *)(v5 + 80) )
          goto LABEL_62;
        if ( !MiGetProtoPteAddress(v5, (unsigned __int64)((__int64)(v10 << 25) >> 16) >> 12, 0, &v58) )
        {
          v19 = v53;
LABEL_62:
          v8 = -1073740748;
          if ( !v20 )
            goto LABEL_36;
          v10 = v20;
          goto LABEL_3;
        }
        v19 = 0;
        v53 = 0;
      }
LABEL_3:
      v21 = 0xFFFFF68000000000uLL;
      if ( v20 )
        v11 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      while ( 1 )
      {
        ProtoPteAddress = 0LL;
        v51 = 0;
        v55 = 0;
        if ( !v19 || (v23 = MI_READ_PTE_LOCK_FREE(v10), (v24 = v23) == 0) )
        {
          v25 = v56;
          if ( (*(_DWORD *)(v56 + 48) & 0x100000) != 0 || !*(_QWORD *)(v56 + 80) )
            goto LABEL_10;
          ProtoPteAddress = MiGetProtoPteAddress(
                              v56,
                              (unsigned __int64)((__int64)((v10 << 25) - (v21 << 25)) >> 16) >> 12,
                              0,
                              &v58);
          if ( !ProtoPteAddress )
          {
            if ( v53 )
              goto LABEL_10;
            v30 = 1;
            v10 -= 8LL;
            goto LABEL_15;
          }
          goto LABEL_51;
        }
        if ( (v23 & 1) != 0 || (v23 & 0x400) == 0 )
        {
          v25 = v56;
LABEL_10:
          if ( v9 )
          {
            MiUnlockProtoPoolPage(v9, v49);
            v9 = 0LL;
            v52 = 0LL;
          }
LABEL_12:
          v26 = MiActOnPte(v25, v53, v10, ProtoPteAddress, v54, a5, &v62, &v61);
          if ( v26 )
          {
            if ( v26 != 274 )
            {
              if ( v26 == -1073741791 )
                MiInsertTbFlushEntry((__int64)v63, (__int64)(v10 << 25) >> 16, 1LL, 0);
              else
                v8 = v26;
              goto LABEL_13;
            }
            v30 = 1;
            MiInsertTbFlushEntry((__int64)v63, (__int64)(v10 << 25) >> 16, 1LL, 0);
            MiFlushTbList((int *)v63, v46, v47, v48);
            v55 = MiCopyOnWrite((__int64)(v10 << 25) >> 16, v10, 0xFFFFFFFFFFFFFFFFuLL, 0);
            v10 -= 8LL;
          }
          else
          {
LABEL_13:
            v30 = v51;
          }
          v31 = v61;
          if ( v61 )
          {
            if ( v9 )
              MiUnlockProtoPoolPage(v9, v49);
            v37 = 0LL;
            if ( !v9 )
              v37 = v52;
            v52 = v37;
            MiReleasePageFileInfo(v62, v31, 1);
            v9 = 0LL;
          }
LABEL_15:
          v32 = v52;
          goto LABEL_16;
        }
        if ( v54 == 2 && (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v23) )
        {
          v41 = v24;
          if ( qword_140465B00 && (v24 & 0x10) == 0 )
            v41 = v24 & ~qword_140465B00;
          ProtoPteAddress = v41 >> 16;
          goto LABEL_50;
        }
        if ( !(unsigned __int8)MI_PROTO_FORMAT_COMBINED(v24) )
          break;
        if ( (_DWORD)v28 == 1 )
          goto LABEL_76;
        if ( v9 )
          MiUnlockProtoPoolPage(v9, v49);
        v42 = 0LL;
        if ( !v9 )
          v42 = v52;
        v9 = 0LL;
        v32 = v42;
        v52 = v42;
        MiFlushTbList((int *)v63, v27, v28, v29);
        ProtoLeafValid = MiMakeProtoLeafValid(v10);
        v30 = v51;
        v8 = ProtoLeafValid;
        if ( ProtoLeafValid >= 0 )
        {
          v10 -= 8LL;
          v52 = v32;
        }
        else
        {
          v8 = -1073740748;
        }
LABEL_16:
        v10 += 8LL;
        v33 = v30 == 1;
        v34 = v55;
        if ( v33
          || v55 < 0
          || v10 > v57
          || (v10 & 0xFFF) == 0
          || (v10 & 0x78) == 0 && MiWorkingSetIsContended(v12)
          || KeShouldYieldProcessor() )
        {
          if ( v9 )
            MiUnlockProtoPoolPage(v9, v49);
          v35 = 0LL;
          if ( !v9 )
            v35 = v32;
          v9 = 0LL;
          v52 = v35;
          MiFlushTbList((int *)v63, v27, v28, v29);
          if ( v11 )
          {
            MiUnlockPageTableInternal(v12);
            v11 = 0LL;
          }
          v14 = v50;
          MiUnlockWorkingSetShared(v12, v50);
          if ( v34 == -1073740748 )
            MiCopyOnWriteCheckConditions(v12, 3221226548LL);
          goto LABEL_35;
        }
        v19 = v53;
        v21 = 0xFFFFF68000000000uLL;
      }
      v27 = (__int64)((v10 << 25) - (v29 << 25)) >> 16;
      if ( ((v27 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000
         || (v27 & 0xFFFFFFFFFFFFF000uLL) == qword_140465A20 && qword_140465A20)
        && (Process[2].ActiveProcessors.Bitmap[4] & 0x100000000LL) == 0 )
      {
        goto LABEL_76;
      }
      if ( (*(_DWORD *)(v56 + 48) & 0x100000) == 0 && *(_QWORD *)(v56 + 80) )
      {
        ProtoPteAddress = MiGetProtoPteAddress(v56, v27 >> 12, 0, &v58);
        if ( (unsigned int)MiIsPrototypePteVadLookup(v24) )
          goto LABEL_50;
        v44 = v24;
        if ( qword_140465B00 && (v24 & 0x10) == 0 )
          v44 = v24 & ~qword_140465B00;
        if ( ProtoPteAddress == v44 >> 16 )
          goto LABEL_50;
        v28 = v54;
      }
      v45 = v24;
      if ( qword_140465B00 && (v24 & 0x10) == 0 )
        v45 = v24 & ~qword_140465B00;
      ProtoPteAddress = v45 >> 16;
      if ( (_DWORD)v28 != 2 )
      {
LABEL_76:
        v30 = v51;
        v8 = -1073740748;
        goto LABEL_15;
      }
LABEL_50:
      v25 = v56;
      if ( !ProtoPteAddress )
        goto LABEL_10;
LABEL_51:
      if ( ((v52 ^ ProtoPteAddress) & 0xFFFFFFFFFFFFF000uLL) == 0 )
        goto LABEL_12;
      if ( v9 )
      {
        MiUnlockProtoPoolPage(v9, v49);
        v52 = 0LL;
      }
      v9 = MiLockProtoPoolPage(ProtoPteAddress, &v49);
      if ( v9 )
      {
        v52 = ProtoPteAddress;
        goto LABEL_12;
      }
      MiFlushTbList((int *)v63, v38, v39, v40);
      if ( v11 )
      {
        MiUnlockPageTableInternal(v12);
        v11 = 0LL;
      }
      v14 = v50;
      MiUnlockWorkingSetShared(v12, v50);
      MmAccessFault(2uLL, ProtoPteAddress, 0, 0LL);
LABEL_35:
      MiLockWorkingSetShared(v12);
      v17 = v57;
      v5 = v56;
      if ( v10 > v57 )
      {
LABEL_36:
        v14 = v50;
        break;
      }
    }
  }
  MiFlushTbList((int *)v63, v13, v15, v16);
  MiUnlockWorkingSetShared(v12, v14);
  return v8;
}
