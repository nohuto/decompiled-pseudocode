/*
 * XREFs of ??0CWarpLockSubresource@@IEAA@PEAVCD3DDeviceLevel1@@PEAVIWarpPrivateAPI@@@Z @ 0x1800230E4
 * Callers:
 *     ?Create@CWarpLockSubresource@@SAJPEAVCD3DDeviceLevel1@@PEAVIWarpPrivateAPI@@PEAUIDXGIResource@@IPEAPEAV1@@Z @ 0x180022EF0 (-Create@CWarpLockSubresource@@SAJPEAVCD3DDeviceLevel1@@PEAVIWarpPrivateAPI@@PEAUIDXGIResource@@I.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

CWarpLockSubresource *__fastcall CWarpLockSubresource::CWarpLockSubresource(
        CWarpLockSubresource *this,
        struct CD3DDeviceLevel1 *a2,
        struct IWarpPrivateAPI *a3)
{
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CWarpLockSubresource::`vftable';
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 2) = a2;
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)a2 + 126);
  *((_QWORD *)this + 3) = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct IWarpPrivateAPI *))(*(_QWORD *)a3 + 8LL))(a3);
  return this;
}
