/*
 * XREFs of ?UpdateAudioPlaybackStatus@CPlaybackNotifier@@AEAAXW4REFERENCE_OPERATION@@PEBG@Z @ 0x18001EB70
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj@VCPlaybackReference@@@std@@EEAAXXZ @ 0x18001DA90 (-_Destroy@-$_Ref_count_obj@VCPlaybackReference@@@std@@EEAAXXZ.c)
 *     ?AcquireReference@CPlaybackNotifier@@QEAA?AV?$shared_ptr@VCPlaybackReference@@@std@@PEBG@Z @ 0x18001E700 (-AcquireReference@CPlaybackNotifier@@QEAA-AV-$shared_ptr@VCPlaybackReference@@@std@@PEBG@Z.c)
 * Callees:
 *     ??$_Insert_hint@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@1@@Z @ 0x1800098C0 (--$_Insert_hint@AEAU-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEN.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180009A18 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@$$QEAV-$basic_string@GU-$char_t_ea_180009A18.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180041BE4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_stri.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18004F6E0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180053D70 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     atexit @ 0x1800642B4 (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800642D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180064BFE (memset_0.c)
 *     _alloca_probe @ 0x18006B870 (_alloca_probe.c)
 *     memcpy_0 @ 0x18006B903 (memcpy_0.c)
 *     memmove_0 @ 0x18006B90F (memmove_0.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800CA630 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
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
  char *v11; // r14
  size_t v12; // rbx
  __int64 v13; // rdx
  __int64 **v14; // r12
  __int64 *v15; // rbx
  __int64 *v16; // r10
  __int64 *v17; // rdi
  unsigned __int64 v18; // r15
  char *v19; // rax
  __int64 *v20; // r9
  unsigned __int64 v21; // r11
  unsigned __int64 v22; // rcx
  __int64 v23; // r9
  __int64 v24; // rax
  const char *v25; // r9
  unsigned __int64 v26; // r10
  unsigned __int64 v27; // rcx
  const struct std::nothrow_t *v28; // rdx
  __int64 result; // rax
  bool v30; // zf
  unsigned int v31; // r10d
  __int64 *v32; // r9
  __int64 v33; // rax
  __int64 *v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rax
  size_t v37; // rbx
  unsigned __int64 v38; // rcx
  void *v39; // rax
  WINBOOL fPending; // [rsp+30h] [rbp-1168h] BYREF
  int v41; // [rsp+34h] [rbp-1164h] BYREF
  unsigned __int64 v42; // [rsp+38h] [rbp-1160h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-1158h] BYREF
  void *v44; // [rsp+48h] [rbp-1150h] BYREF
  __int64 v45; // [rsp+50h] [rbp-1148h] BYREF
  _QWORD *v46; // [rsp+58h] [rbp-1140h] BYREF
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
  char *v61; // [rsp+D0h] [rbp-10C8h]
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
      v37 = 2 * v6;
      memmove_0(v68, a3, v37);
      *(_WORD *)((char *)v68 + v37) = 0;
      v7 = 2;
      v11 = (char *)v68[0];
LABEL_14:
      v14 = (__int64 **)(a1 + 80);
      v15 = *(__int64 **)(a1 + 80);
      v16 = (__int64 *)v15[1];
      v17 = v15;
      v18 = v70;
      if ( !*((_BYTE *)v16 + 25) )
      {
        v62 = v69;
        do
        {
          v19 = (char *)v68;
          if ( v70 >= 8 )
            v19 = v11;
          v20 = v16 + 4;
          if ( (unsigned __int64)v16[7] >= 8 )
            v20 = (__int64 *)v16[4];
          v21 = v16[6];
          v63 = v21;
          if ( v69 < v21 )
            v22 = v69;
          else
            v22 = v21;
          if ( v22 )
          {
            v23 = (char *)v20 - v19;
            while ( 1 )
            {
              v13 = *(unsigned __int16 *)&v19[v23];
              if ( (_WORD)v13 != *(_WORD *)v19 )
                break;
              v19 += 2;
              if ( !--v22 )
                goto LABEL_26;
            }
            if ( (unsigned __int16)v13 < *(_WORD *)v19 )
            {
LABEL_76:
              v16 = (__int64 *)v16[2];
              continue;
            }
          }
          else
          {
LABEL_26:
            if ( v21 < v69 )
              goto LABEL_76;
          }
          v15 = v16;
          v16 = (__int64 *)*v16;
        }
        while ( !*((_BYTE *)v16 + 25) );
      }
      v64 = v15;
      v65 = v17;
      if ( v15 != v17 )
      {
        v24 = (__int64)(v15 + 4);
        if ( (unsigned __int64)v15[7] >= 8 )
          v24 = v15[4];
        v25 = (const char *)v68;
        if ( v70 >= 8 )
          v25 = v11;
        v26 = v15[6];
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
            v13 = *(unsigned __int16 *)&v25[v24];
            if ( (_WORD)v13 != *(_WORD *)v24 )
              break;
            v24 += 2LL;
            if ( !--v27 )
              goto LABEL_40;
          }
          if ( (unsigned __int16)v13 >= *(_WORD *)v24 )
            goto LABEL_41;
        }
        else
        {
LABEL_40:
          if ( v69 >= v26 )
          {
LABEL_41:
            if ( v18 >= 8 )
            {
              v28 = (const struct std::nothrow_t *)(2 * v18 + 2);
              v42 = (unsigned __int64)v28;
              v44 = v11;
              if ( (unsigned __int64)v28 >= 0x1000 )
              {
                std::_Adjust_manually_vector_aligned(&v44, &v42);
                v28 = (const struct std::nothrow_t *)v42;
                v11 = (char *)v44;
              }
              operator delete(v11, v28);
            }
            v69 = 0LL;
            v70 = 7LL;
            LOWORD(v68[0]) = 0;
            result = (unsigned int)fPending;
            if ( fPending )
            {
              if ( fPending != 1 )
                return result;
              result = *((unsigned int *)v15 + 16);
              if ( !(_DWORD)result )
                return result;
              LODWORD(result) = result - 1;
              v30 = (_DWORD)result == 0;
              result = (unsigned int)result;
              *((_DWORD *)v15 + 16) = result;
            }
            else
            {
              v30 = ++*((_DWORD *)v15 + 16) == 1;
            }
            if ( v30 )
            {
              memset_0(v80, 0, sizeof(v80));
              v31 = 0;
              v79 = 1;
              v32 = *v14;
              v33 = **v14;
              v45 = v33;
              while ( (__int64 *)v33 != v32 )
              {
                v34 = (__int64 *)(v33 + 32);
                if ( *(_DWORD *)(v33 + 64) )
                {
                  if ( v31 >= 0x24 )
                    break;
                  if ( *(_QWORD *)(v33 + 56) >= 8uLL )
                    v34 = (__int64 *)*v34;
                  *(_OWORD *)&v80[v7 - 1] = *(_OWORD *)v34;
                  *(_OWORD *)&v80[v7 + 3] = *((_OWORD *)v34 + 1);
                  *(_OWORD *)&v80[v7 + 7] = *((_OWORD *)v34 + 2);
                  *(_OWORD *)&v80[v7 + 11] = *((_OWORD *)v34 + 3);
                  *(_OWORD *)&v80[v7 + 15] = *((_OWORD *)v34 + 4);
                  *(_OWORD *)&v80[v7 + 19] = *((_OWORD *)v34 + 5);
                  *(_OWORD *)&v80[v7 + 23] = *((_OWORD *)v34 + 6);
                  v7 += 28;
                }
                std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,ENDPOINT_REF_DATA>>>,std::_Iterator_base0>::operator++(&v45);
                v33 = v45;
              }
              v80[0] = v31;
              v41 = RtlPublishWnfStateData(WNF_AUDC_RENDER, 0LL, &v79, 4096LL, 0LL);
              Context = 0LL;
              if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
                && fPending )
              {
                Context = &qword_1801B8588;
                qword_1801B8588 = &AudioSrvTelemetryProvider::`vftable';
                qword_1801B85A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
                atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
                wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B8588, qword_1801B85A0);
                InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B8588);
              }
              result = (__int64)Context;
              v35 = *((_QWORD *)Context + 1);
              if ( *(_DWORD *)v35 > 4u )
              {
                v77 = &v41;
                v78 = 4LL;
                v48[0] = 184549376;
                v48[1] = 4;
                v49 = 0LL;
                v71 = *(unsigned __int16 **)(v35 + 8);
                v72 = *v71;
                v73 = 2;
                v74 = &unk_180179B28;
                v75 = 57;
                v76 = 1;
                LODWORD(v42) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
                return EtwEventWriteTransfer(*(_QWORD *)(v35 + 32), v48, 0LL, 0LL, 3, &v71);
              }
            }
            return result;
          }
        }
      }
      v46 = v68;
      v36 = std::_Tree_comp_alloc<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<std::wstring &&>,std::tuple<>>(
              (__int64)v14,
              v13,
              (__int64 *)&v46);
      std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Insert_hint<std::pair<std::wstring const,ENDPOINT_REF_DATA> &,std::_Tree_node<std::pair<std::wstring const,ENDPOINT_REF_DATA>,void *> *>(
        v14,
        &v47,
        v15,
        (char *)(v36 + 32),
        v36);
      v15 = v47;
      v18 = v70;
      v11 = (char *)v68[0];
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
        v11 = (char *)HeapAlloc(ProcessHeap, 0, 2 * (v8 + 1));
      }
      else
      {
        v11 = 0LL;
      }
LABEL_13:
      v61 = v11;
      v69 = v6;
      v70 = v8;
      v12 = 2 * v6;
      memcpy_0(v11, a3, v12);
      *(_WORD *)&v11[v12] = 0;
      v68[0] = v11;
      goto LABEL_14;
    }
    v38 = v9 + 39;
    if ( v9 + 39 >= v9 )
      goto LABEL_70;
    while ( 1 )
    {
      v38 = v5;
LABEL_70:
      v39 = operator new(v38);
      if ( v39 )
        break;
      _o__invalid_parameter_noinfo_noreturn();
    }
    v11 = (char *)(((unsigned __int64)v39 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *((_QWORD *)v11 - 1) = v39;
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
