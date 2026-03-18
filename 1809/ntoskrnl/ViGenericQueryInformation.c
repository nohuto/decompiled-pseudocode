/*
 * XREFs of ViGenericQueryInformation @ 0x140942CE0
 * Callers:
 *     <none>
 * Callees:
 *     ViGenericDispatchHandler @ 0x1409429F4 (ViGenericDispatchHandler.c)
 */

__int64 __fastcall ViGenericQueryInformation(__int64 a1, __int64 a2)
{
  return ViGenericDispatchHandler(a1, a2, (__int64 (*)(void))pXdvIRP_MJ_QUERY_INFORMATION, 5u);
}
