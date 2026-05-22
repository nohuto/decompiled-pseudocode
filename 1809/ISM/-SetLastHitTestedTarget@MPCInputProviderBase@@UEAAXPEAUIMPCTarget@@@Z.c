/*
 * XREFs of ?SetLastHitTestedTarget@MPCInputProviderBase@@UEAAXPEAUIMPCTarget@@@Z @ 0x1800F4E10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCInputProviderBase::SetLastHitTestedTarget(MPCInputProviderBase *this, struct IMPCTarget *a2)
{
  struct IMPCTarget *v4; // rcx

  v4 = (struct IMPCTarget *)*((_QWORD *)this + 464);
  if ( v4 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)a2 + 8LL))(a2);
      v4 = (struct IMPCTarget *)*((_QWORD *)this + 464);
    }
    *((_QWORD *)this + 464) = a2;
    if ( v4 )
      (*(void (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
