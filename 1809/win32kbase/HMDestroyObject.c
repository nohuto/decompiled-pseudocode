/*
 * XREFs of HMDestroyObject @ 0x1C0065980
 * Callers:
 *     ?HMNullFnDestroy@@YAXPEAX@Z @ 0x1C0065960 (-HMNullFnDestroy@@YAXPEAX@Z.c)
 *     ?DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C00E3080 (-DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     DestroyBaseWindow @ 0x1C00F3B70 (DestroyBaseWindow.c)
 * Callees:
 *     HMFreeObject @ 0x1C002DB60 (HMFreeObject.c)
 *     HMMarkObjectDestroy @ 0x1C00659B0 (HMMarkObjectDestroy.c)
 */

__int64 __fastcall HMDestroyObject(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8

  if ( !(unsigned int)HMMarkObjectDestroy(a1) )
    return 0LL;
  HMFreeObject(a1, v2, v3);
  return 1LL;
}
