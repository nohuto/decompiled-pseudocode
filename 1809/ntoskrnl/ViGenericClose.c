/*
 * XREFs of ViGenericClose @ 0x1409428C0
 * Callers:
 *     <none>
 * Callees:
 *     ViGenericDispatchHandler @ 0x1409429F4 (ViGenericDispatchHandler.c)
 */

__int64 __fastcall ViGenericClose(__int64 a1, __int64 a2)
{
  return ViGenericDispatchHandler(a1, a2, pXdvIRP_MJ_CLOSE, 2LL);
}
