/*
 * XREFs of ?StopTracking@AppUsageTracker@@UEAAXXZ @ 0x1800B52F0
 * Callers:
 *     <none>
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18008E838 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

void __fastcall AppUsageTracker::StopTracking(RTL_SRWLOCK *this)
{
  unsigned int Ptr; // edi
  PVOID v3; // rcx
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  wil::srwlock::lock_exclusive(this + 7, &SRWLock);
  Ptr = (unsigned int)this[8].Ptr;
  LODWORD(this[8].Ptr) = 0;
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  v3 = this[9].Ptr;
  if ( v3 )
  {
    if ( Ptr )
    {
      v4 = (*(__int64 (__fastcall **)(PVOID, _QWORD))(*(_QWORD *)v3 + 104LL))(v3, Ptr);
      if ( v4 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          107LL,
          (__int64)"pcshell\\twinui\\familyappusagemanager\\lib\\appusagetracker.cpp",
          (const char *)(unsigned int)v4);
        JUMPOUT(0x1800B5388LL);
      }
    }
  }
  (*(void (__fastcall **)(PVOID))(*(_QWORD *)this[10].Ptr + 32LL))(this[10].Ptr);
  (*(void (__fastcall **)(PVOID))(*(_QWORD *)this[11].Ptr + 32LL))(this[11].Ptr);
}
