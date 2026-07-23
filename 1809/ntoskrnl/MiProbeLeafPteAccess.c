/*
 * XREFs of MiProbeLeafPteAccess @ 0x1400420D0
 * Callers:
 *     MiProbeAndLockPages @ 0x140040CF0 (MiProbeAndLockPages.c)
 *     MiProbeLeafFrame @ 0x140094BAC (MiProbeLeafFrame.c)
 * Callees:
 *     MiProcessCommitIntact @ 0x140001C74 (MiProcessCommitIntact.c)
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 *     MiClearPfnImageVerified @ 0x140082944 (MiClearPfnImageVerified.c)
 *     MiLockProbePacketWorkingSet @ 0x14009374C (MiLockProbePacketWorkingSet.c)
 *     MiUnlockProbePacketWorkingSet @ 0x140093794 (MiUnlockProbePacketWorkingSet.c)
 *     MiLocateCloneAddress @ 0x1400946C8 (MiLocateCloneAddress.c)
 *     MiIsPfnFileOnly @ 0x14009C960 (MiIsPfnFileOnly.c)
 *     MiCopyOnWrite @ 0x1400B4520 (MiCopyOnWrite.c)
 *     MiLookupDataTableEntry @ 0x1400DA610 (MiLookupDataTableEntry.c)
 *     MiCanPageMove @ 0x140118464 (MiCanPageMove.c)
 *     MiOkToSetPteDirtyForNotValidFault @ 0x14011A15C (MiOkToSetPteDirtyForNotValidFault.c)
 *     MiSplitReducedCommitClonePage @ 0x1402A8680 (MiSplitReducedCommitClonePage.c)
 *     MiCopyOnWriteCheckConditions @ 0x1402CB40C (MiCopyOnWriteCheckConditions.c)
 *     MiSplitDriverPage @ 0x14084DAD8 (MiSplitDriverPage.c)
 */

