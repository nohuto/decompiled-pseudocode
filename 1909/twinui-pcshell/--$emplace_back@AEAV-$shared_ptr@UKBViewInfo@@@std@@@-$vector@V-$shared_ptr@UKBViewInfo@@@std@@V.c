/*
 * XREFs of ??$emplace_back@AEAV?$shared_ptr@UKBViewInfo@@@std@@@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@QEAAXAEAV?$shared_ptr@UKBViewInfo@@@1@@Z @ 0x18032BBE4
 * Callers:
 *     ?OnViewCreated_19H1@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x180331A14 (-OnViewCreated_19H1@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@She.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall std::vector<std::shared_ptr<KBViewInfo>>::emplace_back<std::shared_ptr<KBViewInfo> &>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v3; // rdx
  __int64 v4; // rax
  unsigned __int64 result; // rax

  v3 = (_QWORD *)a1[1];
  if ( (_QWORD *)a1[2] == v3 )
    return std::vector<std::shared_ptr<ViewEventRegistration>>::_Emplace_reallocate<std::shared_ptr<ViewEventRegistration> const &>(
             a1,
             v3,
             a2);
  *v3 = 0LL;
  v3[1] = 0LL;
  v4 = a2[1];
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
  *v3 = *a2;
  result = a2[1];
  v3[1] = result;
  a1[1] += 16LL;
  return result;
}
