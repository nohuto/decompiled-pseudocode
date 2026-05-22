/*
 * XREFs of ??1?$vector@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@V?$allocator@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18007C424
 * Callers:
 *     _HidLampArrayDevice::ExtractReportDescriptorsFromPreparsedData_::_1_::dtor$0 @ 0x180131BC0 (_HidLampArrayDevice--ExtractReportDescriptorsFromPreparsedData_--_1_--dtor$0.c)
 * Callees:
 *     ??1?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@QEAA@XZ @ 0x1800789B4 (--1-$vector@VHidChannelValueInfo@@V-$allocator@VHidChannelValueInfo@@@std@@@std@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::vector<std::vector<HidChannelValueInfo>>::~vector<std::vector<HidChannelValueInfo>>(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *v3; // rsi
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx

  v1 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(_QWORD **)(a1 + 8);
    if ( v1 != v3 )
    {
      do
      {
        std::vector<HidChannelValueInfo>::~vector<HidChannelValueInfo>((__int64)v1);
        v1 += 3;
      }
      while ( v1 != v3 );
      v1 = *(_QWORD **)a1;
    }
    v4 = 24 * ((*(_QWORD *)(a1 + 16) - (_QWORD)v1) / 24LL);
    if ( v4 >= 0x1000 )
    {
      v5 = *(v1 - 1);
      v4 += 39LL;
      if ( (unsigned __int64)v1 - v5 - 8 > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v5, v4);
        JUMPOUT(0x18007C4D2LL);
      }
      v1 = (_QWORD *)*(v1 - 1);
    }
    operator delete(v1, (const struct std::nothrow_t *)v4);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
