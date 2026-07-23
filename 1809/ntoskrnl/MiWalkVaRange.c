/*
 * XREFs of MiWalkVaRange @ 0x140093BD0
 * Callers:
 *     MiResetVirtualMemory @ 0x140132BA4 (MiResetVirtualMemory.c)
 *     MiProcessVaRangesInfoClass @ 0x1406BDED8 (MiProcessVaRangesInfoClass.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     MiIsPrototypePteVadLookup @ 0x14002D250 (MiIsPrototypePteVadLookup.c)
 *     MiLockProtoPoolPage @ 0x14002F030 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14002F1F0 (MiUnlockProtoPoolPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x140042770 (MiGetProtoPteAddress.c)
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiGetNextPageTable @ 0x140084230 (MiGetNextPageTable.c)
 *     MiActOnPte @ 0x14009404C (MiActOnPte.c)
 *     MiWorkingSetIsContended @ 0x1400991E0 (MiWorkingSetIsContended.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     MiCopyOnWrite @ 0x1400B4520 (MiCopyOnWrite.c)
 *     KeShouldYieldProcessor @ 0x1400F9D60 (KeShouldYieldProcessor.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiMakeProtoLeafValid @ 0x14012743C (MiMakeProtoLeafValid.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140128D60 (MI_PROTO_FORMAT_COMBINED.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     MiCopyOnWriteCheckConditions @ 0x1402CB40C (MiCopyOnWriteCheckConditions.c)
 */

