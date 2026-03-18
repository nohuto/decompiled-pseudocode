/*
 * XREFs of ?DebugSaveTexture@@YAJPEAUID3D11Texture2D@@IAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18021C000
 * Callers:
 *     ?SaveTextureFromSource@CDebugTreeDumper@@AEAAJPEAUID3D11Texture2D@@IPEAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180175648 (-SaveTextureFromSource@CDebugTreeDumper@@AEAAJPEAUID3D11Texture2D@@IPEAXPEAV-$basic_string@GU-$c.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180026730 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x1800327FC (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180042214 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800459EC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x1800EA8E0 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015645C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015EA50 (-reset@-$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$make_unique@VCBitmapSaver@@AEAIAEAIAEAEAEAIAEAPEAX$0A@@std@@YA?AV?$unique_ptr@VCBitmapSaver@@U?$default_delete@VCBitmapSaver@@@std@@@0@AEAI0AEAE0AEAPEAX@Z @ 0x18021B824 (--$make_unique@VCBitmapSaver@@AEAIAEAIAEAEAEAIAEAPEAX$0A@@std@@YA-AV-$unique_ptr@VCBitmapSaver@@.c)
 *     GetStagingTexture @ 0x18021C3F8 (GetStagingTexture.c)
 *     ?SaveBitmap@CBitmapSaver@@QEAAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1802573B8 (-SaveBitmap@CBitmapSaver@@QEAAJAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 */

__int64 __fastcall DebugSaveTexture(__int64 a1, __int64 a2, _QWORD *a3)
{
  int StagingTexture; // eax
  int v6; // esi
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rbx
  int v10; // eax
  _QWORD *v11; // rax
  CBitmapSaver *v12; // rdi
  unsigned __int8 v14[8]; // [rsp+40h] [rbp-49h] BYREF
  __int64 v15; // [rsp+48h] [rbp-41h] BYREF
  __int64 v16; // [rsp+50h] [rbp-39h] BYREF
  __int64 v17; // [rsp+58h] [rbp-31h] BYREF
  CBitmapSaver *v18; // [rsp+60h] [rbp-29h] BYREF
  __int64 v19; // [rsp+68h] [rbp-21h] BYREF
  int v20; // [rsp+70h] [rbp-19h] BYREF
  int v21; // [rsp+78h] [rbp-11h] BYREF
  int v22[3]; // [rsp+7Ch] [rbp-Dh] BYREF
  enum DXGI_FORMAT v23; // [rsp+88h] [rbp-1h]
  _QWORD v24[4]; // [rsp+A8h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v16 = 0LL;
  wil::com_ptr_t<ID3D12Fence,wil::err_returncode_policy>::reset(&v16);
  StagingTexture = GetStagingTexture(a1, &v16);
  v6 = StagingTexture;
  if ( StagingTexture < 0 )
  {
    v7 = (unsigned int)StagingTexture;
    v8 = 381LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
      (const char *)v7);
    goto LABEL_14;
  }
  v9 = v16;
  (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v16 + 80LL))(v16, &v21);
  if ( v23 == DXGI_FORMAT_A8_UNORM )
  {
    v6 = -2147024809;
    v8 = 389LL;
    v7 = 2147942487LL;
    goto LABEL_5;
  }
  v17 = 0LL;
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 24LL))(v9, &v17);
  v15 = 0LL;
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v17 + 320LL))(v17, &v15);
  v10 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _DWORD, __int64 *))(*(_QWORD *)v15 + 112LL))(
          v15,
          v9,
          0LL,
          1LL,
          0,
          &v19);
  v6 = v10;
  if ( v10 >= 0 )
  {
    v14[0] = GetPixelFormatSize(v23);
    std::make_unique<CBitmapSaver,unsigned int &,unsigned int &,unsigned char &,unsigned int &,void * &,0>(
      &v18,
      &v21,
      v22,
      v14,
      &v20,
      &v19);
    v11 = std::wstring::c_str(a3);
    std::wstring::wstring(v24, (__int64)v11);
    v12 = v18;
    v6 = CBitmapSaver::SaveBitmap(v18);
    std::wstring::_Tidy_deallocate(v24);
    if ( v6 >= 0 )
    {
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v15 + 120LL))(v15, v9, 0LL);
      v6 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x199,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
        (const char *)(unsigned int)v6);
    }
    if ( v12 )
      operator delete(v12);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18F,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
      (const char *)(unsigned int)v10);
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v15);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v17);
LABEL_14:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v16);
  return (unsigned int)v6;
}
