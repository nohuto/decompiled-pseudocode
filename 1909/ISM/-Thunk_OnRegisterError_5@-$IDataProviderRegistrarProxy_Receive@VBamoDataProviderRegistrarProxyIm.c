/*
 * XREFs of ?Thunk_OnRegisterError_5@?$IDataProviderRegistrarProxy_Receive@VBamoDataProviderRegistrarProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800D1B80
 * Callers:
 *     <none>
 * Callees:
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x1800272E0 (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IDataProviderRegistrarProxy_Receive<BamoImpl::BamoDataProviderRegistrarProxyImpl>::Thunk_OnRegisterError_5(
        __int64 a1,
        unsigned int **a2)
{
  unsigned int v3; // edi
  unsigned int v4; // edi
  __int64 v5; // rbx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v3 = **a2;
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v7,
    *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 24LL));
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 16) + 56LL))(a1 - 16, v3);
  v5 = v7;
  if ( v7 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v7 + 96));
    *(_DWORD *)(v5 + 136) = GetCurrentThreadId();
  }
  return v4;
}
