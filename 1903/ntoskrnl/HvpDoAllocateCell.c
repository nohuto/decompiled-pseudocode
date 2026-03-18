/*
 * XREFs of HvpDoAllocateCell @ 0x14062E6C4
 * Callers:
 *     HvAllocateCell @ 0x14062E37C (HvAllocateCell.c)
 *     HvReallocateCell @ 0x14062EFDC (HvReallocateCell.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     HvpEnlistFreeCell @ 0x1405D52F8 (HvpEnlistFreeCell.c)
 *     HvpDelistFreeCell @ 0x14062E08C (HvpDelistFreeCell.c)
 *     HvpRemoveFreeCellHint @ 0x14062E3D0 (HvpRemoveFreeCellHint.c)
 *     HvpFindFreeCell @ 0x14062E8FC (HvpFindFreeCell.c)
 *     HvpAddBin @ 0x14065F368 (HvpAddBin.c)
 */

__int64 __fastcall HvpDoAllocateCell(ULONG_PTR BugCheckParameter2, unsigned int a2, int a3, _QWORD *a4, __int64 *a5)
{
  __int64 v5; // r14
  _QWORD *v6; // r15
  volatile signed __int64 *v9; // rbx
  unsigned int FreeCell; // r12d
  unsigned int *v11; // rdi
  char v12; // cl
  unsigned int v13; // r8d
  unsigned int v14; // r15d
  __int64 v15; // r8
  unsigned int v16; // r8d
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // [rsp+38h] [rbp-18h] BYREF
  __int64 v25; // [rsp+40h] [rbp-10h] BYREF

  v24 = 0xFFFFFFFFLL;
  v5 = a2;
  v6 = a4;
  v9 = (volatile signed __int64 *)(BugCheckParameter2 + 80);
  ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 80, 0LL);
  FreeCell = HvpFindFreeCell(BugCheckParameter2, (__int64)&v25, (__int64)&v24);
  if ( FreeCell != -1 )
  {
    v11 = (unsigned int *)v25;
    v12 = 0;
    goto LABEL_3;
  }
  v22 = HvpAddBin(BugCheckParameter2);
  if ( v22 != -1 )
  {
    FreeCell = v22 + 32;
    v23 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8))(
            BugCheckParameter2,
            (unsigned int)(v22 + 32),
            &v24);
    if ( v23 )
    {
      v11 = (unsigned int *)(v23 - 4);
      v25 = v23 - 4;
      if ( v23 != 4 )
      {
        v12 = 1;
LABEL_3:
        v13 = *v11;
        if ( (int)v5 + 8 > *v11 )
        {
          HvpDelistFreeCell(BugCheckParameter2, FreeCell);
          *v11 = -*v11;
          goto LABEL_13;
        }
        v14 = v13 - v5;
        *(unsigned int *)((char *)v11 + v5) = v13 - v5;
        *v11 = -(int)v5;
        if ( v12 )
        {
          v21 = FreeCell + (unsigned int)v5;
        }
        else
        {
          v15 = (v13 >> 3) - 1;
          if ( (unsigned int)v15 >= 0x10 )
          {
            v16 = (unsigned int)v15 >> 4;
            if ( v16 > 0xFF )
            {
              v15 = 23LL;
            }
            else
            {
              _BitScanReverse(&v17, v16);
              v15 = v17 + 16;
            }
          }
          v18 = (v14 >> 3) - 1;
          if ( v18 >= 0x10 )
          {
            v19 = v18 >> 4;
            if ( v19 > 0xFF )
            {
              v18 = 23;
            }
            else
            {
              _BitScanReverse(&v19, v19);
              v18 = v19 + 16;
            }
          }
          if ( (_DWORD)v15 == v18 )
            goto LABEL_12;
          HvpRemoveFreeCellHint(BugCheckParameter2, FreeCell, v15, a3, 0);
          v21 = FreeCell + (unsigned int)v5;
        }
        HvpEnlistFreeCell(BugCheckParameter2, v21, v14, a3);
LABEL_12:
        v6 = a4;
LABEL_13:
        if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v9);
        KeAbPostRelease((ULONG_PTR)v9);
        if ( v6 )
        {
          *v6 = v25 + 4;
          *a5 = v24;
        }
        else
        {
          (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v24);
        }
        return FreeCell;
      }
    }
  }
  if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v9);
  KeAbPostRelease((ULONG_PTR)v9);
  return 0xFFFFFFFFLL;
}
