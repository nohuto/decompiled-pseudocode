/*
 * XREFs of ?PowerRequiredCallback@FxPoxInterface@@CAXPEAX@Z @ 0x1C0091620
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerRequiredCallbackWorker@FxPoxInterface@@AEAAXE@Z @ 0x1C0015318 (-PowerRequiredCallbackWorker@FxPoxInterface@@AEAAXE@Z.c)
 */

void __fastcall FxPoxInterface::PowerRequiredCallback(FxPoxInterface *Context)
{
  FxPoxInterface::PowerRequiredCallbackWorker(Context, 1u);
}
