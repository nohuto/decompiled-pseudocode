/*
 * XREFs of ?Create@ViewMenuChordedKeyHandler@@SAJP6AJPEAXAEAV?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@_N@Z0AEBV23@PEAPEAV1@@Z @ 0x180038890
 * Callers:
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x180033244 (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008CD8 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ?_Buy@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@AEAA_N_K@Z @ 0x180037CF0 (-_Buy@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@AEAA_N_K@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewMenuChordedKeyHandler::Create(__int64 a1, __int64 a2, __int64 a3, char **a4)
{
  char *v5; // rbx
  int v6; // esi
  __int64 v7; // rdx
  char *v8; // rax
  char *v9; // rdi
  __int64 v10; // rcx
  void **v11; // r14
  char *v12; // r12
  char *v13; // rsi
  unsigned __int64 v14; // r15
  char *v15; // rdx
  char *v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rdx
  signed __int64 v20; // rax
  const struct std::nothrow_t *v21; // rdx
  char *v22; // r8
  char *v23; // rcx
  char *v24; // rcx
  __int64 v25; // r8
  unsigned __int64 v26; // rdx
  signed __int64 v27; // rsi
  char *v28; // r8
  __int64 v29; // r9
  unsigned __int64 v30; // rcx
  __int64 v31; // r8
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r14
  __int64 v36; // rcx
  __int64 v37; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  __int64 v41; // [rsp+90h] [rbp+50h] BYREF

  v41 = a3;
  v5 = 0LL;
  if ( !a4 )
  {
    v6 = -2147024809;
    v7 = 36LL;
LABEL_58:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\viewmenuchordedkeyhandler.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_60;
  }
  v8 = (char *)malloc(0x68uLL);
  v9 = v8;
  if ( v8 )
    memset_0(v8, 0, 0x68uLL);
  if ( v9 )
  {
    *(_QWORD *)v9 = &RefCountedObject::`vftable';
    *((_DWORD *)v9 + 2) = 1;
    *(_QWORD *)v9 = &ViewMenuChordedKeyHandler::`vftable';
    *((_QWORD *)v9 + 3) = 0LL;
    *((_QWORD *)v9 + 6) = 0LL;
    *((_QWORD *)v9 + 7) = 0LL;
    *((_QWORD *)v9 + 8) = 0LL;
    *((_QWORD *)v9 + 10) = 0LL;
    *((_QWORD *)v9 + 11) = 0LL;
    *((_QWORD *)v9 + 12) = 0LL;
    *((_DWORD *)v9 + 4) = 0;
    *((_QWORD *)v9 + 4) = 0LL;
    v10 = *((_QWORD *)v9 + 3);
    if ( v10 )
    {
      *((_QWORD *)v9 + 3) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    *((_QWORD *)v9 + 5) = 0LL;
    *((_QWORD *)v9 + 7) = *((_QWORD *)v9 + 6);
    *(_WORD *)(v9 + 73) = 0;
    v9[72] = 0;
  }
  else
  {
    v9 = 0LL;
  }
  v5 = v9;
  if ( !v9 )
  {
    v6 = -2147024882;
    v7 = 42LL;
    goto LABEL_58;
  }
  v11 = (void **)(v9 + 80);
  if ( v9 + 80 != (char *)&xmmword_1801937E8 )
  {
    v12 = (char *)*(&xmmword_1801937E8 + 1);
    v13 = (char *)xmmword_1801937E8;
    v14 = ((_BYTE *)*(&xmmword_1801937E8 + 1) - (_BYTE *)xmmword_1801937E8) >> 2;
    v15 = (char *)*((_QWORD *)v9 + 11);
    v16 = (char *)*v11;
    v17 = (__int64)&v15[-*((_QWORD *)v9 + 10)] >> 2;
    v18 = (__int64)(*((_QWORD *)v9 + 12) - *((_QWORD *)v9 + 10)) >> 2;
    if ( v14 <= v18 )
    {
      if ( v14 <= v17 )
      {
        v15 = &v16[4 * v14];
        while ( v13 != v12 )
        {
          *(_WORD *)v16 = *(_WORD *)v13;
          v16[2] = v13[2];
          v16 += 4;
          v13 += 4;
        }
      }
      else
      {
        v28 = (char *)xmmword_1801937E8 + 4 * v17;
        if ( xmmword_1801937E8 != v28 )
        {
          do
          {
            *(_WORD *)v16 = *(_WORD *)v13;
            v16[2] = v13[2];
            v16 += 4;
            v13 += 4;
          }
          while ( v13 != v28 );
          v15 = (char *)*((_QWORD *)v9 + 11);
        }
        v29 = 0LL;
        v30 = (unsigned __int64)(v12 - v28 + 3) >> 2;
        if ( v28 > v12 )
          v30 = 0LL;
        if ( v30 )
        {
          v31 = v28 - v15;
          do
          {
            *(_DWORD *)v15 = *(_DWORD *)&v15[v31];
            v15 += 4;
            ++v29;
          }
          while ( v29 != v30 );
        }
      }
      *((_QWORD *)v9 + 11) = v15;
    }
    else
    {
      if ( v14 > 0x3FFFFFFFFFFFFFFFLL )
        std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
      v19 = v18 >> 1;
      if ( v18 <= 0x3FFFFFFFFFFFFFFFLL - (v18 >> 1) )
      {
        v20 = v19 + v18;
        if ( v19 + v18 < v14 )
          v20 = ((_BYTE *)*(&xmmword_1801937E8 + 1) - (_BYTE *)xmmword_1801937E8) >> 2;
        v14 = v20;
      }
      if ( v16 )
      {
        v21 = (const struct std::nothrow_t *)(4 * v18);
        if ( 4 * v18 >= 0x1000 )
        {
          v21 = (const struct std::nothrow_t *)((char *)v21 + 39);
          v22 = (char *)*((_QWORD *)v16 - 1);
          v23 = (char *)(v16 - v22);
          if ( (unsigned __int64)(v23 - 8) > 0x1F )
          {
            _o__invalid_parameter_noinfo_noreturn(v23, v21);
            __debugbreak();
          }
          v16 = v22;
        }
        operator delete(v16, v21);
      }
      std::vector<enum _Button>::_Buy((_QWORD *)v9 + 10, v14);
      v24 = (char *)*v11;
      v25 = 0LL;
      v26 = (unsigned __int64)(v12 - v13 + 3) >> 2;
      if ( v13 > v12 )
        v26 = 0LL;
      if ( v26 )
      {
        v27 = v13 - v24;
        do
        {
          *(_DWORD *)v24 = *(_DWORD *)&v24[v27];
          v24 += 4;
          ++v25;
        }
        while ( v25 != v26 );
      }
      *((_QWORD *)v9 + 11) = v24;
    }
  }
  *((_QWORD *)v9 + 4) = ControllerProcessor::TaskSwitcherInvokedCallbackStatic;
  *((_QWORD *)v9 + 5) = a2;
  *((_DWORD *)v9 + 4) = 1;
  v41 = 0LL;
  v32 = CoreUICreate(&v41);
  v6 = v32;
  if ( v32 < 0 )
  {
    v33 = 96LL;
    goto LABEL_47;
  }
  v35 = v41;
  v36 = *((_QWORD *)v9 + 3);
  if ( v36 )
  {
    *((_QWORD *)v9 + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  }
  v32 = (*(__int64 (__fastcall **)(__int64, void *, char *, char *))(*(_QWORD *)v35 + 120LL))(
          v35,
          &lambda_031fe44d56c6481ccde965ba7ff9f117_::_lambda_invoker_cdecl_,
          v9,
          v9 + 24);
  v6 = v32;
  if ( v32 < 0 )
  {
    v33 = 103LL;
LABEL_47:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v33,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\viewmenuchordedkeyhandler.cpp",
      (const char *)(unsigned int)v32);
    v34 = v41;
    if ( v41 )
    {
      v41 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
    }
    goto LABEL_56;
  }
  *((_QWORD *)v9 + 7) = *((_QWORD *)v9 + 6);
  *(_WORD *)(v9 + 73) = 0;
  v9[72] = 0;
  v37 = v41;
  if ( v41 )
  {
    v41 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  }
  v6 = 0;
LABEL_56:
  if ( v6 < 0 )
  {
    v7 = 48LL;
    goto LABEL_58;
  }
  v5 = 0LL;
  *a4 = v9;
  v6 = 0;
LABEL_60:
  if ( v5 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v5 + 16LL))(v5);
  return (unsigned int)v6;
}
