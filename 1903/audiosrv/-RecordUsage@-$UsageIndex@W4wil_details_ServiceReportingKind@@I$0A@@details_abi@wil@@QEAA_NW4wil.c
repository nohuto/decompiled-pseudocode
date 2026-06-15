/*
 * XREFs of ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x180047ED8
 * Callers:
 *     ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180047CF0 (-WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180019940 (--3@YAXPEAX@Z.c)
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x18001F4E0 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x180048080 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x18004825C (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 */

char __fastcall wil::details_abi::UsageIndex<enum wil_details_ServiceReportingKind,unsigned int,0>::RecordUsage(
        wil::details_abi::RawUsageIndex *this,
        int a2,
        int a3)
{
  char v3; // di
  void *v5; // rcx
  void *v6; // rsi
  void *v8[2]; // [rsp+30h] [rbp-20h] BYREF
  __int128 v9; // [rsp+40h] [rbp-10h]
  int v10; // [rsp+78h] [rbp+28h] BYREF
  int v11; // [rsp+80h] [rbp+30h] BYREF

  v11 = a3;
  v10 = a2;
  v3 = 1;
  if ( !wil::details_abi::RawUsageIndex::RecordUsageInternal((unsigned __int64)this, &v10, 4uLL, &v11, 4uLL, 1u) )
  {
    if ( *((_QWORD *)this + 3) )
    {
      if ( *((_BYTE *)this + 58) )
        wil::details_abi::heap_buffer::ensure((wil::details_abi::RawUsageIndex *)((char *)this + 24), 0x28uLL);
    }
    else
    {
      *(_OWORD *)v8 = 0LL;
      v9 = 0LL;
      if ( wil::details_abi::heap_buffer::ensure((wil::details_abi::heap_buffer *)v8, 0x32uLL) )
      {
        wil::details_abi::RawUsageIndex::SetBuffer(this, v8[0], 0LL, v9 - (unsigned __int64)v8[0]);
        v5 = (void *)*((_QWORD *)this + 6);
        v6 = 0LL;
        *((_QWORD *)this + 6) = *((_QWORD *)&v9 + 1);
        if ( v5 )
          operator delete(v5);
        *((_BYTE *)this + 58) = 1;
      }
      else
      {
        v6 = (void *)*((_QWORD *)&v9 + 1);
      }
      if ( v6 )
        operator delete(v6);
    }
    return wil::details_abi::RawUsageIndex::RecordUsageInternal((unsigned __int64)this, &v10, 4uLL, &v11, 4uLL, 1u);
  }
  return v3;
}
