/*
 * XREFs of ?Thunk_OnContinueProcessing_198@?$ISystemButtonEventControllerProxy_Receive@VBamoSystemButtonEventControllerProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800301C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x1800277C0 (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??1DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x18005AA20 (--1DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ISystemButtonEventControllerProxy_Receive<BamoImpl::BamoSystemButtonEventControllerProxyImpl>::Thunk_OnContinueProcessing_198(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  char v5; // [rsp+40h] [rbp+8h] BYREF

  v2 = a1;
  v3 = *a2;
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v5,
    *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 24LL));
  LODWORD(v2) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v2 - 16) + 56LL))(v2 - 16, v3);
  Microsoft::BamoImpl::DropAndReacquireLock::~DropAndReacquireLock((Microsoft::BamoImpl::DropAndReacquireLock *)&v5);
  return (unsigned int)v2;
}
