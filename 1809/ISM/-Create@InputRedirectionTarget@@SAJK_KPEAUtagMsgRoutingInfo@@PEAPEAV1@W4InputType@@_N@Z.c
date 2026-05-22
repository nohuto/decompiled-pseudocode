/*
 * XREFs of ?Create@InputRedirectionTarget@@SAJK_KPEAUtagMsgRoutingInfo@@PEAPEAV1@W4InputType@@_N@Z @ 0x1800D1ADC
 * Callers:
 *     ?EnableInputRedirection@InputRedirectionProcessor@@UEAAJI_KUtagMsgRoutingInfo@@1H_N@Z @ 0x1800D1080 (-EnableInputRedirection@InputRedirectionProcessor@@UEAAJI_KUtagMsgRoutingInfo@@1H_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180064E88 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputRedirectionTarget::Create(int a1, __int64 a2, __int128 *a3, _QWORD *a4, int a5, char a6)
{
  char *v10; // rbx
  int v11; // edi
  __int64 v12; // rdx
  char *v13; // rax
  char *v14; // rsi
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  __int64 v17; // xmm0_8
  __int128 v18; // xmm2
  __int128 v19; // xmm3
  __int64 v20; // xmm1_8
  _QWORD *v21; // r14
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // r15
  DWORD LastError; // edi
  unsigned int CompositionInputSink; // eax
  __int128 v29; // [rsp+38h] [rbp-C8h]
  _DWORD v30[2]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v31; // [rsp+78h] [rbp-88h]
  __int128 v32; // [rsp+88h] [rbp-78h]
  __int128 v33; // [rsp+98h] [rbp-68h]
  __int64 v34; // [rsp+A8h] [rbp-58h]
  __int128 v35; // [rsp+B0h] [rbp-50h]
  __int128 v36; // [rsp+C0h] [rbp-40h]
  __int128 v37; // [rsp+D0h] [rbp-30h]
  __int64 v38; // [rsp+E0h] [rbp-20h]
  __int128 v39; // [rsp+E8h] [rbp-18h]
  __int128 v40; // [rsp+F8h] [rbp-8h]
  __int128 v41; // [rsp+108h] [rbp+8h]
  __int64 v42; // [rsp+118h] [rbp+18h]
  __int128 v43; // [rsp+120h] [rbp+20h]
  __int128 v44; // [rsp+130h] [rbp+30h]
  __int128 v45; // [rsp+140h] [rbp+40h]
  __int64 v46; // [rsp+150h] [rbp+50h]
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  v10 = 0LL;
  if ( !a4 )
  {
    v11 = -2147024809;
    v12 = 79LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputredirection\\system\\lib"
               "\\inputredirectiontarget.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_25;
  }
  v13 = (char *)malloc(0x78uLL);
  v14 = v13;
  if ( v13 )
    memset_0(v13, 0, 0x78uLL);
  if ( v14 )
  {
    v15 = *a3;
    v16 = a3[1];
    v17 = *((_QWORD *)a3 + 4);
    *((_QWORD *)v14 + 2) = &RefCountedObject::`vftable';
    *((_DWORD *)v14 + 6) = 1;
    *(_QWORD *)v14 = &InputRedirectionTarget::`vftable'{for `IInputRedirectionTarget'};
    *((_QWORD *)v14 + 1) = &InputRedirectionTarget::`vftable'{for `IDCompInputTarget'};
    *((_QWORD *)v14 + 2) = &InputRedirectionTarget::`vftable'{for `RefCountedObject'};
    *((_QWORD *)v14 + 4) = 0LL;
    *((_DWORD *)v14 + 12) = a5;
    v14[52] = a6;
    *((_QWORD *)v14 + 7) = a2;
    *((_DWORD *)v14 + 16) = a1;
    *(_OWORD *)(v14 + 72) = v15;
    *(_OWORD *)(v14 + 88) = v16;
    *((_QWORD *)v14 + 13) = v17;
    *((_QWORD *)v14 + 14) = 0LL;
    *((_QWORD *)v14 + 5) = 0LL;
  }
  v10 = v14;
  if ( !v14 )
  {
    v11 = -2147024882;
    v12 = 91LL;
    goto LABEL_23;
  }
  v30[0] = 232;
  v30[1] = 0;
  LODWORD(v29) = 3;
  *((_QWORD *)&v29 + 1) = *((_QWORD *)v14 + 7);
  v18 = *(_OWORD *)(v14 + 72);
  v19 = *(_OWORD *)(v14 + 88);
  v20 = *((_QWORD *)v14 + 13);
  v35 = v29;
  v36 = v18;
  v37 = v19;
  v38 = v20;
  v43 = v29;
  v44 = v18;
  v45 = v19;
  v46 = v20;
  v39 = v29;
  v40 = v18;
  v41 = v19;
  v42 = v20;
  v31 = v29;
  v32 = v18;
  v33 = v19;
  v34 = v20;
  v21 = v14 + 32;
  v22 = *((_QWORD *)v14 + 4);
  if ( v22 )
  {
    *v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  v23 = CoreUICreate(v14 + 32);
  v11 = v23;
  if ( v23 < 0 )
  {
    v24 = 56LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputredirection\\system\\lib"
               "\\inputredirectiontarget.cpp",
      (const char *)(unsigned int)v23);
    goto LABEL_21;
  }
  v23 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(*(_QWORD *)*v21 + 96LL))(*v21, v14 + 72, v14 + 40);
  v11 = v23;
  if ( v23 < 0 )
  {
    v24 = 59LL;
    goto LABEL_13;
  }
  v25 = *((_QWORD *)v14 + 14);
  if ( (unsigned __int64)(v25 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    LastError = GetLastError();
    NtCloseCompositionInputSink(v25);
    SetLastError(LastError);
  }
  *((_QWORD *)v14 + 14) = 0LL;
  CompositionInputSink = NtCreateCompositionInputSink(v30, v14 + 112);
  if ( CompositionInputSink )
    v11 = wil::details::in1diag3::Return_Win32(
            retaddr,
            (void *)0x3D,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputredirection\\syste"
                     "m\\lib\\inputredirectiontarget.cpp",
            (const char *)CompositionInputSink);
  else
    v11 = 0;
LABEL_21:
  if ( v11 < 0 )
  {
    v12 = 94LL;
    goto LABEL_23;
  }
  v10 = 0LL;
  *a4 = v14;
  v11 = 0;
LABEL_25:
  if ( v10 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v10 + 16LL))(v10);
  return (unsigned int)v11;
}
