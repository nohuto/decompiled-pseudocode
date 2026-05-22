/*
 * XREFs of _lambda_f25ac99651c50efdaddaa211dd60b097_::operator() @ 0x180040FA8
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_f25ac99651c50efdaddaa211dd60b097__void_IMPCInputProviderBase_____ptr64_::_Do_call @ 0x180043E70 (std--_Func_impl_no_alloc__lambda_f25ac99651c50efdaddaa211dd60b097__void_IMPCInputPr_ea_180043E70.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@W4MPCCursorId@@AEAUCursor3DHitData@@@Z @ 0x180041C34 (-ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult.c)
 *     ??1?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAA@XZ @ 0x180043600 (--1-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_f25ac99651c50efdaddaa211dd60b097_::operator()(_QWORD *a1, __int64 a2)
{
  const char *v4; // r9
  bool v5; // al
  wil::details::in1diag3 *v6; // rcx
  __int64 *v7; // rdi
  __int64 v8; // rbx
  unsigned int v9; // eax
  __int64 result; // rax
  __int64 v11; // rbx
  unsigned int v12; // eax
  int v13; // eax
  wil::details::in1diag3 *v14; // rcx
  __int64 v15; // rbx
  unsigned int v16; // eax
  __int64 v17; // rdi
  __int64 v18; // rbx
  int v19; // eax
  __int64 v20; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v21; // [rsp+40h] [rbp-C8h]
  __int64 v22; // [rsp+50h] [rbp-B8h]
  _BYTE v23[320]; // [rsp+58h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  v22 = -2LL;
  v5 = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2)
    && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2);
  v6 = retaddr;
  if ( v5 )
    goto LABEL_20;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 136LL))(a2, *(_QWORD *)a1[1]);
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2) )
  {
    v7 = *(__int64 **)(*a1 + 1888LL);
    v8 = *v7;
    v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 88LL))(a2);
    result = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _BYTE *))(v8 + 72))(v7, v9, v23);
    if ( (int)result < 0 )
      return result;
    v11 = *a1 + 1912LL;
    v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 320LL))(a2);
    MPCHolographicInputManager::ProcessCursorData(*a1, a2, v23, v12, v11);
    (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)a2 + 104LL))(a2, &v20, *a1);
    v13 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*a1 + 1888LL) + 80LL))(
            *(_QWORD *)(*a1 + 1888LL),
            (v21 - v20) / 184);
    v14 = retaddr;
    if ( v13 >= 0 )
      return std::vector<PointData3D>::~vector<PointData3D>(&v20);
LABEL_21:
    wil::details::in1diag3::FailFast_Hr(
      v14,
      (void *)0x212,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)(unsigned int)v13);
    JUMPOUT(0x18004129DLL);
  }
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2);
  if ( !(_BYTE)result )
    return result;
  if ( !*(_BYTE *)(*(_QWORD *)a1[1] + 1584LL) )
  {
    v15 = *a1 + 1912LL;
    v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 320LL))(a2);
    MPCHolographicInputManager::ProcessCursorData(*a1, a2, *(_QWORD *)a1[1] + 600LL, v16, v15);
  }
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)a2 + 104LL))(a2, &v20, *a1);
  v17 = v21;
  v18 = v20;
  if ( v20 != v21 )
  {
    do
    {
      *(_DWORD *)(v18 + 176) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 320LL))(a2);
      v18 += 184LL;
    }
    while ( v18 != v17 );
    v17 = v21;
    v18 = v20;
  }
  v19 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(*a1 + 1888LL) + 80LL))(
          *(_QWORD *)(*a1 + 1888LL),
          (v17 - v18) / 184,
          v18);
  if ( v19 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x225,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)(unsigned int)v19);
LABEL_20:
    wil::details::in1diag3::_FailFast_Unexpected(
      v6,
      (void *)0x1FF,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      v4);
    goto LABEL_21;
  }
  return std::vector<PointData3D>::~vector<PointData3D>(&v20);
}
