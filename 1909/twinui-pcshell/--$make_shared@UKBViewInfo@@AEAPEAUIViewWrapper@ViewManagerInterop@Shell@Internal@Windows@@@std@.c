/*
 * XREFs of ??$make_shared@UKBViewInfo@@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@std@@YA?AV?$shared_ptr@UKBViewInfo@@@0@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18032BC28
 * Callers:
 *     ?OnViewCreated_19H1@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x180331A14 (-OnViewCreated_19H1@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@She.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18008A3D8 (--2@YAPEAX_K@Z.c)
 *     ??$?0AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@?$_Ref_count_obj@UKBViewInfo@@@std@@QEAA@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18032B2BC (--$-0AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@-$_Ref_count_obj@UKBViewInf.c)
 */

__int64 *__fastcall std::make_shared<KBViewInfo,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper * &>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 *result; // rax
  void *v7; // [rsp+30h] [rbp+8h]

  v7 = operator new(0x50uLL);
  v4 = std::_Ref_count_obj<KBViewInfo>::_Ref_count_obj<KBViewInfo>((__int64)v7, a2);
  a1[1] = v4;
  v5 = v4 + 16;
  result = a1;
  *a1 = v5;
  return result;
}
