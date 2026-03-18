/*
 * XREFs of MiMakeDriverPagesPrivate @ 0x1400F7144
 * Callers:
 *     MiLockCode @ 0x1400F5930 (MiLockCode.c)
 *     MiSetSystemCodeProtection @ 0x1400F6CD8 (MiSetSystemCodeProtection.c)
 *     MiLockDriverPageRange @ 0x1402BD4B4 (MiLockDriverPageRange.c)
 *     MiBackSingleImageWithPagefile @ 0x140739908 (MiBackSingleImageWithPagefile.c)
 *     MiSplitDriverPage @ 0x140887E74 (MiSplitDriverPage.c)
 * Callees:
 *     MiSessionLookupImage @ 0x1400172D0 (MiSessionLookupImage.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     MiCopyOnWrite @ 0x140059090 (MiCopyOnWrite.c)
 *     MiLockWorkingSetShared @ 0x14005D630 (MiLockWorkingSetShared.c)
 *     MiGetSessionVm @ 0x140075D74 (MiGetSessionVm.c)
 *     MiGetAnyMultiplexedVm @ 0x14008D9C0 (MiGetAnyMultiplexedVm.c)
 *     MiGetWsleContents @ 0x14008DDD0 (MiGetWsleContents.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140091A00 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUseSlabAllocatorForDriverPage @ 0x1400A169C (MiUseSlabAllocatorForDriverPage.c)
 *     MiAddLockedPageCharge @ 0x1400A7374 (MiAddLockedPageCharge.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MmAccessFault @ 0x1400CA7B0 (MmAccessFault.c)
 *     MiLockPageTableInternal @ 0x1400CBB80 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiIsPfnFromSlabAllocation @ 0x1400D9CC0 (MiIsPfnFromSlabAllocation.c)
 *     MiRemoveSystemImagePage @ 0x1400F6224 (MiRemoveSystemImagePage.c)
 *     MiReleaseFreshPage @ 0x1400F62CC (MiReleaseFreshPage.c)
 *     MiDriverPageMustStayResident @ 0x1400F6938 (MiDriverPageMustStayResident.c)
 *     MiUnlockLoaderEntry @ 0x1400F7668 (MiUnlockLoaderEntry.c)
 *     MiLockLoaderEntry @ 0x1400F78A4 (MiLockLoaderEntry.c)
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     MiCheckSlabPage @ 0x1402DB76C (MiCheckSlabPage.c)
 *     MiAllocateDriverPage @ 0x14066D148 (MiAllocateDriverPage.c)
 */

