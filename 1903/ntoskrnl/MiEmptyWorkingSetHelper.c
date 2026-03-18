/*
 * XREFs of MiEmptyWorkingSetHelper @ 0x140156CA8
 * Callers:
 *     MiEmptyPte @ 0x140156C10 (MiEmptyPte.c)
 *     MiUpdateOldPteWorker @ 0x1402C9580 (MiUpdateOldPteWorker.c)
 * Callees:
 *     MiFreeWsleList @ 0x140024C50 (MiFreeWsleList.c)
 *     MiInsertTbFlushEntry @ 0x140058CD0 (MiInsertTbFlushEntry.c)
 *     MI_WSLE_LOG_ACCESS @ 0x14005DF18 (MI_WSLE_LOG_ACCESS.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWalkVaCheckCommon @ 0x140156DE4 (MiWalkVaCheckCommon.c)
 */

__int64 __fastcall MiEmptyWorkingSetHelper(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // r9
  BOOL v9; // r9d
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  v6 = (__int64)(a2 << 25) >> 16;
  v11 = MI_READ_PTE_LOCK_FREE(a2);
  v7 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v11) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v9 = v6 < v8 || v6 > 0xFFFFF6FFFFFFFFFFuLL;
  if ( !(unsigned int)MiWalkVaCheckCommon(a1, a2, v7, v9, (__int64)&v11)
    || *(_WORD *)(v7 + 32) > 1u && (*(_BYTE *)(a1 + 184) & 7) != 0 )
  {
    return 0LL;
  }
  if ( dword_140466368 )
    MI_WSLE_LOG_ACCESS(a1, (_BYTE *)a2);
  MiInsertTbFlushEntry(a3, v6, 1LL, 0);
  if ( *(_DWORD *)(a3 + 12) == *(_DWORD *)(a3 + 8) )
    MiFreeWsleList(a1, a3, 0);
  return 1LL;
}
