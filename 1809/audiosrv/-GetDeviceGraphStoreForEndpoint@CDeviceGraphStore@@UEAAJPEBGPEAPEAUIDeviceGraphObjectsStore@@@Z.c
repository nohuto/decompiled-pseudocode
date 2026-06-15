/*
 * XREFs of ?GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z @ 0x18002F2C0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000CFC0 (--2@YAPEAX_K@Z.c)
 *     ??$MakeAndInitialize@VCDeviceGraphObjectsStore@@UIDeviceGraphObjectsStore@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUIDeviceGraphObjectsStore@@AEAPEBG@Z @ 0x18000DAD8 (--$MakeAndInitialize@VCDeviceGraphObjectsStore@@UIDeviceGraphObjectsStore@@AEAPEBG@Details@WRL@M.c)
 *     ?InternalRelease@?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ @ 0x180013C14 (-InternalRelease@-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@PEAX@1@@Z @ 0x180015248 (--$_Insert_hint@AEAU-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18001CD80 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@$$QEAV-$basic_string@GU-$char_t_ea_18001CD80.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180060C94 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x1800688A3 (memcpy_0.c)
 *     memmove_0 @ 0x1800688AF (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800BBF20 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CDeviceGraphStore::GetDeviceGraphStoreForEndpoint(
        CDeviceGraphStore *this,
        const unsigned __int16 *a2,
        struct IDeviceGraphObjectsStore **a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // r12
  __int64 v6; // rdx
  unsigned __int64 v7; // rbx
  __int64 v8; // rsi
  unsigned __int64 v9; // r14
  HANDLE ProcessHeap; // rax
  char *v11; // r14
  size_t v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  char *v15; // r13
  _QWORD *v16; // rbx
  __int64 *v17; // r10
  _QWORD *v18; // rdi
  unsigned __int64 v19; // r15
  char *v20; // rax
  __int64 *v21; // r9
  unsigned __int64 v22; // r11
  unsigned __int64 v23; // rcx
  __int64 v24; // r9
  __int64 v25; // rax
  const char *v26; // r9
  unsigned __int64 v27; // r10
  unsigned __int64 v28; // rcx
  const struct std::nothrow_t *v29; // rdx
  struct IDeviceGraphObjectsStore *v30; // rcx
  __int64 result; // rax
  __int64 v32; // rax
  int v33; // eax
  unsigned int v34; // edi
  size_t v35; // rbx
  SIZE_T v36; // rcx
  LPVOID v37; // rax
  __int64 v38; // rcx
  int v39; // [rsp+20h] [rbp-A8h]
  void *v40; // [rsp+30h] [rbp-98h] BYREF
  unsigned __int64 v41; // [rsp+38h] [rbp-90h] BYREF
  const unsigned __int16 *v42; // [rsp+40h] [rbp-88h] BYREF
  struct IDeviceGraphObjectsStore **v43; // [rsp+48h] [rbp-80h]
  __int64 v44; // [rsp+50h] [rbp-78h]
  struct _RTL_CRITICAL_SECTION *v45; // [rsp+58h] [rbp-70h]
  _QWORD v46[2]; // [rsp+60h] [rbp-68h] BYREF
  unsigned __int64 v47; // [rsp+70h] [rbp-58h]
  unsigned __int64 v48; // [rsp+78h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v44 = -2LL;
  v43 = a3;
  v42 = a2;
  *a3 = 0LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v45 = v5;
  v47 = 0LL;
  v48 = 7LL;
  LOWORD(v46[0]) = 0;
  v6 = -1LL;
  v7 = -1LL;
  do
    ++v7;
  while ( a2[v7] );
  try
  {
    if ( v7 <= 7 )
    {
      v47 = v7;
      v35 = 2 * v7;
      memmove_0(v46, a2, v35);
      *(_WORD *)((char *)v46 + v35) = 0;
      v11 = (char *)v46[0];
LABEL_14:
      v15 = (char *)this + 56;
      v16 = (_QWORD *)*((_QWORD *)this + 7);
      v17 = (__int64 *)v16[1];
      v18 = v16;
      v19 = v48;
      while ( !*((_BYTE *)v17 + 25) )
      {
        v20 = (char *)v46;
        if ( v48 >= 8 )
          v20 = v11;
        v21 = v17 + 4;
        if ( (unsigned __int64)v17[7] >= 8 )
          v21 = (__int64 *)v17[4];
        v22 = v17[6];
        if ( v47 < v22 )
          v23 = v47;
        else
          v23 = v17[6];
        if ( v23 )
        {
          v24 = (char *)v21 - v20;
          while ( 1 )
          {
            v13 = *(unsigned __int16 *)&v20[v24];
            v14 = *(unsigned __int16 *)v20;
            if ( (_WORD)v13 != (_WORD)v14 )
              break;
            v20 += 2;
            if ( !--v23 )
              goto LABEL_25;
          }
          if ( (unsigned __int16)v13 < (unsigned __int16)v14 )
          {
LABEL_65:
            v17 = (__int64 *)v17[2];
            continue;
          }
        }
        else
        {
LABEL_25:
          if ( v22 < v47 )
            goto LABEL_65;
        }
        v16 = v17;
        v17 = (__int64 *)*v17;
      }
      if ( v16 != v18 )
      {
        v25 = (__int64)(v16 + 4);
        if ( v16[7] >= 8uLL )
          v25 = v16[4];
        v26 = (const char *)v46;
        if ( v48 >= 8 )
          v26 = v11;
        v27 = v16[6];
        if ( v27 < v47 )
          v28 = v16[6];
        else
          v28 = v47;
        if ( v28 )
        {
          v26 -= v25;
          while ( 1 )
          {
            v13 = *(unsigned __int16 *)&v26[v25];
            v14 = *(unsigned __int16 *)v25;
            if ( (_WORD)v13 != (_WORD)v14 )
              break;
            v25 += 2LL;
            if ( !--v28 )
              goto LABEL_39;
          }
          if ( (unsigned __int16)v13 >= (unsigned __int16)v14 )
            goto LABEL_40;
        }
        else
        {
LABEL_39:
          if ( v47 >= v27 )
          {
LABEL_40:
            if ( v19 >= 8 )
            {
              v29 = (const struct std::nothrow_t *)(2 * v19 + 2);
              v41 = (unsigned __int64)v29;
              v40 = v11;
              if ( (unsigned __int64)v29 >= 0x1000 )
              {
                std::_Adjust_manually_vector_aligned(&v40, &v41);
                v29 = (const struct std::nothrow_t *)v41;
                v11 = (char *)v40;
              }
              operator delete(v11, v29);
            }
            v47 = 0LL;
            v48 = 7LL;
            LOWORD(v46[0]) = 0;
            v30 = (struct IDeviceGraphObjectsStore *)v16[8];
            if ( v30 )
            {
LABEL_45:
              (*(void (__fastcall **)(struct IDeviceGraphObjectsStore *, __int64, __int64, const char *))(*(_QWORD *)v30 + 8LL))(
                v30,
                v13,
                v14,
                v26);
              v30 = (struct IDeviceGraphObjectsStore *)v16[8];
LABEL_46:
              *v43 = v30;
              if ( v5 )
                LeaveCriticalSection(v5);
              return 0LL;
            }
            Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(v16 + 8);
            v33 = Microsoft::WRL::Details::MakeAndInitialize<CDeviceGraphObjectsStore,IDeviceGraphObjectsStore,unsigned short const * &>(
                    (CDeviceGraphObjectsStore **)v16 + 8,
                    &v42);
            v34 = v33;
            if ( v33 >= 0 )
            {
              v30 = (struct IDeviceGraphObjectsStore *)v16[8];
              if ( !v30 )
                goto LABEL_46;
              goto LABEL_45;
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x261,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
              (const char *)(unsigned int)v33,
              v39);
            if ( v5 )
              LeaveCriticalSection(v5);
            return v34;
          }
        }
      }
      v40 = v46;
      v32 = std::_Tree_comp_alloc<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<std::wstring &&>,std::tuple<>>(
              (__int64)v15,
              v13,
              (__int64 *)&v40);
      std::_Tree<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>,0>>::_Insert_hint<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>> &,std::_Tree_node<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>,void *> *>(
        (__int64)v15,
        &v40,
        (unsigned __int64)v16,
        (char *)(v32 + 32),
        v32);
      v16 = v40;
      v19 = v48;
      v11 = (char *)v46[0];
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
      v47 = v7;
      v48 = v8;
      v12 = 2 * v7;
      memcpy_0(v11, a2, v12);
      *(_WORD *)&v11[v12] = 0;
      v46[0] = v11;
      goto LABEL_14;
    }
    v36 = v9 + 39;
    if ( v9 + 39 >= v9 )
      goto LABEL_59;
    while ( 1 )
    {
      v36 = v6;
LABEL_59:
      v37 = operator new(v36);
      if ( v37 )
        break;
      _o__invalid_parameter_noinfo_noreturn(v38);
    }
    v11 = (char *)(((unsigned __int64)v37 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *((_QWORD *)v11 - 1) = v37;
    goto LABEL_13;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x267,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
                           v26);
  }
  return result;
}
