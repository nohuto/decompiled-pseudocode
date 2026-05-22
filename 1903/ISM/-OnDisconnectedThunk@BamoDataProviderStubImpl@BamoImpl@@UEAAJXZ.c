/*
 * XREFs of ?OnDisconnectedThunk@BamoDataProviderStubImpl@BamoImpl@@UEAAJXZ @ 0x18008A600
 * Callers:
 *     <none>
 * Callees:
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x1800277C0 (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoDataProviderStubImpl::OnDisconnectedThunk(BamoImpl::BamoDataProviderStubImpl *this)
{
  __int64 v2; // rdi
  unsigned int v3; // edi
  __int64 v4; // rbx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 3);
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v6,
    *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL) + 24LL));
  v3 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(v2 - 16) + 72LL))(v2 - 16, (char *)this - 16);
  v4 = v6;
  if ( v6 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v6 + 96));
    *(_DWORD *)(v4 + 136) = GetCurrentThreadId();
  }
  return v3;
}
