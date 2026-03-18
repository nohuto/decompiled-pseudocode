/*
 * XREFs of ?NotifyProcessStatusChange@DXGDEVICE@@QEAAXXZ @ 0x1C00F4A20
 * Callers:
 *     ?ProcessStatusChange@DXGPROCESS@@IEAAXXZ @ 0x1C00F48B4 (-ProcessStatusChange@DXGPROCESS@@IEAAXXZ.c)
 *     ?SetProcessSchedulingPriorityBand@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULING_PRIORITYBAND@@@Z @ 0x1C022A63C (-SetProcessSchedulingPriorityBand@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULING_PRIORITYBAND@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGDEVICE::NotifyProcessStatusChange(DXGDEVICE *this)
{
  __int64 v1; // r8
  __int64 v3; // rax

  v1 = *((_QWORD *)this + 2);
  if ( !*(_BYTE *)(*(_QWORD *)(v1 + 16) + 185LL) )
  {
    v3 = *(_QWORD *)(v1 + 520);
    LOBYTE(v1) = 1;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(v3 + 8) + 160LL))(
      *((_QWORD *)this + 82),
      *(unsigned int *)(*((_QWORD *)this + 5) + 328LL),
      v1);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 544LL) + 8LL) + 1032LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 552LL));
  }
}
