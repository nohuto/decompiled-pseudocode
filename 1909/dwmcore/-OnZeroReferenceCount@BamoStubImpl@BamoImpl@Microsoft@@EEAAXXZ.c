/*
 * XREFs of ?OnZeroReferenceCount@BamoStubImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x180195300
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ??0ConditionalDropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x180188A98 (--0ConditionalDropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 */

void __fastcall Microsoft::BamoImpl::BamoStubImpl::OnZeroReferenceCount(Microsoft::BamoImpl::BamoStubImpl *this)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::ConditionalDropAndReacquireLock::ConditionalDropAndReacquireLock(
    (Microsoft::BamoImpl::ConditionalDropAndReacquireLock *)&v4,
    *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL) + 24LL));
  v2 = (*(__int64 (__fastcall **)(Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)this + 24LL))(this);
  if ( v2 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 24LL))(v2, 1LL);
  v3 = v4;
  if ( v4 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 96));
    *(_DWORD *)(v3 + 136) = GetCurrentThreadId();
  }
}
