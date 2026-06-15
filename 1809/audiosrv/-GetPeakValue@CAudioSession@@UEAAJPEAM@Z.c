/*
 * XREFs of ?GetPeakValue@CAudioSession@@UEAAJPEAM@Z @ 0x1800C02D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_S @ 0x1800B3ED8 (WPP_SF_S.c)
 *     WPP_SF_g @ 0x1800BA110 (WPP_SF_g.c)
 *     ??A?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@_K@Z @ 0x1800BA87C (--A-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCA.c)
 *     ?GetPeakValue@CAudioStream@@QEAAJPEAM@Z @ 0x1800CBA5C (-GetPeakValue@CAudioStream@@QEAAJPEAM@Z.c)
 */

__int64 __fastcall CAudioSession::GetPeakValue(CAudioSession *this, float *a2)
{
  float v3; // xmm6_4
  unsigned int v5; // ebx
  unsigned __int64 i; // rdi
  CAudioStream **v7; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-38h] BYREF
  char v10; // [rsp+28h] [rbp-30h]
  float v11; // [rsp+68h] [rbp+10h] BYREF

  v3 = 0.0;
  v5 = 0;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Au, (__int64)&WPP_753fb3ff45c7308b48420cd59c2f48a5_Traceguids, 0LL);
  }
  if ( a2 )
  {
    v10 = 0;
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 48);
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    for ( i = 0LL; i < *((_QWORD *)this + 13); ++i )
    {
      v7 = (CAudioStream **)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                              (_QWORD *)this + 12,
                              i);
      if ( (int)CAudioStream::GetPeakValue(*v7, &v11) >= 0 )
        v3 = fmaxf(v11, v3);
    }
    if ( v10 )
      LeaveCriticalSection(lpCriticalSection);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
    {
      WPP_SF_g(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Bu,
        (__int64)&WPP_753fb3ff45c7308b48420cd59c2f48a5_Traceguids,
        v3);
    }
    *a2 = v3;
  }
  else
  {
    v5 = -2147467261;
    AudSrvTraceLoggingErrorHelper("CAudioSession::GetPeakValue", 1352, -2147467261);
  }
  return v5;
}
