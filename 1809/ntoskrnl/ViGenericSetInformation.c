/*
 * XREFs of ViGenericSetInformation @ 0x140942E00
 * Callers:
 *     <none>
 * Callees:
 *     ViGenericDispatchHandler @ 0x1409429F4 (ViGenericDispatchHandler.c)
 */

__int64 __fastcall ViGenericSetInformation(__int64 a1, __int64 a2)
{
  return ViGenericDispatchHandler(a1, a2, (__int64 (*)(void))pXdvIRP_MJ_SET_INFORMATION, 6u);
}
