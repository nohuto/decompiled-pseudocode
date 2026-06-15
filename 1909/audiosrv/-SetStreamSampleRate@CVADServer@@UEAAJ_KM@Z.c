/*
 * XREFs of ?SetStreamSampleRate@CVADServer@@UEAAJ_KM@Z @ 0x1800E6610
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180025FC0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002D610 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_qq @ 0x1800D2038 (WPP_SF_qq.c)
 *     ?SetSampleRate@CAudioStream@@QEAAJM@Z @ 0x1800DAD44 (-SetSampleRate@CAudioStream@@QEAAJM@Z.c)
 */

__int64 __fastcall CVADServer::SetStreamSampleRate(CVADServer *this, __int64 a2, float a3)
{
  int v5; // ebx
  CAudioStream *v7; // rcx
  __int64 v8; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-28h] BYREF
  char v10; // [rsp+38h] [rbp-20h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 224);
  v10 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( !*((_DWORD *)this + 46) || (v7 = (CAudioStream *)*((_QWORD *)this + 24)) == 0LL )
  {
    v5 = -2004287487;
    goto LABEL_3;
  }
  v8 = *((_QWORD *)v7 + 6);
  if ( a2 != v8 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x28u,
        (__int64)&WPP_68f7ce5d5567395ebc4ef499649768ed_Traceguids,
        a2,
        v8);
    }
    v5 = -2147024809;
    goto LABEL_3;
  }
  v5 = CAudioStream::SetSampleRate(v7, a3);
  if ( v5 < 0 )
  {
LABEL_3:
    AudSrvTraceLoggingErrorHelper("CVADServer::SetStreamSampleRate", 2234, v5);
    goto LABEL_4;
  }
  v5 = 0;
LABEL_4:
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v5;
}
