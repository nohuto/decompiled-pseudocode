/*
 * XREFs of ?_WdmCancelRoutineInternal@FxIrpQueue@@CAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0018660
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000B110 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000B170 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00133A4 (WPP_IFR_SF_qq.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxIrpQueue::_WdmCancelRoutineInternal(_DEVICE_OBJECT *DeviceObject, _IRP *Irp)
{
  unsigned __int8 v3; // r8
  FxNonPagedObject **v4; // rdi
  FxNonPagedObject **_a2; // rbx
  unsigned __int8 v6; // r8
  __int64 v7; // r9
  _LIST_ENTRY *p_ListEntry; // rax
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // rcx
  FxNonPagedObject *v11; // rax
  unsigned __int8 irql; // [rsp+58h] [rbp+10h] BYREF

  IoReleaseCancelSpinLock(Irp->CancelIrql);
  v4 = (FxNonPagedObject **)Irp->Tail.Overlay.DriverContext[3];
  if ( *(_DWORD *)v4 == 1 )
    _a2 = (FxNonPagedObject **)v4[2];
  else
    _a2 = (FxNonPagedObject **)Irp->Tail.Overlay.DriverContext[3];
  FxNonPagedObject::Lock(_a2[2], &irql, v3);
  p_ListEntry = &Irp->Tail.Overlay.ListEntry;
  Flink = Irp->Tail.Overlay.ListEntry.Flink;
  if ( (void **)Flink->Blink != &Irp->Tail.CompletionKey + 6
    || (Blink = Irp->Tail.Overlay.ListEntry.Blink, Blink->Flink != p_ListEntry) )
  {
    __fastfail(3u);
  }
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  Irp->Tail.Overlay.ListEntry.Blink = &Irp->Tail.Overlay.ListEntry;
  p_ListEntry->Flink = p_ListEntry;
  --*((_DWORD *)_a2 + 8);
  if ( v4 != _a2 )
  {
    v4[1] = 0LL;
    Irp->Tail.Overlay.DriverContext[3] = 0LL;
  }
  v11 = _a2[3];
  if ( v11 )
  {
    LOBYTE(v7) = irql;
    ((void (__fastcall *)(FxNonPagedObject **, _IRP *, FxNonPagedObject **, __int64))v11)(_a2, Irp, v4, v7);
  }
  else
  {
    FxNonPagedObject::Unlock(_a2[2], irql, v6);
    Irp->IoStatus.Information = 0LL;
    Irp->IoStatus.Status = -1073741536;
    WPP_IFR_SF_qq(_a2[2]->m_Globals, 2u, 0x12u, 0xBu, WPP_FxIrpQueue_cpp_Traceguids, Irp, _a2);
    FxVerifierDbgBreakPoint(_a2[2]->m_Globals);
    IofCompleteRequest(Irp, 0);
  }
}
