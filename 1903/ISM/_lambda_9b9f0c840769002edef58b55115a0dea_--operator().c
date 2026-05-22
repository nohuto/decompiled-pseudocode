/*
 * XREFs of _lambda_9b9f0c840769002edef58b55115a0dea_::operator() @ 0x1801434A8
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_9b9f0c840769002edef58b55115a0dea__void_Microsoft::WRL::ComPtr_DataProviderPrincipal__&_::_Do_call @ 0x1801441C0 (std--_Func_impl_no_alloc__lambda_9b9f0c840769002edef58b55115a0dea__void_Microsoft--_ea_1801441C0.c)
 * Callees:
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180056650 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateAnimationForProcess@DWMCursor@@QEAAJKPEA_K0@Z @ 0x1801444A8 (-CreateAnimationForProcess@DWMCursor@@QEAAJKPEA_K0@Z.c)
 */

void __fastcall lambda_9b9f0c840769002edef58b55115a0dea_::operator()(unsigned int *a1)
{
  __int128 *v2; // rax
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // r10
  __int64 v8; // r8
  int v9; // edi
  unsigned __int64 v10; // [rsp+30h] [rbp-29h] BYREF
  unsigned __int64 v11[3]; // [rsp+38h] [rbp-21h] BYREF
  _BYTE v12[8]; // [rsp+50h] [rbp-9h] BYREF
  __int128 v13; // [rsp+58h] [rbp-1h]
  int v14; // [rsp+68h] [rbp+Fh]
  int v15; // [rsp+6Ch] [rbp+13h]
  unsigned __int64 v16; // [rsp+70h] [rbp+17h]
  unsigned __int64 v17; // [rsp+78h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  if ( *(_QWORD *)(*(_QWORD *)a1 + 24 * (a1[4] + 9LL)) )
  {
    memset_0(v12, 0, 0x48uLL);
    v2 = (__int128 *)(*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *))(**((_QWORD **)a1 + 1) + 40LL))(
                       *((_QWORD *)a1 + 1),
                       v11);
    v3 = *((_QWORD *)a1 + 1);
    v13 = *v2;
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 48LL))(v3);
    v5 = *((_QWORD *)a1 + 1);
    v14 = v4;
    v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 56LL))(v5);
    v6 = DWMCursor::CreateAnimationForProcess(
           *((DWMCursor **)a1 + 1),
           *(_DWORD *)(*(_QWORD *)a1 + 24LL * a1[4] + 208),
           &v10,
           v11);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        388LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
        (const char *)(unsigned int)v6);
    v7 = *(_QWORD *)a1;
    v8 = a1[4];
    v16 = v10;
    v17 = v11[0];
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _BYTE *, int))(**(_QWORD **)(v7 + 176) + 160LL))(
           *(_QWORD *)(v7 + 176),
           *(_QWORD *)(v7 + 24 * (v8 + 9)),
           4LL,
           v12,
           72);
    if ( v9 < 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 176LL) + 152LL))(
        *(_QWORD *)(*(_QWORD *)a1 + 176LL),
        *(_QWORD *)(*(_QWORD *)a1 + 24 * (a1[4] + 9LL)));
      *(_QWORD *)(*(_QWORD *)a1 + 24 * (a1[4] + 9LL)) = 0LL;
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        407LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
        (const char *)(unsigned int)v9);
    }
  }
}
