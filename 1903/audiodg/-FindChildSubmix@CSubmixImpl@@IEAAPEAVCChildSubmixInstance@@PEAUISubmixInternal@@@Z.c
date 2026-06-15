/*
 * XREFs of ?FindChildSubmix@CSubmixImpl@@IEAAPEAVCChildSubmixInstance@@PEAUISubmixInternal@@@Z @ 0x14000F8BC
 * Callers:
 *     ?OnLeftSubmixStopped@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x14000F840 (-OnLeftSubmixStopped@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?OnLeftSubmixStarted@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x14000F900 (-OnLeftSubmixStarted@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?OnLeftSubmixDisconnected@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x14003E7A0 (-OnLeftSubmixDisconnected@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x1400040F8 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 */

struct ISubmixInternal **__fastcall CSubmixImpl::FindChildSubmix(CSubmixImpl *this, struct ISubmixInternal *a2)
{
  struct ISubmixInternal **result; // rax
  _QWORD *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = (_QWORD *)*((_QWORD *)this + 15);
  if ( !v4 )
    return 0LL;
  while ( 1 )
  {
    result = (struct ISubmixInternal **)*ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(
                                           (__int64)this,
                                           &v4);
    if ( *result == a2 )
      break;
    if ( !v4 )
      return 0LL;
  }
  return result;
}
