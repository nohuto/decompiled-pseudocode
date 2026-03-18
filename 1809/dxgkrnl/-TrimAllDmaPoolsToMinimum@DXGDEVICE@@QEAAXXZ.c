/*
 * XREFs of ?TrimAllDmaPoolsToMinimum@DXGDEVICE@@QEAAXXZ @ 0x1C00F6234
 * Callers:
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C00F5BEC (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGDEVICE::TrimAllDmaPoolsToMinimum(DXGDEVICE *this)
{
  char *v1; // rdi
  _QWORD *i; // rbx

  v1 = (char *)this + 360;
  for ( i = (_QWORD *)*((_QWORD *)this + 45); i != (_QWORD *)v1 && i; i = (_QWORD *)*i )
  {
    if ( i[29] )
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(i[2] + 16LL) + 544LL) + 8LL) + 464LL))();
  }
}