__int64 __fastcall MiProbeLeafPteAccess(__int64 a1, _DWORD *a2)
{
  unsigned __int64 v2; // rbx
  int v3; // r14d
  ULONG_PTR v5; // r13
  int v6; // r8d
  int v7; // ebp
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  _QWORD *v11; // r9
  ULONG_PTR v12; // rdi
  unsigned __int64 v13; // rcx
  int v14; // ecx
  int v15; // eax
  unsigned __int64 v16; // r9
  char v17; // al
  __int64 result; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  int v21; // ebx
  int v22; // ebx
  __int64 v23; // rcx
  unsigned __int64 v24; // r9
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  char v28; // cl
  __int64 v29; // r11
  __int64 v30; // rax
  __int64 v31; // r15
  int v32; // ebx
  __int64 CloneAddress; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  unsigned __int64 v37; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 40);
  v3 = 0;
  v5 = *(_QWORD *)a1;
  v6 = *(_DWORD *)(a1 + 64) & 0xF;
  v7 = *(_DWORD *)(a1 + 88);
  *a2 = 0;
  v37 = v2;
  if ( (v2 & 4) == 0 && v6 == 1 )
  {
    ++dword_14043B8E8;
    return 3221225477LL;
  }
  if ( (unsigned __int64)&v37 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)&v37 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v9 = v2;
    if ( (MiFlags & 0xC00000) != 0 )
    {
      if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v2 & 1) != 0
        && ((v2 & 0x20) == 0 || (v2 & 0x42) == 0) )
      {
        v24 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v24 )
        {
          v9 = v2 | 0x20;
          v25 = *(_QWORD *)(v24 + 8 * (((unsigned __int64)&v37 >> 3) & 0x1FF));
          if ( (v25 & 0x20) == 0 )
            v9 = v2;
          if ( (v25 & 0x42) != 0 )
            v9 |= 0x42uLL;
        }
      }
      v2 = v37;
    }
  }
  else
  {
    v9 = v2;
  }
  v10 = 48 * ((v9 >> 12) & 0xFFFFFFFFFLL);
  if ( (*(_QWORD *)(v10 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0 )
  {
    v11 = (_QWORD *)qword_14043B248;
    v12 = v10 - 0x58000000000LL;
    if ( qword_14043B248 )
    {
      if ( ((*(_QWORD *)(v12 + 40) >> 54) & 7) == 1 )
      {
        v26 = v10 / 0x30;
        if ( qword_14043B248 )
        {
          do
          {
            v27 = v11[3];
            if ( v26 < v27 )
            {
              v11 = (_QWORD *)*v11;
            }
            else
            {
              if ( v26 - v27 < v11[4] )
              {
                ++dword_14043B918;
                return 3221225477LL;
              }
              v11 = (_QWORD *)v11[1];
            }
          }
          while ( v11 );
        }
      }
    }
    if ( (*(_QWORD *)(v12 + 40) & 0x200000000000000LL) == 0 )
    {
      v13 = (__int64)(*(_QWORD *)(v12 + 8) << 25) >> 16;
      if ( v13 >= 0xFFFFF68000000000uLL && v13 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        v28 = *(_BYTE *)(v12 + 34);
        if ( ((v28 & 0x20) == 0 || (*(_QWORD *)(v12 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 || !*(_WORD *)(v12 + 32))
          && (v28 & 8) == 0
          && ((*(_QWORD *)v12 >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL) != 0xFFFF800000000030uLL )
        {
          ++dword_14043B914;
          return 3221225477LL;
        }
      }
    }
  }
  else
  {
    v12 = 0LL;
  }
  v14 = 0;
  if ( v5 >= 0xFFFF800000000000uLL )
    v15 = (unsigned __int8)byte_14043CA10[((v5 >> 39) & 0x1FF) - 256];
  else
    v15 = 0;
  if ( v6 == 6 && v15 == 12 )
    v14 = 1;
  v16 = 0x8000000000000000uLL;
  if ( v7 == 3 )
  {
    if ( v5 > 0x7FFFFFFEFFFFLL )
      return 3221225477LL;
    if ( (v2 & 0x8000000000000000uLL) != 0 && (v2 & 0x800) != 0 )
      return 3221225496LL;
  }
  else if ( !v7 )
  {
    if ( v14 )
    {
      if ( !v12 )
        return 0LL;
      if ( (*(_QWORD *)(v12 + 40) & 0x200000000000000LL) != 0
        && ((unsigned int)MiCanPageMove(v12) == 1 || (unsigned int)MiIsPfnFileOnly(v12) == 1) )
      {
        v30 = *(_QWORD *)(v12 + 16);
        if ( (v30 & 0x400) == 0 )
          goto LABEL_100;
        if ( qword_14043B180 && (v30 & 0x10) == 0 )
          v30 &= ~qword_14043B180;
        if ( (*(_DWORD *)(*(_QWORD *)(v30 >> 16) + 56LL) & 0x20) != 0 )
        {
LABEL_100:
          v31 = MiLookupDataTableEntry(((*(_QWORD *)(a1 + 16) << 25) - (v29 << 25)) >> 16, 2LL);
          if ( v31 )
          {
            MiUnlockProbePacketWorkingSet(a1);
            v32 = MiSplitDriverPage(v31, *(_QWORD *)(a1 + 16));
            MiLockProbePacketWorkingSet(a1);
            if ( v32 >= 0 )
              goto LABEL_52;
            ++dword_14043B910;
            return (unsigned int)v32;
          }
          v16 = 0x8000000000000000uLL;
        }
      }
    }
    goto LABEL_16;
  }
  if ( (v2 & 0x800) == 0 )
  {
    if ( v7 != 3 && (v6 != 6 || !v14) )
    {
      *a2 = 2;
      return 0LL;
    }
    if ( v12 )
    {
      v20 = *(_QWORD *)(v12 + 40);
      if ( (v20 & 0x200000000000000LL) == 0 )
      {
        if ( (MiFlags & 0x8000) != 0 && ((v20 >> 54) & 7) == 3 )
          MiClearPfnImageVerified(v12);
        return 0LL;
      }
    }
    goto LABEL_50;
  }
  if ( (v2 & 0x42) == 0
    && v6 == 1
    && ((*(_DWORD *)(*(_QWORD *)(a1 + 80) + 772LL) & 0x8000) != 0
     || !(unsigned int)MiOkToSetPteDirtyForNotValidFault(v2, v5)) )
  {
    MiUnlockProbePacketWorkingSet(a1);
    v21 = MmAccessFault(2uLL, v5);
    MiLockProbePacketWorkingSet(a1);
    if ( v21 < 0 )
    {
      ++dword_14043B8E0;
      return (unsigned int)v21;
    }
    goto LABEL_52;
  }
LABEL_16:
  if ( !v12 )
    return 0LL;
  v17 = *(_BYTE *)(v12 + 34);
  if ( (v17 & 0x20) != 0 && (v17 & 8) == 0 && (*(_QWORD *)(v12 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 )
    return 0LL;
  if ( ((*(_QWORD *)(v12 + 40) >> 54) & 7) == 1 || *(__int64 *)(v12 + 8) < 0 )
  {
    if ( v7 )
      return 0LL;
    if ( (*(_QWORD *)(v12 + 40) & 0x200000000000000LL) == 0 )
      return 0LL;
    v19 = *(_QWORD *)(a1 + 80);
    if ( !v19 )
      return 0LL;
    if ( (*(_DWORD *)(a1 + 64) & 0x10) == 0 )
      return 0LL;
    CloneAddress = MiLocateCloneAddress(v19, v16 | *(_QWORD *)(v12 + 8));
    if ( !CloneAddress )
      return 0LL;
    if ( *(_QWORD *)(*(_QWORD *)(v34 + 1296) + 312LL) > *(_QWORD *)(CloneAddress + 96) )
      goto LABEL_115;
  }
LABEL_50:
  if ( v7 == 3 )
  {
    if ( (v2 & v16) != 0 )
      return 3221225541LL;
    v23 = *(_QWORD *)(a1 + 80);
    if ( v23 )
    {
      if ( (*(_DWORD *)(a1 + 64) & 0x10) != 0 )
      {
        v35 = MiLocateCloneAddress(v23, v16 | *(_QWORD *)(v12 + 8));
        if ( v35 )
        {
          if ( *(_QWORD *)(*(_QWORD *)(v36 + 1296) + 312LL) <= *(_QWORD *)(v35 + 96) )
            goto LABEL_51;
LABEL_115:
          result = MiSplitReducedCommitClonePage(a1);
          if ( (int)result >= 0 )
            goto LABEL_52;
          ++dword_14043B90C;
          return result;
        }
      }
    }
    if ( (v2 & 0x200) != 0 || *(__int64 *)(v12 + 8) >= 0 )
      goto LABEL_51;
    if ( MiProcessCommitIntact(v5) )
    {
      ++*(_QWORD *)(a1 + 104);
      v3 = 1;
      goto LABEL_51;
    }
    return 3221225477LL;
  }
LABEL_51:
  v22 = MiCopyOnWrite(v5);
  if ( v22 >= 0 )
  {
LABEL_52:
    *a2 = 1;
    return 0LL;
  }
  if ( v3 )
    --*(_QWORD *)(a1 + 104);
  if ( *(_BYTE *)(a1 + 68) != 2 && (*(_DWORD *)(*(_QWORD *)(a1 + 72) + 1748LL) & 0xC) == 0 )
  {
    MiUnlockProbePacketWorkingSet(a1);
    MiCopyOnWriteCheckConditions(*(_QWORD *)(a1 + 96), (unsigned int)v22);
    MiLockProbePacketWorkingSet(a1);
    goto LABEL_52;
  }
  ++dword_14043B910;
  return 3221225495LL;
}
