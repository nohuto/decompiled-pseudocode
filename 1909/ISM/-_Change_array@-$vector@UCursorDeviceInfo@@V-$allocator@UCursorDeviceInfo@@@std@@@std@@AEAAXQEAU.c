/*
 * XREFs of ?_Change_array@?$vector@UCursorDeviceInfo@@V?$allocator@UCursorDeviceInfo@@@std@@@std@@AEAAXQEAUCursorDeviceInfo@@_K1@Z @ 0x1800302C8
 * Callers:
 *     ??$_Emplace_reallocate@AEBUSystemButtonEventInfo@@@?$vector@USystemButtonEventInfo@@V?$allocator@USystemButtonEventInfo@@@std@@@std@@QEAAPEAUSystemButtonEventInfo@@QEAU2@AEBU2@@Z @ 0x1800300A4 (--$_Emplace_reallocate@AEBUSystemButtonEventInfo@@@-$vector@USystemButtonEventInfo@@V-$allocator.c)
 *     ??$_Emplace_reallocate@AEAKAEAPEAUIInputProcessor@@@?$vector@U?$pair@KPEAUIInputProcessor@@@std@@V?$allocator@U?$pair@KPEAUIInputProcessor@@@std@@@2@@std@@QEAAPEAU?$pair@KPEAUIInputProcessor@@@1@QEAU21@AEAKAEAPEAUIInputProcessor@@@Z @ 0x1800922D4 (--$_Emplace_reallocate@AEAKAEAPEAUIInputProcessor@@@-$vector@U-$pair@KPEAUIInputProcessor@@@std@.c)
 *     ??$_Emplace_reallocate@AEBUCursorDeviceInfo@@@?$vector@UCursorDeviceInfo@@V?$allocator@UCursorDeviceInfo@@@std@@@std@@QEAAPEAUCursorDeviceInfo@@QEAU2@AEBU2@@Z @ 0x1800CB3C8 (--$_Emplace_reallocate@AEBUCursorDeviceInfo@@@-$vector@UCursorDeviceInfo@@V-$allocator@UCursorDe.c)
 *     ??$_Emplace_reallocate@AEAHPEAVInputRedirectionTarget@@@?$vector@U?$pair@KPEAVInputRedirectionTarget@@@std@@V?$allocator@U?$pair@KPEAVInputRedirectionTarget@@@std@@@2@@std@@QEAAPEAU?$pair@KPEAVInputRedirectionTarget@@@1@QEAU21@AEAH$$QEAPEAVInputRedirectionTarget@@@Z @ 0x180106878 (--$_Emplace_reallocate@AEAHPEAVInputRedirectionTarget@@@-$vector@U-$pair@KPEAVInputRedirectionTa.c)
 *     ??$_Emplace_reallocate@AEBUSPATIAL_NODE_ID@@@?$vector@USPATIAL_NODE_ID@@V?$allocator@USPATIAL_NODE_ID@@@std@@@std@@QEAAPEAUSPATIAL_NODE_ID@@QEAU2@AEBU2@@Z @ 0x18014C198 (--$_Emplace_reallocate@AEBUSPATIAL_NODE_ID@@@-$vector@USPATIAL_NODE_ID@@V-$allocator@USPATIAL_NO.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<CursorDeviceInfo>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(
      v6,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF0uLL));
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 16 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 16 * a4;
}
