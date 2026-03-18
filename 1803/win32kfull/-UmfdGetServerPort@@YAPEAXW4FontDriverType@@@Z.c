/*
 * XREFs of ?UmfdGetServerPort@@YAPEAXW4FontDriverType@@@Z @ 0x1C00EDEF4
 * Callers:
 *     ?UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C00ED75C (-UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C00EDD74 (-UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UmfdGetServerPort(unsigned int a1)
{
  if ( a1 > 3 )
    return 0LL;
  else
    return g_pUmfdServerPort[a1];
}
