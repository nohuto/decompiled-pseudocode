/*
 * XREFs of ?Stop@DXGADAPTERSYNCOBJECT@@QEAAXXZ @ 0x1C0236410
 * Callers:
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C01C7638 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?Destroy@DXGSYNCOBJECTCA@@QEAAXXZ @ 0x1C0234608 (-Destroy@DXGSYNCOBJECTCA@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGADAPTERSYNCOBJECT::Stop(DXGADAPTERSYNCOBJECT *this)
{
  signed __int64 v1; // r8

  v1 = *((_QWORD *)this + 4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)this + 4, 0LL, v1) )
    (*(void (__fastcall **)(signed __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 520LL) + 8LL) + 616LL))(v1);
}
