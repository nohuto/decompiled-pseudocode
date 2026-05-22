/*
 * XREFs of ?lock@?$weak_ptr@VSystemCursorService@@@std@@QEBA?AV?$shared_ptr@VSystemCursorService@@@2@XZ @ 0x1800CE324
 * Callers:
 *     ?Cleanup@CustomCursorApplication@@QEAAXXZ @ 0x1800CC040 (-Cleanup@CustomCursorApplication@@QEAAXXZ.c)
 *     ?CreateCustomCursorSharedTarget@SystemCursor@@QEAAJPEAUIContainerVisual@Composition@UI@Windows@@PEAPEAX@Z @ 0x1800CCBB4 (-CreateCustomCursorSharedTarget@SystemCursor@@QEAAJPEAUIContainerVisual@Composition@UI@Windows@@.c)
 *     ?CreateSharedVisual@CustomCursorApplication@@QEAAJPEAPEAX@Z @ 0x1800CCF48 (-CreateSharedVisual@CustomCursorApplication@@QEAAJPEAPEAX@Z.c)
 *     ?FeedAnimationData@SystemCursorShape@@AEAAJXZ @ 0x1800CD2B8 (-FeedAnimationData@SystemCursorShape@@AEAAJXZ.c)
 * Callees:
 *     ??$_Construct_from_weak@VSystemCursorService@@@?$_Ptr_base@VSystemCursorService@@@std@@IEAA_NAEBV?$weak_ptr@VSystemCursorService@@@1@@Z @ 0x1800CB5CC (--$_Construct_from_weak@VSystemCursorService@@@-$_Ptr_base@VSystemCursorService@@@std@@IEAA_NAEB.c)
 */

__int64 __fastcall std::weak_ptr<SystemCursorService>::lock(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r10

  *a2 = 0LL;
  a2[1] = 0LL;
  std::_Ptr_base<SystemCursorService>::_Construct_from_weak<SystemCursorService>((__int64)a2, a1);
  return v2;
}
