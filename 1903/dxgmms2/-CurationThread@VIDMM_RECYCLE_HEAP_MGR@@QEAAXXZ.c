/*
 * XREFs of ?CurationThread@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ @ 0x1C0066EEC
 * Callers:
 *     ?VidMmRangeCurationThread@@YAXPEAX@Z @ 0x1C0066ED0 (-VidMmRangeCurationThread@@YAXPEAX@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002218 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00022C0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0018060 (__security_check_cookie.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C0068E48 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::CurationThread(VIDMM_RECYCLE_HEAP_MGR *this, __int64 a2)
{
  bool v3; // zf
  __int64 v4; // rax
  char *v5; // [rsp+28h] [rbp-50h] BYREF
  char v6; // [rsp+30h] [rbp-48h]
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-40h] BYREF

  v6 = 0;
  v5 = (char *)this + 1328;
  if ( this == (VIDMM_RECYCLE_HEAP_MGR *)-1328LL )
  {
    v4 = WdLogNewEntry5_WdAssertion(-1328LL, a2);
    *(_QWORD *)(v4 + 24) = 659LL;
    WdLogEvent5_WdAssertion(v4);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v5);
  ++*((_QWORD *)this + 196);
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(**((PRKPROCESS **)this + 1), &ApcState);
  VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceList(this, 1, 0);
  KeUnstackDetachProcess(&ApcState);
  if ( *((VIDMM_RECYCLE_HEAP_MGR **)this + 194) == (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1552)
    && *((VIDMM_RECYCLE_HEAP_MGR **)this + 192) == (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1536) )
  {
    v3 = _InterlockedCompareExchange((volatile signed __int32 *)this + 394, 2, 1) == 1;
    _InterlockedExchange((volatile __int32 *)this + 382, 0);
    if ( !v3 )
      goto LABEL_6;
  }
  else
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 394, 2, 1) != 1 )
    {
      KeSetTimer((PKTIMER)((char *)this + 1368), (LARGE_INTEGER)-2000000LL, (PKDPC)((char *)this + 1432));
      goto LABEL_6;
    }
    _InterlockedExchange((volatile __int32 *)this + 382, 0);
  }
  KeSetEvent(*((PRKEVENT *)this + 198), 0, 0);
LABEL_6:
  if ( v6 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v5);
}
