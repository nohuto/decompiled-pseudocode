/*
 * XREFs of DpiGdiHandleAsyncDisplayCallout @ 0x1C0262CF0
 * Callers:
 *     <none>
 * Callees:
 *     DpiGdiSyncDisplayCallout @ 0x1C0262D3C (DpiGdiSyncDisplayCallout.c)
 */

void __fastcall DpiGdiHandleAsyncDisplayCallout(PVOID IoObject, _QWORD *Context, PIO_WORKITEM IoWorkItem)
{
  DpiGdiSyncDisplayCallout(*Context);
  IoFreeWorkItem(IoWorkItem);
  ExFreePoolWithTag(Context, 0);
}
