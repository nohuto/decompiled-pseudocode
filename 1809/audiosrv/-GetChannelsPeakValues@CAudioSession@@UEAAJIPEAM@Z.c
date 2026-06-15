/*
 * XREFs of ?GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z @ 0x1800BFAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_S @ 0x1800B3ED8 (WPP_SF_S.c)
 *     ?Allocate@?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x1800B6D8C (-Allocate@-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 *     WPP_SF_dd @ 0x1800BA07C (WPP_SF_dd.c)
 *     ??A?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@_K@Z @ 0x1800BA87C (--A-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCA.c)
 *     ?GetChannelPeakValues@CAudioStream@@QEAAJIPEAM@Z @ 0x1800CB760 (-GetChannelPeakValues@CAudioStream@@QEAAJIPEAM@Z.c)
 */

__int64 __fastcall CAudioSession::GetChannelsPeakValues(CAudioSession *this, unsigned int a2, float *a3)
{
  __int64 v4; // rbx
  int v6; // edi
  unsigned __int64 v7; // r14
  float *v8; // rbx
  CAudioStream **v9; // rax
  float *v10; // rax
  __int64 v11; // r8
  float v12; // xmm0_4
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-10h] BYREF
  char v15; // [rsp+38h] [rbp-8h]
  unsigned int v16; // [rsp+80h] [rbp+40h] BYREF
  void *Block; // [rsp+88h] [rbp+48h] BYREF

  v16 = 0;
  v4 = a2;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Eu, (__int64)&WPP_753fb3ff45c7308b48420cd59c2f48a5_Traceguids, 0LL);
  }
  if ( !a3 )
  {
    v6 = -2147467261;
LABEL_29:
    AudSrvTraceLoggingErrorHelper("CAudioSession::GetChannelsPeakValues", 1501, v6);
    return (unsigned int)v6;
  }
  if ( (_DWORD)v4 )
    memset_0(a3, 0, 4 * v4);
  v6 = (*(__int64 (__fastcall **)(CAudioSession *, unsigned int *))(*(_QWORD *)this + 432LL))(this, &v16);
  if ( v6 < 0 )
    goto LABEL_29;
  if ( (_DWORD)v4 != v16 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_dd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Fu,
        (__int64)&WPP_753fb3ff45c7308b48420cd59c2f48a5_Traceguids,
        v4);
    }
    v6 = -2147024809;
    goto LABEL_29;
  }
  v15 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 48);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v7 = 0LL;
  if ( *((_QWORD *)this + 13) )
  {
    v6 = 0;
    while ( 1 )
    {
      Block = 0LL;
      v16 = *(_DWORD *)(*(_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                                     (_QWORD *)this + 12,
                                     v7)
                      + 88LL);
      ATL::CHeapPtr<float,ATL::CCRTAllocator>::Allocate(&Block, v16);
      v8 = (float *)Block;
      if ( !Block )
        break;
      v9 = (CAudioStream **)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                              (_QWORD *)this + 12,
                              v7);
      if ( CAudioStream::GetChannelPeakValues(*v9, v16, v8) >= 0 && v16 )
      {
        v10 = a3;
        v11 = v16;
        do
        {
          v12 = *(float *)((char *)v10 + (char *)v8 - (char *)a3);
          if ( v12 > *v10 )
            *v10 = v12;
          ++v10;
          --v11;
        }
        while ( v11 );
      }
      free(v8);
      if ( ++v7 >= *((_QWORD *)this + 13) )
        goto LABEL_26;
    }
    v6 = -2147024882;
    free(0LL);
    if ( v15 )
      LeaveCriticalSection(lpCriticalSection);
    goto LABEL_29;
  }
LABEL_26:
  if ( v15 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v6;
}
