/*
 * XREFs of ?LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x18000E028
 * Callers:
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x1800191B0 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x1800041E0 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180004B98 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000D240 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000D630 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetActiveProcessCount@CApplication@@QEAAIXZ @ 0x18000E438 (-GetActiveProcessCount@CApplication@@QEAAIXZ.c)
 *     ?RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180010E0C (-RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCHostedAppInteractivity@@@Z @ 0x180015528 (-AddHead@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity@@.c)
 *     _guard_dispatch_icall_nop @ 0x180035AC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::LinkProcess(CApplication *this, struct CProcess *a2)
{
  struct CProcess *v2; // r14
  CApplication *v3; // rbx
  int v4; // edx
  int v5; // ecx
  unsigned int v6; // esi
  int v7; // eax
  volatile signed __int32 *v8; // r15
  __int64 result; // rax
  int *v10; // rbx
  ATL::CAtlException *v11; // [rsp+28h] [rbp-30h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-28h] BYREF
  char v13; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct CProcess *v16; // [rsp+68h] [rbp+10h] BYREF
  int v17; // [rsp+70h] [rbp+18h]

  v16 = a2;
  v2 = a2;
  v3 = this;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v13 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  *((_DWORD *)v3 + 148) = *((_DWORD *)v2 + 113);
  v4 = *((_DWORD *)v2 + 114);
  *((_DWORD *)v3 + 149) = v4;
  *((_BYTE *)v3 + 664) = *((_BYTE *)v2 + 818);
  *((_DWORD *)v3 + 150) |= *((_DWORD *)v2 + 119);
  v5 = *((_DWORD *)v3 + 150);
  if ( !v4 )
  {
    *((_DWORD *)v3 + 52) |= 1u;
    *((_DWORD *)v3 + 54) = 2;
    *((_DWORD *)v3 + 81) = 2;
    *((_DWORD *)v3 + 82) = 2;
  }
  if ( v5 )
  {
    *((_DWORD *)v3 + 52) |= 0x40u;
    *((_DWORD *)v3 + 54) = 2;
    *((_DWORD *)v3 + 81) = 2;
    *((_DWORD *)v3 + 82) = 2;
    *((_DWORD *)v3 + 141) = 0;
    *((_DWORD *)v3 + 142) = 0;
    *((_DWORD *)v3 + 143) = 0;
    *((_DWORD *)v3 + 144) = 0;
    *((_DWORD *)v3 + 145) = 0;
    *((_DWORD *)v3 + 146) = 0;
    *((_DWORD *)v3 + 147) = 1;
  }
  if ( !CApplication::GetActiveProcessCount(v3) )
    *((_DWORD *)v3 + 157) = 1;
  try
  {
    v6 = 0;
    ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::AddHead(
      (char *)v3 + 72,
      &v16);
  }
  catch ( ATL::CAtlException *v11 )
  {
    v10 = (int *)v11;
    if ( *(_DWORD *)v11 == -1073741571 )
      _o__resetstkoflw();
    v17 = *v10;
    v6 = v17;
    if ( v17 >= 0 )
    {
      v3 = this;
      v2 = v16;
      goto LABEL_9;
    }
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, &WPP_c27ef931432c3833a68ea220b2e62ed9_Traceguids, v17);
    }
    AudPolicyLogError("CApplication::LinkProcess", 339, v6);
LABEL_19:
    if ( v13 )
      LeaveCriticalSection(lpCriticalSection);
    result = v6;
  }
LABEL_9:
  v7 = CApplication::RegisterProcessWithApplicationSpecificEndpointInfo(v3, v2);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x14B,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
      (const char *)(unsigned int)v7);
  v8 = (volatile signed __int32 *)*((_QWORD *)v2 + 32);
  *((_QWORD *)v2 + 32) = v3;
  _InterlockedIncrement((volatile signed __int32 *)v3 + 2);
  if ( v8 && _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 16LL))(v8);
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v8 + 8LL))(v8, 1LL);
  }
  goto LABEL_19;
}
