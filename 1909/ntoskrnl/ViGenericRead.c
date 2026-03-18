/*
 * XREFs of ViGenericRead @ 0x140982680
 * Callers:
 *     <none>
 * Callees:
 *     ViGenericDispatchHandler @ 0x1409822D4 (ViGenericDispatchHandler.c)
 */

__int64 __fastcall ViGenericRead(__int64 a1, __int64 a2)
{
  return ViGenericDispatchHandler(a1, a2, (__int64 (*)(void))pXdvIRP_MJ_READ, 3u);
}
