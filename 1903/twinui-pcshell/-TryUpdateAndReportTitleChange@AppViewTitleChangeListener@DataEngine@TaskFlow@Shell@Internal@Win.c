/*
 * XREFs of ?TryUpdateAndReportTitleChange@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAAX_K@Z @ 0x18001CC34
 * Callers:
 *     ?OnShellHookMessage@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJ_K_J@Z @ 0x18001C930 (-OnShellHookMessage@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJ.c)
 * Callees:
 *     ?ReportTitleChange@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAAX_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18001C994 (-ReportTitleChange@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAAX_.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180087898 (--2@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800B0F57 (memcpy_0.c)
 *     memmove_0 @ 0x1800B0F63 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x18011B568 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
void __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::TryUpdateAndReportTitleChange(
        Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener *this,
        __int64 a2)
{
  __int64 v2; // r13
  Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener *v3; // r15
  void **v4; // rdi
  void **v5; // rax
  void *v6; // rcx
  unsigned __int64 v7; // rdx
  _BYTE *v8; // r8
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // r9
  _QWORD *v13; // rsi
  signed __int64 v14; // r8
  unsigned __int16 v15; // r11
  int v16; // eax
  void **v17; // rax
  __int64 v18; // rbx
  unsigned __int64 v19; // rdx
  size_t v20; // rdx
  const char *v21; // r9
  void *v22; // rcx
  void *v23; // rdx
  void *v24; // rdx
  void *v25; // rsi
  size_t v26; // rcx
  void *v27; // rax
  void *Src; // [rsp+20h] [rbp-78h] BYREF
  void *v29; // [rsp+28h] [rbp-70h] BYREF
  Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener *v30; // [rsp+30h] [rbp-68h]
  __int64 v31; // [rsp+38h] [rbp-60h]
  __int64 v32; // [rsp+40h] [rbp-58h]
  void *v33[2]; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v34; // [rsp+58h] [rbp-40h]
  unsigned __int64 v35; // [rsp+60h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v32 = -2LL;
  v2 = a2;
  v3 = this;
  v30 = this;
  v31 = a2;
  (*(void (__fastcall **)(Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener *, void **, __int64))(*(_QWORD *)this + 72LL))(
    this,
    v33,
    a2);
  v4 = (void **)((char *)v3 + 112);
  v5 = v33;
  v6 = v33[0];
  v7 = v35;
  if ( v35 >= 8 )
    v5 = (void **)v33[0];
  v8 = (char *)v3 + 112;
  v9 = *((_QWORD *)v3 + 17);
  if ( v9 >= 8 )
    v8 = *v4;
  v10 = *((_QWORD *)v3 + 16);
  v11 = v34;
  v12 = v34;
  if ( v34 >= v10 )
    v12 = *((_QWORD *)v3 + 16);
  v13 = 0LL;
  if ( v12 )
  {
    v14 = v8 - (_BYTE *)v5;
    while ( 1 )
    {
      v15 = *(_WORD *)((char *)v5 + v14);
      if ( v15 != *(_WORD *)v5 )
        break;
      v5 = (void **)((char *)v5 + 2);
      if ( !--v12 )
        goto LABEL_41;
    }
    v16 = v15 < *(_WORD *)v5 ? -1 : 1;
  }
  else
  {
LABEL_41:
    v16 = 0;
  }
  if ( v16 || v10 < v34 || v10 > v34 )
  {
    if ( v4 == v33 )
    {
LABEL_33:
      Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::ReportTitleChange(
        (__int64)v3,
        v2,
        (__int64 *)v33);
      v7 = v35;
      v6 = v33[0];
      goto LABEL_34;
    }
    v17 = v33;
    if ( v35 >= 8 )
      v17 = (void **)v33[0];
    Src = v17;
    if ( v34 <= v9 )
    {
      v25 = (char *)v3 + 112;
      if ( v9 >= 8 )
        v25 = *v4;
      *((_QWORD *)v3 + 16) = v34;
      memmove_0(v25, v17, 2 * v11);
      *((_WORD *)v25 + v11) = 0;
      goto LABEL_33;
    }
    try
    {
      v18 = 0x7FFFFFFFFFFFFFFELL;
      if ( v34 > 0x7FFFFFFFFFFFFFFELL )
        std::_Xlength_error("string too long");
      if ( (v34 | 7) <= 0x7FFFFFFFFFFFFFFELL )
      {
        v19 = v9 >> 1;
        if ( v9 <= 0x7FFFFFFFFFFFFFFELL - (v9 >> 1) )
        {
          v18 = v19 + v9;
          if ( (v34 | 7) >= v19 + v9 )
            v18 = v34 | 7;
        }
      }
      v20 = 2 * (v18 + 1);
      if ( (unsigned __int64)(v18 + 1) > 0x7FFFFFFFFFFFFFFFLL )
        v20 = -1LL;
      if ( v20 >= 0x1000 )
      {
        v26 = v20 + 39;
        if ( v20 + 39 < v20 )
          v26 = -1LL;
        v27 = operator new(v26);
        if ( !v27 )
        {
          _o__invalid_parameter_noinfo_noreturn();
          goto LABEL_51;
        }
        v13 = (_QWORD *)(((unsigned __int64)v27 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *(v13 - 1) = v27;
      }
      else if ( v20 )
      {
        v13 = operator new(v20);
      }
      *((_QWORD *)v3 + 16) = v11;
      *((_QWORD *)v3 + 17) = v18;
      memcpy_0(v13, Src, 2 * v11);
      *((_WORD *)v13 + v11) = 0;
      if ( v9 < 8 )
      {
LABEL_32:
        *v4 = v13;
        goto LABEL_54;
      }
      v22 = *v4;
      v23 = (void *)(2 * v9 + 2);
      v29 = v23;
      Src = v22;
      if ( (unsigned __int64)v23 < 0x1000 )
      {
LABEL_31:
        operator delete(v22, (const struct std::nothrow_t *)v23);
        goto LABEL_32;
      }
LABEL_51:
      std::_Adjust_manually_vector_aligned(&Src, (unsigned __int64 *)&v29);
      v23 = v29;
      v22 = Src;
      goto LABEL_31;
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0xA4,
        (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewtitlechangelistener.cpp",
        v21);
      v3 = v30;
      v2 = v31;
      goto LABEL_33;
    }
LABEL_54:
    goto LABEL_33;
  }
LABEL_34:
  if ( v7 >= 8 )
  {
    v24 = (void *)(2 * v7 + 2);
    Src = v24;
    v29 = v6;
    if ( (unsigned __int64)v24 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v29, (unsigned __int64 *)&Src);
      v24 = Src;
      v6 = v29;
    }
    operator delete(v6, (const struct std::nothrow_t *)v24);
  }
}
