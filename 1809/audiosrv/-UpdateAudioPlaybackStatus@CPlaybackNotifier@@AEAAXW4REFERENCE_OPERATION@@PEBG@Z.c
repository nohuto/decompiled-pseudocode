/*
 * XREFs of ?UpdateAudioPlaybackStatus@CPlaybackNotifier@@AEAAXW4REFERENCE_OPERATION@@PEBG@Z @ 0x18002ED90
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj@VCPlaybackReference@@@std@@EEAAXXZ @ 0x1800120E0 (-_Destroy@-$_Ref_count_obj@VCPlaybackReference@@@std@@EEAAXXZ.c)
 *     ?AcquireReference@CPlaybackNotifier@@QEAA?AV?$shared_ptr@VCPlaybackReference@@@std@@PEBG@Z @ 0x18002EC50 (-AcquireReference@CPlaybackNotifier@@QEAA-AV-$shared_ptr@VCPlaybackReference@@@std@@PEBG@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000CFC0 (--2@YAPEAX_K@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800131A0 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_stri.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@1@@Z @ 0x18001CC24 (--$_Insert_hint@AEAU-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEN.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18001CD20 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@$$QEAV-$basic_string@GU-$char_traits@G@std@@.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180060C94 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     _alloca_probe @ 0x180068810 (_alloca_probe.c)
 *     memcpy_0 @ 0x1800688A3 (memcpy_0.c)
 *     memmove_0 @ 0x1800688AF (memmove_0.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800BBF20 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CPlaybackNotifier::UpdateAudioPlaybackStatus(__int64 a1, int a2, _WORD *a3)
{
  __int64 v6; // rdx
  unsigned __int64 v7; // rbx
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
  bool v29; // zf
  unsigned int v30; // r11d
  unsigned int v31; // ebx
  __int64 *v32; // r10
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r10
  int v36; // eax
  int v37; // eax
  __int64 v38; // rax
  size_t v39; // rbx
  SIZE_T v40; // rcx
  LPVOID v41; // rax
  __int64 v42; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-10D8h] BYREF
  int v44; // [rsp+34h] [rbp-10D4h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-10D0h] BYREF
  unsigned __int64 v46; // [rsp+40h] [rbp-10C8h] BYREF
  void *v47; // [rsp+48h] [rbp-10C0h] BYREF
  __int64 v48; // [rsp+50h] [rbp-10B8h] BYREF
  _QWORD *v49; // [rsp+58h] [rbp-10B0h] BYREF
  __int64 *v50; // [rsp+60h] [rbp-10A8h] BYREF
  _DWORD v51[2]; // [rsp+68h] [rbp-10A0h] BYREF
  __int64 v52; // [rsp+70h] [rbp-1098h]
  __int64 v53; // [rsp+78h] [rbp-1090h]
  _QWORD v54[2]; // [rsp+80h] [rbp-1088h] BYREF
  unsigned __int64 v55; // [rsp+90h] [rbp-1078h]
  unsigned __int64 v56; // [rsp+98h] [rbp-1070h]
  unsigned __int16 *v57; // [rsp+A0h] [rbp-1068h] BYREF
  int v58; // [rsp+A8h] [rbp-1060h]
  int v59; // [rsp+ACh] [rbp-105Ch]
  void *v60; // [rsp+B0h] [rbp-1058h]
  int v61; // [rsp+B8h] [rbp-1050h]
  int v62; // [rsp+BCh] [rbp-104Ch]
  int *v63; // [rsp+C0h] [rbp-1048h]
  __int64 v64; // [rsp+C8h] [rbp-1040h]
  _DWORD v65[1024]; // [rsp+D0h] [rbp-1038h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1108h] [rbp+0h]

  v53 = -2LL;
  v55 = 0LL;
  v56 = 7LL;
  LOWORD(v54[0]) = 0;
  v6 = -1LL;
  v7 = -1LL;
  do
    ++v7;
  while ( a3[v7] );
  try
  {
    if ( v7 <= 7 )
    {
      v55 = v7;
      v39 = 2 * v7;
      memmove_0(v54, a3, v39);
      *(_WORD *)((char *)v54 + v39) = 0;
      v11 = (char *)v54[0];
LABEL_14:
      v14 = (__int64 **)(a1 + 80);
      v15 = *(__int64 **)(a1 + 80);
      v16 = (__int64 *)v15[1];
      v17 = v15;
      v18 = v56;
      while ( !*((_BYTE *)v16 + 25) )
      {
        v19 = (char *)v54;
        if ( v56 >= 8 )
          v19 = v11;
        v20 = v16 + 4;
        if ( (unsigned __int64)v16[7] >= 8 )
          v20 = (__int64 *)v16[4];
        v21 = v16[6];
        if ( v55 < v21 )
          v22 = v55;
        else
          v22 = v16[6];
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
              goto LABEL_25;
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
LABEL_25:
          if ( v21 < v55 )
            goto LABEL_76;
        }
        v15 = v16;
        v16 = (__int64 *)*v16;
      }
      if ( v15 != v17 )
      {
        v24 = (__int64)(v15 + 4);
        if ( (unsigned __int64)v15[7] >= 8 )
          v24 = v15[4];
        v25 = (const char *)v54;
        if ( v56 >= 8 )
          v25 = v11;
        v26 = v15[6];
        if ( v26 < v55 )
          v27 = v15[6];
        else
          v27 = v55;
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
              goto LABEL_39;
          }
          if ( (unsigned __int16)v13 >= *(_WORD *)v24 )
            goto LABEL_40;
        }
        else
        {
LABEL_39:
          if ( v55 >= v26 )
          {
LABEL_40:
            if ( v18 >= 8 )
            {
              v28 = (const struct std::nothrow_t *)(2 * v18 + 2);
              v46 = (unsigned __int64)v28;
              v47 = v11;
              if ( (unsigned __int64)v28 >= 0x1000 )
              {
                std::_Adjust_manually_vector_aligned(&v47, &v46);
                v28 = (const struct std::nothrow_t *)v46;
                v11 = (char *)v47;
              }
              operator delete(v11, v28);
            }
            v55 = 0LL;
            v56 = 7LL;
            LOWORD(v54[0]) = 0;
            if ( a2 )
            {
              if ( a2 != 1 )
                return;
              v36 = *((_DWORD *)v15 + 16);
              if ( !v36 )
                return;
              v37 = v36 - 1;
              v29 = v37 == 0;
              *((_DWORD *)v15 + 16) = v37;
            }
            else
            {
              v29 = ++*((_DWORD *)v15 + 16) == 1;
            }
            if ( v29 )
            {
              memset_0(v65, 0, sizeof(v65));
              v30 = 0;
              v31 = 2;
              v65[0] = 1;
              v32 = *v14;
              v33 = **v14;
              v48 = v33;
              while ( (__int64 *)v33 != v32 )
              {
                v34 = v33 + 32;
                if ( *(_DWORD *)(v33 + 64) )
                {
                  if ( v30 >= 0x24 )
                    break;
                  if ( *(_QWORD *)(v33 + 56) >= 8uLL )
                    v34 = *(_QWORD *)v34;
                  *(_OWORD *)&v65[v31] = *(_OWORD *)v34;
                  *(_OWORD *)&v65[v31 + 4] = *(_OWORD *)(v34 + 16);
                  *(_OWORD *)&v65[v31 + 8] = *(_OWORD *)(v34 + 32);
                  *(_OWORD *)&v65[v31 + 12] = *(_OWORD *)(v34 + 48);
                  *(_OWORD *)&v65[v31 + 16] = *(_OWORD *)(v34 + 64);
                  *(_OWORD *)&v65[v31 + 20] = *(_OWORD *)(v34 + 80);
                  *(_OWORD *)&v65[v31 + 24] = *(_OWORD *)(v34 + 96);
                  v31 += 28;
                }
                std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,ENDPOINT_REF_DATA>>>,std::_Iterator_base0>::operator++(&v48);
                v33 = v48;
              }
              v65[1] = v30;
              v44 = RtlPublishWnfStateData(WNF_AUDC_RENDER, 0LL, v65, 4096LL, 0LL);
              Context = 0LL;
              if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
                && fPending )
              {
                Context = qword_1801B3518;
                qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
                qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
                atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
                wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530);
                InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
              }
              v35 = *((_QWORD *)Context + 1);
              if ( *(_DWORD *)v35 > 4u )
              {
                v63 = &v44;
                v64 = 4LL;
                v51[0] = ((unsigned int)&unk_180174B45 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
                v51[1] = 4;
                v52 = 0LL;
                v57 = *(unsigned __int16 **)(v35 + 8);
                v58 = *v57;
                v59 = 2;
                v60 = &unk_180174B50;
                v61 = 57;
                v62 = 1;
                EtwEventWriteTransfer(*(_QWORD *)(v35 + 32), v51, 0LL, 0LL, 3, &v57);
              }
            }
            return;
          }
        }
      }
      v49 = v54;
      v38 = std::_Tree_comp_alloc<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<std::wstring &&>,std::tuple<>>(
              (__int64)v14,
              v13,
              (__int64 *)&v49);
      std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Insert_hint<std::pair<std::wstring const,ENDPOINT_REF_DATA> &,std::_Tree_node<std::pair<std::wstring const,ENDPOINT_REF_DATA>,void *> *>(
        (__int64)v14,
        &v50,
        v15,
        (char *)(v38 + 32),
        v38);
      v15 = v50;
      v18 = v56;
      v11 = (char *)v54[0];
      goto LABEL_40;
    }
    v8 = 0x7FFFFFFFFFFFFFFELL;
    if ( v7 > 0x7FFFFFFFFFFFFFFELL )
      std::_Xlength_error("string too long");
    if ( (v7 | 7) <= 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (v7 | 7) < 0xA )
        v8 = 10LL;
      else
        v8 = v7 | 7;
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
      v55 = v7;
      v56 = v8;
      v12 = 2 * v7;
      memcpy_0(v11, a3, v12);
      *(_WORD *)&v11[v12] = 0;
      v54[0] = v11;
      goto LABEL_14;
    }
    v40 = v9 + 39;
    if ( v9 + 39 >= v9 )
      goto LABEL_70;
    while ( 1 )
    {
      v40 = v6;
LABEL_70:
      v41 = operator new(v40);
      if ( v41 )
        break;
      _o__invalid_parameter_noinfo_noreturn(v42);
    }
    v11 = (char *)(((unsigned __int64)v41 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *((_QWORD *)v11 - 1) = v41;
    goto LABEL_13;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x15E,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
      v25);
  }
}
