/*
 * XREFs of ?OnItemMessage@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEBX0I@Z @ 0x180011A70
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180010CE0 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180010D80 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::OnItemMessage(
        Microsoft::BamoImpl::ConnectionIndirector *this,
        int a2,
        __int64 a3,
        const void *a4,
        const void *a5,
        unsigned int a6)
{
  Microsoft::BamoImpl::ConnectionIndirector *v8; // rbx
  __int64 v9; // rsi
  volatile signed __int32 *v11; // [rsp+40h] [rbp+8h] BYREF

  v8 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v11,
    (Microsoft::BamoImpl::ConnectionIndirector *)((char *)this - 16));
  v9 = *((_QWORD *)v8 + 1);
  *(_DWORD *)(v9 + 32) = a2;
  LODWORD(v8) = (*(__int64 (__fastcall **)(const void *, const void *, _QWORD))(*(_QWORD *)a4 + 24LL))(a4, a5, a6);
  *(_DWORD *)(v9 + 32) = 0;
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v11);
  return (unsigned int)v8;
}
