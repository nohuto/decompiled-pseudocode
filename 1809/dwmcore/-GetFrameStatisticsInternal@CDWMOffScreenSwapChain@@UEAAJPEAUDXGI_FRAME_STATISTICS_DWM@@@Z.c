/*
 * XREFs of ?GetFrameStatisticsInternal@CDWMOffScreenSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x1800EAC90
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMOffScreenSwapChain::GetFrameStatisticsInternal(
        CDWMOffScreenSwapChain *this,
        struct DXGI_FRAME_STATISTICS_DWM *a2)
{
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // edi
  int v6; // edx
  __int64 v7; // rcx
  _DWORD v9[4]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]

  v3 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 67) + 40LL))(*((_QWORD *)this + 67), v9);
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x34Cu);
  }
  else
  {
    v6 = v9[2];
    *(_DWORD *)a2 = v9[0];
    *((_DWORD *)a2 + 1) = v9[1];
    v7 = v10;
    *((_QWORD *)a2 + 1) = v10;
    *((_QWORD *)a2 + 3) = v7;
    *((_DWORD *)a2 + 4) = v6;
  }
  return v5;
}
