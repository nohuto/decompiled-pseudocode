/*
 * XREFs of MiMakeDriverPagesPrivate @ 0x1400FABE4
 * Callers:
 *     MiLockCode @ 0x1400F93D0 (MiLockCode.c)
 *     MiSetSystemCodeProtection @ 0x1400FA778 (MiSetSystemCodeProtection.c)
 *     MiLockDriverPageRange @ 0x1402BD214 (MiLockDriverPageRange.c)
 *     MiBackSingleImageWithPagefile @ 0x14073BB98 (MiBackSingleImageWithPagefile.c)
 *     MiSplitDriverPage @ 0x140887694 (MiSplitDriverPage.c)
 * Callees:
 *     MiSessionLookupImage @ 0x1400176C0 (MiSessionLookupImage.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     MiCopyOnWrite @ 0x140059130 (MiCopyOnWrite.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     MiGetSessionVm @ 0x140075FE4 (MiGetSessionVm.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MmAccessFault @ 0x1400AA630 (MmAccessFault.c)
 *     MiLockPageTableInternal @ 0x1400ABA00 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiIsPfnFromSlabAllocation @ 0x1400B9B40 (MiIsPfnFromSlabAllocation.c)
 *     MiUseSlabAllocatorForDriverPage @ 0x1400C4B00 (MiUseSlabAllocatorForDriverPage.c)
 *     MiGetAnyMultiplexedVm @ 0x1400CA970 (MiGetAnyMultiplexedVm.c)
 *     MiGetWsleContents @ 0x1400CAFE0 (MiGetWsleContents.c)
 *     MiAddLockedPageCharge @ 0x1400CBA88 (MiAddLockedPageCharge.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400CED60 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiRemoveSystemImagePage @ 0x1400F9CC4 (MiRemoveSystemImagePage.c)
 *     MiReleaseFreshPage @ 0x1400F9D6C (MiReleaseFreshPage.c)
 *     MiDriverPageMustStayResident @ 0x1400FA3D8 (MiDriverPageMustStayResident.c)
 *     MiUnlockLoaderEntry @ 0x1400FB108 (MiUnlockLoaderEntry.c)
 *     MiLockLoaderEntry @ 0x1400FB344 (MiLockLoaderEntry.c)
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     MiCheckSlabPage @ 0x1402DB4CC (MiCheckSlabPage.c)
 *     MiAllocateDriverPage @ 0x140650F8C (MiAllocateDriverPage.c)
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
  char v34; // r9
  __int64 v35; // rbx
  __int64 v36; // rbp
  int v37; // eax
  char v38; // [rsp+30h] [rbp-B8h]
  __int64 v39; // [rsp+38h] [rbp-B0h]
  int v40; // [rsp+40h] [rbp-A8h]
  unsigned int v41; // [rsp+44h] [rbp-A4h] BYREF
  int v42; // [rsp+48h] [rbp-A0h]
  int v43; // [rsp+4Ch] [rbp-9Ch] BYREF
  int v44; // [rsp+50h] [rbp-98h] BYREF
  int v45; // [rsp+54h] [rbp-94h] BYREF
  unsigned __int64 v46; // [rsp+58h] [rbp-90h]
  unsigned __int64 v47; // [rsp+60h] [rbp-88h]
  unsigned __int64 v48; // [rsp+68h] [rbp-80h]
  __int64 v49; // [rsp+70h] [rbp-78h]
  _QWORD *v50; // [rsp+78h] [rbp-70h]
  __int64 v51; // [rsp+80h] [rbp-68h]
  __int64 v52; // [rsp+88h] [rbp-60h] BYREF
  __int64 v53; // [rsp+90h] [rbp-58h]
  unsigned __int8 v55; // [rsp+F8h] [rbp+10h]

  v4 = 0;
  v5 = a2;
  v50 = 0LL;
  v38 = 0;
  v49 = 0LL;
  if ( (unsigned int)MiGetSystemRegionType((__int64)(a2 << 25) >> 16) == 1 )
  {
    v46 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[1];
    SessionVm = MiGetSessionVm();
    v9 = 1;
  }
  else
  {
    v46 = 0LL;
    SessionVm = (unsigned __int64)MiGetAnyMultiplexedVm(1);
  }
  v12 = v8 + 160;
  v13 = SessionVm;
  v14 = *(_QWORD *)(v8 + 48) >> 9;
  v39 = v8 + 160;
  v51 = *(_QWORD *)(qword_140465E88 + 8LL * *(unsigned __int16 *)(SessionVm + 174));
  v15 = v11 + (v14 & 0x7FFFFFFFF8LL);
  v16 = 0;
  if ( (v10 & 3) == 0 && ((unsigned __int8)v9 & BYTE2(MiFlags)) != 0 && (MiFlags & 0x8000) != 0 )
    v16 = 2;
  v47 = 0LL;
  v17 = v9 | v16;
  v48 = 0LL;
  v18 = 0LL;
  v40 = v10 & 4;
  if ( (v10 & 4) == 0 )
    v17 = v16;
  v42 = v17;
  DriverPage = -1LL;
  MiLockLoaderEntry(v12, 0LL);
  v53 = *(_QWORD *)(v12 + 112);
  v55 = MiLockWorkingSetShared(v13);
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
      v47 = v18;
      MiLockPageTableInternal(v13, v18, 0LL);
LABEL_11:
      v21 = MI_READ_PTE_LOCK_FREE(v5);
      v52 = v21;
      v22 = v21;
      if ( !v21 )
        goto LABEL_15;
      if ( (v21 & 1) == 0 )
      {
        if ( (v21 & 0x400) != 0 )
        {
          MiUnlockPageTableInternal(v13);
          MiUnlockWorkingSetShared(v13, v55);
          MiUnlockLoaderEntry(v12, 0LL);
          v36 = (__int64)((v5 << 25) - v49) >> 16;
          v37 = MmAccessFault(0LL, v36, 0, 0LL);
          if ( v37 < 0 )
            KeBugCheckEx(0x1Au, 0x3000uLL, v36, v22, v37);
          v12 = v39;
          MiLockLoaderEntry(v39, 0LL);
          MiLockWorkingSetShared(v13);
          MiLockPageTableInternal(v13, v18, 0LL);
          continue;
        }
        goto LABEL_15;
      }
      v23 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v52);
      v26 = v25 + 48 * ((v23 >> 12) & 0xFFFFFFFFFLL);
      if ( (*(_QWORD *)(v26 + 40) & 0x200000000000000LL) == 0
        || *(__int64 *)(v26 + 8) >= 0
        || (a4 & v24) != 0 && ((v22 & 0x800) != 0 || (v22 & 0x200) == 0) )
      {
        goto LABEL_14;
      }
      v28 = (*(_DWORD *)(v26 + 16) >> 5) & 0x1F;
      if ( (v24 & BYTE2(MiFlags)) != 0 && (v46 || (a4 & 2) != 0) && ((*(_DWORD *)(v26 + 16) >> 5) & 2) != 0 )
      {
        v4 = -1073741755;
        break;
      }
      if ( v40 && ((unsigned __int8)*(_DWORD *)(v39 + 36) & v24) == 0 && (*(_BYTE *)(v26 + 35) & 8) != 0 )
      {
        v12 = v39;
        goto LABEL_15;
      }
      if ( DriverPage != -1LL )
      {
        MiUseSlabAllocatorForDriverPage(v51, v28, &v41);
        IsPfnFromSlabAllocation = MiIsPfnFromSlabAllocation(48 * DriverPage - 0x58000000000LL);
        if ( v30 )
        {
          if ( IsPfnFromSlabAllocation && (unsigned int)MiCheckSlabPage(48 * DriverPage - 0x58000000000LL, v41, v28) )
            goto LABEL_32;
        }
        else if ( !IsPfnFromSlabAllocation )
        {
LABEL_32:
          if ( DriverPage != -1LL )
          {
            v31 = (__int64)((v5 << 25) - v49) >> 16;
            MiCopyOnWrite(v31, v5, DriverPage, v42);
            v32 = a1;
            if ( !v46 || v50 )
            {
              v33 = v38;
              v34 = 1;
            }
            else
            {
              v50 = MiSessionLookupImage(*(_QWORD *)(a1 + 48));
              v34 = 1;
              v33 = v38;
              if ( *((_BYTE *)v50 + 64) )
                v33 = 1;
              v38 = v33;
            }
            if ( v33 && MiDriverPageMustStayResident(v32, v5) )
            {
              v43 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v43);
                while ( *(__int64 *)(v26 + 24) < 0 );
              }
              MiRemoveLockedPageChargeAndDecRef(v26);
              _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v35 = 48 * DriverPage - 0x58000000000LL;
              v44 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v35 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v44);
                while ( *(__int64 *)(v35 + 24) < 0 );
              }
              MiAddLockedPageCharge(48 * DriverPage - 0x58000000000LL, 1);
              _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v34 = 1;
            }
            else
            {
              v35 = 48 * DriverPage - 0x58000000000LL;
            }
            DriverPage = -1LL;
            if ( ((unsigned __int8)v34 & BYTE2(MiFlags)) != 0 && ((*(_QWORD *)(v35 + 40) >> 54) & 7) == 3 )
            {
              _bittestandset(*(signed __int32 **)(v53 + 8), v20 >> 3);
              if ( (MiGetWsleContents(v20 >> 3, v31) & 0xF) != 9 )
              {
                v45 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v35 + 24), 0x3FuLL) )
                {
                  do
                    KeYieldProcessorEx(&v45);
                  while ( *(__int64 *)(v35 + 24) < 0 );
                }
                MiRemoveSystemImagePage(v13, v5, v35);
                _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              }
            }
            v18 = v47;
LABEL_14:
            v12 = v39;
LABEL_15:
            v5 += 8LL;
            v20 += 8LL;
            continue;
          }
          v18 = v47;
          goto LABEL_42;
        }
        if ( v48 != v5 )
        {
          MiReleaseFreshPage(48 * DriverPage - 0x58000000000LL);
          DriverPage = -1LL;
          v48 = v5;
        }
        goto LABEL_32;
      }
LABEL_42:
      MiUnlockPageTableInternal(v13);
      MiUnlockWorkingSetShared(v13, v55);
      v12 = v39;
      MiUnlockLoaderEntry(v39, 0LL);
      DriverPage = MiAllocateDriverPage(v51, v28);
      MiLockLoaderEntry(v39, 0LL);
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
  MiUnlockWorkingSetShared(v13, v55);
  MiUnlockLoaderEntry(v39, 0LL);
  if ( DriverPage != -1LL )
    MiReleaseFreshPage(48 * DriverPage - 0x58000000000LL);
  return v4;
}
