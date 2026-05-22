/*
 * XREFs of ?ProcessInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_InputMessageNotification@@_N@Z @ 0x1800BD274
 * Callers:
 *     ?ProcessMouseInputMessage@Win32kInterop@@AEAAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x1800BDE04 (-ProcessMouseInputMessage@Win32kInterop@@AEAAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z.c)
 * Callees:
 *     ?Create@KeyboardModifierState@@SAJPEAPEAV1@@Z @ 0x180014D7C (-Create@KeyboardModifierState@@SAJPEAPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027954 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z @ 0x18002A2F8 (--0-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z.c)
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002EE94 (--4-$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?CopyFrom@?$VariableSizedPayloadStorage@UInputInfo@@@@QEAAAEAU1@PEBUInputInfo@@@Z @ 0x1800BB880 (-CopyFrom@-$VariableSizedPayloadStorage@UInputInfo@@@@QEAAAEAU1@PEBUInputInfo@@@Z.c)
 *     ?DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V?$function@$$A6AXPEAUInputContext@@@Z@std@@V?$function@$$A6AXPEAUInputInfo@@@Z@4@@Z @ 0x1800BC3D0 (-DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V-$function@$$A6AXPEAUInputCon.c)
 *     ?DropMouseInput@ISM@InputTraceLogging@@SAXAEBU_InputMessageNotification@@@Z @ 0x1800BC92C (-DropMouseInput@ISM@InputTraceLogging@@SAXAEBU_InputMessageNotification@@@Z.c)
 *     ?IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z @ 0x1800BCDD4 (-IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z.c)
 *     ?ReceiveMouseInput@ISM@InputTraceLogging@@SAXAEBU_InputMessageNotification@@@Z @ 0x1800BE71C (-ReceiveMouseInput@ISM@InputTraceLogging@@SAXAEBU_InputMessageNotification@@@Z.c)
 *     ?ReceivedInputMessage@Win32kInterop@InputETW@@SAXK@Z @ 0x1800BEA7C (-ReceivedInputMessage@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?GetCurrentKeyboardModifierState@KeyboardModifierState@@QEAAJPEAK@Z @ 0x1801418DC (-GetCurrentKeyboardModifierState@KeyboardModifierState@@QEAAJPEAK@Z.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall Win32kInterop::ProcessInputMessage(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int v6; // r13d
  __int64 v7; // r8
  const char *v8; // r9
  __int64 (__fastcall *v9)(__int64, _QWORD **); // rbx
  char *v10; // rsi
  __int16 v11; // r12
  __int64 v12; // rdi
  int v13; // eax
  _QWORD *v14; // rbx
  __int64 v15; // rax
  __int64 (__fastcall *v16)(_QWORD *, __int64 *); // rdi
  int v17; // eax
  __int64 (__fastcall *v18)(_QWORD *, _QWORD, __int64, __int64 *); // rdi
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  char v25; // cl
  __int16 v26; // bx
  __int16 v27; // dx
  int v28; // eax
  __int64 v29; // rax
  __int16 v30; // cx
  __int64 v31; // rcx
  _DWORD *v32; // rdx
  int v33; // eax
  __int64 v34; // rdi
  __int64 (__fastcall *v35)(__int64, __int64 *); // rbx
  int v36; // eax
  int v37; // eax
  __int64 v38; // rcx
  struct KeyboardModifierState *v39; // rcx
  const struct std::nothrow_t *v40; // rdx
  __int64 v42; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v43; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD *v44; // [rsp+50h] [rbp-B8h] BYREF
  struct KeyboardModifierState *v45; // [rsp+58h] [rbp-B0h] BYREF
  void *v46[2]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v47[8]; // [rsp+70h] [rbp-98h] BYREF
  __int64 (__fastcall **v48)(); // [rsp+B0h] [rbp-58h] BYREF
  __int128 v49; // [rsp+B8h] [rbp-50h]
  __int64 (__fastcall ***v50)(); // [rsp+E8h] [rbp-20h]
  __int64 v51[3]; // [rsp+F0h] [rbp-18h] BYREF
  _DWORD v52[4]; // [rsp+108h] [rbp+0h] BYREF
  __int64 v53; // [rsp+118h] [rbp+10h]
  int v54; // [rsp+120h] [rbp+18h]
  __int16 v55; // [rsp+12Ch] [rbp+24h]
  __int16 v56; // [rsp+14Eh] [rbp+46h]
  _BYTE v57[4]; // [rsp+268h] [rbp+160h] BYREF
  int v58; // [rsp+26Ch] [rbp+164h]
  int v59; // [rsp+270h] [rbp+168h]
  wil::details::in1diag3 *retaddr; // [rsp+8D0h] [rbp+7C8h]

  v46[1] = (void *)-2LL;
  v6 = *(_DWORD *)(a3 + 160);
  InputETW::Win32kInterop::ReceivedInputMessage(v6);
  InputTraceLogging::ISM::ReceiveMouseInput((const struct _InputMessageNotification *)a3);
  LODWORD(v9) = 1;
  if ( v6 )
    goto LABEL_7;
  v6 = -1;
  while ( 1 )
  {
    VariableSizedPayloadStorage<InputInfo>::VariableSizedPayloadStorage<InputInfo>(v46, 0x168uLL, v7, v8);
    v10 = (char *)v46[0];
    v11 = 2;
    *(_DWORD *)v46[0] = 2;
    *((_DWORD *)v10 + 1) = v6;
    *((_DWORD *)v10 + 2) = *(_DWORD *)(a3 + 144);
    *((_QWORD *)v10 + 2) = *(_QWORD *)(a3 + 152);
    *((_QWORD *)v10 + 16) = *(_QWORD *)(a3 + 104);
    *((_DWORD *)v10 + 53) = (_DWORD)v9;
    *(_OWORD *)(v10 + 140) = *(_OWORD *)(a3 + 176);
    *(_OWORD *)(v10 + 156) = *(_OWORD *)(a3 + 192);
    *(_OWORD *)(v10 + 172) = *(_OWORD *)(a3 + 208);
    *(_OWORD *)(v10 + 188) = *(_OWORD *)(a3 + 224);
    *((_QWORD *)v10 + 9) = *(_QWORD *)(a3 + 24);
    *((_DWORD *)v10 + 20) = (unsigned int)v9 & *(_DWORD *)(a3 + 16);
    if ( ((unsigned __int8)v9 & *(_BYTE *)(a3 + 240)) != 0 )
    {
      *((_DWORD *)v10 + 21) = (_DWORD)v9;
      *((_DWORD *)v10 + 22) = 100;
      *((_DWORD *)v10 + 23) = 100;
    }
    v44 = 0LL;
    v12 = *(_QWORD *)(a1 + 48);
    v9 = *(__int64 (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)v12 + 72LL);
    Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)&v44);
    v13 = v9(v12, &v44);
    if ( v13 >= 0 )
      break;
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      994LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v13);
LABEL_7:
    if ( v6 != -1 && !Win32kInterop::IsDeviceAttached((Win32kInterop *)a1, v6, (char)v9) )
    {
      InputTraceLogging::ISM::DropMouseInput((const struct _InputMessageNotification *)a3);
      return;
    }
  }
  v43 = 0LL;
  v14 = v44;
  v15 = *v44;
  if ( v6 == -1 )
  {
    v16 = *(__int64 (__fastcall **)(_QWORD *, __int64 *))(v15 + 40);
    Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v43);
    v17 = v16(v14, &v43);
    if ( v17 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        999LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v17);
      __debugbreak();
    }
  }
  else
  {
    v18 = *(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64, __int64 *))(v15 + 56);
    Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v43);
    v19 = v18(v14, v6, 1LL, &v43);
    if ( v19 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        1003LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v19);
      __debugbreak();
    }
  }
  *(_OWORD *)(v10 + 56) = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v43 + 40LL))(v43, v51);
  v45 = 0LL;
  v20 = KeyboardModifierState::Create(&v45);
  if ( v20 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1026LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v20);
    __debugbreak();
  }
  KeyboardModifierState::GetCurrentKeyboardModifierState(v45, (unsigned int *)v10 + 34);
  *((_DWORD *)v10 + 55) = 1;
  *((_DWORD *)v10 + 57) = 2;
  v21 = *(__int16 *)(a3 + 136);
  *((_DWORD *)v10 + 66) = v21;
  v22 = *(__int16 *)(a3 + 138);
  *((_DWORD *)v10 + 67) = v22;
  *((_DWORD *)v10 + 62) = v21;
  *((_DWORD *)v10 + 63) = v22;
  v23 = *(_DWORD *)(a3 + 168);
  *((_DWORD *)v10 + 68) = v23;
  v24 = *(_DWORD *)(a3 + 172);
  *((_DWORD *)v10 + 69) = v24;
  *((_DWORD *)v10 + 64) = v23;
  *((_DWORD *)v10 + 65) = v24;
  *((_DWORD *)v10 + 54) = 4;
  *((_DWORD *)v10 + 70) = *((_DWORD *)v10 + 2);
  *((_QWORD *)v10 + 37) = *((_QWORD *)v10 + 2);
  *((_QWORD *)v10 + 29) = *((unsigned int *)v10 + 1);
  v25 = 0;
  v26 = 64;
  if ( *(_QWORD *)(a3 + 128) )
  {
    v27 = *(_WORD *)(a3 + 128);
    v28 = 2;
    if ( (v27 & 1) != 0 )
    {
      v28 = 18;
      *((_DWORD *)v10 + 57) = 18;
      v25 = 1;
    }
    if ( (v27 & 2) != 0 )
    {
      v28 |= 0x20u;
      *((_DWORD *)v10 + 57) = v28;
      v25 = 1;
    }
    if ( (v27 & 0x10) != 0 )
    {
      v28 |= 0x40u;
      *((_DWORD *)v10 + 57) = v28;
      v25 = 1;
    }
    if ( (v27 & 0x20) != 0 )
    {
      v28 |= 0x80u;
      *((_DWORD *)v10 + 57) = v28;
      v25 = 1;
    }
    if ( (v27 & 0x40) != 0 )
    {
      v28 |= 0x100u;
      *((_DWORD *)v10 + 57) = v28;
      v25 = 1;
    }
    if ( v25 )
      *((_DWORD *)v10 + 57) = v28 | 4;
  }
  v29 = (unsigned int)(*(_DWORD *)(a3 + 120) - 512);
  if ( (unsigned int)v29 <= 0xE )
  {
    v30 = word_1801A8208[v29];
    *((_WORD *)v10 + 102) = v30;
    if ( (v30 & 0xC0) != 0 && *(_WORD *)(a3 + 130) == 2 )
      *((_WORD *)v10 + 102) = 4 * v30;
  }
  if ( ((*(_DWORD *)(a3 + 120) - 522) & 0xFFFFFFFB) == 0 )
    *((_WORD *)v10 + 103) = *(_WORD *)(a3 + 130);
  if ( !a4 )
  {
    if ( *(_DWORD *)(a3 + 120) != 513 )
    {
      if ( *(_DWORD *)(a3 + 120) != 514 )
      {
        if ( *(_DWORD *)(a3 + 120) != 516 )
        {
          if ( *(_DWORD *)(a3 + 120) != 517 )
            goto LABEL_48;
          v26 = 65;
        }
        goto LABEL_44;
      }
      v26 = 65;
    }
    v11 = 1;
LABEL_44:
    memset_0(v52, 0, 0x160uLL);
    v54 = 352;
    v52[1] = v6;
    v52[0] = 4;
    v52[2] = *((_DWORD *)v10 + 2);
    v53 = *((_QWORD *)v10 + 2);
    v56 = v26;
    v55 = v11;
    memset_0(v57, 0, 0x620uLL);
    v59 = 1568;
    v58 = 4;
    v51[0] = 0LL;
    if ( (*(int (__fastcall **)(_QWORD, _QWORD, _BYTE *, _QWORD, __int64 *))(**(_QWORD **)(a1 + 48) + 64LL))(
           *(_QWORD *)(a1 + 48),
           0LL,
           v57,
           0LL,
           v51) >= 0 )
      (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v51[0] + 24LL))(v51[0], v52);
    v31 = v51[0];
    if ( v51[0] )
    {
      v51[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    }
  }
LABEL_48:
  v42 = 0LL;
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64 *))(**(_QWORD **)(a1 + 48) + 96LL))(
    *(_QWORD *)(a1 + 48),
    a3,
    *(_QWORD *)(a1 + 264),
    &v42);
  if ( v42 != *(_QWORD *)(a1 + 264) )
  {
    if ( *(_QWORD *)(a1 + 264) )
    {
      v32 = *(_DWORD **)(a1 + 272);
      v32[57] = 0;
      v33 = 0;
      if ( (*((_DWORD *)v10 + 57) & 0x8000) != 0 )
        v33 = 0x8000;
      v32[57] = v33;
      if ( *(_BYTE *)(a1 + 280) )
        *v32 = 0x1000000;
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 264) + 24LL))(*(_QWORD *)(a1 + 264));
    }
    *(_BYTE *)(a1 + 281) = 1;
    goto LABEL_57;
  }
  if ( *(_BYTE *)(a1 + 281) )
  {
LABEL_57:
    v51[0] = 0LL;
    v34 = *(_QWORD *)(a1 + 48);
    v35 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v34 + 72LL);
    Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(v51);
    v36 = v35(v34, v51);
    if ( v36 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        1289LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v36);
      __debugbreak();
    }
    v37 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v51[0] + 32LL))(v51[0], v10 + 56);
    if ( v37 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        1290LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v37);
      __debugbreak();
    }
    *(_BYTE *)(a1 + 281) = 0;
    Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(v51);
  }
  VariableSizedPayloadStorage<InputInfo>::CopyFrom(a1 + 272, (int *)v10);
  *(_BYTE *)(a1 + 280) = a4;
  if ( a4 )
  {
    *(_DWORD *)v10 = 0x1000000;
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v42 + 24LL))(v42, v10);
  }
  else
  {
    v47[0] = off_180175698;
    v47[1] = &v42;
    v47[7] = v47;
    v51[0] = (__int64)&v42;
    v51[1] = a3;
    v48 = off_180175758;
    v49 = *(_OWORD *)v51;
    v50 = &v48;
    Win32kInterop::DeliverToContextualProcessing(a1, (int *)v10, (__int64)&v48, (__int64)v47);
  }
  Microsoft::WRL::ComPtr<IRawInputClient>::operator=((__int64 *)(a1 + 264), &v42);
  v38 = v42;
  if ( v42 )
  {
    v42 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
  }
  v39 = v45;
  if ( v45 )
  {
    v45 = 0LL;
    (*(void (__fastcall **)(struct KeyboardModifierState *))(*(_QWORD *)v39 + 16LL))(v39);
  }
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v43);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)&v44);
  if ( v46[0] )
    operator delete(v46[0], v40);
}
