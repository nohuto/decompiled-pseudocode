/*
 * XREFs of ?SetAllVolumes@CVADServer@@UEAAJIPEBMPEAH@Z @ 0x180041290
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180023370 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?SetAllStreamVolumes@CAudioStream@@QEAAJIPEBMPEAH@Z @ 0x18004134C (-SetAllStreamVolumes@CAudioStream@@QEAAJIPEBMPEAH@Z.c)
 *     WPP_SF_q @ 0x1800C3F68 (WPP_SF_q.c)
 */

__int64 __fastcall CVADServer::SetAllVolumes(CAudioStream **this, unsigned int a2, const float *a3, int *a4)
{
  CAudioStream *v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v12; // r9
  __int64 v13; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v15; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 48LL, &WPP_68f7ce5d5567395ebc4ef499649768ed_Traceguids, this);
  }
  v15 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 28);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v8 = this[24];
  if ( v8 && *((_DWORD *)this + 46) )
  {
    v9 = CAudioStream::SetAllStreamVolumes(v8, a2, a3, a4);
    v10 = v9;
    if ( v9 >= 0 )
    {
      v10 = 0;
      goto LABEL_7;
    }
    v12 = (unsigned int)v9;
    v13 = 2516LL;
  }
  else
  {
    v10 = -2004287487;
    v13 = 2515LL;
    v12 = 2290679809LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)v12);
LABEL_7:
  if ( v15 )
    LeaveCriticalSection(lpCriticalSection);
  return v10;
}
