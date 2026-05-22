/*
 * XREFs of ?GetDataProviderId@AnimationDataProvider@@QEAA_KXZ @ 0x18009BFC4
 * Callers:
 *     ?StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x180025070 (-StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?FeedAnimationDataIfNeeded@DragNDropProcessor@@QEAAJKUtagPOINT@@UtagPOINTF@@@Z @ 0x180025324 (-FeedAnimationDataIfNeeded@DragNDropProcessor@@QEAAJKUtagPOINT@@UtagPOINTF@@@Z.c)
 *     ?CreateCursorShapeAnimation@SystemCursorService@@QEAAJIK_K0@Z @ 0x180095B94 (-CreateCursorShapeAnimation@SystemCursorService@@QEAAJIK_K0@Z.c)
 *     ?CreateCustomCursorShapeAnimation@SystemCursorService@@QEAAJIK_K@Z @ 0x180095F4C (-CreateCustomCursorShapeAnimation@SystemCursorService@@QEAAJIK_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall AnimationDataProvider::GetDataProviderId(AnimationDataProvider *this)
{
  return *(_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 2) + 8LL) + 40LL))(*((_QWORD *)this + 2) + 8LL);
}
