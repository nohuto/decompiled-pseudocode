/*
 * XREFs of ?staticCsqInsertIrpEx@CSidebandDevice@@SAJPEAU_IO_CSQ@@PEAU_IRP@@PEAX@Z @ 0x1C000BB30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSidebandDevice::staticCsqInsertIrpEx(
        struct _IO_CSQ *Csq,
        PIRP Irp,
        struct _LIST_ENTRY *InsertContext)
{
  PVOID *p_Flink; // rax
  struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *p_ListEntry; // rdx
  char *ReservePointer; // rcx

  p_Flink = (PVOID *)&InsertContext->Blink->Flink;
  p_ListEntry = (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)&Irp->Tail.Overlay.ListEntry;
  ReservePointer = (char *)Csq[-1].ReservePointer;
  if ( *p_Flink != InsertContext )
    __fastfail(3u);
  p_ListEntry->ListEntry.Flink = InsertContext;
  p_ListEntry->ListEntry.Blink = (struct _LIST_ENTRY *)p_Flink;
  *p_Flink = p_ListEntry;
  InsertContext->Blink = &p_ListEntry->ListEntry;
  KeReleaseSemaphore((PRKSEMAPHORE)(ReservePointer + 200), 0, 1, 0);
  return 259LL;
}
