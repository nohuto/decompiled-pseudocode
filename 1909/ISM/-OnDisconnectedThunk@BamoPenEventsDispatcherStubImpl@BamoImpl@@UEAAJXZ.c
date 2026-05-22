/*
 * XREFs of ?OnDisconnectedThunk@BamoPenEventsDispatcherStubImpl@BamoImpl@@UEAAJXZ @ 0x180032310
 * Callers:
 *     <none>
 * Callees:
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x1800272E0 (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??1DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x18005A7C0 (--1DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoPenEventsDispatcherStubImpl::OnDisconnectedThunk(
        BamoImpl::BamoPenEventsDispatcherStubImpl *this)
{
  BamoImpl::BamoPenEventsDispatcherStubImpl *v1; // rbx
  __int64 v2; // rdi
  char v4; // [rsp+40h] [rbp+8h] BYREF

  v1 = this;
  v2 = *((_QWORD *)this + 3);
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v4,
    *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL) + 24LL));
  LODWORD(v1) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v2 - 16) + 64LL))(v2 - 16, (__int64)v1 - 16);
  Microsoft::BamoImpl::DropAndReacquireLock::~DropAndReacquireLock((Microsoft::BamoImpl::DropAndReacquireLock *)&v4);
  return (unsigned int)v1;
}
