/*
 * XREFs of ?GetOrCreateCompositionStatsForMonitor@CCompositionSwapchainStatistics@@AEAAAEAUCompositionStatsPerMonitor@1@PEAUHMONITOR__@@@Z @ 0x180263AE8
 * Callers:
 *     ?RecordCompositionMode@CCompositionSwapchainStatistics@@UEAA_NPEAUHMONITOR__@@W4BufferCompositionMode@@@Z @ 0x180263C90 (-RecordCompositionMode@CCompositionSwapchainStatistics@@UEAA_NPEAUHMONITOR__@@W4BufferCompositio.c)
 *     ?RecordOutputColorSpace@CCompositionSwapchainStatistics@@UEAA_NPEAUHMONITOR__@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180263CD0 (-RecordOutputColorSpace@CCompositionSwapchainStatistics@@UEAA_NPEAUHMONITOR__@@W4DXGI_COLOR_SPAC.c)
 *     ?RecordTransform@CCompositionSwapchainStatistics@@UEAA_NPEAUHMONITOR__@@AEBVCMILMatrix@@@Z @ 0x180263D00 (-RecordTransform@CCompositionSwapchainStatistics@@UEAA_NPEAUHMONITOR__@@AEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBUCompositionStatsPerMonitor@CCompositionSwapchainStatistics@@@?$vector@UCompositionStatsPerMonitor@CCompositionSwapchainStatistics@@V?$allocator@UCompositionStatsPerMonitor@CCompositionSwapchainStatistics@@@std@@@std@@QEAAPEAUCompositionStatsPerMonitor@CCompositionSwapchainStatistics@@QEAU23@AEBU23@@Z @ 0x180263474 (--$_Emplace_reallocate@AEBUCompositionStatsPerMonitor@CCompositionSwapchainStatistics@@@-$vector.c)
 */

struct CCompositionSwapchainStatistics::CompositionStatsPerMonitor *__fastcall CCompositionSwapchainStatistics::GetOrCreateCompositionStatsForMonitor(
        CCompositionSwapchainStatistics *this,
        HMONITOR a2)
{
  _QWORD *v2; // rbx
  struct CCompositionSwapchainStatistics::CompositionStatsPerMonitor *result; // rax
  __int64 v6; // rdx
  __int128 v7; // xmm0
  __int64 v8; // xmm1_8
  __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  _OWORD v11[4]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v12; // [rsp+60h] [rbp-20h]
  __int64 v13; // [rsp+70h] [rbp-10h]

  v2 = (_QWORD *)((char *)this + 24);
  result = (struct CCompositionSwapchainStatistics::CompositionStatsPerMonitor *)*((_QWORD *)this + 3);
  v6 = *((_QWORD *)this + 4);
  if ( result == (struct CCompositionSwapchainStatistics::CompositionStatsPerMonitor *)v6 )
  {
LABEL_5:
    WORD2(v13) = 0;
    LODWORD(v13) = -1;
    v11[0] = _xmm;
    v11[1] = _xmm;
    v11[2] = _xmm;
    v11[3] = _xmm;
    LOWORD(v12) = 32085;
    *((_QWORD *)&v12 + 1) = a2;
    if ( *((_QWORD *)this + 5) == v6 )
    {
      std::vector<CCompositionSwapchainStatistics::CompositionStatsPerMonitor>::_Emplace_reallocate<CCompositionSwapchainStatistics::CompositionStatsPerMonitor const &>(
        (__int64 *)this + 3,
        v6,
        (__int64)v11);
      v9 = *((_QWORD *)this + 4);
    }
    else
    {
      *(_OWORD *)v6 = _xmm;
      v7 = v12;
      *(_OWORD *)(v6 + 16) = _xmm;
      v8 = v13;
      *(_OWORD *)(v6 + 32) = _xmm;
      *(_OWORD *)(v6 + 48) = _xmm;
      *(_OWORD *)(v6 + 64) = v7;
      *(_QWORD *)(v6 + 80) = v8;
      *((_QWORD *)this + 4) += 88LL;
      v9 = *((_QWORD *)this + 4);
    }
    v10 = (__int64)((unsigned __int128)((v9 - *v2) * (__int128)0x2E8BA2E8BA2E8BA3LL) >> 64) >> 4;
    return (struct CCompositionSwapchainStatistics::CompositionStatsPerMonitor *)(*v2 + 88 * ((v10 >> 63) + v10) - 88);
  }
  else
  {
    while ( *((HMONITOR *)result + 9) != a2 )
    {
      result = (struct CCompositionSwapchainStatistics::CompositionStatsPerMonitor *)((char *)result + 88);
      if ( result == (struct CCompositionSwapchainStatistics::CompositionStatsPerMonitor *)v6 )
      {
        v6 = *((_QWORD *)this + 4);
        goto LABEL_5;
      }
    }
  }
  return result;
}
