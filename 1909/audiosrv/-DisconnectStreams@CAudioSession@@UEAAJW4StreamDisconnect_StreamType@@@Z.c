/*
 * XREFs of ?DisconnectStreams@CAudioSession@@UEAAJW4StreamDisconnect_StreamType@@@Z @ 0x1800CD900
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180025FC0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_S @ 0x1800C21D0 (WPP_SF_S.c)
 *     WPP_SF_Sd @ 0x1800C4C2C (WPP_SF_Sd.c)
 *     ??A?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@_K@Z @ 0x1800C8BA0 (--A-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCA.c)
 *     ?Add@?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAVCAudioStream@@@Z @ 0x1800CCBF4 (-Add@-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAV.c)
 *     ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x1800CD65C (-DisconnectStreamList@CAudioSession@@AEAAJXZ.c)
 *     ?RemoveAt@?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x1800D0D60 (-RemoveAt@-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAAX_K0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSession::DisconnectStreams(__int64 a1, int a2)
{
  int v2; // r12d
  __int64 v3; // rsi
  unsigned int v4; // r15d
  __int64 v5; // rdi
  __int64 v6; // r14
  _QWORD *v7; // rax
  ATL::CAtlException *v9; // rbx
  __int64 v10; // [rsp+38h] [rbp-70h]
  ATL::CAtlException *v11; // [rsp+48h] [rbp-60h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-58h] BYREF
  char v13; // [rsp+58h] [rbp-50h]
  LPCRITICAL_SECTION v14; // [rsp+60h] [rbp-48h] BYREF
  char v15; // [rsp+68h] [rbp-40h]

  v2 = a2;
  v3 = a1;
  v4 = 0;
  v14 = (LPCRITICAL_SECTION)(a1 + 32);
  v15 = 0;
  ATL::CCritSecLock::Lock(&v14);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x8Eu, (__int64)&WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids, 0LL);
  }
  v5 = *(_QWORD *)(v3 + 88);
  while ( 1 )
  {
    LODWORD(v5) = v5 - 1;
    if ( (int)v5 < 0 )
      break;
    v6 = (int)v5;
    v10 = v3 + 80;
    if ( !*(_BYTE *)(*(_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                                  (_QWORD *)(v3 + 80),
                                  (int)v5)
                   + 120LL) )
    {
      if ( v2 == -1 )
        goto LABEL_14;
      if ( v2 == 1 )
      {
        if ( *(_BYTE *)(*(_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                                     (_QWORD *)(v3 + 80),
                                     (int)v5)
                      + 44LL) )
          goto LABEL_14;
      }
      else if ( !v2
             && *(_BYTE *)(*(_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                                        (_QWORD *)(v3 + 80),
                                        (int)v5)
                         + 45LL) )
      {
LABEL_14:
        lpCriticalSection = (LPCRITICAL_SECTION)(v3 + 112);
        v13 = 0;
        ATL::CCritSecLock::Lock(&lpCriticalSection);
        v4 = 0;
        try
        {
          v7 = (_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                           (_QWORD *)(v3 + 80),
                           (int)v5);
          ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::Add((_QWORD *)(v3 + 152), v7);
        }
        catch ( ATL::CAtlException *v11 )
        {
          v9 = v11;
          if ( *(_DWORD *)v11 == -1073741571 )
            _o__resetstkoflw();
          v4 = *(_DWORD *)v9;
          if ( *(int *)v9 < 0
            && WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_Sd(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0x8Fu,
              (__int64)&WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids,
              0LL);
          }
          v6 = (int)v5;
          v2 = a2;
          v3 = a1;
        }
        ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::RemoveAt(v10, v6);
        if ( v13 )
        {
          LeaveCriticalSection(lpCriticalSection);
          v13 = 0;
        }
      }
    }
  }
  if ( v15 )
    LeaveCriticalSection(v14);
  CAudioSession::DisconnectStreamList((CAudioSession *)(v3 - 16));
  return v4;
}
