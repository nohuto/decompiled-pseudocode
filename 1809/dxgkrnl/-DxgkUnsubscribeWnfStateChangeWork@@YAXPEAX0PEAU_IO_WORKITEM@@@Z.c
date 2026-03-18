/*
 * XREFs of ?DxgkUnsubscribeWnfStateChangeWork@@YAXPEAX0PEAU_IO_WORKITEM@@@Z @ 0x1C013BAF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000DEEC (--3@YAXPEAX@Z.c)
 */

void __fastcall DxgkUnsubscribeWnfStateChangeWork(PVOID IoObject, _QWORD *Context, PIO_WORKITEM IoWorkItem)
{
  ExUnsubscribeWnfStateChange(*Context);
  operator delete(Context);
  IoFreeWorkItem(IoWorkItem);
}
