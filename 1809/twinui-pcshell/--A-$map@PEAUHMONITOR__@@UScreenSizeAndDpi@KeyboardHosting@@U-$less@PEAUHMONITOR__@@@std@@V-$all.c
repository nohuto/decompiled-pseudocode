/*
 * XREFs of ??A?$map@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@U?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@5@@std@@QEAAAEAUScreenSizeAndDpi@KeyboardHosting@@AEBQEAUHMONITOR__@@@Z @ 0x1802D0294
 * Callers:
 *     ?GetDefaultKeyboardSizeConsideringOverriddenMonitorSize@PositionAndSizeOptionsHelper@KeyboardHosting@@QEAA?AUKeyboardSize@2@PEAUHMONITOR__@@URect@Foundation@Windows@@W4DEVICE_SCALE_FACTOR@@_NNPEAN@Z @ 0x1800945A0 (-GetDefaultKeyboardSizeConsideringOverriddenMonitorSize@PositionAndSizeOptionsHelper@KeyboardHos.c)
 * Callees:
 *     ??$_Try_emplace@AEBQEAUHMONITOR__@@$$V@?$map@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@U?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@5@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@std@@@std@@@std@@_N@1@AEBQEAUHMONITOR__@@@Z @ 0x1802D01F0 (--$_Try_emplace@AEBQEAUHMONITOR__@@$$V@-$map@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@.c)
 */

__int64 __fastcall std::map<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi>::operator[](
        __int64 *a1,
        unsigned __int64 *a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  std::map<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi>::_Try_emplace<HMONITOR__ * const &,>(a1, (__int64)v3, a2);
  return v3[0] + 40LL;
}
