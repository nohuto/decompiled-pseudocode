/*
 * XREFs of ?SetCapture@MPCInputProviderBase@@UEAAXPEAUIMPCTarget@@_N@Z @ 0x1800F4E90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCInputProviderBase::SetCapture(MPCInputProviderBase *this, struct IMPCTarget *a2, char a3)
{
  struct IMPCTarget *v5; // rcx

  v5 = (struct IMPCTarget *)*((_QWORD *)this + 462);
  if ( v5 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)a2 + 8LL))(a2);
      v5 = (struct IMPCTarget *)*((_QWORD *)this + 462);
    }
    *((_QWORD *)this + 462) = a2;
    if ( v5 )
      (*(void (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  *((_BYTE *)this + 3720) = a3;
}