__int64 __fastcall MiMakeDriverPagesPrivate(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int8 a4)
{
  unsigned int v4; // edi
  unsigned __int64 v5; // rsi
  unsigned __int64 SessionVm; // rax
  __int64 v8; // rdx
  int v9; // r8d
  char v10; // r9
  __int64 v11; // r10
  __int64 v12; // rbp
  __int64 v13; // r13
  __int64 v14; // rbx
  __int64 v15; // rbx
  int v16; // ecx
  int v17; // eax
  unsigned __int64 v18; // r14
  ULONG_PTR DriverPage; // r15
  __int64 v20; // r12
  __int64 v21; // rax
  ULONG_PTR v22; // rbx
  unsigned __int64 v23; // rax
  unsigned __int8 v24; // r9
  __int64 v25; // r10
  ULONG_PTR v26; // rbp
  unsigned int v28; // ebx
  BOOL IsPfnFromSlabAllocation; // eax
  int v30; // r8d
  ULONG_PTR v31; // r14
  __int64 v32; // r8
  char v33; // al
  __int64 v34; // r9
  __int64 v35; // rbx
  __int64 v36; // rbp
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // r8
  char v40; // [rsp+30h] [rbp-B8h]
  __int64 v41; // [rsp+38h] [rbp-B0h]
  int v42; // [rsp+40h] [rbp-A8h]
  unsigned int v43; // [rsp+44h] [rbp-A4h] BYREF
  int v44; // [rsp+48h] [rbp-A0h]
  int v45; // [rsp+4Ch] [rbp-9Ch] BYREF
  int v46; // [rsp+50h] [rbp-98h] BYREF
  int v47; // [rsp+54h] [rbp-94h] BYREF
  unsigned __int64 v48; // [rsp+58h] [rbp-90h]
  unsigned __int64 v49; // [rsp+60h] [rbp-88h]
  unsigned __int64 v50; // [rsp+68h] [rbp-80h]
  __int64 v51; // [rsp+70h] [rbp-78h]
  _QWORD *v52; // [rsp+78h] [rbp-70h]
  __int64 v53; // [rsp+80h] [rbp-68h]
  __int64 v54; // [rsp+88h] [rbp-60h] BYREF
  __int64 v55; // [rsp+90h] [rbp-58h]
  unsigned __int8 v57; // [rsp+F8h] [rbp+10h]

  v4 = 0;
  v5 = a2;
  v52 = 0LL;
  v40 = 0;
  v51 = 0LL;
  if ( (unsigned int)MiGetSystemRegionType((__int64)(a2 << 25) >> 16) == 1 )
  {
    v48 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[1];
    SessionVm = MiGetSessionVm();
    v9 = 1;
  }
  else
  {
    v48 = 0LL;
    SessionVm = (unsigned __int64)MiGetAnyMultiplexedVm(1);
  }
  v12 = v8 + 160;
  v13 = SessionVm;
  v14 = *(_QWORD *)(v8 + 48) >> 9;
  v41 = v8 + 160;
  v53 = *(_QWORD *)(qword_140466188 + 8LL * *(unsigned __int16 *)(SessionVm + 174));
  v15 = v11 + (v14 & 0x7FFFFFFFF8LL);
  v16 = 0;
  if ( (v10 & 3) == 0 && ((unsigned __int8)v9 & BYTE2(MiFlags)) != 0 && (MiFlags & 0x8000) != 0 )
    v16 = 2;
  v49 = 0LL;
  v17 = v9 | v16;
  v50 = 0LL;
  v18 = 0LL;
  v42 = v10 & 4;
  if ( (v10 & 4) == 0 )
    v17 = v16;
  v44 = v17;
  DriverPage = -1LL;
  MiLockLoaderEntry(v12, 0LL);
  v55 = *(_QWORD *)(v12 + 112);
  v57 = MiLockWorkingSetShared(v13);
  if ( v5 <= a3 )
  {
    v20 = v5 - v15;
    do
    {
      if ( v18 )
      {
        if ( (v5 & 0xFFF) != 0 )
          goto LABEL_11;
        MiUnlockPageTableInternal(v13);
      }
      v18 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v49 = v18;
      MiLockPageTableInternal(v13, v18, 0LL);
LABEL_11:
      v21 = MI_READ_PTE_LOCK_FREE(v5);
      v54 = v21;
      v22 = v21;
      if ( !v21 )
        goto LABEL_15;
      if ( (v21 & 1) == 0 )
      {
        if ( (v21 & 0x400) != 0 )
        {
          MiUnlockPageTableInternal(v13);
          MiUnlockWorkingSetShared(v13, v57);
          MiUnlockLoaderEntry(v12, 0LL);
          v36 = (__int64)((v5 << 25) - v51) >> 16;
          v37 = MmAccessFault(0LL, v36, 0, 0LL);
          if ( v37 < 0 )
            KeBugCheckEx(0x1Au, 0x3000uLL, v36, v22, v37);
          v12 = v41;
          MiLockLoaderEntry(v41, 0LL);
          MiLockWorkingSetShared(v13);
          MiLockPageTableInternal(v13, v18, 0LL);
          continue;
        }
        goto LABEL_15;
      }
      v23 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v54);
      v26 = v25 + 48 * ((v23 >> 12) & 0xFFFFFFFFFLL);
      if ( (*(_QWORD *)(v26 + 40) & 0x200000000000000LL) == 0
        || *(__int64 *)(v26 + 8) >= 0
        || (a4 & v24) != 0 && ((v22 & 0x800) != 0 || (v22 & 0x200) == 0) )
      {
        goto LABEL_14;
      }
      v28 = (*(_DWORD *)(v26 + 16) >> 5) & 0x1F;
      if ( (v24 & BYTE2(MiFlags)) != 0 && (v48 || (a4 & 2) != 0) && ((*(_DWORD *)(v26 + 16) >> 5) & 2) != 0 )
      {
        v4 = -1073741755;
        break;
      }
      if ( v42 && ((unsigned __int8)*(_DWORD *)(v41 + 36) & v24) == 0 && (*(_BYTE *)(v26 + 35) & 8) != 0 )
      {
        v12 = v41;
        goto LABEL_15;
      }
      if ( DriverPage != -1LL )
      {
        MiUseSlabAllocatorForDriverPage(v53, v28, &v43);
        IsPfnFromSlabAllocation = MiIsPfnFromSlabAllocation(48 * DriverPage - 0x58000000000LL);
        if ( v30 )
        {
          if ( IsPfnFromSlabAllocation && (unsigned int)MiCheckSlabPage(48 * DriverPage - 0x58000000000LL, v43, v28) )
            goto LABEL_32;
        }
        else if ( !IsPfnFromSlabAllocation )
        {
LABEL_32:
          if ( DriverPage != -1LL )
          {
            v31 = (__int64)((v5 << 25) - v51) >> 16;
            MiCopyOnWrite(v31, v5, DriverPage, v44);
            v32 = a1;
            if ( !v48 || v52 )
            {
              v33 = v40;
              LOBYTE(v34) = 1;
            }
            else
            {
              v52 = MiSessionLookupImage(*(_QWORD *)(a1 + 48));
              LOBYTE(v34) = 1;
              v33 = v40;
              if ( *((_BYTE *)v52 + 64) )
                v33 = 1;
              v40 = v33;
            }
            if ( v33 && MiDriverPageMustStayResident(v32, v5) )
            {
              v45 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v45);
                while ( *(__int64 *)(v26 + 24) < 0 );
              }
              MiRemoveLockedPageChargeAndDecRef(v26, v38, v39, v34);
              _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v35 = 48 * DriverPage - 0x58000000000LL;
              v46 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v35 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v46);
                while ( *(__int64 *)(v35 + 24) < 0 );
              }
              MiAddLockedPageCharge(48 * DriverPage - 0x58000000000LL, 1);
              _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              LOBYTE(v34) = 1;
            }
            else
            {
              v35 = 48 * DriverPage - 0x58000000000LL;
            }
            DriverPage = -1LL;
            if ( ((unsigned __int8)v34 & BYTE2(MiFlags)) != 0 && ((*(_QWORD *)(v35 + 40) >> 54) & 7) == 3 )
            {
              _bittestandset(*(signed __int32 **)(v55 + 8), v20 >> 3);
              if ( (MiGetWsleContents(v20 >> 3, v31) & 0xF) != 9 )
              {
                v47 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v35 + 24), 0x3FuLL) )
                {
                  do
                    KeYieldProcessorEx(&v47);
                  while ( *(__int64 *)(v35 + 24) < 0 );
                }
                MiRemoveSystemImagePage(v13, v5, v35);
                _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              }
            }
            v18 = v49;
