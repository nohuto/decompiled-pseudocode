/*
 * XREFs of ??_GHidLampMultiUpdateReportParser@@UEAAPEAXI@Z @ 0x18007FAA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001C40 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ??1?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@QEAA@XZ @ 0x1800789B4 (--1-$vector@VHidChannelValueInfo@@V-$allocator@VHidChannelValueInfo@@@std@@@std@@QEAA@XZ.c)
 */

HidLampMultiUpdateReportParser *__fastcall HidLampMultiUpdateReportParser::`scalar deleting destructor'(
        HidLampMultiUpdateReportParser *this,
        char a2)
{
  *(_QWORD *)this = &HidLampMultiUpdateReportParser::`vftable';
  std::vector<HidChannelValueInfo>::~vector<HidChannelValueInfo>((__int64)this + 296);
  std::vector<HidChannelValueInfo>::~vector<HidChannelValueInfo>((__int64)this + 264);
  std::vector<HidChannelValueInfo>::~vector<HidChannelValueInfo>((__int64)this + 232);
  std::vector<HidChannelValueInfo>::~vector<HidChannelValueInfo>((__int64)this + 200);
  std::vector<HidChannelValueInfo>::~vector<HidChannelValueInfo>((__int64)this + 168);
  *(_QWORD *)this = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
