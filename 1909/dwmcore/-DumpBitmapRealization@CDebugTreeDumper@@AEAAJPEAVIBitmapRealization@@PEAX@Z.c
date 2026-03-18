/*
 * XREFs of ?DumpBitmapRealization@CDebugTreeDumper@@AEAAJPEAVIBitmapRealization@@PEAX@Z @ 0x180173C88
 * Callers:
 *     ?Dump@CDebugTreeDumper@@QEAAXPEAVIBitmapRealization@@@Z @ 0x180173C04 (-Dump@CDebugTreeDumper@@QEAAXPEAVIBitmapRealization@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002DE70 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18004CB8C (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXXZ @ 0x1800D3924 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015D370 (-reset@-$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x18016A488 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x18016A700 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@QEBD$$QEAV10@@Z @ 0x180172418 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-.c)
 *     ??$AddProperty@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@CVisualTreeDumpContext@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@Z @ 0x18017261C (--$AddProperty@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@@CVisualTreeDumpCon.c)
 *     ??$AddProperty@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@CVisualTreeDumpContext@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x180172778 (--$AddProperty@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@CVisualTreeDumpCon.c)
 *     ??$_UIntegral_to_buff@DI@std@@YAPEADPEADI@Z @ 0x1801738D4 (--$_UIntegral_to_buff@DI@std@@YAPEADPEADI@Z.c)
 *     ?SaveTextureFromSource@CDebugTreeDumper@@AEAAJPEAUID3D11Texture2D@@IPEAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180173EF8 (-SaveTextureFromSource@CDebugTreeDumper@@AEAAJPEAUID3D11Texture2D@@IPEAXPEAV-$basic_string@GU-$c.c)
 *     ?_Construct_lv_contents@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXAEBV12@@Z @ 0x180174294 (-_Construct_lv_contents@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXAEBV12.c)
 */

__int64 __fastcall CDebugTreeDumper::DumpBitmapRealization(
        CDebugTreeDumper *this,
        struct IBitmapRealization *a2,
        void *a3)
{
  __int64 v3; // rax
  __int64 v5; // rdx
  int v7; // esi
  __int64 (__fastcall *v8)(struct IBitmapRealization *, __int64, _QWORD, _QWORD, int *); // rax
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // r8d
  int v14; // eax
  __int64 v15; // rdi
  __int64 v16; // rax
  __m128i v17; // xmm0
  _BYTE *v18; // rax
  void *v19; // rax
  __int64 v21; // [rsp+30h] [rbp-89h] BYREF
  __int64 (__fastcall ***v22)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-81h] BYREF
  int v23[2]; // [rsp+40h] [rbp-79h] BYREF
  _BYTE v24[32]; // [rsp+48h] [rbp-71h] BYREF
  void *v25[2]; // [rsp+68h] [rbp-51h] BYREF
  __m128i v26; // [rsp+78h] [rbp-41h]
  _QWORD v27[2]; // [rsp+88h] [rbp-31h] BYREF
  _BYTE v28[11]; // [rsp+9Dh] [rbp-1Ch] BYREF
  int v29[4]; // [rsp+A8h] [rbp-11h] BYREF
  __m128i si128; // [rsp+B8h] [rbp-1h]
  _QWORD v31[4]; // [rsp+C8h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  v3 = *(_QWORD *)a2;
  v5 = *((_QWORD *)this + 2);
  v7 = (int)a3;
  v8 = *(__int64 (__fastcall **)(struct IBitmapRealization *, __int64, _QWORD, _QWORD, int *))(v3 + 136);
  *(_QWORD *)v23 = 0LL;
  v9 = v8(a2, v5 + 392, 0LL, 0LL, v23);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v22 = 0LL;
    v11 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(**(_QWORD **)v23
                                                                                                  + 104LL))(
            *(_QWORD *)v23,
            &v22);
    v10 = v11;
    if ( v11 >= 0 )
    {
      v21 = 0LL;
      wil::com_ptr_t<ID3D12Fence,wil::err_returncode_policy>::reset(&v21);
      v12 = (**v22)(v22, &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, &v21);
      v10 = v12;
      if ( v12 >= 0 )
      {
        si128 = _mm_load_si128((const __m128i *)&_xmm);
        LOWORD(v29[0]) = 0;
        v14 = CDebugTreeDumper::SaveTextureFromSource((_DWORD)this, v21, v13, v7, (__int64)v29);
        v15 = *((_QWORD *)this + 1);
        v10 = v14;
        if ( v14 < 0 )
        {
          std::string::string(v31, (__int64)"ERROR");
          v16 = std::_UIntegral_to_buff<char,unsigned int>((__int64)v28, -v10);
          v17 = _mm_load_si128((const __m128i *)&_xmm);
          v18 = (_BYTE *)(v16 - 1);
          *v18 = 45;
          LOBYTE(v25[0]) = 0;
          v26 = v17;
          if ( v18 != v28 )
            std::string::assign(v25, v18, v28 - v18);
          v19 = (void *)std::operator+<char>((__int64)v24, (__int64)"Failed to save texture with error: ", v25);
          CVisualTreeDumpContext::AddProperty<std::string>(v15, v31, v19);
          std::string::_Tidy_deallocate((__int64)v25);
          std::string::_Tidy_deallocate((__int64)v31);
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xC4,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\debugtreedumper.cpp",
            (const char *)v10);
        }
        else
        {
          std::string::string(v27, (__int64)"imageFile");
          v26 = 0LL;
          std::wstring::_Construct_lv_contents(v25, v29);
          CVisualTreeDumpContext::AddProperty<std::wstring>(v15, v27, v25);
          std::string::_Tidy_deallocate((__int64)v27);
          v10 = 0;
        }
        std::wstring::_Tidy_deallocate(v29);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB9,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\debugtreedumper.cpp",
          (const char *)(unsigned int)v12);
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v21);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB6,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\debugtreedumper.cpp",
        (const char *)(unsigned int)v11);
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v22);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB3,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\debugtreedumper.cpp",
      (const char *)(unsigned int)v9);
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)v23);
  return v10;
}
