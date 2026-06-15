/*
 * XREFs of ?OnDisconnectedFromRightSubmix@CCrossProcessBaseServerEndpoint@@UEAAJ_J@Z @ 0x140052E30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCrossProcessBaseServerEndpoint::OnDisconnectedFromRightSubmix(
        CCrossProcessBaseServerEndpoint *this,
        __int64 a2)
{
  _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)this - 41) + 164LL), 0xFFFFFFFD);
  _InterlockedExchange((volatile __int32 *)this - 60, 1);
  (*(void (__fastcall **)(CCrossProcessBaseServerEndpoint *, __int64))(*(_QWORD *)this + 32LL))(this, -a2);
  return 0LL;
}
