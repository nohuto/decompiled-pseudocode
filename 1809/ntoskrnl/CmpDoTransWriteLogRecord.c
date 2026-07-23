/*
 * XREFs of CmpDoTransWriteLogRecord @ 0x1406F9360
 * Callers:
 *     CmpTransWriteLog @ 0x1406F9138 (CmpTransWriteLog.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall CmpDoTransWriteLogRecord(__int64 a1, char *a2, ULONG a3, ULONG fFlags, PCLFS_LSN plsn)
{
  char *v5; // rbp
  void *v6; // rcx
  NTSTATUS result; // eax
  NTSTATUS appended; // esi
  _DWORD *PoolWithTag; // rax
  _DWORD *v10; // rbx
  unsigned int v11; // r14d
  unsigned int v12; // edi
  unsigned int v13; // eax
  int v14; // ecx
  __int128 v15; // xmm0
  int v16; // r12d
  unsigned int v17; // eax
  CLFS_WRITE_ENTRY rgWriteEntries; // [rsp+50h] [rbp-48h] BYREF
  CLFS_LSN plsnUndoNext; // [rsp+A8h] [rbp+10h] BYREF
  ULONG v21; // [rsp+B8h] [rbp+20h]

  v21 = fFlags;
  v5 = a2;
  v6 = *(void **)(a1 + 96);
  plsnUndoNext.ullOffset = CLFS_LSN_NULL_EXT;
  rgWriteEntries.Buffer = a2;
  rgWriteEntries.ByteLength = a3;
  result = ClfsReserveAndAppendLog(v6, &rgWriteEntries, 1u, &plsnUndoNext, &plsnUndoNext, 0, 0LL, fFlags, plsn);
  appended = result;
  if ( result == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xC00uLL, 0x20204D43u);
    v10 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0xC00uLL);
      v11 = *((_DWORD *)v5 + 1);
      v12 = 3008;
      v13 = v11;
      if ( v11 >= 0xBC0 )
      {
        v14 = 0;
        do
        {
          ++v14;
          if ( v13 < 0xBC0 )
            break;
          v13 -= 3008;
        }
        while ( v13 );
        *(_OWORD *)v10 = *(_OWORD *)v5;
        *((_OWORD *)v10 + 1) = *((_OWORD *)v5 + 1);
        v15 = *((_OWORD *)v5 + 2);
        v10[12] = v14;
        *((_OWORD *)v10 + 2) = v15;
        v10[3] |= 0x80000000;
        v16 = 0;
        rgWriteEntries.Buffer = v10;
        do
        {
          memmove(v10 + 16, v5, v12);
          v10[13] = v16;
          v10[14] = v12;
          rgWriteEntries.ByteLength = v12 + 64;
          ++v16;
          appended = ClfsReserveAndAppendLog(
                       *(PVOID *)(a1 + 96),
                       &rgWriteEntries,
                       1u,
                       &plsnUndoNext,
                       &plsnUndoNext,
                       0,
                       0LL,
                       v21,
                       plsn);
          if ( appended < 0 )
            break;
          v11 -= v12;
          v5 += v12;
          v17 = v11;
          if ( v11 >= v12 )
            v17 = v12;
          v12 = v17;
        }
        while ( v11 );
      }
      ExFreePoolWithTag(v10, 0);
      return appended;
    }
    else
    {
      return -1073741670;
    }
  }
  return result;
}
