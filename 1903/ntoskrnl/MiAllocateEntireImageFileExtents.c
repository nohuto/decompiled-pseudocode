/*
 * XREFs of MiAllocateEntireImageFileExtents @ 0x14088BC4C
 * Callers:
 *     MiCreateImageFileMap @ 0x14068AE6C (MiCreateImageFileMap.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x140072C40 (RtlAvlInsertNodeEx.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     FsRtlGetFileExtents @ 0x140282130 (FsRtlGetFileExtents.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiNewPfnsSuitable @ 0x140888E98 (MiNewPfnsSuitable.c)
 *     MiLockImageExtentsExclusive @ 0x14088CBD8 (MiLockImageExtentsExclusive.c)
 *     MiUnlockImageExtentsExclusive @ 0x14088CC08 (MiUnlockImageExtentsExclusive.c)
 */

__int64 __fastcall MiAllocateEntireImageFileExtents(struct _FILE_OBJECT *a1, unsigned __int64 a2, unsigned int **a3)
{
  __int64 v6; // r14
  unsigned int i; // ebx
  _DWORD *PoolWithTag; // rax
  __int64 v9; // rdx
  _DWORD *v10; // rdi
  int FileExtents; // esi
  unsigned int v13; // esi
  unsigned int v14; // ebx
  unsigned int *v15; // rsi
  _DWORD *v16; // rbx
  unsigned int j; // ebp
  bool v18; // r8
  unsigned __int64 v19; // r9
  char v20; // al
  _QWORD *BugCheckParameter4; // rdx
  unsigned __int64 v22; // rcx
  _QWORD *v23; // rax

  *a3 = 0LL;
  LODWORD(v6) = 1;
  for ( i = ((__rdtsc() >> 4) & 7) + 8; ; i = v13 )
  {
    while ( 1 )
    {
      if ( !i )
        return 3221225626LL;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * (i - 1) + 24, 0x6546694Du);
      v10 = PoolWithTag;
      if ( PoolWithTag )
        break;
      if ( !(_DWORD)v6 )
        return 3221225626LL;
      i >>= 1;
    }
    PoolWithTag[1] = 0;
    a2 = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    *PoolWithTag = i;
    v6 = 0LL;
    FileExtents = FsRtlGetFileExtents(a1, v9, 0LL, a2, PoolWithTag);
    if ( FileExtents < 0 )
    {
      ExFreePoolWithTag(v10, 0);
      return (unsigned int)FileExtents;
    }
    v13 = v10[1];
    if ( v13 <= i )
      break;
    v10[1] = i;
    ExFreePoolWithTag(v10, 0);
  }
  if ( !(unsigned int)MiNewPfnsSuitable((__int64)v10) )
  {
    v14 = -1073740761;
LABEL_16:
    ExFreePoolWithTag(v10, 0);
    return v14;
  }
  if ( !v13 )
  {
    v14 = -1073741823;
    goto LABEL_16;
  }
  v15 = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 48LL * (v13 - 1) + 56, 0x6546694Du);
  if ( !v15 )
  {
    v14 = -1073741670;
    goto LABEL_16;
  }
  v16 = v15 + 2;
  *v15 = v10[1];
  MiLockImageExtentsExclusive();
  for ( j = 0; j < *v15; v16 += 12 )
  {
    v18 = 0;
    v19 = *(_QWORD *)&v10[4 * j + 2];
    *((_QWORD *)v16 + 4) = v19;
    *((_QWORD *)v16 + 5) = *(_QWORD *)&v10[4 * j + 4];
    v20 = 0;
    v16[6] = v6;
    BugCheckParameter4 = (_QWORD *)qword_1404648A0;
    if ( qword_1404648A0 )
    {
      while ( 1 )
      {
        v22 = BugCheckParameter4[4];
        if ( v19 + *((_QWORD *)v16 + 5) <= v22 )
        {
          v23 = (_QWORD *)*BugCheckParameter4;
          if ( !*BugCheckParameter4 )
          {
            v18 = 0;
            goto LABEL_27;
          }
        }
        else
        {
          if ( v19 < BugCheckParameter4[5] + v22 )
          {
            v20 = 1;
            break;
          }
          v23 = (_QWORD *)BugCheckParameter4[1];
          if ( !v23 )
          {
            v18 = 1;
            goto LABEL_27;
          }
        }
        BugCheckParameter4 = v23;
      }
    }
    if ( v20 )
      KeBugCheckEx(0x1Au, 0x13003uLL, *((_QWORD *)v16 + 4), *((_QWORD *)v16 + 5), (ULONG_PTR)BugCheckParameter4);
LABEL_27:
    RtlAvlInsertNodeEx(&qword_1404648A0, (unsigned __int64)BugCheckParameter4, v18, v16);
    v6 += *((_QWORD *)v16 + 5);
    ++j;
  }
  MiUnlockImageExtentsExclusive();
  *a3 = v15;
  ExFreePoolWithTag(v10, 0);
  return 0LL;
}
