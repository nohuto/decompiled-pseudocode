/*
 * XREFs of ?DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_KAEA_N@Z @ 0x180145D1C
 * Callers:
 *     ?OnInput@HotkeyContextualProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801083F0 (-OnInput@HotkeyContextualProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcesso.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@PEAX@2@PEAU32@@Z @ 0x180025538 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBa.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AEA0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x18005A030 (-FailFastWithHR@@YAXJ_K0@Z.c)
 *     ??$_Insert_nohint@AEBIU_Not_a_node_tag@std@@@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@@std@@_N@1@_NAEBIU_Not_a_node_tag@1@@Z @ 0x180145488 (--$_Insert_nohint@AEBIU_Not_a_node_tag@std@@@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocato.c)
 *     ??$_Insert_nohint@AEBV?$shared_ptr@UHOTKEY@@@std@@U_Not_a_node_tag@2@@?$_Tree@V?$_Tset_traits@V?$shared_ptr@UHOTKEY@@@std@@U?$less@V?$shared_ptr@UHOTKEY@@@std@@@2@V?$allocator@V?$shared_ptr@UHOTKEY@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$shared_ptr@UHOTKEY@@@std@@@std@@@std@@@std@@_N@1@_NAEBV?$shared_ptr@UHOTKEY@@@1@U_Not_a_node_tag@1@@Z @ 0x1801455BC (--$_Insert_nohint@AEBV-$shared_ptr@UHOTKEY@@@std@@U_Not_a_node_tag@2@@-$_Tree@V-$_Tset_traits@V-.c)
 *     ?FindEnabledHotKey@HotKeyProcessor@@AEAAJIIPEAV?$shared_ptr@UHOTKEY@@@std@@@Z @ 0x18014666C (-FindEnabledHotKey@HotKeyProcessor@@AEAAJIIPEAV-$shared_ptr@UHOTKEY@@@std@@@Z.c)
 *     ?clear@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAAXXZ @ 0x1801473AC (-clear@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std@@QEAAXXZ.c)
 *     ?clear@?$_Tree@V?$_Tset_traits@V?$shared_ptr@UHOTKEY@@@std@@U?$less@V?$shared_ptr@UHOTKEY@@@std@@@2@V?$allocator@V?$shared_ptr@UHOTKEY@@@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x1801473FC (-clear@-$_Tree@V-$_Tset_traits@V-$shared_ptr@UHOTKEY@@@std@@U-$less@V-$shared_ptr@UHOTKEY@@@std@.c)
 *     ?erase@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA_KAEBI@Z @ 0x180147820 (-erase@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std@@QEAA_KAEBI@Z.c)
 *     ?erase@?$_Tree@V?$_Tset_traits@V?$shared_ptr@UHOTKEY@@@std@@U?$less@V?$shared_ptr@UHOTKEY@@@std@@@2@V?$allocator@V?$shared_ptr@UHOTKEY@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$shared_ptr@UHOTKEY@@@std@@@std@@@std@@@2@V32@@Z @ 0x180147998 (-erase@-$_Tree@V-$_Tset_traits@V-$shared_ptr@UHOTKEY@@@std@@U-$less@V-$shared_ptr@U_ea_180147998.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall HotKeyProcessor::DetectAndProcessHotKey(
        HotKeyProcessor *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        bool *a5)
{
  bool *v7; // r13
  int v8; // esi
  __int64 cData; // r9
  _QWORD *i; // rbx
  __int64 v11; // rcx
  _QWORD *j; // rax
  int EnabledHotKey; // r12d
  __int64 *v14; // rbx
  char *v15; // r14
  __int64 v16; // rdx
  __int64 v17; // r8
  ULONG_PTR v18; // rbx
  __int64 v19; // rdx
  unsigned int *v20; // rbx
  _QWORD *v21; // rax
  _QWORD *v22; // rbx
  volatile signed __int32 *v23; // rsi
  unsigned int *v24; // r13
  unsigned int *v25; // r15
  unsigned int *v26; // r12
  bool v27; // r14
  __int64 **v28; // r8
  __int64 *v29; // rcx
  __int64 *v30; // rax
  unsigned int v31; // edx
  __int64 v32; // rcx
  _QWORD *k; // rax
  unsigned int v35; // [rsp+38h] [rbp-D0h] BYREF
  int v36; // [rsp+44h] [rbp-C4h]
  __int128 v37; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v38; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v39; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v40; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v41; // [rsp+70h] [rbp-98h] BYREF
  __int64 v42; // [rsp+78h] [rbp-90h] BYREF
  __int64 v43; // [rsp+80h] [rbp-88h] BYREF
  __int64 v44; // [rsp+88h] [rbp-80h] BYREF
  bool *v45; // [rsp+90h] [rbp-78h]
  unsigned int *v46; // [rsp+98h] [rbp-70h]
  volatile signed __int32 *v47; // [rsp+A0h] [rbp-68h]
  __int64 v48; // [rsp+A8h] [rbp-60h]
  char v49[8]; // [rsp+B8h] [rbp-50h] BYREF
  char v50[16]; // [rsp+C0h] [rbp-48h] BYREF
  char v51[40]; // [rsp+D0h] [rbp-38h] BYREF
  EVENT_DATA_DESCRIPTOR v52; // [rsp+F8h] [rbp-10h] BYREF
  const char *v53; // [rsp+118h] [rbp+10h]
  int v54; // [rsp+120h] [rbp+18h]
  int v55; // [rsp+124h] [rbp+1Ch]
  unsigned int *v56; // [rsp+128h] [rbp+20h]
  int v57; // [rsp+130h] [rbp+28h]
  int v58; // [rsp+134h] [rbp+2Ch]
  char *v59; // [rsp+138h] [rbp+30h]
  int v60; // [rsp+140h] [rbp+38h]
  int v61; // [rsp+144h] [rbp+3Ch]
  char *v62; // [rsp+148h] [rbp+40h]
  int v63; // [rsp+150h] [rbp+48h]
  int v64; // [rsp+154h] [rbp+4Ch]
  __int64 *v65; // [rsp+158h] [rbp+50h]
  int v66; // [rsp+160h] [rbp+58h]
  int v67; // [rsp+164h] [rbp+5Ch]
  __int64 *v68; // [rsp+168h] [rbp+60h]
  int v69; // [rsp+170h] [rbp+68h]
  int v70; // [rsp+174h] [rbp+6Ch]
  EVENT_DATA_DESCRIPTOR v71; // [rsp+178h] [rbp+70h] BYREF
  const char *v72; // [rsp+198h] [rbp+90h]
  int v73; // [rsp+1A0h] [rbp+98h]
  int v74; // [rsp+1A4h] [rbp+9Ch]
  unsigned int *v75; // [rsp+1A8h] [rbp+A0h]
  int v76; // [rsp+1B0h] [rbp+A8h]
  int v77; // [rsp+1B4h] [rbp+ACh]
  unsigned int *v78; // [rsp+1B8h] [rbp+B0h]
  int v79; // [rsp+1C0h] [rbp+B8h]
  int v80; // [rsp+1C4h] [rbp+BCh]
  unsigned int *v81; // [rsp+1C8h] [rbp+C0h]
  int v82; // [rsp+1D0h] [rbp+C8h]
  int v83; // [rsp+1D4h] [rbp+CCh]
  __int64 *v84; // [rsp+1D8h] [rbp+D0h]
  int v85; // [rsp+1E0h] [rbp+D8h]
  int v86; // [rsp+1E4h] [rbp+DCh]
  __int64 *v87; // [rsp+1E8h] [rbp+E0h]
  int v88; // [rsp+1F0h] [rbp+E8h]
  int v89; // [rsp+1F4h] [rbp+ECh]
  EVENT_DATA_DESCRIPTOR v90; // [rsp+1F8h] [rbp+F0h] BYREF
  unsigned int *v91; // [rsp+218h] [rbp+110h]
  __int64 v92; // [rsp+220h] [rbp+118h]
  char *v93; // [rsp+228h] [rbp+120h]
  __int64 v94; // [rsp+230h] [rbp+128h]
  char *v95; // [rsp+238h] [rbp+130h]
  __int64 v96; // [rsp+240h] [rbp+138h]
  __int64 *v97; // [rsp+248h] [rbp+140h]
  __int64 v98; // [rsp+250h] [rbp+148h]
  __int64 *v99; // [rsp+258h] [rbp+150h]
  __int64 v100; // [rsp+260h] [rbp+158h]
  EVENT_DATA_DESCRIPTOR v101; // [rsp+268h] [rbp+160h] BYREF
  const char *v102; // [rsp+288h] [rbp+180h]
  int v103; // [rsp+290h] [rbp+188h]
  int v104; // [rsp+294h] [rbp+18Ch]
  unsigned int *v105; // [rsp+298h] [rbp+190h]
  int v106; // [rsp+2A0h] [rbp+198h]
  int v107; // [rsp+2A4h] [rbp+19Ch]
  unsigned int *v108; // [rsp+2A8h] [rbp+1A0h]
  int v109; // [rsp+2B0h] [rbp+1A8h]
  int v110; // [rsp+2B4h] [rbp+1ACh]
  unsigned int *v111; // [rsp+2B8h] [rbp+1B0h]
  int v112; // [rsp+2C0h] [rbp+1B8h]
  int v113; // [rsp+2C4h] [rbp+1BCh]
  EVENT_DATA_DESCRIPTOR v114; // [rsp+2C8h] [rbp+1C0h] BYREF
  const char *v115; // [rsp+2E8h] [rbp+1E0h]
  __int64 v116; // [rsp+2F0h] [rbp+1E8h]
  unsigned int *v117; // [rsp+2F8h] [rbp+1F0h]
  __int64 v118; // [rsp+300h] [rbp+1F8h]
  unsigned int *v119; // [rsp+308h] [rbp+200h]
  __int64 v120; // [rsp+310h] [rbp+208h]
  unsigned int *v121; // [rsp+318h] [rbp+210h]
  __int64 v122; // [rsp+320h] [rbp+218h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+328h] [rbp+220h] BYREF
  char *v124; // [rsp+348h] [rbp+240h]
  __int64 v125; // [rsp+350h] [rbp+248h]
  __int64 *v126; // [rsp+358h] [rbp+250h]
  __int64 v127; // [rsp+360h] [rbp+258h]
  EVENT_DATA_DESCRIPTOR v128; // [rsp+368h] [rbp+260h] BYREF
  char *v129; // [rsp+388h] [rbp+280h]
  __int64 v130; // [rsp+390h] [rbp+288h]
  ULONG_PTR retaddr; // [rsp+3E0h] [rbp+2D8h]
  char v132; // [rsp+3F8h] [rbp+2F0h] BYREF

  v132 = a3;
  v48 = -2LL;
  v35 = a2;
  v7 = a5;
  v45 = a5;
  v36 = 0;
  v8 = 0;
  v37 = 0LL;
  *a5 = 0;
  cData = 4LL;
  if ( (unsigned int)dword_1801DE450 > 5 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1801DE450, 0x20000uLL) )
    {
      v124 = (char *)this + 56;
      v125 = cData;
      v38 = *((_QWORD *)this + 6);
      v126 = &v38;
      v127 = 8LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801DE450, &unk_1801A20E1, 0LL, 0LL, cData, &pData);
    }
    if ( (unsigned int)dword_1801DE450 > 5 && TlgKeywordOn((TraceLoggingHProvider)&dword_1801DE450, 0x40000uLL) )
    {
      v91 = &v35;
      v92 = 4LL;
      v93 = &v132;
      v94 = 1LL;
      v95 = (char *)this + 56;
      v96 = 4LL;
      v39 = *((_QWORD *)this + 6);
      v97 = &v39;
      v98 = 8LL;
      v40 = *((_QWORD *)this + 4);
      v99 = &v40;
      v100 = 8LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801DE450, &unk_1801A1D05, 0LL, 0LL, 7u, &v90);
    }
  }
  for ( i = (_QWORD *)**((_QWORD **)this + 5); i != *((_QWORD **)this + 5); i = j )
  {
    if ( (unsigned int)dword_1801DE450 > 5 && TlgKeywordOn((TraceLoggingHProvider)&dword_1801DE450, 0x40000uLL) )
    {
      v129 = (char *)i + 28;
      v130 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801DE450, &unk_1801A1E82, 0LL, 0LL, 3u, &v128);
    }
    v11 = i[2];
    if ( *(_BYTE *)(v11 + 25) )
    {
      for ( j = (_QWORD *)i[1]; !*((_BYTE *)j + 25) && i == (_QWORD *)j[2]; j = (_QWORD *)j[1] )
        i = j;
    }
    else
    {
      j = std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy> const,wil::com_ptr_t<IMPCManagerClientProxy,wil::err_exception_policy>>>>::_Min((_QWORD *)v11);
    }
  }
  EnabledHotKey = v36;
  if ( v35 == 7 )
  {
    v14 = (__int64 *)((char *)this + 40);
    if ( v132 )
      goto LABEL_40;
    *((_DWORD *)this + 14) = 0;
    std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::clear(
      (char *)this + 40,
      a2,
      a3,
      cData);
    std::_Tree<std::_Tset_traits<std::shared_ptr<HOTKEY>,std::less<std::shared_ptr<HOTKEY>>,std::allocator<std::shared_ptr<HOTKEY>>,0>>::clear((char *)this + 64);
  }
  else
  {
    if ( v35 > 0x5A )
    {
      if ( v35 <= 0x5C )
      {
        v8 = 8;
        goto LABEL_30;
      }
      if ( v35 > 0x9F )
      {
        if ( v35 <= 0xA1 )
        {
          v8 = 4;
          goto LABEL_30;
        }
        if ( v35 <= 0xA3 )
        {
          v8 = 2;
          goto LABEL_30;
        }
        if ( v35 <= 0xA5 )
        {
          v8 = 1;
LABEL_30:
          v14 = (__int64 *)((char *)this + 40);
          goto LABEL_36;
        }
      }
    }
    v14 = (__int64 *)((char *)this + 40);
  }
  *((_BYTE *)this + 60) = 0;
LABEL_36:
  if ( !v132 )
  {
    std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Insert_nohint<unsigned int const &,std::_Not_a_node_tag>(
      v14,
      (__int64)v50,
      a3,
      &v35);
    v15 = (char *)this + 56;
    v16 = (unsigned int)v8 | *((_DWORD *)this + 14);
    *((_DWORD *)this + 14) = v16;
    if ( !v8 )
    {
      EnabledHotKey = HotKeyProcessor::FindEnabledHotKey(this, v16, v35, &v37);
      v36 = EnabledHotKey;
      if ( EnabledHotKey < 0 )
      {
        v18 = 460LL;
LABEL_44:
        if ( EnabledHotKey == -2147024882 )
          FailFastWithHR(-2147024882, retaddr, v18);
        FailFastWithHR(EnabledHotKey, retaddr, v18);
        goto LABEL_103;
      }
LABEL_47:
      v20 = (unsigned int *)v37;
      if ( (_QWORD)v37 )
      {
        if ( (unsigned int)dword_1801DE450 > 5 && TlgKeywordOn((TraceLoggingHProvider)&dword_1801DE450, 0x40000uLL) )
        {
          v53 = "Enabled hotkey found";
          v54 = 21;
          v55 = 0;
          v56 = &v35;
          v57 = 4;
          v58 = 0;
          v59 = &v132;
          v60 = 1;
          v61 = 0;
          v62 = v15;
          v63 = 4;
          v64 = 0;
          v41 = *((_QWORD *)this + 6);
          v65 = &v41;
          v66 = 8;
          v67 = 0;
          v42 = *((_QWORD *)this + 4);
          v68 = &v42;
          v69 = 8;
          v70 = 0;
          TlgWrite((TraceLoggingHProvider)&dword_1801DE450, &unk_1801A1D90, 0LL, 0LL, 8u, &v52);
        }
        *((_QWORD *)v20 + 2) = a4;
        if ( *((_QWORD *)this + 15) )
        {
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 17) + 24LL))(*((_QWORD *)this + 17));
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 15) + 24LL))(
            *((_QWORD *)this + 15),
            *v20,
            v20[1],
            v20[2],
            *((_QWORD *)v20 + 2));
          if ( (unsigned int)dword_1801DE450 > 5 )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1801DE450, 0x20000uLL) )
            {
              v72 = "Called OnHotKeyDetected";
              v73 = 24;
              v74 = 0;
              v75 = v20;
              v76 = 4;
              v77 = 0;
              v78 = v20 + 1;
              v79 = 4;
              v80 = 0;
              v81 = v20 + 2;
              v82 = 4;
              v83 = 0;
              v43 = *((_QWORD *)this + 6);
              v84 = &v43;
              v85 = 8;
              v86 = 0;
              v44 = *((_QWORD *)this + 4);
              v87 = &v44;
              v88 = 8;
              v89 = 0;
              TlgWrite((TraceLoggingHProvider)&dword_1801DE450, &unk_1801A1AA7, 0LL, 0LL, 8u, &v71);
            }
          }
        }
        if ( !*((_BYTE *)this + 60) )
          *v7 = 1;
        std::_Tree<std::_Tset_traits<std::shared_ptr<HOTKEY>,std::less<std::shared_ptr<HOTKEY>>,std::allocator<std::shared_ptr<HOTKEY>>,0>>::_Insert_nohint<std::shared_ptr<HOTKEY> const &,std::_Not_a_node_tag>(
          (__int64 **)this + 8,
          (__int64)v51,
          v17,
          (unsigned __int64 *)&v37);
      }
      goto LABEL_58;
    }
    goto LABEL_58;
  }
LABEL_40:
  std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::erase(
    v14,
    &v35,
    a3,
    cData);
  v15 = (char *)this + 56;
  v19 = *((_DWORD *)this + 14) & (unsigned int)~v8;
  *((_DWORD *)this + 14) = v19;
  if ( v8 && *((_BYTE *)this + 60) != (_BYTE)EnabledHotKey )
  {
    EnabledHotKey = HotKeyProcessor::FindEnabledHotKey(this, v19, v35, &v37);
    v36 = EnabledHotKey;
    if ( EnabledHotKey < 0 )
    {
      v18 = 445LL;
      goto LABEL_44;
    }
    goto LABEL_47;
  }
LABEL_58:
  if ( v132 )
  {
    v21 = (_QWORD *)((char *)this + 64);
    v22 = (_QWORD *)**((_QWORD **)this + 8);
    while ( v22 != (_QWORD *)*v21 )
    {
      v23 = (volatile signed __int32 *)v22[5];
      if ( v23 )
      {
        _InterlockedAdd(v23 + 2, 1u);
        v23 = (volatile signed __int32 *)v22[5];
      }
      v25 = (unsigned int *)v22[4];
      v46 = v25;
      v24 = v25;
      v47 = v23;
      v26 = v25 + 2;
      if ( v35 == v25[2] && !*((_BYTE *)this + 60) )
        *v45 = 1;
      if ( (unsigned int)dword_1801DE450 > 5 && TlgKeywordOn((TraceLoggingHProvider)&dword_1801DE450, 0x40000uLL) )
      {
        v102 = "Checking hotkey for all keys up";
        v103 = 32;
        v104 = 0;
        v105 = v25;
        v106 = 4;
        v107 = 0;
        v108 = v25 + 1;
        v109 = 4;
        v110 = 0;
        v111 = v25 + 2;
        v112 = 4;
        v113 = 0;
        TlgWrite((TraceLoggingHProvider)&dword_1801DE450, &unk_1801A1EBC, 0LL, 0LL, 6u, &v101);
      }
      if ( v23 )
      {
        _InterlockedAdd(v23 + 2, 1u);
        v25 = v46;
      }
      v27 = 0;
      v28 = (__int64 **)((char *)this + 40);
      v29 = (__int64 *)*((_QWORD *)this + 5);
      v30 = (__int64 *)v29[1];
      if ( *((_BYTE *)v30 + 25) )
        goto LABEL_79;
      v31 = v24[2];
      do
      {
        if ( *((_DWORD *)v30 + 7) >= v31 )
        {
          v29 = v30;
          v30 = (__int64 *)*v30;
        }
        else
        {
          v30 = (__int64 *)v30[2];
        }
      }
      while ( !*((_BYTE *)v30 + 25) );
      if ( v29 == *v28 || v31 < *((_DWORD *)v29 + 7) )
LABEL_79:
        v29 = *v28;
      if ( v29 == *v28 )
        v27 = (*((_DWORD *)this + 14) & v24[1]) == 0;
      if ( v23 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v23);
      if ( v27 )
      {
        if ( *((_QWORD *)this + 15) )
        {
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 17) + 24LL))(*((_QWORD *)this + 17));
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 15) + 32LL))(
            *((_QWORD *)this + 15),
            *v25,
            v25[1],
            *v26,
            *((_QWORD *)v25 + 2));
          if ( (unsigned int)dword_1801DE450 > 5 )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1801DE450, 0x20000uLL) )
            {
              v115 = "Called OnHotKeyAllKeysUp";
              v116 = 25LL;
              v117 = v25;
              v118 = 4LL;
              v119 = v25 + 1;
              v120 = 4LL;
              v121 = v24 + 2;
              v122 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1801DE450, &unk_1801A1FAD, 0LL, 0LL, 6u, &v114);
            }
          }
        }
        v22 = *(_QWORD **)std::_Tree<std::_Tset_traits<std::shared_ptr<HOTKEY>,std::less<std::shared_ptr<HOTKEY>>,std::allocator<std::shared_ptr<HOTKEY>>,0>>::erase(
                            (char *)this + 64,
                            v49,
                            v22);
      }
      else
      {
        v32 = v22[2];
        if ( *(_BYTE *)(v32 + 25) )
        {
          for ( k = (_QWORD *)v22[1]; !*((_BYTE *)k + 25) && v22 == (_QWORD *)k[2]; k = (_QWORD *)k[1] )
            v22 = k;
        }
        else
        {
          k = std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy> const,wil::com_ptr_t<IMPCManagerClientProxy,wil::err_exception_policy>>>>::_Min((_QWORD *)v32);
        }
        v22 = k;
      }
      v21 = (_QWORD *)((char *)this + 64);
      if ( v23 )
      {
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v23);
        v21 = (_QWORD *)((char *)this + 64);
      }
    }
    EnabledHotKey = v36;
  }
  if ( !*((_QWORD *)this + 6) )
    *((_BYTE *)this + 60) = 1;
LABEL_103:
  if ( *((_QWORD *)&v37 + 1) )
    std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v37 + 1));
  return (unsigned int)EnabledHotKey;
}
