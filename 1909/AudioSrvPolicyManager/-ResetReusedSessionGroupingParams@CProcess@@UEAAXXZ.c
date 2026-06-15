/*
 * XREFs of ?ResetReusedSessionGroupingParams@CProcess@@UEAAXXZ @ 0x180014860
 * Callers:
 *     ?SetApplicationHandlesGroupingParams@CProcess@@UEAAXXZ @ 0x180016F70 (-SetApplicationHandlesGroupingParams@CProcess@@UEAAXXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000D600 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800359C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProcess::ResetReusedSessionGroupingParams(CProcess *this)
{
  _QWORD *v2; // rbx
  __int64 v3; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+28h] [rbp-10h]

  v5 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v2 = (_QWORD *)*((_QWORD *)this + 9);
  while ( v2 )
  {
    v3 = v2[2];
    v2 = (_QWORD *)*v2;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 96LL))(v3);
  }
  if ( v5 )
    LeaveCriticalSection(lpCriticalSection);
}
