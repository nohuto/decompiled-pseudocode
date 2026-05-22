/*
 * XREFs of ?CreateInputSink@MPCFocusTarget@@IEAAXXZ @ 0x180056B94
 * Callers:
 *     ??0MPCFocusTarget@@QEAA@PEAUIFocusInputTarget@@PEAVInputSite@@1W4FrameworkViewType@@K_N@Z @ 0x1800569CC (--0MPCFocusTarget@@QEAA@PEAUIFocusInputTarget@@PEAVInputSite@@1W4FrameworkViewType@@K_N@Z.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x18001AFE8 (-IsEdition@@YA_N_K@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18002235C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180057040 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCFocusTarget::CreateInputSink(MPCFocusTarget *this)
{
  const char *v2; // r9
  __int64 v3; // xmm0_8
  __int128 v4; // xmm1
  __int128 v5; // xmm2
  __int64 v6; // rax
  unsigned int v7; // eax
  void *v8; // rdx
  unsigned int v9; // r8d
  __int64 v10; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v11; // [rsp+30h] [rbp-D8h]
  __int128 v12; // [rsp+38h] [rbp-D0h]
  __int128 v13; // [rsp+48h] [rbp-C0h]
  _OWORD v14[3]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v15; // [rsp+88h] [rbp-80h]
  __int64 v16; // [rsp+90h] [rbp-78h]
  int v17; // [rsp+98h] [rbp-70h] BYREF
  int v18; // [rsp+9Ch] [rbp-6Ch] BYREF
  __int128 v19; // [rsp+A0h] [rbp-68h]
  __int128 v20; // [rsp+B0h] [rbp-58h]
  __int128 v21; // [rsp+C0h] [rbp-48h]
  __int64 v22; // [rsp+D0h] [rbp-38h]
  __int128 v23; // [rsp+D8h] [rbp-30h]
  __int128 v24; // [rsp+E8h] [rbp-20h]
  __int128 v25; // [rsp+F8h] [rbp-10h]
  __int64 v26; // [rsp+108h] [rbp+0h]
  __int128 v27; // [rsp+110h] [rbp+8h]
  __int128 v28; // [rsp+120h] [rbp+18h]
  __int128 v29; // [rsp+130h] [rbp+28h]
  __int64 v30; // [rsp+140h] [rbp+38h]
  __int128 v31; // [rsp+148h] [rbp+40h]
  __int128 v32; // [rsp+158h] [rbp+50h]
  __int128 v33; // [rsp+168h] [rbp+60h]
  __int64 v34; // [rsp+178h] [rbp+70h]
  _BYTE v35[40]; // [rsp+188h] [rbp+80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  v16 = -2LL;
  v10 = 0LL;
  (***((void (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 10))(
    *((_QWORD *)this + 10),
    &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631,
    &v10);
  if ( *((_BYTE *)this + 48) && (!v10 || !(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 56LL))(v10)) )
  {
    memset_0(v14, 0, 0x38uLL);
    if ( IsEdition(8778LL) )
    {
      *((_QWORD *)&v14[0] + 1) = (*(int (__fastcall **)(MPCFocusTarget *))(*(_QWORD *)this + 56LL))(this);
      LODWORD(v14[0]) = 2;
      v3 = v15;
      v4 = v14[2];
      v5 = v14[1];
    }
    else
    {
      if ( !v10 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          73LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcfocustarget.cpp",
          v2);
        __debugbreak();
      }
      *((_QWORD *)&v14[0] + 1) = (*(int (__fastcall **)(MPCFocusTarget *))(*(_QWORD *)this + 56LL))(this);
      v6 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v10 + 72LL))(v10, v35);
      v5 = *(_OWORD *)v6;
      v4 = *(_OWORD *)(v6 + 16);
      v3 = *(_QWORD *)(v6 + 32);
      LODWORD(v14[0]) = 3;
    }
    v11 = v3;
    v13 = v4;
    v12 = v5;
    memset_0(&v18, 0, 0xE4uLL);
    v17 = 232;
    v18 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 9) + 80LL))((char *)this + 72);
    v23 = v14[0];
    v24 = v12;
    v25 = v13;
    v26 = v11;
    v31 = v14[0];
    v32 = v12;
    v33 = v13;
    v34 = v11;
    v27 = v14[0];
    v28 = v12;
    v29 = v13;
    v30 = v11;
    v19 = v14[0];
    v20 = v12;
    v21 = v13;
    v22 = v11;
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (void **)this + 11,
      0LL);
    v7 = NtCreateImplicitCompositionInputSink(&v17, (char *)this + 88);
    if ( v7 )
      wil::details::in1diag3::_Log_Win32(retaddr, v8, v9, (const char *)v7, v10);
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
}
