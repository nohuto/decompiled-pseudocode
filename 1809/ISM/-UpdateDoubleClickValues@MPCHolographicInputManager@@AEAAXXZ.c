/*
 * XREFs of ?UpdateDoubleClickValues@MPCHolographicInputManager@@AEAAXXZ @ 0x180043030
 * Callers:
 *     ?AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x180042D40 (-AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_739338be7cb217051fff1cec4ae0b0f4__void_::_Do_call @ 0x180043F00 (std--_Func_impl_no_alloc__lambda_739338be7cb217051fff1cec4ae0b0f4__void_--_Do_call.c)
 * Callees:
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCHolographicInputManager_UpdateDoubleClickValues_@ISMTracing@@QEAAXAEB_NAEBH1@Z @ 0x180044148 (-MPCHolographicInputManager_UpdateDoubleClickValues_@ISMTracing@@QEAAXAEB_NAEBH1@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180044D54 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCHolographicInputManager::UpdateDoubleClickValues(MPCHolographicInputManager *this)
{
  char v1; // di
  _QWORD *v3; // rcx
  UINT v4; // edx
  UINT v5; // eax
  int SystemMetrics; // eax
  const char *v7; // r9
  const char *v8; // r9
  _DWORD *v9; // rcx
  ISMTracing *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  UINT v12; // [rsp+38h] [rbp+10h] BYREF
  UINT uiParam; // [rsp+40h] [rbp+18h] BYREF

  v1 = 1;
  if ( ((1LL << gdwDeviceFamily) & 0xA) != 0 )
  {
    v3 = (_QWORD *)*((_QWORD *)this + 261);
    if ( v3 == *((_QWORD **)this + 262)
      || (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 48LL))(*v3) == 2
      || *((_DWORD *)this + 534) != 1 )
    {
      v1 = 0;
    }
    if ( v1 != *((_BYTE *)this + 2160) )
    {
      if ( v1 )
        v4 = *((_DWORD *)this + 543);
      else
        v4 = *((_DWORD *)this + 541);
      uiParam = v4;
      if ( v1 )
        v5 = *((_DWORD *)this + 544);
      else
        v5 = *((_DWORD *)this + 542);
      v12 = v5;
      if ( v1 )
      {
        *((_DWORD *)this + 541) = GetSystemMetrics(36);
        SystemMetrics = GetSystemMetrics(37);
        v4 = uiParam;
        *((_DWORD *)this + 542) = SystemMetrics;
      }
      if ( !SystemParametersInfoW(0x1Du, v4, 0LL, 2u) )
        wil::details::in1diag3::_Log_GetLastError(
          retaddr,
          (void *)0x569,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          v7);
      if ( !SystemParametersInfoW(0x1Eu, v12, 0LL, 2u) )
        wil::details::in1diag3::_Log_GetLastError(
          retaddr,
          (void *)0x56A,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          v8);
      *((_BYTE *)this + 2160) = v1;
      v9 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
      if ( v9 )
      {
        if ( *v9 )
        {
          ISMTracing::Instance();
          ISMTracing::MPCHolographicInputManager_UpdateDoubleClickValues_(
            v10,
            (const bool *)this + 2160,
            (const int *)&uiParam,
            (const int *)&v12);
        }
      }
    }
  }
}
