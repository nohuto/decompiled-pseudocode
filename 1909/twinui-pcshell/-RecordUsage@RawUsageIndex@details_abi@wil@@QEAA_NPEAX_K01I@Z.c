/*
 * XREFs of ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x180121C20
 * Callers:
 *     wistd::__function::__func__lambda_8db0ce862824541f40dfb767113f1e28__bool___cdecl(void___unsigned___int64_void___unsigned___int64_unsigned_int)_::operator() @ 0x18011F5B0 (wistd--__function--__func__lambda_8db0ce862824541f40dfb767113f1e28__bool___cdecl(void___unsigned.c)
 *     ?RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z @ 0x180121744 (-RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z.c)
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$01@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x180121B40 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$01@details_abi@wil@@QEAA_NW4wil_.c)
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x180121B74 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil.c)
 * Callees:
 *     ?MemoryFree@@YAXPEAX@Z @ 0x1800D3C1C (-MemoryFree@@YAXPEAX@Z.c)
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180121D60 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x180122B50 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180123CE8 (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 */

bool __fastcall wil::details_abi::RawUsageIndex::RecordUsage(
        wil::details_abi::RawUsageIndex *this,
        void *a2,
        unsigned __int64 a3,
        void *a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  unsigned __int64 v11; // r8
  void *v12; // rcx
  void *v13; // rdi
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  void *v16[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v17; // [rsp+40h] [rbp-28h]

  if ( wil::details_abi::RawUsageIndex::RecordUsageInternal(this, a2, a3, a4, a5, a6) )
    return 1;
  v11 = a3 + a5 + 32;
  if ( *((_QWORD *)this + 3) )
  {
    if ( *((_BYTE *)this + 58) )
    {
      v14 = *((_QWORD *)this + 5) - *((_QWORD *)this + 3);
      if ( v11 + *((_QWORD *)this + 4) - *((_QWORD *)this + 3) >= v14 )
      {
        v15 = 2 * v14;
        if ( v11 >= v15 )
          v15 = a3 + a5 + 32;
        wil::details_abi::heap_buffer::reserve((wil::details_abi::RawUsageIndex *)((char *)this + 24), v15);
      }
    }
  }
  else
  {
    *(_OWORD *)v16 = 0LL;
    v17 = 0LL;
    if ( wil::details_abi::heap_buffer::reserve((wil::details_abi::heap_buffer *)v16, a3 + a5 + 42) )
    {
      wil::details_abi::RawUsageIndex::SetBuffer(this, v16[0], 0LL, v17 - (unsigned __int64)v16[0]);
      v12 = (void *)*((_QWORD *)this + 6);
      v13 = 0LL;
      *((_QWORD *)this + 6) = *((_QWORD *)&v17 + 1);
      if ( v12 )
        MemoryFree(v12);
      *((_BYTE *)this + 58) = 1;
    }
    else
    {
      v13 = (void *)*((_QWORD *)&v17 + 1);
    }
    if ( v13 )
      MemoryFree(v13);
  }
  return wil::details_abi::RawUsageIndex::RecordUsageInternal(this, a2, a3, a4, a5, a6);
}
