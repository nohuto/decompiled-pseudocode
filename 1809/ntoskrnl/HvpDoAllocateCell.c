/*
 * XREFs of HvpDoAllocateCell @ 0x1405FC690
 * Callers:
 *     HvReallocateCell @ 0x1405AE9CC (HvReallocateCell.c)
 *     HvAllocateCell @ 0x1405FCE54 (HvAllocateCell.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     HvpAddBin @ 0x1405A49BC (HvpAddBin.c)
 *     HvpDelistFreeCell @ 0x1405AEE60 (HvpDelistFreeCell.c)
 *     HvpFindFreeCell @ 0x1405FAA70 (HvpFindFreeCell.c)
 *     HvpEnlistFreeCell @ 0x1405FBF0C (HvpEnlistFreeCell.c)
 *     HvpRemoveFreeCellHint @ 0x1405FCB90 (HvpRemoveFreeCellHint.c)
 */

__int64 __fastcall HvpDoAllocateCell(ULONG_PTR BugCheckParameter2, unsigned int a2, int a3, _QWORD *a4, __int64 *a5)
{
  __int64 v5; // r14
  _QWORD *v6; // r15
  unsigned int v7; // edi
  volatile signed __int64 *v10; // rbx
  unsigned int FreeCell; // r12d
  unsigned int *v12; // rdi
  char v13; // cl
  unsigned int v14; // r8d
  unsigned int v15; // r15d
  unsigned int v16; // r8d
  unsigned int v17; // r8d
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  __int64 v22; // rdx
  unsigned int v23; // edi
  unsigned int v24; // eax
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // [rsp+38h] [rbp-18h] BYREF
  __int64 v28; // [rsp+40h] [rbp-10h] BYREF

  v27 = 0xFFFFFFFFLL;
  v5 = a2;
  v6 = a4;
  v7 = (a2 >> 3) - 1;
  if ( v7 >= 0x10 )
  {
    v23 = v7 >> 4;
    if ( v23 > 0xFF )
    {
      v7 = 23;
    }
    else
    {
      _BitScanReverse(&v24, v23);
      v7 = v24 + 16;
    }
  }
  v10 = (volatile signed __int64 *)(BugCheckParameter2 + 80);
  ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 80, 0LL);
  FreeCell = HvpFindFreeCell(BugCheckParameter2, v7, (unsigned int)v5, a3, (__int64)&v28, (__int64)&v27);
  if ( FreeCell != -1 )
  {
    v12 = (unsigned int *)v28;
    v13 = 0;
    goto LABEL_4;
  }
  v25 = HvpAddBin(BugCheckParameter2, v5, a3);
  if ( v25 != -1 )
  {
    FreeCell = v25 + 32;
    v26 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8))(
            BugCheckParameter2,
            (unsigned int)(v25 + 32),
            &v27);
    if ( v26 )
    {
      v12 = (unsigned int *)(v26 - 4);
      v28 = v26 - 4;
      if ( v26 != 4 )
      {
        v13 = 1;
LABEL_4:
        v14 = *v12;
        if ( (int)v5 + 8 > *v12 )
        {
          HvpDelistFreeCell(BugCheckParameter2, FreeCell);
          *v12 = -*v12;
          goto LABEL_14;
        }
        v15 = v14 - v5;
        *(unsigned int *)((char *)v12 + v5) = v14 - v5;
        *v12 = -(int)v5;
        if ( v13 )
        {
          v22 = FreeCell + (unsigned int)v5;
        }
        else
        {
          v16 = (v14 >> 3) - 1;
          if ( v16 >= 0x10 )
          {
            v17 = v16 >> 4;
            if ( v17 > 0xFF )
            {
              v16 = 23;
            }
            else
            {
              _BitScanReverse(&v18, v17);
              v16 = v18 + 16;
            }
          }
          v19 = (v15 >> 3) - 1;
          if ( v19 >= 0x10 )
          {
            v20 = v19 >> 4;
            if ( v20 > 0xFF )
            {
              v19 = 23;
            }
            else
            {
              _BitScanReverse(&v20, v20);
              v19 = v20 + 16;
            }
          }
          if ( v16 == v19 )
            goto LABEL_13;
          HvpRemoveFreeCellHint(BugCheckParameter2, FreeCell, 0);
          v22 = FreeCell + (unsigned int)v5;
        }
        HvpEnlistFreeCell(BugCheckParameter2, v22, v15, a3);
LABEL_13:
        v6 = a4;
LABEL_14:
        if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v10);
        KeAbPostRelease((ULONG_PTR)v10);
        if ( v6 )
        {
          *v6 = v28 + 4;
          *a5 = v27;
        }
        else
        {
          (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v27);
        }
        return FreeCell;
      }
    }
  }
  if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v10);
  KeAbPostRelease((ULONG_PTR)v10);
  return 0xFFFFFFFFLL;
}