LABEL_14:
            v12 = v41;
LABEL_15:
            v5 += 8LL;
            v20 += 8LL;
            continue;
          }
          v18 = v49;
          goto LABEL_42;
        }
        if ( v50 != v5 )
        {
          MiReleaseFreshPage(48 * DriverPage - 0x58000000000LL);
          DriverPage = -1LL;
          v50 = v5;
        }
        goto LABEL_32;
      }
LABEL_42:
      MiUnlockPageTableInternal(v13);
      MiUnlockWorkingSetShared(v13, v57);
      v12 = v41;
      MiUnlockLoaderEntry(v41, 0LL);
      DriverPage = MiAllocateDriverPage(v53, v28);
      MiLockLoaderEntry(v41, 0LL);
      MiLockWorkingSetShared(v13);
      MiLockPageTableInternal(v13, v18, 0LL);
      if ( DriverPage == -1LL )
      {
        v4 = -1073741801;
        break;
      }
    }
    while ( v5 <= a3 );
  }
  MiUnlockPageTableInternal(v13);
  MiUnlockWorkingSetShared(v13, v57);
  MiUnlockLoaderEntry(v41, 0LL);
  if ( DriverPage != -1LL )
    MiReleaseFreshPage(48 * DriverPage - 0x58000000000LL);
  return v4;
}
