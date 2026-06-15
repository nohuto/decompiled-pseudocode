/*
 * XREFs of ?SetAllInitialVolumesWithRamp@CVADServer@@UEAAJIPEBM_J@Z @ 0x1800E5F30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180025FC0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_q @ 0x1800C3AB8 (WPP_SF_q.c)
 *     ?SetAllInitialStreamVolumes@CAudioStream@@QEAAJIPEBM_J@Z @ 0x1800DAC18 (-SetAllInitialStreamVolumes@CAudioStream@@QEAAJIPEBM_J@Z.c)
 */

__int64 __fastcall CVADServer::SetAllInitialVolumesWithRamp(CVADServer *this, unsigned int a2, float *a3, __int64 a4)
{
  CAudioStream *v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rdx
  int v11; // eax
  unsigned __int64 v12; // r9
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v15; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x31u,
      (__int64)&WPP_68f7ce5d5567395ebc4ef499649768ed_Traceguids,
      this);
  }
  v15 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 224);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v8 = (CAudioStream *)*((_QWORD *)this + 24);
  if ( !v8 || !*((_DWORD *)this + 46) )
  {
    v9 = -2004287487;
    v10 = 2546LL;
    goto LABEL_13;
  }
  if ( !*((_BYTE *)this + 200) )
  {
    v9 = -2147024809;
    v10 = 2548LL;
LABEL_13:
    v12 = v9;
    goto LABEL_14;
  }
  v11 = CAudioStream::SetAllInitialStreamVolumes(v8, a2, a3, a4);
  v9 = v11;
  if ( v11 >= 0 )
  {
    v9 = 0;
    goto LABEL_15;
  }
  v12 = (unsigned int)v11;
  v10 = 2550LL;
LABEL_14:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)v12);
LABEL_15:
  if ( v15 )
    LeaveCriticalSection(lpCriticalSection);
  return v9;
}
