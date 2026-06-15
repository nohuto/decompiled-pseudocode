/*
 * XREFs of ?UpdateAudioPlaybackStatus@CPlaybackNotifier@@AEAAXW4REFERENCE_OPERATION@@PEBG@Z @ 0x1800217C0
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj@VCPlaybackReference@@@std@@EEAAXXZ @ 0x1800206E0 (-_Destroy@-$_Ref_count_obj@VCPlaybackReference@@@std@@EEAAXXZ.c)
 *     ?AcquireReference@CPlaybackNotifier@@QEAA?AV?$shared_ptr@VCPlaybackReference@@@std@@PEBG@Z @ 0x180021350 (-AcquireReference@CPlaybackNotifier@@QEAA-AV-$shared_ptr@VCPlaybackReference@@@std@@PEBG@Z.c)
 * Callees:
 *     ??$_Insert_hint@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@1@@Z @ 0x180036360 (--$_Insert_hint@AEAU-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEN.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800364B8 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@$$QEAV-$basic_string@GU-$char_t_ea_1800364B8.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180046104 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_stri.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800505A0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180057130 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     atexit @ 0x1800652A4 (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800652C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180065BEE (memset_0.c)
 *     _alloca_probe @ 0x18006C8D0 (_alloca_probe.c)
 *     memcpy_0 @ 0x18006C963 (memcpy_0.c)
 *     memmove_0 @ 0x18006C96F (memmove_0.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800CA1A0 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPlaybackNotifier::UpdateAudioPlaybackStatus(__int64 a1, WINBOOL a2, _WORD *a3)
{
  __int64 v5; // rdx
  unsigned __int64 v6; // rbx
  unsigned int v7; // r13d
  __int64 v8; // rdi
  unsigned __int64 v9; // r14
  HANDLE ProcessHeap; // rax
  unsigned __int16 *v11; // r14
  size_t v12; // rbx
  __int64 **v13; // r12
  __int64 *v14; // rbx
  __int64 *v15; // r10
  __int64 *v16; // rdi
  unsigned __int64 v17; // r15
  unsigned __int16 *v18; // rax
  __int64 *v19; // r9
  unsigned __int64 v20; // r11
  unsigned __int64 v21; // rcx
  __int64 v22; // r9
  unsigned __int16 v23; // dx
  __int64 v24; // rax
  const char *v25; // r9
  unsigned __int64 v26; // r10
  unsigned __int64 v27; // rcx
  unsigned __int16 v28; // dx
  const struct std::nothrow_t *v29; // rdx
  __int64 result; // rax
  bool v31; // zf
  unsigned int v32; // r10d
  __int64 *v33; // r9
  __int64 v34; // rax
  __int64 *v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rax
  size_t v38; // rbx
  unsigned __int64 v39; // rcx
  void *v40; // rax
  WINBOOL fPending; // [rsp+30h] [rbp-1168h] BYREF
  int v42; // [rsp+34h] [rbp-1164h] BYREF
  unsigned __int64 v43; // [rsp+38h] [rbp-1160h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-1158h] BYREF
  void *v45; // [rsp+48h] [rbp-1150h] BYREF
  _QWORD v46[2]; // [rsp+50h] [rbp-1148h] BYREF
  __int64 *v47; // [rsp+60h] [rbp-1138h] BYREF
  _DWORD v48[2]; // [rsp+68h] [rbp-1130h] BYREF
  __int64 v49; // [rsp+70h] [rbp-1128h]
  __int64 v50; // [rsp+78h] [rbp-1120h]
  __int64 v51; // [rsp+80h] [rbp-1118h]
  __int64 v52; // [rsp+88h] [rbp-1110h]
  __int64 v53; // [rsp+90h] [rbp-1108h]
  __int64 v54; // [rsp+98h] [rbp-1100h]
  __int64 v55; // [rsp+A0h] [rbp-10F8h]
  __int64 v56; // [rsp+A8h] [rbp-10F0h]
  __int64 v57; // [rsp+B0h] [rbp-10E8h]
  __int64 v58; // [rsp+B8h] [rbp-10E0h]
  __int64 v59; // [rsp+C0h] [rbp-10D8h]
  __int64 v60; // [rsp+C8h] [rbp-10D0h]
  unsigned __int16 *v61; // [rsp+D0h] [rbp-10C8h]
  unsigned __int64 v62; // [rsp+D8h] [rbp-10C0h]
  unsigned __int64 v63; // [rsp+E0h] [rbp-10B8h]
  __int64 *v64; // [rsp+E8h] [rbp-10B0h]
  __int64 *v65; // [rsp+F0h] [rbp-10A8h]
  unsigned __int64 v66; // [rsp+F8h] [rbp-10A0h]
  unsigned __int64 v67; // [rsp+100h] [rbp-1098h]
  _QWORD v68[2]; // [rsp+108h] [rbp-1090h] BYREF
  unsigned __int64 v69; // [rsp+118h] [rbp-1080h]
  unsigned __int64 v70; // [rsp+120h] [rbp-1078h]
  unsigned __int16 *v71; // [rsp+128h] [rbp-1070h] BYREF
  int v72; // [rsp+130h] [rbp-1068h]
  int v73; // [rsp+134h] [rbp-1064h]
  void *v74; // [rsp+138h] [rbp-1060h]
  int v75; // [rsp+140h] [rbp-1058h]
  int v76; // [rsp+144h] [rbp-1054h]
  int *v77; // [rsp+148h] [rbp-1050h]
  __int64 v78; // [rsp+150h] [rbp-1048h]
  int v79; // [rsp+160h] [rbp-1038h] BYREF
  _DWORD v80[1023]; // [rsp+164h] [rbp-1034h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1198h] [rbp+0h]

  v50 = -2LL;
  fPending = a2;
  v69 = 0LL;
  v70 = 7LL;
  LOWORD(v68[0]) = 0;
  v5 = -1LL;
  v6 = -1LL;
  do
    ++v6;
  while ( a3[v6] );
  try
  {
    if ( v6 <= 7 )
    {
      v69 = v6;
      v38 = 2 * v6;
      memmove_0(v68, a3, v38);
      *(_WORD *)((char *)v68 + v38) = 0;
      v7 = 2;
      v11 = (unsigned __int16 *)v68[0];
LABEL_14:
      v13 = (__int64 **)(a1 + 80);
      v14 = *(__int64 **)(a1 + 80);
      v15 = (__int64 *)v14[1];
      v16 = v14;
      v17 = v70;
      if ( !*((_BYTE *)v15 + 25) )
      {
        v62 = v69;
        do
        {
          v18 = (unsigned __int16 *)v68;
          if ( v70 >= 8 )
            v18 = v11;
          v19 = v15 + 4;
          if ( (unsigned __int64)v15[7] >= 8 )
            v19 = (__int64 *)v15[4];
          v20 = v15[6];
          v63 = v20;
          if ( v69 < v20 )
            v21 = v69;
          else
            v21 = v20;
          if ( v21 )
          {
            v22 = (char *)v19 - (char *)v18;
            while ( 1 )
            {
              v23 = *(unsigned __int16 *)((char *)v18 + v22);
              if ( v23 != *v18 )
                break;
              ++v18;
              if ( !--v21 )
                goto LABEL_26;
            }
            if ( v23 < *v18 )
            {
LABEL_76:
              v15 = (__int64 *)v15[2];
              continue;
            }
          }
          else
          {
LABEL_26:
            if ( v20 < v69 )
              goto LABEL_76;
          }
          v14 = v15;
          v15 = (__int64 *)*v15;
        }
        while ( !*((_BYTE *)v15 + 25) );
      }
      v64 = v14;
      v65 = v16;
      if ( v14 != v16 )
      {
        v24 = (__int64)(v14 + 4);
        if ( (unsigned __int64)v14[7] >= 8 )
          v24 = v14[4];
        v25 = (const char *)v68;
        if ( v70 >= 8 )
          v25 = (const char *)v11;
        v26 = v14[6];
        v66 = v26;
        v67 = v69;
        if ( v26 < v69 )
          v27 = v26;
        else
          v27 = v69;
        if ( v27 )
        {
          v25 -= v24;
          while ( 1 )
          {
            v28 = *(_WORD *)&v25[v24];
            if ( v28 != *(_WORD *)v24 )
              break;
            v24 += 2LL;
            if ( !--v27 )
              goto LABEL_40;
          }
          if ( v28 >= *(_WORD *)v24 )
            goto LABEL_41;
        }
        else
        {
LABEL_40:
          if ( v69 >= v26 )
          {
LABEL_41:
            if ( v17 >= 8 )
            {
              v29 = (const struct std::nothrow_t *)(2 * v17 + 2);
              v43 = (unsigned __int64)v29;
              v45 = v11;
              if ( (unsigned __int64)v29 >= 0x1000 )
              {
                std::_Adjust_manually_vector_aligned(&v45, &v43);
                v29 = (const struct std::nothrow_t *)v43;
                v11 = (unsigned __int16 *)v45;
              }
              operator delete(v11, v29);
            }
            v69 = 0LL;
            v70 = 7LL;
            LOWORD(v68[0]) = 0;
            result = (unsigned int)fPending;
            if ( fPending )
            {
              if ( fPending != 1 )
                return result;
              result = *((unsigned int *)v14 + 16);
              if ( !(_DWORD)result )
                return result;
              LODWORD(result) = result - 1;
              v31 = (_DWORD)result == 0;
              result = (unsigned int)result;
              *((_DWORD *)v14 + 16) = result;
            }
            else
            {
              v31 = ++*((_DWORD *)v14 + 16) == 1;
            }
            if ( v31 )
            {
              memset_0(v80, 0, sizeof(v80));
              v32 = 0;
              v79 = 1;
              v33 = *v13;
              v34 = **v13;
              v46[0] = v34;
              while ( (__int64 *)v34 != v33 )
              {
                v35 = (__int64 *)(v34 + 32);
                if ( *(_DWORD *)(v34 + 64) )
                {
                  if ( v32 >= 0x24 )
                    break;
                  if ( *(_QWORD *)(v34 + 56) >= 8uLL )
                    v35 = (__int64 *)*v35;
                  *(_OWORD *)&v80[v7 - 1] = *(_OWORD *)v35;
                  *(_OWORD *)&v80[v7 + 3] = *((_OWORD *)v35 + 1);
                  *(_OWORD *)&v80[v7 + 7] = *((_OWORD *)v35 + 2);
                  *(_OWORD *)&v80[v7 + 11] = *((_OWORD *)v35 + 3);
                  *(_OWORD *)&v80[v7 + 15] = *((_OWORD *)v35 + 4);
                  *(_OWORD *)&v80[v7 + 19] = *((_OWORD *)v35 + 5);
                  *(_OWORD *)&v80[v7 + 23] = *((_OWORD *)v35 + 6);
                  v7 += 28;
                }
                std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,ENDPOINT_REF_DATA>>>,std::_Iterator_base0>::operator++(v46);
                v34 = v46[0];
              }
              v80[0] = v32;
              v42 = RtlPublishWnfStateData(WNF_AUDC_RENDER, 0LL, &v79, 4096LL, 0LL);
              Context = 0LL;
              if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
                && fPending )
              {
                Context = &qword_1801B7588;
                qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
                qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
                atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
                wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0);
                InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
              }
              result = (__int64)Context;
              v36 = *((_QWORD *)Context + 1);
              if ( *(_DWORD *)v36 > 4u )
              {
                v77 = &v42;
                v78 = 4LL;
                v48[0] = 184549376;
                v48[1] = 4;
                v49 = 0LL;
                v71 = *(unsigned __int16 **)(v36 + 8);
                v72 = *v71;
                v73 = 2;
                v74 = &unk_180178B08;
                v75 = 57;
                v76 = 1;
                LODWORD(v43) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
                return EtwEventWriteTransfer(*(_QWORD *)(v36 + 32), v48, 0LL, 0LL, 3, &v71);
              }
            }
            return result;
          }
        }
      }
      v46[1] = v68;
      v37 = std::_Tree_comp_alloc<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<std::wstring &&>,std::tuple<>>(v13);
      std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Insert_hint<std::pair<std::wstring const,ENDPOINT_REF_DATA> &,std::_Tree_node<std::pair<std::wstring const,ENDPOINT_REF_DATA>,void *> *>(
        (_DWORD)v13,
        (unsigned int)&v47,
        (_DWORD)v14,
        v37 + 32,
        v37);
      v14 = v47;
      v17 = v70;
      v11 = (unsigned __int16 *)v68[0];
      goto LABEL_41;
    }
    v51 = 0x7FFFFFFFFFFFFFFFLL;
    v7 = 2;
    v52 = 8LL;
    v8 = 0x7FFFFFFFFFFFFFFELL;
    v53 = 0x7FFFFFFFFFFFFFFELL;
    v54 = 0x7FFFFFFFFFFFFFFFLL;
    if ( v6 > 0x7FFFFFFFFFFFFFFELL )
      std::_Xlength_error("string too long");
    v55 = 0x7FFFFFFFFFFFFFFFLL;
    v56 = 8LL;
    v57 = 0x7FFFFFFFFFFFFFFELL;
    v58 = 0x7FFFFFFFFFFFFFFFLL;
    v59 = v6 | 7;
    if ( (v6 | 7) <= 0x7FFFFFFFFFFFFFFELL )
    {
      v8 = 10LL;
      v60 = 10LL;
      if ( (v6 | 7) >= 0xA )
        v8 = v6 | 7;
    }
    v9 = 2 * (v8 + 1);
    if ( (unsigned __int64)(v8 + 1) > 0x7FFFFFFFFFFFFFFFLL )
    {
      v9 = -1LL;
    }
    else if ( v9 < 0x1000 )
    {
      if ( v9 )
      {
        ProcessHeap = GetProcessHeap();
        v11 = (unsigned __int16 *)HeapAlloc(ProcessHeap, 0, 2 * (v8 + 1));
      }
      else
      {
        v11 = 0LL;
      }
LABEL_13:
      v61 = v11;
      v69 = v6;
      v70 = v8;
      v12 = v6;
      memcpy_0(v11, a3, v12 * 2);
      v11[v12] = 0;
      v68[0] = v11;
      goto LABEL_14;
    }
    v39 = v9 + 39;
    if ( v9 + 39 >= v9 )
      goto LABEL_70;
    while ( 1 )
    {
      v39 = v5;
LABEL_70:
      v40 = operator new(v39);
      if ( v40 )
        break;
      _o__invalid_parameter_noinfo_noreturn();
    }
    v11 = (unsigned __int16 *)(((unsigned __int64)v40 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *((_QWORD *)v11 - 1) = v40;
    goto LABEL_13;
  }
  catch ( ... )
  {
    return wil::details::in1diag3::Log_CaughtException(
             retaddr,
             (void *)0x17C,
             (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
             v25);
  }
  return result;
}
