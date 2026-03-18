/*
 * XREFs of MiProbeLeafPteAccess @ 0x14008F7B0
 * Callers:
 *     MiProbeAndLockPages @ 0x14008E9A0 (MiProbeAndLockPages.c)
 *     MiProbeLeafFrame @ 0x1400F0464 (MiProbeLeafFrame.c)
 * Callees:
 *     MiProcessCommitIntact @ 0x140001AA8 (MiProcessCommitIntact.c)
 *     MiCopyOnWrite @ 0x140059090 (MiCopyOnWrite.c)
 *     MiCanPageMove @ 0x14009D990 (MiCanPageMove.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MmAccessFault @ 0x1400CA7B0 (MmAccessFault.c)
 *     MiIsPfnFileOnly @ 0x1400D9FB0 (MiIsPfnFileOnly.c)
 *     MiClearPfnImageVerified @ 0x1400DBB6C (MiClearPfnImageVerified.c)
 *     MiLocateCloneAddress @ 0x1400DFC38 (MiLocateCloneAddress.c)
 *     MiLockProbePacketWorkingSet @ 0x1400EEFBC (MiLockProbePacketWorkingSet.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1400EF004 (MiUnlockProbePacketWorkingSet.c)
 *     MiLookupDataTableEntry @ 0x1400F78E8 (MiLookupDataTableEntry.c)
 *     MiOkToSetPteDirtyForNotValidFault @ 0x14011BE28 (MiOkToSetPteDirtyForNotValidFault.c)
 *     MiSplitReducedCommitClonePage @ 0x1402BFD20 (MiSplitReducedCommitClonePage.c)
 *     MiCopyOnWriteCheckConditions @ 0x1402E575C (MiCopyOnWriteCheckConditions.c)
 *     MiSplitDriverPage @ 0x140887E74 (MiSplitDriverPage.c)
 */

