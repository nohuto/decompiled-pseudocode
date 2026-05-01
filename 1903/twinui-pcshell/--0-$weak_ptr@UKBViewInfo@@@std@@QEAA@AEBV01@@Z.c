/*
 * XREFs of ??0?$weak_ptr@UKBViewInfo@@@std@@QEAA@AEBV01@@Z @ 0x18030CB34
 * Callers:
 *     ?OnViewCreated_19H1@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x180312504 (-OnViewCreated_19H1@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@She.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::weak_ptr<KBViewInfo>::weak_ptr<KBViewInfo>(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = a2[1];
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 12));
  *a1 = *a2;
  a1[1] = a2[1];
  return a1;
}
