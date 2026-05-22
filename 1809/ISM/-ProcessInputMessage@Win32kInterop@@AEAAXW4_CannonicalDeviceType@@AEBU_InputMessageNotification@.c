/*
 * XREFs of ?ProcessInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_InputMessageNotification@@@Z @ 0x180082DC4
 * Callers:
 *     ?s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x180083740 (-s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReceiveMouseInput@ISM@InputTraceLogging@@SAXAEBU_InputMessageNotification@@@Z @ 0x180081658 (-ReceiveMouseInput@ISM@InputTraceLogging@@SAXAEBU_InputMessageNotification@@@Z.c)
 *     ?ReceiveInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@@Z @ 0x1800817C4 (-ReceiveInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@@Z.c)
 *     ?ReceivedInputMessage@Win32kInterop@InputETW@@SAXK@Z @ 0x180081E28 (-ReceivedInputMessage@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z @ 0x1800823AC (-IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z.c)
 *     ?DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V?$function@$$A6AXPEAUInputContext@@@Z@std@@V?$function@$$A6AXPEAUInputInfo@@@Z@4@@Z @ 0x1800838E4 (-DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V-$function@$$A6AXPEAUInputCon.c)
 *     ?Create@KeyboardModifierState@@SAJPEAPEAV1@@Z @ 0x180103F00 (-Create@KeyboardModifierState@@SAJPEAPEAV1@@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18012DB5F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall Win32kInterop::ProcessInputMessage(__int64 a1, int a2, __int64 a3)
{
  Win32kInterop *v4; // rsi
  unsigned int v5; // r13d
  __int16 v6; // bx
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  __int64 v11; // rcx
  __int16 v12; // r12
  int v13; // eax
  int v14; // eax
  struct KeyboardModifierState *v15; // rdi
  int v16; // eax
  int v17; // eax
  int v18; // ecx
  __int64 v19; // rax
  __int16 v20; // dx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rbx
  int v27; // eax
  int v28; // eax
  wil::details::in1diag3 *v29; // rcx
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v38; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v39; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v40[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v41[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 (__fastcall **v42)(); // [rsp+A0h] [rbp-60h] BYREF
  __int128 v43; // [rsp+A8h] [rbp-58h]
  __int64 (__fastcall ***v44)(); // [rsp+D8h] [rbp-28h]
  struct KeyboardModifierState *v45[2]; // [rsp+E0h] [rbp-20h] BYREF
  _DWORD Src[2]; // [rsp+F0h] [rbp-10h] BYREF
  int v47; // [rsp+F8h] [rbp-8h]
  __int64 v48; // [rsp+100h] [rbp+0h]
  int v49; // [rsp+108h] [rbp+8h]
  __int64 v50; // [rsp+118h] [rbp+18h]
  int v51; // [rsp+120h] [rbp+20h]
  int v52; // [rsp+128h] [rbp+28h]
  int v53; // [rsp+12Ch] [rbp+2Ch]
  int v54; // [rsp+130h] [rbp+30h]
  int v55; // [rsp+134h] [rbp+34h]
  int v56; // [rsp+138h] [rbp+38h]
  int v57; // [rsp+13Ch] [rbp+3Ch]
  int v58; // [rsp+140h] [rbp+40h]
  int v59; // [rsp+144h] [rbp+44h]
  int v60; // [rsp+268h] [rbp+168h]
  int v61; // [rsp+26Ch] [rbp+16Ch]
  __int64 v62; // [rsp+270h] [rbp+170h]
  __int128 v63; // [rsp+278h] [rbp+178h]
  __int128 v64; // [rsp+288h] [rbp+188h]
  __int128 v65; // [rsp+298h] [rbp+198h]
  __int128 v66; // [rsp+2A8h] [rbp+1A8h]
  int v67; // [rsp+2B8h] [rbp+1B8h]
  int v68; // [rsp+2BCh] [rbp+1BCh]
  int v69; // [rsp+2C0h] [rbp+1C0h]
  int v70; // [rsp+2C4h] [rbp+1C4h]
  _OWORD v71[3]; // [rsp+2C8h] [rbp+1C8h] BYREF
  __int16 v72; // [rsp+2FCh] [rbp+1FCh]
  __int16 v73; // [rsp+2FEh] [rbp+1FEh]
  _DWORD v74[4]; // [rsp+730h] [rbp+630h] BYREF
  __int64 v75; // [rsp+740h] [rbp+640h]
  int v76; // [rsp+748h] [rbp+648h]
  __int16 v77; // [rsp+754h] [rbp+654h]
  __int16 v78; // [rsp+776h] [rbp+676h]
  _BYTE v79[4]; // [rsp+890h] [rbp+790h] BYREF
  int v80; // [rsp+894h] [rbp+794h]
  int v81; // [rsp+898h] [rbp+798h]
  wil::details::in1diag3 *retaddr; // [rsp+CA8h] [rbp+BA8h]

  if ( a2 )
    return;
  v40[1] = -2LL;
  v4 = Win32kInterop::s_pInterop;
  InputTraceLogging::ISM::ReceiveMouseInput((const struct _InputMessageNotification *)a3);
  v5 = *(_DWORD *)(a3 + 216);
  InputETW::Win32kInterop::ReceivedInputMessage(v5);
  if ( !Win32kInterop::IsDeviceAttached(v4, v5, 1) )
    return;
  memset_0(Src, 0, 0x640uLL);
  v49 = 1600;
  v6 = 2;
  Src[0] = 2;
  Src[1] = v5;
  v47 = *(_DWORD *)(a3 + 200);
  v48 = *(_QWORD *)(a3 + 208);
  v50 = *(_QWORD *)(a3 + 160);
  v51 = 1;
  v63 = *(_OWORD *)(a3 + 96);
  v64 = *(_OWORD *)(a3 + 112);
  v65 = *(_OWORD *)(a3 + 128);
  v66 = *(_OWORD *)(a3 + 144);
  v62 = *(_QWORD *)(a3 + 16);
  v67 = *(_DWORD *)(a3 + 12) & 1;
  if ( (*(_BYTE *)(a3 + 232) & 2) != 0 )
  {
    v68 = 1;
    v69 = 100;
    v70 = 100;
  }
  v40[0] = 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)v4 + 6) + 72LL))(*((_QWORD *)v4 + 6), v40);
  v8 = retaddr;
  if ( v7 < 0 )
  {
LABEL_70:
    wil::details::in1diag3::FailFast_Hr(
      v8,
      (void *)0x2C2,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_71;
  }
  v39 = 0LL;
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(*(_QWORD *)v40[0] + 48LL))(v40[0], v5, 1LL, &v39);
  v10 = retaddr;
  if ( v9 < 0 )
  {
LABEL_71:
    wil::details::in1diag3::FailFast_Hr(
      v10,
      (void *)0x2C5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_72;
  }
  v71[0] = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, struct KeyboardModifierState **))(*(_QWORD *)v39 + 40LL))(
                        v39,
                        v45);
  v11 = *(_QWORD *)(a3 + 184);
  v12 = 64;
  if ( v11 )
  {
    v13 = v60;
    if ( (v11 & 1) != 0 )
    {
      v13 = v60 | 0x10;
      v60 |= 0x10u;
    }
    if ( (v11 & 2) != 0 )
    {
      v13 |= 0x20u;
      v60 = v13;
    }
    if ( (v11 & 0x10) != 0 )
    {
      v13 |= 0x40u;
      v60 = v13;
    }
    if ( (v11 & 0x20) != 0 )
    {
      v13 |= 0x80u;
      v60 = v13;
    }
    if ( (v11 & 0x40) != 0 )
      v60 = v13 | 0x100;
  }
  v45[0] = 0LL;
  v14 = KeyboardModifierState::Create(v45);
  v15 = v45[0];
  if ( v14 >= 0 )
  {
    v16 = *((_DWORD *)v45[0] + 20);
    v61 = v16;
    if ( (*(_BYTE *)(a3 + 232) & 1) != 0 )
      v61 = v16 | 1;
  }
  v52 = 1;
  v54 = *(__int16 *)(a3 + 192);
  v55 = *(__int16 *)(a3 + 194);
  v56 = v54;
  v57 = v55;
  v58 = *(_DWORD *)(a3 + 224);
  v59 = *(_DWORD *)(a3 + 228);
  v17 = 1;
  if ( v60 )
    v17 = 3;
  v53 = v17;
  v18 = *(_DWORD *)(a3 + 176);
  v19 = (unsigned int)(v18 - 512);
  if ( (unsigned int)v19 <= 0xE )
  {
    v20 = word_180150098[v19];
    v72 = v20;
    if ( (v20 & 0xC0) != 0 && *(_WORD *)(a3 + 186) == 2 )
      v72 = 4 * v20;
  }
  if ( ((v18 - 522) & 0xFFFFFFFB) == 0 )
    v73 = *(_WORD *)(a3 + 186);
  v21 = v18 - 513;
  if ( !v21 )
    goto LABEL_35;
  v22 = v21 - 1;
  if ( !v22 )
  {
    v12 = 65;
LABEL_35:
    v6 = 1;
    goto LABEL_36;
  }
  v23 = v22 - 2;
  if ( v23 )
  {
    if ( v23 != 1 )
      goto LABEL_40;
    v12 = 65;
  }
LABEL_36:
  memset_0(v74, 0, 0x158uLL);
  v76 = 344;
  v74[1] = v5;
  v74[0] = 4;
  v74[2] = v47;
  v75 = v48;
  v78 = v12;
  v77 = v6;
  memset_0(v79, 0, 0x3D8uLL);
  v81 = 984;
  v80 = 4;
  *(_QWORD *)&v38 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, _QWORD, _BYTE *, _QWORD, __int128 *))(**((_QWORD **)v4 + 6) + 64LL))(
         *((_QWORD *)v4 + 6),
         0LL,
         v79,
         0LL,
         &v38) >= 0 )
    (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)v38 + 24LL))(v38, v74);
  v24 = v38;
  if ( (_QWORD)v38 )
  {
    *(_QWORD *)&v38 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
LABEL_40:
  v37 = 0LL;
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64 *))(**((_QWORD **)v4 + 6) + 96LL))(
    *((_QWORD *)v4 + 6),
    a3,
    *((_QWORD *)v4 + 41),
    &v37);
  v25 = *((_QWORD *)v4 + 41);
  v26 = v37;
  if ( v37 != v25 )
  {
    if ( v25 )
    {
      *((_DWORD *)v4 + 178) = 0;
      v27 = 0;
      if ( (v53 & 4) != 0 )
        v27 = 4;
      *((_DWORD *)v4 + 99) = v27;
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v4 + 41) + 24LL))(*((_QWORD *)v4 + 41), (__int64)v4 + 336);
    }
    *((_BYTE *)v4 + 1936) = 1;
    goto LABEL_47;
  }
  if ( *((_BYTE *)v4 + 1936) )
  {
LABEL_47:
    *(_QWORD *)&v38 = 0LL;
    v28 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)v4 + 6) + 72LL))(*((_QWORD *)v4 + 6), &v38);
    v29 = retaddr;
    if ( v28 < 0 )
    {
LABEL_72:
      wil::details::in1diag3::FailFast_Hr(
        v29,
        (void *)0x3D7,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v28);
      JUMPOUT(0x18008349BLL);
    }
    v30 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *))(*(_QWORD *)v38 + 32LL))(v38, v71);
    if ( v30 >= 0 )
    {
      *((_BYTE *)v4 + 1936) = 0;
      v31 = v38;
      if ( (_QWORD)v38 )
      {
        *(_QWORD *)&v38 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
      }
      v26 = v37;
      goto LABEL_52;
    }
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3D8,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v30);
    goto LABEL_70;
  }
LABEL_52:
  memcpy_0((char *)v4 + 336, Src, 0x640uLL);
  if ( ((1LL << gdwDeviceFamily) & 0x1C000) != 0 )
  {
    InputTraceLogging::ContextualProcessing::ReceiveInput((const struct InputInfo *)Src);
    v41[0] = off_18013CAA0;
    v41[1] = &v37;
    v41[7] = v41;
    *(_QWORD *)&v38 = &v37;
    *((_QWORD *)&v38 + 1) = a3;
    v42 = off_18013CA20;
    v43 = v38;
    v44 = &v42;
    Win32kInterop::DeliverToContextualProcessing(v4, Src, &v42, v41);
  }
  else
  {
    (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v26 + 24LL))(v26, Src);
  }
  v32 = *((_QWORD *)v4 + 41);
  v33 = v37;
  if ( v32 != v37 )
  {
    v34 = v37;
    if ( v37 )
    {
      (*(void (**)(void))(*(_QWORD *)v37 + 8LL))();
      v32 = *((_QWORD *)v4 + 41);
      v33 = v37;
    }
    *((_QWORD *)v4 + 41) = v34;
    if ( v32 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
      v33 = v37;
    }
  }
  if ( v33 )
  {
    v37 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  }
  if ( v15 )
    (*(void (__fastcall **)(struct KeyboardModifierState *))(*(_QWORD *)v15 + 16LL))(v15);
  v35 = v39;
  if ( v39 )
  {
    v39 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  }
  v36 = v40[0];
  if ( v40[0] )
  {
    v40[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  }
}
