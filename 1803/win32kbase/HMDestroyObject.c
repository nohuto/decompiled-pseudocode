/*
 * XREFs of HMDestroyObject @ 0x1C005F1A0
 * Callers:
 *     ?HMNullFnDestroy@@YAXPEAX@Z @ 0x1C005F180 (-HMNullFnDestroy@@YAXPEAX@Z.c)
 *     ?DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C00A8DD0 (-DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     DestroyBaseWindow @ 0x1C00BC1B0 (DestroyBaseWindow.c)
 * Callees:
 *     HMFreeObject @ 0x1C005F1D0 (HMFreeObject.c)
 *     HMMarkObjectDestroy @ 0x1C005F400 (HMMarkObjectDestroy.c)
 */

__int64 __fastcall HMDestroyObject(void *a1)
{
  if ( !(unsigned int)HMMarkObjectDestroy() )
    return 0LL;
  HMFreeObject(a1);
  return 1LL;
}
