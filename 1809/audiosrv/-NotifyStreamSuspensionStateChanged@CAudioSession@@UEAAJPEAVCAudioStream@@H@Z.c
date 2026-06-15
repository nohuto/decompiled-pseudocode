/*
 * XREFs of ?NotifyStreamSuspensionStateChanged@CAudioSession@@UEAAJPEAVCAudioStream@@H@Z @ 0x180029030
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AE7FC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??A?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@_K@Z @ 0x1800BA87C (--A-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCA.c)
 *     WPP_SF_dq @ 0x1800C3A70 (WPP_SF_dq.c)
 *     WPP_SF_qq @ 0x1800C3C58 (WPP_SF_qq.c)
 */

__int64 __fastcall CAudioSession::NotifyStreamSuspensionStateChanged(
        CAudioSession *this,
        struct CAudioStream *a2,
        int a3)
{
  unsigned __int64 v6; // rcx
  unsigned int v7; // ebp
  unsigned __int64 v8; // rbx
  __int64 v10; // r8
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-28h] BYREF
  char v12; // [rsp+38h] [rbp-20h]

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 60LL, &WPP_753fb3ff45c7308b48420cd59c2f48a5_Traceguids, this, a2);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 48);
  v12 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v6 = *((_QWORD *)this + 13);
  v7 = 0;
  if ( v6 )
  {
    v8 = 0LL;
    while ( *(struct CAudioStream **)(*((_QWORD *)this + 12) + 8 * v8) != a2 )
    {
      v8 = ++v7;
      if ( v7 >= v6 )
        goto LABEL_10;
    }
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[]((char *)this + 96, v8);
      WPP_SF_dq(*((_QWORD *)WPP_GLOBAL_Control + 2), 61LL, v10, v7);
    }
    if ( v8 >= *((_QWORD *)this + 13) )
      ATL::AtlThrowImpl(-2147024809);
    *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 12) + 8 * v8) + 120LL) = a3 != 0;
  }
LABEL_10:
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
