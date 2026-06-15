/*
 * XREFs of ?LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180011274
 * Callers:
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001C350 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x180008188 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008498 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001051C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180010910 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetActiveProcessCount@CApplication@@QEAAIXZ @ 0x180011620 (-GetActiveProcessCount@CApplication@@QEAAIXZ.c)
 *     ?RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180013F4C (-RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCHostedAppInteractivity@@@Z @ 0x1800186B8 (-AddHead@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::LinkProcess(CApplication *this, struct CProcess *a2)
{
  struct CProcess *v2; // rdi
  CApplication *v3; // rbx
  int v4; // edx
  unsigned int v5; // esi
  int v6; // eax
  volatile signed __int32 *v7; // r14
  __int64 result; // rax
  int *v9; // rbx
  ATL::CAtlException *v10; // [rsp+28h] [rbp-30h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-28h] BYREF
  char v12; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct CProcess *v15; // [rsp+68h] [rbp+10h] BYREF
  int v16; // [rsp+70h] [rbp+18h]

  v15 = a2;
  v2 = a2;
  v3 = this;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v12 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  *((_DWORD *)v3 + 148) = *((_DWORD *)v2 + 113);
  v4 = *((_DWORD *)v2 + 114);
  *((_DWORD *)v3 + 149) = v4;
  *((_BYTE *)v3 + 656) = *((_BYTE *)v2 + 810);
  if ( !v4 )
  {
    *((_DWORD *)v3 + 52) |= 1u;
    *((_DWORD *)v3 + 54) = 2;
    *((_DWORD *)v3 + 81) = 2;
    *((_DWORD *)v3 + 82) = 2;
  }
  if ( !CApplication::GetActiveProcessCount(v3) )
    *((_DWORD *)v3 + 154) = 1;
  try
  {
    v5 = 0;
    ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::AddHead(
      (char *)v3 + 72,
      &v15);
  }
  catch ( ATL::CAtlException *v10 )
  {
    v9 = (int *)v10;
    if ( *(_DWORD *)v10 == -1073741571 )
      _o__resetstkoflw();
    v16 = *v9;
    v5 = v16;
    if ( v16 >= 0 )
    {
      v3 = this;
      v2 = v15;
      goto LABEL_7;
    }
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, &WPP_27554cd5659639419dce4f92de6452d1_Traceguids, v16);
    }
    AudPolicyLogError("CApplication::LinkProcess", 329, v5);
LABEL_17:
    if ( v12 )
      LeaveCriticalSection(lpCriticalSection);
    result = v5;
  }
LABEL_7:
  v6 = CApplication::RegisterProcessWithApplicationSpecificEndpointInfo(v3, v2);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x141,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
      (const char *)(unsigned int)v6);
  v7 = (volatile signed __int32 *)*((_QWORD *)v2 + 32);
  *((_QWORD *)v2 + 32) = v3;
  _InterlockedIncrement((volatile signed __int32 *)v3 + 2);
  if ( v7 && _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 16LL))(v7);
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v7 + 8LL))(v7, 1LL);
  }
  goto LABEL_17;
}
