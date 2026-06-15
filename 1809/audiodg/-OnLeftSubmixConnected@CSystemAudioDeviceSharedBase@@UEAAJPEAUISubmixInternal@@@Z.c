/*
 * XREFs of ?OnLeftSubmixConnected@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x140019990
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140009730 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14001BC40 (__security_check_cookie.c)
 *     WPP_SF_D @ 0x14003283C (WPP_SF_D.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::OnLeftSubmixConnected(
        CSystemAudioDeviceSharedBase *this,
        struct ISubmixInternal *a2)
{
  __int64 v3; // r9
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-48h] BYREF
  char v6; // [rsp+28h] [rbp-40h]
  __int128 v7; // [rsp+30h] [rbp-38h]
  __int128 v8; // [rsp+40h] [rbp-28h] BYREF

  v7 = *(_OWORD *)((char *)this - 56);
  v8 = v7;
  EtwEventActivityIdControl(4LL, &v8);
  v6 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this - 120);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v3 = (unsigned int)(*((_DWORD *)this + 10) + 1);
  *((_DWORD *)this + 10) = v3;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 28LL, &WPP_48d4d569e64a3b776de7c7a94bae5ebb_Traceguids, v3);
  }
  if ( v6 )
    LeaveCriticalSection(lpCriticalSection);
  EtwEventActivityIdControl(4LL, &v8);
  return 0LL;
}
