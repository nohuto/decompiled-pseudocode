/*
 * XREFs of ?CheckAndRecordGlitch@CScheduleStatistics@@SAJPEBVCFrameInfo@@00AEB_K1PEA_NPEAI@Z @ 0x1800837D0
 * Callers:
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x180083100 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 * Callees:
 *     ?TraceGlitch@CScheduleStatistics@@CAXIPEBVCFrameInfo@@AEB_K1@Z @ 0x180083890 (-TraceGlitch@CScheduleStatistics@@CAXIPEBVCFrameInfo@@AEB_K1@Z.c)
 */

__int64 __fastcall CScheduleStatistics::CheckAndRecordGlitch(
        const struct CFrameInfo *a1,
        const struct CFrameInfo *a2,
        const struct CFrameInfo *a3,
        const unsigned __int64 *a4,
        unsigned __int64 *a5,
        bool *a6,
        unsigned int *a7)
{
  unsigned int v7; // r10d
  bool v8; // bl
  unsigned int v9; // r11d
  unsigned int v10; // r10d
  unsigned int v11; // edx
  int v13; // eax
  unsigned int v14; // eax
  _DWORD *v15; // r8

  if ( *((_BYTE *)a1 + 1060) && *((_BYTE *)a2 + 1060) )
  {
    v7 = *((_DWORD *)a1 + 59);
    v8 = 0;
    v9 = *((_DWORD *)a1 + 43);
    if ( v7 > v9 )
    {
      if ( a3 )
      {
        v13 = *((_DWORD *)a3 + 59);
        if ( v13 )
        {
          v14 = v13 + 1;
          if ( v9 > v14 )
            v14 = *((_DWORD *)a1 + 43);
          v9 = v14;
          if ( v14 >= v7 )
            v9 = *((_DWORD *)a1 + 59);
        }
      }
      v8 = 1;
      *a7 = v7 - v9;
    }
    v10 = *((_DWORD *)a2 + 118);
    v11 = 1;
    if ( v10 > 1 )
    {
      v15 = (_DWORD *)((char *)a1 + 176);
      do
      {
        if ( v11 >= 0x10 )
          break;
        if ( v15[16] > *v15 )
          v8 = 1;
        ++v11;
        ++v15;
      }
      while ( v11 < v10 );
    }
    if ( v8 )
      CScheduleStatistics::TraceGlitch(v10, a1, a4, a5);
    *a6 = v8;
  }
  return 0LL;
}
