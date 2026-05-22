/*
 * XREFs of ?TryDemote@MPCInputProviderBase@@UEAA_NXZ @ 0x180100920
 * Callers:
 *     <none>
 * Callees:
 *     ?Reset@RayStabilizer@@QEAAXXZ @ 0x1801030B4 (-Reset@RayStabilizer@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

char __fastcall MPCInputProviderBase::TryDemote(MPCInputProviderBase *this)
{
  char v2; // bl

  v2 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 3) + 72LL))((char *)this - 24);
  if ( v2 )
    RayStabilizer::Reset((MPCInputProviderBase *)((char *)this + 352));
  return v2;
}