__int64 __fastcall MiProbeLeafPteAccess(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rbx
  int v3; // ebp
  ULONG_PTR v5; // r15
  int v6; // r9d
  int v7; // r14d
  unsigned __int64 v9; // rcx
  int v10; // r9d
  _QWORD *v11; // r8
  ULONG_PTR v12; // rdi
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  int v15; // ecx
  int v16; // eax
  unsigned __int64 v17; // r8
  char v18; // al
  __int64 result; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  int v22; // ebx
  int v23; // ebx
  __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  char v27; // cl
  __int64 v28; // rdx
  __int64 v29; // r9
  __int64 v30; // r11
  __int64 v31; // rax
  __int64 v32; // r13
  int v33; // ebx
  __int64 CloneAddress; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 40);
  v3 = 0;
  v5 = *(_QWORD *)a1;
  v6 = *(_DWORD *)(a1 + 64) & 0xF;
  v7 = *(_DWORD *)(a1 + 88);
  *a2 = 0;
  v38 = v2;
  if ( (v2 & 4) == 0 && v6 == 1 )
  {
    ++dword_1404662C8;
    return 3221225477LL;
  }
  v9 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v38) >> 12) & 0xFFFFFFFFFLL);
  if ( (*(_QWORD *)(v9 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0 )
  {
    v11 = (_QWORD *)qword_140465BC8;
    v12 = v9 - 0x58000000000LL;
    if ( qword_140465BC8 )
    {
      if ( ((*(_QWORD *)(v12 + 40) >> 54) & 7) == 1 )
      {
        v25 = v9 / 0x30;
        if ( qword_140465BC8 )
        {
          do
          {
            v26 = v11[3];
            if ( v25 < v26 )
            {
              v11 = (_QWORD *)*v11;
            }
            else
            {
              if ( v25 - v26 < v11[4] )
              {
                ++dword_1404662F8;
                return 3221225477LL;
              }
              v11 = (_QWORD *)v11[1];
            }
          }
          while ( v11 );
        }
      }
    }
    v13 = *(_QWORD *)(v12 + 40);
    if ( (v13 & 0x200000000000000LL) == 0 )
    {
      v14 = (__int64)(*(_QWORD *)(v12 + 8) << 25) >> 16;
      if ( v14 >= 0xFFFFF68000000000uLL && v14 <= 0xFFFFF6FFFFFFFFFFuLL && (v13 & 0xFFFFFFFFFLL) != 0xFFFFFFFFDLL )
      {
        v27 = *(_BYTE *)(v12 + 34);
        if ( ((v27 & 0x20) == 0 || (*(_QWORD *)(v12 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 || !*(_WORD *)(v12 + 32))
          && (v27 & 8) == 0
          && ((*(_QWORD *)v12 >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL) != 0xFFFF800000000030uLL )
        {
          ++dword_1404662F4;
          return 3221225477LL;
        }
      }
    }
  }
  else
  {
    v12 = 0LL;
  }
  v15 = 0;
  if ( v5 >= 0xFFFF800000000000uLL )
    v16 = byte_140467440[((v5 >> 39) & 0x1FF) - 256];
  else
    v16 = 0;
  if ( v10 == 6 && v16 == 12 )
    v15 = 1;
  v17 = 0x8000000000000000uLL;
  if ( v7 == 3 )
  {
    if ( v5 > 0x7FFFFFFEFFFFLL )
      return 3221225477LL;
    if ( v2 < 0 )
    {
      if ( (v2 & 0x800) != 0 )
        return 3221225496LL;
      goto LABEL_32;
    }
LABEL_11:
    if ( (v2 & 0x800) != 0 )
    {
      if ( (v2 & 0x42) == 0
        && v10 == 1
        && ((*(_DWORD *)(*(_QWORD *)(a1 + 80) + 780LL) & 0x8000) != 0
         || !(unsigned int)MiOkToSetPteDirtyForNotValidFault(v2, v5)) )
      {
        MiUnlockProbePacketWorkingSet(a1);
        v22 = MmAccessFault(2uLL, v5);
        MiLockProbePacketWorkingSet(a1);
        if ( v22 < 0 )
        {
          ++dword_1404662C0;
          return (unsigned int)v22;
        }
        goto LABEL_49;
      }
      goto LABEL_13;
    }
LABEL_32:
    if ( v7 != 3 && (v10 != 6 || !v15) )
    {
      *a2 = 2;
      return 0LL;
    }
    if ( v12 )
    {
      v21 = *(_QWORD *)(v12 + 40);
      if ( (v21 & 0x200000000000000LL) == 0 )
      {
        if ( (MiFlags & 0x8000) != 0 && ((v21 >> 54) & 7) == 3 )
          MiClearPfnImageVerified(v12);
        return 0LL;
      }
    }
    goto LABEL_47;
  }
  if ( v7 )
    goto LABEL_11;
  if ( v15 )
  {
    if ( !v12 )
      return 0LL;
    if ( (*(_QWORD *)(v12 + 40) & 0x200000000000000LL) != 0
      && ((unsigned int)MiCanPageMove(v12) == 1 || (unsigned int)MiIsPfnFileOnly(v12, v28, v17, v29) == 1) )
    {
      v31 = *(_QWORD *)(v12 + 16);
      if ( (v31 & 0x400) == 0 )
        goto LABEL_87;
      if ( qword_140465B00 && (v31 & 0x10) == 0 )
        v31 &= ~qword_140465B00;
      if ( (*(_DWORD *)(*(_QWORD *)(v31 >> 16) + 56LL) & 0x20) != 0 )
      {
LABEL_87:
        v32 = MiLookupDataTableEntry(((*(_QWORD *)(a1 + 16) << 25) - (v30 << 25)) >> 16, 2LL);
        if ( v32 )
        {
          MiUnlockProbePacketWorkingSet(a1);
          v33 = MiSplitDriverPage(v32, *(_QWORD *)(a1 + 16));
          MiLockProbePacketWorkingSet(a1);
          if ( v33 >= 0 )
            goto LABEL_49;
          ++dword_1404662F0;
          return (unsigned int)v33;
        }
        v17 = 0x8000000000000000uLL;
      }
    }
  }
LABEL_13:
  if ( !v12 )
    return 0LL;
  v18 = *(_BYTE *)(v12 + 34);
  if ( (v18 & 0x20) != 0 && (v18 & 8) == 0 && (*(_QWORD *)(v12 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 )
    return 0LL;
  if ( ((*(_QWORD *)(v12 + 40) >> 54) & 7) == 1 || *(__int64 *)(v12 + 8) < 0 )
  {
    if ( v7 )
      return 0LL;
    if ( (*(_QWORD *)(v12 + 40) & 0x200000000000000LL) == 0 )
      return 0LL;
    v20 = *(_QWORD *)(a1 + 80);
    if ( !v20 )
      return 0LL;
    if ( (*(_DWORD *)(a1 + 64) & 0x10) == 0 )
      return 0LL;
    CloneAddress = MiLocateCloneAddress(v20, v17 | *(_QWORD *)(v12 + 8));
    if ( !CloneAddress )
      return 0LL;
    if ( *(_QWORD *)(*(_QWORD *)(v35 + 1296) + 360LL) > *(_QWORD *)(CloneAddress + 96) )
      goto LABEL_102;
  }
LABEL_47:
  if ( v7 == 3 )
  {
    if ( (v2 & v17) != 0 )
      return 3221225541LL;
    v24 = *(_QWORD *)(a1 + 80);
    if ( v24 )
    {
      if ( (*(_DWORD *)(a1 + 64) & 0x10) != 0 )
      {
        v36 = MiLocateCloneAddress(v24, v17 | *(_QWORD *)(v12 + 8));
        if ( v36 )
        {
          if ( *(_QWORD *)(*(_QWORD *)(v37 + 1296) + 360LL) <= *(_QWORD *)(v36 + 96) )
            goto LABEL_48;
LABEL_102:
          result = MiSplitReducedCommitClonePage(a1);
          if ( (int)result >= 0 )
            goto LABEL_49;
          ++dword_1404662EC;
          return result;
        }
      }
    }
    if ( (v2 & 0x200) != 0 || *(__int64 *)(v12 + 8) >= 0 )
      goto LABEL_48;
    if ( MiProcessCommitIntact(v5) )
    {
      ++*(_QWORD *)(a1 + 104);
      v3 = 1;
      goto LABEL_48;
    }
    return 3221225477LL;
  }
LABEL_48:
  v23 = MiCopyOnWrite(v5, *(_QWORD *)(a1 + 16), 0xFFFFFFFFFFFFFFFFuLL, 0);
  if ( v23 >= 0 )
  {
LABEL_49:
    *a2 = 1;
    return 0LL;
  }
  if ( v3 )
    --*(_QWORD *)(a1 + 104);
  if ( *(_BYTE *)(a1 + 68) != 2 && (*(_DWORD *)(*(_QWORD *)(a1 + 72) + 1764LL) & 0xC) == 0 )
  {
    MiUnlockProbePacketWorkingSet(a1);
    MiCopyOnWriteCheckConditions(*(_QWORD *)(a1 + 96), (unsigned int)v23);
    MiLockProbePacketWorkingSet(a1);
    goto LABEL_49;
  }
  ++dword_1404662F0;
  return 3221225495LL;
}
