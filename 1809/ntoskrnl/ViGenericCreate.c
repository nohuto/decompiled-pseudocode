/*
 * XREFs of ViGenericCreate @ 0x1409428F0
 * Callers:
 *     <none>
 * Callees:
 *     ViGenericDispatchHandler @ 0x1409429F4 (ViGenericDispatchHandler.c)
 */

__int64 __fastcall ViGenericCreate(__int64 a1, __int64 a2)
{
  return ViGenericDispatchHandler(a1, a2, pXdvIRP_MJ_CREATE, 0LL);
}