__int64 __fastcall MiWalkVaRange(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // rdi
  unsigned int v6; // r13d
  __int64 v7; // r14
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rbx
  __int64 v10; // r15
  __int64 v11; // r12
  char v12; // al
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 NextPageTable; // rax
  int v17; // ecx
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // r9
  __int64 ProtoPteAddress; // rdi
  __int64 v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // rbx
  __int64 v24; // rbx
  unsigned int v25; // eax
  unsigned __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // edi
  unsigned __int64 v30; // rbx
  __int64 v31; // rbx
  bool v32; // zf
  int v33; // edi
  __int64 v34; // rax
  __int64 v36; // rax
  __int64 v37; // r8
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
  unsigned __int8 v49; // [rsp+40h] [rbp-C0h] BYREF
  char v50; // [rsp+41h] [rbp-BFh]
  int v51; // [rsp+44h] [rbp-BCh]
  __int64 v52; // [rsp+48h] [rbp-B8h]
  unsigned int v53; // [rsp+50h] [rbp-B0h]
  unsigned int v54; // [rsp+54h] [rbp-ACh]
  int v55; // [rsp+58h] [rbp-A8h]
  __int64 v56; // [rsp+60h] [rbp-A0h]
  __int64 v57; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v58; // [rsp+70h] [rbp-90h]
  int v59; // [rsp+78h] [rbp-88h] BYREF
  _KPROCESS *Process; // [rsp+80h] [rbp-80h]
  unsigned __int64 v61; // [rsp+88h] [rbp-78h] BYREF
  struct _KEVENT *v62; // [rsp+90h] [rbp-70h] BYREF
  int v63; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v64; // [rsp+A4h] [rbp-5Ch]
  __int64 v65; // [rsp+A8h] [rbp-58h]
  __int64 v66; // [rsp+B0h] [rbp-50h]
  __int64 v67; // [rsp+B8h] [rbp-48h]

  v56 = a3;
  v5 = a3;
  v54 = a4;
  v52 = 0LL;
  v49 = 17;
  v6 = 0;
  v7 = 0LL;
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v64 = 0;
  v66 = 0LL;
  v10 = 0LL;
  v67 = 0LL;
  v65 = 20LL;
  v63 = 1;
  v58 = v9;
  Process = KeGetCurrentThread()->ApcState.Process;
  v11 = (__int64)&Process[1].IdealNode[12];
  v12 = MiLockWorkingSetShared((__int64)&Process[1].IdealNode[12]);
  v50 = v12;
  if ( v8 > v9 )
    goto LABEL_36;
  while ( 2 )
  {
    NextPageTable = MiGetNextPageTable(v8, v9, (__int64)&v63, v12, 0, &v59);
    v17 = 1;
    v18 = NextPageTable;
    v53 = 1;
    if ( NextPageTable == v8 )
      goto LABEL_3;
    if ( (*(_DWORD *)(v5 + 48) & 0x4000) != 0 || !*(_QWORD *)(v5 + 80) )
      goto LABEL_62;
    if ( !MiGetProtoPteAddress(v5, (unsigned __int64)((__int64)(v8 << 25) >> 16) >> 12, 0, &v57) )
    {
      v17 = v53;
LABEL_62:
      v6 = -1073740748;
      if ( !v18 )
        break;
      v8 = v18;
      goto LABEL_3;
    }
    v17 = 0;
    v53 = 0;
LABEL_3:
    v19 = 0xFFFFF68000000000uLL;
    if ( v18 )
      v10 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    while ( 1 )
    {
      ProtoPteAddress = 0LL;
      v51 = 0;
      v55 = 0;
      if ( !v17 )
        break;
      v21 = MI_READ_PTE_LOCK_FREE(v8);
      v23 = v21;
      if ( !v21 )
        break;
      if ( (v21 & 1) != 0 || (v21 & 0x400) == 0 )
      {
        v24 = v56;
LABEL_10:
        if ( v7 )
        {
          MiUnlockProtoPoolPage(v7, v49);
          v7 = 0LL;
          v52 = 0LL;
        }
LABEL_12:
        v25 = MiActOnPte(v24, v53, v8, ProtoPteAddress, v54, a5, &v62, &v61);
        if ( v25 )
        {
          if ( v25 != 274 )
          {
            if ( v25 == -1073741791 )
              MiInsertTbFlushEntry(&v63, (__int64)(v8 << 25) >> 16, 1LL);
            else
              v6 = v25;
            goto LABEL_13;
          }
          v29 = 1;
          MiInsertTbFlushEntry(&v63, (__int64)(v8 << 25) >> 16, 1LL);
          MiFlushTbList(&v63, v46, v47, v48);
          v55 = MiCopyOnWrite((__int64)(v8 << 25) >> 16);
          v8 -= 8LL;
        }
        else
        {
LABEL_13:
          v29 = v51;
        }
        v30 = v61;
        if ( v61 )
        {
          if ( v7 )
            MiUnlockProtoPoolPage(v7, v49);
          v36 = 0LL;
          if ( !v7 )
            v36 = v52;
          v52 = v36;
          MiReleasePageFileInfo(v62, v30, 1);
          v7 = 0LL;
        }
LABEL_15:
        v31 = v52;
        goto LABEL_16;
      }
      v37 = v54;
      if ( v54 == 2 && (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v21, v22, 2LL) )
      {
        v41 = v23;
        if ( qword_14043B180 && (v23 & 0x10) == 0 )
          v41 = v23 & ~qword_14043B180;
        ProtoPteAddress = v41 >> 16;
LABEL_51:
        v24 = v56;
        if ( !ProtoPteAddress )
          goto LABEL_10;
        goto LABEL_52;
      }
      if ( !(unsigned __int8)MI_PROTO_FORMAT_COMBINED(v23, v22, v37) )
      {
        v26 = (__int64)((v8 << 25) - (v28 << 25)) >> 16;
        if ( ((v26 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000
           || (v26 & 0xFFFFFFFFFFFFF000uLL) == qword_14043B0C8 && qword_14043B0C8)
          && (Process[2].ActiveProcessors.Bitmap[0] & 0x100000000LL) == 0 )
        {
          goto LABEL_76;
        }
        if ( (*(_DWORD *)(v56 + 48) & 0x4000) == 0 && *(_QWORD *)(v56 + 80) )
        {
          ProtoPteAddress = MiGetProtoPteAddress(v56, v26 >> 12, 0, &v57);
          if ( MiIsPrototypePteVadLookup(v23) )
            goto LABEL_51;
          v44 = v23;
          if ( qword_14043B180 && (v23 & 0x10) == 0 )
            v44 = v23 & ~qword_14043B180;
          if ( ProtoPteAddress == v44 >> 16 )
            goto LABEL_51;
          v27 = v54;
        }
        v45 = v23;
        if ( qword_14043B180 && (v23 & 0x10) == 0 )
          v45 = v23 & ~qword_14043B180;
        ProtoPteAddress = v45 >> 16;
        if ( (_DWORD)v27 != 2 )
        {
LABEL_76:
          v29 = v51;
          v6 = -1073740748;
          goto LABEL_15;
        }
        goto LABEL_51;
      }
      if ( (_DWORD)v27 == 1 )
        goto LABEL_76;
      if ( v7 )
        MiUnlockProtoPoolPage(v7, v49);
      v42 = 0LL;
      if ( !v7 )
        v42 = v52;
      v7 = 0LL;
      v31 = v42;
      v52 = v42;
      MiFlushTbList(&v63, v26, v27, v28);
      ProtoLeafValid = MiMakeProtoLeafValid(v8);
      v29 = v51;
      v6 = ProtoLeafValid;
      if ( ProtoLeafValid >= 0 )
      {
        v8 -= 8LL;
        v52 = v31;
      }
      else
      {
        v6 = -1073740748;
      }
LABEL_16:
      v8 += 8LL;
      v32 = v29 == 1;
      v33 = v55;
      if ( v32
        || v55 < 0
        || v8 > v58
        || (v8 & 0xFFF) == 0
        || (v8 & 0x78) == 0 && (unsigned int)MiWorkingSetIsContended(v11)
        || KeShouldYieldProcessor() )
      {
        if ( v7 )
          MiUnlockProtoPoolPage(v7, v49);
        v34 = 0LL;
        if ( !v7 )
          v34 = v31;
        v7 = 0LL;
        v52 = v34;
        MiFlushTbList(&v63, v26, v27, v28);
        if ( v10 )
        {
          MiUnlockPageTableInternal(v11, v10);
          v10 = 0LL;
        }
        MiUnlockWorkingSetShared(v11, v50);
        if ( v33 == -1073740748 )
          MiCopyOnWriteCheckConditions(v11, 3221226548LL);
        goto LABEL_35;
      }
      v17 = v53;
      v19 = 0xFFFFF68000000000uLL;
    }
    v24 = v56;
    if ( (*(_DWORD *)(v56 + 48) & 0x4000) != 0 || !*(_QWORD *)(v56 + 80) )
      goto LABEL_10;
    ProtoPteAddress = MiGetProtoPteAddress(
                        v56,
                        (unsigned __int64)((__int64)((v8 << 25) - (v19 << 25)) >> 16) >> 12,
                        0,
                        &v57);
    if ( !ProtoPteAddress )
    {
      if ( v53 )
        goto LABEL_10;
      v29 = 1;
      v8 -= 8LL;
      goto LABEL_15;
    }
LABEL_52:
    if ( ((v52 ^ ProtoPteAddress) & 0xFFFFFFFFFFFFF000uLL) == 0 )
      goto LABEL_12;
    if ( v7 )
    {
      MiUnlockProtoPoolPage(v7, v49);
      v52 = 0LL;
    }
    v7 = MiLockProtoPoolPage(ProtoPteAddress, &v49);
    if ( v7 )
    {
      v52 = ProtoPteAddress;
      goto LABEL_12;
    }
    MiFlushTbList(&v63, v38, v39, v40);
    if ( v10 )
    {
      MiUnlockPageTableInternal(v11, v10);
      v10 = 0LL;
    }
    MiUnlockWorkingSetShared(v11, v50);
    MmAccessFault(2uLL, ProtoPteAddress, 0LL, 0LL);
LABEL_35:
    MiLockWorkingSetShared(v11);
    v9 = v58;
    v5 = v56;
    if ( v8 <= v58 )
    {
      v12 = v50;
      continue;
    }
    break;
  }
LABEL_36:
  MiFlushTbList(&v63, v13, v14, v15);
  MiUnlockWorkingSetShared(v11, v50);
  return v6;
}
