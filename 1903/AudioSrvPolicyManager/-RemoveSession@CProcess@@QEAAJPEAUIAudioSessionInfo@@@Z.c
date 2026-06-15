/*
 * XREFs of ?RemoveSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z @ 0x180012AC0
 * Callers:
 *     ?UnregisterSession@CWindowsPolicyManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x180006528 (-UnregisterSession@CWindowsPolicyManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x1800041E0 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180004B98 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@QEAAXXZ @ 0x18000CEFC (-RemoveAll@-$CAtlList@PEAUIAudioSessionInfo@@V-$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000D630 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

__int64 __fastcall CProcess::RemoveSession(CProcess *this, struct IAudioSessionInfo *a2)
{
  __int64 *i; // r8
  __int64 *v5; // rax
  __int64 v6; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v10; // [rsp+38h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v10 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  for ( i = (__int64 *)*((_QWORD *)this + 9); i && (struct IAudioSessionInfo *)i[2] != a2; i = (__int64 *)*i )
    ;
  if ( i )
  {
    v5 = (__int64 *)*i;
    if ( i == *((__int64 **)this + 9) )
      *((_QWORD *)this + 9) = v5;
    else
      *(_QWORD *)i[1] = v5;
    v6 = i[1];
    if ( i == *((__int64 **)this + 10) )
      *((_QWORD *)this + 10) = v6;
    else
      *(_QWORD *)(*i + 8) = v6;
    *i = *((_QWORD *)this + 13);
    *((_QWORD *)this + 13) = i;
    if ( (*((_QWORD *)this + 11))-- == 1LL )
      ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::RemoveAll((__int64)this + 72);
  }
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
