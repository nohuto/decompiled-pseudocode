/*
 * XREFs of ?IsCursorPositionValid@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ @ 0x18032C0C0
 * Callers:
 *     ?IgnoreInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NIAEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x18032BE7C (-IgnoreInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NIAEBUCoreKeyboardPositio.c)
 * Callees:
 *     ?IsRectNull@KeyboardHosting@@YA_NURect@Foundation@Windows@@@Z @ 0x180320980 (-IsRectNull@KeyboardHosting@@YA_NURect@Foundation@Windows@@@Z.c)
 *     ?GetPrimaryMonitorRect@TabTipAdapterPolicy@KeyboardHosting@@CAJPEAUtagRECT@@@Z @ 0x18032B218 (-GetPrimaryMonitorRect@TabTipAdapterPolicy@KeyboardHosting@@CAJPEAUtagRECT@@@Z.c)
 */

bool __fastcall KeyboardHosting::TabTipAdapterPolicy::IsCursorPositionValid(KeyboardHosting::TabTipAdapterPolicy *this)
{
  bool result; // al
  struct tagRECT v3; // [rsp+20h] [rbp-18h] BYREF

  v3 = (struct tagRECT)*((_OWORD *)this + 9);
  result = 0;
  if ( !KeyboardHosting::IsRectNull((float *)&v3.left)
    || (v3 = (struct tagRECT)*((_OWORD *)this + 11), !KeyboardHosting::IsRectNull((float *)&v3.left)) )
  {
    *(_QWORD *)&v3.left = 0LL;
    *(_QWORD *)&v3.right = 0LL;
    KeyboardHosting::TabTipAdapterPolicy::GetPrimaryMonitorRect(&v3);
    if ( *((float *)this + 40) != (float)(v3.right - 1) || *((float *)this + 43) != 0.0 )
      return 1;
  }
  return result;
}
