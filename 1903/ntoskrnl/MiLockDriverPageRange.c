/*
 * XREFs of MiLockDriverPageRange @ 0x1402BD4B4
 * Callers:
 *     MiLockHotPatchPages @ 0x14088F438 (MiLockHotPatchPages.c)
 *     MiLockHotPatchUndoPages @ 0x14088F4D0 (MiLockHotPatchUndoPages.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiLockProtoPoolPage @ 0x140054D30 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x140054F90 (MiUnlockProtoPoolPage.c)
 *     MiCopyOnWrite @ 0x140059090 (MiCopyOnWrite.c)
 *     MiCaptureDirtyBitToPfn @ 0x14005C184 (MiCaptureDirtyBitToPfn.c)
 *     MiLockWorkingSetShared @ 0x14005D630 (MiLockWorkingSetShared.c)
 *     MiReleasePageFileInfo @ 0x140088F50 (MiReleasePageFileInfo.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MmAccessFault @ 0x1400CA7B0 (MmAccessFault.c)
 *     MiLockPageTableInternal @ 0x1400CBB80 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiMakeDriverPagesPrivate @ 0x1400F7144 (MiMakeDriverPagesPrivate.c)
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 *     MiReferenceDriverPage @ 0x140155704 (MiReferenceDriverPage.c)
 *     KeSetPagePrivilege @ 0x1402A4778 (KeSetPagePrivilege.c)
 *     MiCopyOnWriteCheckConditions @ 0x1402E575C (MiCopyOnWriteCheckConditions.c)
 */

__int64 __fastcall MiLockDriverPageRange(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, char a5, int a6)
{
  unsigned int v6; // edi
  unsigned __int64 v8; // r13
  ULONG_PTR v9; // r15
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rsi
  unsigned __int8 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rbx
  unsigned __int64 v15; // r12
  __int64 v16; // rbx
  int v17; // ebx
  __int64 v18; // r12
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rbx
  __int64 v22; // rbx
  ULONG_PTR v23; // r9
  ULONG_PTR v24; // rcx
  signed __int64 v25; // rdx
  __int64 v27; // [rsp+20h] [rbp-58h]
  __int128 v28[5]; // [rsp+28h] [rbp-50h] BYREF
  unsigned int v30; // [rsp+90h] [rbp+18h]
  unsigned __int8 v32; // [rsp+A0h] [rbp+28h]

  v30 = a3;
  v6 = 0;
  v8 = a3;
  v9 = *(_QWORD *)(*(_QWORD *)a1 + 48LL) + ((unsigned __int64)a3 << 12);
  v28[0] = 0uLL;
  v27 = 0LL;
  v10 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  while ( 2 )
  {
    v11 = 0LL;
    v12 = MiLockWorkingSetShared(a2);
    v32 = v12;
    while ( 1 )
    {
      if ( (unsigned int)v8 > a4 )
        goto LABEL_42;
      if ( v11 )
      {
        if ( (v10 & 0xFFF) != 0 )
          goto LABEL_8;
        MiUnlockPageTableInternal(a2, v11);
      }
      v11 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(a2, v11, 0LL);
LABEL_8:
      v13 = MI_READ_PTE_LOCK_FREE(v10);
      v14 = v13;
      if ( (v13 & 1) == 0 )
        break;
      v15 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(v10) >> 12) & 0xFFFFFFFFFLL;
      v16 = 48 * v15 - 0x58000000000LL;
      if ( (*(_QWORD *)(v16 + 40) & 0x200000000000000LL) != 0 )
      {
        if ( *(__int64 *)(v16 + 8) < 0 )
        {
          MiUnlockPageTableInternal(a2, v11);
          v12 = v32;
          MiUnlockWorkingSetShared(a2, v32);
          MiMakeDriverPagesPrivate(*(_QWORD *)a1, v10, v10 + 8LL * (a4 - (unsigned int)v8), 0);
LABEL_14:
          MiLockWorkingSetShared(a2);
          MiLockPageTableInternal(a2, v11, 0LL);
        }
        else
        {
          v12 = v32;
          v17 = MiCopyOnWrite(v9, v10, 0xFFFFFFFFFFFFFFFFuLL, 0);
          if ( v17 < 0 )
          {
            MiUnlockPageTableInternal(a2, v11);
            MiUnlockWorkingSetShared(a2, v32);
            MiCopyOnWriteCheckConditions(a2, (unsigned int)v17);
            goto LABEL_14;
          }
        }
      }
      else
      {
        if ( !_bittest64(*(const signed __int64 **)(a1 + 32), v8) )
        {
          a6 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&a6);
            while ( *(__int64 *)(v16 + 24) < 0 );
          }
          MiReferenceDriverPage(48 * v15 - 0x58000000000LL);
          if ( ((*(_QWORD *)(v16 + 40) >> 54) & 7) == 3 )
          {
            v18 = a1;
          }
          else
          {
            *(_QWORD *)&v28[0] = v9;
            KeSetPagePrivilege(v15, v28, 256);
            v18 = a1;
            *(_DWORD *)(a1 + 40) = 1;
          }
          v19 = MiCaptureDirtyBitToPfn(v16);
          if ( v19 )
          {
            v20 = *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v16 + 40) >> 40) & 0x3FFLL));
            v27 = v20;
          }
          else
          {
            v20 = v27;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v19 )
            MiReleasePageFileInfo(v20, v19, 1);
          _bittestandset64(*(signed __int64 **)(v18 + 32), v8);
        }
        v10 += 8LL;
        v12 = v32;
        v8 = ++v30;
        v9 += 4096LL;
      }
    }
    if ( v13 )
    {
      if ( (v13 & 0x400) == 0 )
        goto LABEL_38;
      if ( qword_140465B00 )
      {
        if ( (v13 & 0x10) != 0 )
          v14 = v13 & 0xFFFFFFFFFFFFFFEFuLL;
        else
          v14 = ~qword_140465B00 & v13;
      }
      v21 = v14 >> 16;
      if ( !MiLockProtoPoolPage(v21, 0LL) )
      {
        MiUnlockPageTableInternal(a2, v11);
        MiUnlockWorkingSetShared(a2, v12);
        v25 = v21;
        v24 = 2LL;
        goto LABEL_40;
      }
      v22 = MI_READ_PTE_LOCK_FREE(v21);
      MiUnlockProtoPoolPage(v23, 0x11u);
      if ( v22 && (unsigned __int8)v22 >> 5 )
      {
LABEL_38:
        MiUnlockPageTableInternal(a2, v11);
        MiUnlockWorkingSetShared(a2, v12);
        v24 = 0LL;
        v25 = v9;
LABEL_40:
        MmAccessFault(v24, v25, 0, 0LL);
        continue;
      }
    }
    break;
  }
  v6 = -1073741701;
LABEL_42:
  MiUnlockPageTableInternal(a2, v11);
  MiUnlockWorkingSetShared(a2, v12);
  return v6;
}
