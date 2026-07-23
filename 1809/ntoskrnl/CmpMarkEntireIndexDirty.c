/*
 * XREFs of CmpMarkEntireIndexDirty @ 0x140800E84
 * Callers:
 *     CmRenameKey @ 0x1407EECF4 (CmRenameKey.c)
 *     CmpLightWeightDuplicateParentLists @ 0x14080512C (CmpLightWeightDuplicateParentLists.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     HvpMarkCellDirty @ 0x1405FBC04 (HvpMarkCellDirty.c)
 */

char __fastcall CmpMarkEntireIndexDirty(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  unsigned int v2; // ebx
  volatile signed __int64 *v4; // rbp
  _WORD *v5; // rdi
  char v6; // bl
  int v7; // esi
  int v9; // [rsp+40h] [rbp+8h] BYREF
  __int16 v10; // [rsp+44h] [rbp+Ch]
  __int16 v11; // [rsp+46h] [rbp+Eh]

  v11 = 0;
  v2 = BugCheckParameter3;
  v9 = -1;
  v10 = 0;
  v4 = (volatile signed __int64 *)(BugCheckParameter2 + 80);
  v5 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, ULONG_PTR, int *))(BugCheckParameter2 + 8))(
                  BugCheckParameter2,
                  BugCheckParameter3,
                  &v9);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v4, 0LL);
  v6 = HvpMarkCellDirty(BugCheckParameter2, v2, 1);
  if ( v6 )
  {
    if ( *v5 == 26994 && (v7 = 0, v5[1]) )
    {
      while ( 1 )
      {
        v6 = HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)&v5[2 * v7 + 2], 1);
        if ( !v6 )
          break;
        if ( ++v7 >= (unsigned int)(unsigned __int16)v5[1] )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      v6 = 1;
    }
  }
  if ( (_InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 + 80));
  KeAbPostRelease(BugCheckParameter2 + 80);
  if ( v5 )
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v9);
  return v6;
}
