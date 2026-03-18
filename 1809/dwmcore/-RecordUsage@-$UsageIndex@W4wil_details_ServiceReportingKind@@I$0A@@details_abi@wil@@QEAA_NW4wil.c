/*
 * XREFs of ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x180086D4C
 * Callers:
 *     ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180086B60 (-WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 * Callees:
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x18007AB80 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180086E40 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180087694 (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ??4?$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800876C4 (--4-$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x180087708 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 */

bool __fastcall wil::details_abi::UsageIndex<enum wil_details_ServiceReportingKind,unsigned int,0>::RecordUsage(
        wil::details_abi::RawUsageIndex *this,
        int a2,
        int a3)
{
  char v3; // di
  void *v6; // rdx
  void *v7[2]; // [rsp+30h] [rbp-20h] BYREF
  wil::details *v8[2]; // [rsp+40h] [rbp-10h] BYREF
  int v9; // [rsp+78h] [rbp+28h] BYREF
  int v10; // [rsp+80h] [rbp+30h] BYREF

  v10 = a3;
  v9 = a2;
  v3 = 1;
  if ( !wil::details_abi::RawUsageIndex::RecordUsageInternal(this, &v9, 4uLL, &v10, 4uLL, 1u) )
  {
    if ( *((_QWORD *)this + 3) )
    {
      if ( *((_BYTE *)this + 58) )
        wil::details_abi::heap_buffer::ensure((wil::details_abi::RawUsageIndex *)((char *)this + 24), 0x28uLL);
    }
    else
    {
      *(_OWORD *)v7 = 0LL;
      *(_OWORD *)v8 = 0LL;
      if ( wil::details_abi::heap_buffer::ensure((wil::details_abi::heap_buffer *)v7, 0x32uLL) )
      {
        wil::details_abi::RawUsageIndex::SetBuffer(this, v7[0], 0LL, (char *)v8[0] - (char *)v7[0]);
        wistd::unique_ptr<void,wil::process_heap_deleter>::operator=((char *)this + 48, &v8[1]);
        *((_BYTE *)this + 58) = 1;
      }
      if ( v8[1] )
        wil::details::FreeProcessHeap(v8[1], v6);
    }
    return wil::details_abi::RawUsageIndex::RecordUsageInternal(this, &v9, 4uLL, &v10, 4uLL, 1u);
  }
  return v3;
}
