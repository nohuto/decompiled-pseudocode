/*
 * XREFs of UsifRxReady @ 0x14032DDC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

bool __fastcall UsifRxReady(__int64 *a1)
{
  __int64 v1; // rcx
  bool result; // al

  result = 0;
  if ( a1 )
  {
    v1 = *a1;
    if ( v1 )
    {
      if ( (unsigned __int8)((__int64 (__fastcall *)(__int64))off_140402720)(v1 + 68) )
        return 1;
    }
  }
  return result;
}
