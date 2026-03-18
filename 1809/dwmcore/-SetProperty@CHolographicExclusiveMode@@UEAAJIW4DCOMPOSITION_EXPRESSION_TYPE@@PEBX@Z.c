/*
 * XREFs of ?SetProperty@CHolographicExclusiveMode@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18020C600
 * Callers:
 *     ?ProcessSetExclusiveOpacity@CHolographicExclusiveMode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICEXCLUSIVEMODE_SETEXCLUSIVEOPACITY@@@Z @ 0x18020C5E4 (-ProcessSetExclusiveOpacity@CHolographicExclusiveMode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOG.c)
 * Callees:
 *     ?SetExclusiveOpacity@CHolographicManager@@QEAAXM@Z @ 0x18020BC54 (-SetExclusiveOpacity@CHolographicManager@@QEAAXM@Z.c)
 */

__int64 __fastcall CHolographicExclusiveMode::SetProperty(__int64 a1, int a2, int a3, float *a4)
{
  CHolographicInteropTaskQueue **v4; // rcx

  if ( a3 == 18 && a2 == 1 )
  {
    v4 = *(CHolographicInteropTaskQueue ***)(a1 + 56);
    if ( v4 )
      CHolographicManager::SetExclusiveOpacity(v4, *a4);
  }
  return 0LL;
}
