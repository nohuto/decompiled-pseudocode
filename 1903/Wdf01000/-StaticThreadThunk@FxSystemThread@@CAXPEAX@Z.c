/*
 * XREFs of ?StaticThreadThunk@FxSystemThread@@CAXPEAX@Z @ 0x1C00955D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Thread@FxSystemThread@@AEAAXXZ @ 0x1C00955E4 (-Thread@FxSystemThread@@AEAAXXZ.c)
 */

void __fastcall FxSystemThread::StaticThreadThunk(FxSystemThread *Context)
{
  FxSystemThread::Thread(Context);
}
