/*
 * XREFs of ?CreateInputSink@MPCFocusTarget@@IEAAXXZ @ 0x18000AFE8
 * Callers:
 *     ??0MPCFocusTarget@@QEAA@PEAUIFocusInputTarget@@PEAVInputSite@@1W4FrameworkViewType@@K_N@Z @ 0x18000AD64 (--0MPCFocusTarget@@QEAA@PEAUIFocusInputTarget@@PEAVInputSite@@1W4FrameworkViewType@@K_N@Z.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B58C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18000B620 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall MPCFocusTarget::CreateInputSink(MPCFocusTarget *this)
{
  char v2; // bl
  __int64 v3; // rcx
  int v4; // eax
  _OWORD *v5; // rax
  char *v6; // rsi
  DWORD LastError; // ebx
  unsigned int ImplicitCompositionInputSink; // eax
  void *v9; // rdx
  unsigned int v10; // r8d
  unsigned int v11[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v12; // [rsp+30h] [rbp-D8h]
  _QWORD v13[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v14; // [rsp+48h] [rbp-C0h]
  __int128 v15; // [rsp+58h] [rbp-B0h]
  _OWORD v16[3]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+98h] [rbp-70h]
  _OWORD v18[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v19; // [rsp+C0h] [rbp-48h]
  _DWORD v20[2]; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v21; // [rsp+D0h] [rbp-38h]
  __int128 v22; // [rsp+E0h] [rbp-28h]
  __int128 v23; // [rsp+F0h] [rbp-18h]
  __int64 v24; // [rsp+100h] [rbp-8h]
  __int128 v25; // [rsp+108h] [rbp+0h]
  __int128 v26; // [rsp+118h] [rbp+10h]
  __int128 v27; // [rsp+128h] [rbp+20h]
  __int64 v28; // [rsp+138h] [rbp+30h]
  __int128 v29; // [rsp+140h] [rbp+38h]
  __int128 v30; // [rsp+150h] [rbp+48h]
  __int128 v31; // [rsp+160h] [rbp+58h]
  __int64 v32; // [rsp+170h] [rbp+68h]
  __int128 v33; // [rsp+178h] [rbp+70h]
  __int128 v34; // [rsp+188h] [rbp+80h]
  __int128 v35; // [rsp+198h] [rbp+90h]
  __int64 v36; // [rsp+1A8h] [rbp+A0h]
  _BYTE v37[40]; // [rsp+1B8h] [rbp+B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]

  v13[1] = -2LL;
  v2 = 0;
  LODWORD(v12) = 0;
  memset_0(v16, 0, 0x38uLL);
  *((_QWORD *)&v16[0] + 1) = (*(int (__fastcall **)(MPCFocusTarget *))(*(_QWORD *)this + 56LL))(this);
  v3 = *((_QWORD *)this + 10);
  if ( v3 )
  {
    (**(void (__fastcall ***)(__int64, GUID *, unsigned int *))v3)(v3, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, v11);
    v3 = *(_QWORD *)v11;
  }
  else
  {
    *(_QWORD *)v11 = 0LL;
  }
  if ( v3 )
  {
    v4 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))this + 10))(
           *((_QWORD *)this + 10),
           &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631,
           v13);
    if ( v4 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x16A8,
        (unsigned int)"internal\\sdk\\inc\\wil\\ResultMacros.h",
        (const char *)(unsigned int)v4,
        v11[0]);
      JUMPOUT(0x18000B27DLL);
    }
    v2 = 3;
    LODWORD(v12) = 3;
    v5 = (_OWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)v13[0] + 72LL))(v13[0], v37);
    v3 = *(_QWORD *)v11;
  }
  else
  {
    v18[0] = v16[1];
    v18[1] = v16[2];
    v19 = v17;
    v5 = v18;
  }
  v14 = *v5;
  v15 = v5[1];
  v12 = *((_QWORD *)v5 + 4);
  if ( (v2 & 1) != 0 && v13[0] )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v13[0] + 16LL))(v13[0]);
    v3 = *(_QWORD *)v11;
  }
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  LODWORD(v16[0]) = 3 - (((1LL << gdwDeviceFamily) & 0x224A) != 0);
  memset_0(v20, 0, 0xE8uLL);
  v20[0] = 232;
  v20[1] = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 9) + 80LL))((char *)this + 72);
  v25 = v16[0];
  v26 = v14;
  v27 = v15;
  v28 = v12;
  v33 = v16[0];
  v34 = v14;
  v35 = v15;
  v36 = v12;
  v29 = v16[0];
  v30 = v14;
  v31 = v15;
  v32 = v12;
  v21 = v16[0];
  v22 = v14;
  v23 = v15;
  v24 = v12;
  v6 = (char *)*((_QWORD *)this + 11);
  if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    LastError = GetLastError();
    CloseHandle(v6);
    SetLastError(LastError);
  }
  *((_QWORD *)this + 11) = 0LL;
  ImplicitCompositionInputSink = NtCreateImplicitCompositionInputSink(v20, (char *)this + 88);
  if ( ImplicitCompositionInputSink )
    wil::details::in1diag3::_Log_Win32(retaddr, v9, v10, (const char *)ImplicitCompositionInputSink, v11[0]);
}
