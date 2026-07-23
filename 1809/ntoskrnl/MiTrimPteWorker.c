/*
 * XREFs of MiTrimPteWorker @ 0x1402B3F24
 * Callers:
 *     MiTrimWorkingSetEPTCallback @ 0x1402B4000 (MiTrimWorkingSetEPTCallback.c)
 * Callees:
 *     MiTrimThisWsle @ 0x140087EB0 (MiTrimThisWsle.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140088034 (MI_WSLE_LOG_ACCESS.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     MiTrimWorkingSetBuildup @ 0x14011C788 (MiTrimWorkingSetBuildup.c)
 */

__int64 __fastcall MiTrimPteWorker(
        __int64 a1,
        _BYTE *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        _DWORD *a7)
{
  __int64 v7; // rsi

  v7 = *(_QWORD *)(a1 + 24);
  if ( !(unsigned int)MiTrimThisWsle(v7, a3, a4, a5, a6, a7) )
    return 0LL;
  MiInsertTbFlushEntry(a5 + 56, a3, 1LL, 0);
  if ( (*(_DWORD *)a5 & 0x10) != 0 )
    MI_WSLE_LOG_ACCESS(v7, a2);
  if ( ((++*(_QWORD *)(a5 + 16), *(_QWORD *)(a5 + 16) == *(_QWORD *)(a5 + 8))
     || *(_DWORD *)(a5 + 68) == *(_DWORD *)(a5 + 64))
    && (MiTrimWorkingSetBuildup(a1, a5), *(_QWORD *)(a5 + 16) == *(_QWORD *)(a5 + 8)) )
  {
    return 1LL;
  }
  else
  {
    return 0LL;
  }
}
