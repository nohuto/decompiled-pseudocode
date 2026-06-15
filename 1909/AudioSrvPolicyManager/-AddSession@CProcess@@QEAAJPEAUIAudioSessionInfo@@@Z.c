/*
 * XREFs of ?AddSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z @ 0x1800129B0
 * Callers:
 *     ?RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x180018E58 (-RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x1800041E0 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180004B98 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?NewNode@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCApplication@@PEAV312@1@Z @ 0x18000CF08 (-NewNode@-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@AEAAPEAVCN.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000D600 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcess::AddSession(CProcess *this, struct IAudioSessionInfo *a2)
{
  unsigned int v3; // ebx
  __int64 *v4; // rax
  __int64 v5; // rcx
  int *v7; // rbx
  ATL::CAtlException *v8; // [rsp+28h] [rbp-20h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v10; // [rsp+38h] [rbp-10h]
  int v11; // [rsp+50h] [rbp+8h]
  struct IAudioSessionInfo *v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = a2;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v10 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  try
  {
    v3 = 0;
    v4 = ATL::CAtlList<CApplication *,ATL::CElementTraits<CApplication *>>::NewNode(
           (__int64)this + 72,
           (__int64 *)&v12,
           0LL,
           *((_QWORD *)this + 9));
    v5 = *((_QWORD *)this + 9);
    if ( v5 )
      *(_QWORD *)(v5 + 8) = v4;
    else
      *((_QWORD *)this + 10) = v4;
    *((_QWORD *)this + 9) = v4;
  }
  catch ( ATL::CAtlException *v8 )
  {
    v7 = (int *)v8;
    if ( *(_DWORD *)v8 == -1073741571 )
      _o__resetstkoflw();
    v11 = *v7;
    v3 = *v7;
    if ( v11 < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Au, &WPP_c27ef931432c3833a68ea220b2e62ed9_Traceguids, v11);
      }
      AudPolicyLogError("CProcess::AddSession", 3125, v11);
    }
  }
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
  return v3;
}
