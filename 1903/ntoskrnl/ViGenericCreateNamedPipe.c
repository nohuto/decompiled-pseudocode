/*
 * XREFs of ViGenericCreateNamedPipe @ 0x140982220
 * Callers:
 *     <none>
 * Callees:
 *     ViGenericDispatchHandler @ 0x1409822D4 (ViGenericDispatchHandler.c)
 */

__int64 __fastcall ViGenericCreateNamedPipe(__int64 a1, __int64 a2)
{
  return ViGenericDispatchHandler(a1, a2, pXdvIRP_MJ_CREATE_NAMED_PIPE, 1LL);
}
