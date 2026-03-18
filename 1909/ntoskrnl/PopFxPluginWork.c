/*
 * XREFs of PopFxPluginWork @ 0x140677900
 * Callers:
 *     <none>
 * Callees:
 *     PopFxProcessWorkPool @ 0x1405B1E30 (PopFxProcessWorkPool.c)
 */

NTSTATUS __fastcall PopFxPluginWork(unsigned __int64 *a1)
{
  __int64 v1; // rdx

  v1 = 0LL;
  do
  {
    if ( (unsigned __int64 *)(*a1 + 8 * (v1 + 4 * v1 + 13)) == a1 )
      break;
    v1 = (unsigned int)(v1 + 1);
  }
  while ( (unsigned int)v1 < 4 );
  return PopFxProcessWorkPool(*a1, v1);
}
