/*
 * XREFs of _lambda_522021c458d8d311203f9373ddc44e50_::operator() @ 0x180084018
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_522021c458d8d311203f9373ddc44e50__void_InputContext_____ptr64_::_Do_call @ 0x180085EE0 (std--_Func_impl_no_alloc__lambda_522021c458d8d311203f9373ddc44e50__void_InputContex_ea_180085EE0.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@DWMInputDisplay@@SAJPEAUHMONITOR__@@PEAPEAUIInputDisplay@@@Z @ 0x18008EC0C (-Create@DWMInputDisplay@@SAJPEAUHMONITOR__@@PEAPEAUIInputDisplay@@@Z.c)
 *     ?CreateHelper@DWMInputTarget@@CAJAEBUtagMsgRoutingInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@KKPEAPEAUIInputTarget@@@Z @ 0x18008F8F8 (-CreateHelper@DWMInputTarget@@CAJAEBUtagMsgRoutingInfo@@V-$ComPtr@VInputSite@@@WRL@Microsoft@@KK.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_522021c458d8d311203f9373ddc44e50_::operator()(__int64 **a1, __int64 a2)
{
  __int64 v4; // rcx
  HMONITOR v5; // rsi
  int Helper; // eax
  wil::details::in1diag3 *v7; // rcx
  __int64 (__fastcall ***v8)(_QWORD, GUID *, _QWORD *); // rbx
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  int v11; // eax
  __int64 (__fastcall ***v12)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v13; // rcx
  HMONITOR v14; // rax
  __int64 *v15; // rbx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v22; // [rsp+70h] [rbp+30h] BYREF
  __int64 (__fastcall ***v23)(_QWORD, GUID *, __int64 *); // [rsp+78h] [rbp+38h] BYREF
  HMONITOR v24; // [rsp+80h] [rbp+40h] BYREF
  __int64 v25; // [rsp+88h] [rbp+48h] BYREF

  v4 = **a1;
  v5 = *(HMONITOR *)(v4 + 216);
  if ( !*(_QWORD *)a2 )
  {
    v23 = 0LL;
    v25 = 0LL;
    Helper = DWMInputTarget::CreateHelper((int)v4 + 168, (unsigned int)&v25, 0, 0, (__int64)&v23);
    v7 = retaddr;
    if ( Helper < 0 )
    {
LABEL_21:
      wil::details::in1diag3::FailFast_Hr(
        v7,
        (void *)0x533,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)Helper);
LABEL_22:
      wil::details::in1diag3::FailFast_Hr(
        v10,
        (void *)0x536,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v9);
      __debugbreak();
    }
    v22 = 0LL;
    v8 = v23;
    v9 = (**v23)(v23, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, &v22);
    v10 = retaddr;
    if ( v9 < 0 )
      goto LABEL_22;
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v22 + 80LL))(v22, *(unsigned int *)(**a1 + 208));
    if ( v11 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x53A,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v11);
      goto LABEL_24;
    }
    if ( *(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))a2 != v8 )
    {
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v8)[1])(v8);
      v12 = *(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))a2;
      *(_QWORD *)a2 = v8;
      if ( v12 )
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v12)[2])(v12);
    }
    v13 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v8)[2])(v8);
  }
  v14 = 0LL;
  v24 = 0LL;
  v15 = (__int64 *)(a2 + 8);
  v16 = *(_QWORD *)(a2 + 8);
  if ( !v16 )
    goto LABEL_14;
  v17 = (*(__int64 (__fastcall **)(__int64, HMONITOR *))(*(_QWORD *)v16 + 24LL))(v16, &v24);
  if ( v17 < 0 )
  {
LABEL_24:
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x542,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v17);
    JUMPOUT(0x180084231LL);
  }
  v14 = v24;
LABEL_14:
  if ( !v5 || v5 != v14 )
  {
    v18 = *v15;
    if ( *v15 )
    {
      *v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    v19 = DWMInputDisplay::Create(v5, (struct IInputDisplay **)(a2 + 8));
    if ( v19 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x54A,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v19);
      goto LABEL_21;
    }
  }
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(**a1 + 224);
  result = *(_DWORD *)(**a1 + 232) & 0xFFFFFFFB;
  *(_DWORD *)(a2 + 24) = result;
  return result;
}
