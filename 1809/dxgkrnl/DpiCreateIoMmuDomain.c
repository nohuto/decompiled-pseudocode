/*
 * XREFs of DpiCreateIoMmuDomain @ 0x1C026CB98
 * Callers:
 *     ?EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z @ 0x1C01C646C (-EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     DpiGetIoMmuContextFromDevice @ 0x1C0049348 (DpiGetIoMmuContextFromDevice.c)
 */

__int64 __fastcall DpiCreateIoMmuDomain(__int64 a1)
{
  __int64 IoMmuContextFromDevice; // rdi
  __int64 v3; // rcx
  unsigned int v4; // eax
  unsigned int v5; // ebx

  if ( !qword_1C008EC40 )
    return 3221225659LL;
  IoMmuContextFromDevice = DpiGetIoMmuContextFromDevice(a1);
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(IoMmuContextFromDevice + 16);
  LOBYTE(v3) = 1;
  *(_QWORD *)(IoMmuContextFromDevice + 72) = KeGetCurrentThread();
  v4 = ((__int64 (__fastcall *)(__int64, __int64))qword_1C008EC40)(v3, IoMmuContextFromDevice + 80);
  *(_QWORD *)(IoMmuContextFromDevice + 72) = 0LL;
  v5 = v4;
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(IoMmuContextFromDevice + 16);
  return v5;
}
