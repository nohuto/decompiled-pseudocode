/*
 * XREFs of ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x180102C10
 * Callers:
 *     wistd::__function::__func__lambda_8db0ce862824541f40dfb767113f1e28__bool___cdecl(void___unsigned___int64_void___unsigned___int64_unsigned_int)_::operator() @ 0x180100590 (wistd--__function--__func__lambda_8db0ce862824541f40dfb767113f1e28__bool___cdecl(void___unsigned.c)
 *     ?RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z @ 0x180102734 (-RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z.c)
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$01@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x180102B30 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$01@details_abi@wil@@QEAA_NW4wil_.c)
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x180102B64 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil.c)
 * Callees:
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x18010133C (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180102D50 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x180103B40 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180104CD8 (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 */

bool __fastcall wil::details_abi::RawUsageIndex::RecordUsage(
        wil::details **this,
        void *a2,
        unsigned __int64 a3,
        void *a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  unsigned __int64 v11; // r8
  void *v12; // rdx
  wil::details *v13; // rcx
  wil::details *v14; // rdi
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  void *v17[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v18; // [rsp+40h] [rbp-28h]

  if ( wil::details_abi::RawUsageIndex::RecordUsageInternal((wil::details_abi::RawUsageIndex *)this, a2, a3, a4, a5, a6) )
    return 1;
  v11 = a3 + a5 + 32;
  if ( this[3] )
  {
    if ( *((_BYTE *)this + 58) )
    {
      v15 = this[5] - this[3];
      if ( v11 + this[4] - this[3] >= v15 )
      {
        v16 = 2 * v15;
        if ( v11 >= v16 )
          v16 = a3 + a5 + 32;
        wil::details_abi::heap_buffer::reserve((wil::details_abi::heap_buffer *)(this + 3), v16);
      }
    }
  }
  else
  {
    *(_OWORD *)v17 = 0LL;
    v18 = 0LL;
    if ( wil::details_abi::heap_buffer::reserve((wil::details_abi::heap_buffer *)v17, a3 + a5 + 42) )
    {
      wil::details_abi::RawUsageIndex::SetBuffer(
        (wil::details_abi::RawUsageIndex *)this,
        v17[0],
        0LL,
        v18 - (unsigned __int64)v17[0]);
      v13 = this[6];
      v14 = 0LL;
      this[6] = (wil::details *)*((_QWORD *)&v18 + 1);
      if ( v13 )
        wil::details::FreeProcessHeap(v13, v12);
      *((_BYTE *)this + 58) = 1;
    }
    else
    {
      v14 = (wil::details *)*((_QWORD *)&v18 + 1);
    }
    if ( v14 )
      wil::details::FreeProcessHeap(v14, v12);
  }
  return wil::details_abi::RawUsageIndex::RecordUsageInternal(
           (wil::details_abi::RawUsageIndex *)this,
           a2,
           a3,
           a4,
           a5,
           a6);
}
