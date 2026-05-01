/*
 * XREFs of ?HampHostIdStoreCompareSessionByKey@@YAJPEAX0@Z @ 0x18006D270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HampHostIdStoreCompareSessionByKey(void *a1, _DWORD *a2)
{
  if ( a2[22] >= (unsigned int)a1 )
    return a2[22] > (unsigned int)a1;
  else
    return 0xFFFFFFFFLL;
}
