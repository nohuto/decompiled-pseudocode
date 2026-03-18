/*
 * XREFs of ?IncreaseMonitorUniquenessAllSessions@DXGSESSIONMGR@@QEAAXXZ @ 0x1C00B7518
 * Callers:
 *     DxgkIncreaseMonitorUniqueness @ 0x1C00B74EC (DxgkIncreaseMonitorUniqueness.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 */

void __fastcall DXGSESSIONMGR::IncreaseMonitorUniquenessAllSessions(DXGSESSIONMGR *this)
{
  __int64 i; // rbx
  __int64 v3; // rcx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 18); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * i);
    if ( v3 )
    {
      if ( *(_QWORD *)(v3 + 18520) )
      {
        KeStackAttachProcess(*(PRKPROCESS *)(v3 + 18624), &ApcState);
        _InterlockedIncrement(*(volatile signed __int32 **)(*(_QWORD *)(*((_QWORD *)this + 5) + 8 * i) + 18520LL));
        KeUnstackDetachProcess(&ApcState);
      }
    }
  }
}
