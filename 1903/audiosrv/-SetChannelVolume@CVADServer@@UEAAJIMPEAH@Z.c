/*
 * XREFs of ?SetChannelVolume@CVADServer@@UEAAJIMPEAH@Z @ 0x1800E64C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateAudioLevel@@YA_NM@Z @ 0x18001DA6C (-ValidateAudioLevel@@YA_NM@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180023370 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_qdg @ 0x1800C896C (WPP_SF_qdg.c)
 *     ?SetStreamChannelVolume@CAudioStream@@QEAAJIMPEAH@Z @ 0x1800DB26C (-SetStreamChannelVolume@CAudioStream@@QEAAJIMPEAH@Z.c)
 */

__int64 __fastcall CVADServer::SetChannelVolume(CVADServer *this, unsigned int a2, float a3, int *a4)
{
  unsigned int v7; // ebx
  CAudioStream *v8; // rcx
  int v9; // eax
  __int64 v10; // r9
  __int64 v11; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-28h] BYREF
  char v15; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qdg(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x2Eu,
      (__int64)&WPP_68f7ce5d5567395ebc4ef499649768ed_Traceguids,
      this,
      a2,
      a3);
  }
  if ( !ValidateAudioLevel(a3) )
  {
    v7 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x986,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x80070057LL);
    return v7;
  }
  v15 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 224);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v8 = (CAudioStream *)*((_QWORD *)this + 24);
  if ( !v8 || !*((_DWORD *)this + 46) )
  {
    v7 = -2004287487;
    v11 = 2442LL;
    v10 = 2290679809LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v10);
    if ( v15 )
      LeaveCriticalSection(lpCriticalSection);
    return v7;
  }
  v9 = CAudioStream::SetStreamChannelVolume(v8, a2, a3, a4);
  v7 = v9;
  if ( v9 < 0 )
  {
    v10 = (unsigned int)v9;
    v11 = 2443LL;
    goto LABEL_15;
  }
  if ( v15 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
