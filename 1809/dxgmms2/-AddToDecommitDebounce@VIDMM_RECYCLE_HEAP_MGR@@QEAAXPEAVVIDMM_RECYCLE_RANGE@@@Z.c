/*
 * XREFs of ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005DC44
 * Callers:
 *     ?FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C0059684 (-FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ @ 0x1C005A9F8 (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ.c)
 *     ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C005BBAC (-Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z @ 0x1C005D424 (-SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z.c)
 *     ?MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z @ 0x1C005D770 (-MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(
        VIDMM_RECYCLE_HEAP_MGR *this,
        struct VIDMM_RECYCLE_RANGE *a2)
{
  VIDMM_RECYCLE_HEAP_MGR **v3; // r8
  VIDMM_RECYCLE_HEAP_MGR *v4; // rdx
  unsigned __int64 v5; // rcx
  _QWORD *v6; // rax

  *((_QWORD *)a2 + 12) = *((_QWORD *)this + 196) + (unsigned int)dword_1C004D350;
  v3 = (VIDMM_RECYCLE_HEAP_MGR **)*((_QWORD *)this + 195);
  v4 = (struct VIDMM_RECYCLE_RANGE *)((char *)a2 + 104);
  if ( *v3 != (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1552) )
    __fastfail(3u);
  *(_QWORD *)v4 = (char *)this + 1552;
  *((_QWORD *)v4 + 1) = v3;
  *v3 = v4;
  *((_QWORD *)this + 195) = v4;
  if ( !_InterlockedExchange((volatile __int32 *)this + 382, 1) && !*((_DWORD *)this + 394) )
    KeSetTimer((PKTIMER)((char *)this + 1368), (LARGE_INTEGER)-2000000LL, (PKDPC)((char *)this + 1432));
  v5 = *((_QWORD *)a2 + 5) - *((_QWORD *)a2 + 4);
  if ( (__int64)(v5 + _InterlockedExchangeAdd64(&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedDecommit, v5)) < 0 )
  {
    if ( g_IsInternalRelease )
    {
      v6 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v5, v4);
      v6[5] = 0LL;
      v6[6] = 0LL;
      v6[7] = 0LL;
      v6[3] = 270LL;
      v6[4] = 9LL;
      WdLogEvent5_WdCriticalError(v6);
    }
  }
}
