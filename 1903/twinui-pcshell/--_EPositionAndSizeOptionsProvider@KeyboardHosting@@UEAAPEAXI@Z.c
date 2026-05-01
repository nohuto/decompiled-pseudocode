/*
 * XREFs of ??_EPositionAndSizeOptionsProvider@KeyboardHosting@@UEAAPEAXI@Z @ 0x18032AAB0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080B08 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@U?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@std@@@std@@@2@0@Z @ 0x18032D8C4 (-erase@-$_Tree@V-$_Tmap_traits@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@U-$less@PEAUHM.c)
 */

KeyboardHosting::PositionAndSizeOptionsProvider *__fastcall KeyboardHosting::PositionAndSizeOptionsProvider::`vector deleting destructor'(
        KeyboardHosting::PositionAndSizeOptionsProvider *this,
        char a2)
{
  void **v2; // rbx
  char v6; // [rsp+58h] [rbp+20h] BYREF

  v2 = (void **)((char *)this + 16);
  std::_Tree<std::_Tmap_traits<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>>,0>>::erase(
    (char *)this + 16,
    &v6);
  std::_Deallocate<16,0>(*v2, (const struct std::nothrow_t *)0x38);
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xD8);
  return this;
}
