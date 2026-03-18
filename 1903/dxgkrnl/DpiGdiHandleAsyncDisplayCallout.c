/*
 * XREFs of DpiGdiHandleAsyncDisplayCallout @ 0x1C029C7D0
 * Callers:
 *     <none>
 * Callees:
 *     DpiGdiSyncDisplayCallout @ 0x1C029C81C (DpiGdiSyncDisplayCallout.c)
 */

void __fastcall DpiGdiHandleAsyncDisplayCallout(PVOID IoObject, _QWORD *Context, PIO_WORKITEM IoWorkItem)
{
  DpiGdiSyncDisplayCallout(*Context);
  IoFreeWorkItem(IoWorkItem);
  ExFreePoolWithTag(Context, 0);
}
