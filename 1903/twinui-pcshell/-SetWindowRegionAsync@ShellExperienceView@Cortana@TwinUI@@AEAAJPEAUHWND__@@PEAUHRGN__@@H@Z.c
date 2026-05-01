/*
 * XREFs of ?SetWindowRegionAsync@ShellExperienceView@Cortana@TwinUI@@AEAAJPEAUHWND__@@PEAUHRGN__@@H@Z @ 0x180068CB8
 * Callers:
 *     ?SetDrawingRegion@ShellExperienceView@Cortana@TwinUI@@UEAAJ_KE@Z @ 0x180068BC0 (-SetDrawingRegion@ShellExperienceView@Cortana@TwinUI@@UEAAJ_KE@Z.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180021B84 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::SetWindowRegionAsync(
        TwinUI::Cortana::ShellExperienceView *this,
        HWND a2,
        HRGN a3,
        int a4)
{
  HRGN v4; // rbx
  HRGN RectRgn; // rax
  unsigned int v10; // r13d
  HRGN v11; // rbp
  _QWORD *v12; // rsi
  _QWORD *v13; // rax
  _QWORD *v14; // r14
  _QWORD *v15; // rdi
  int v16; // edi
  __int64 v18; // rdx
  int v19; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = 0LL;
  if ( a3 )
  {
    RectRgn = CreateRectRgn(0, 0, 0, 0);
    v4 = RectRgn;
    if ( RectRgn )
    {
      if ( CombineRgn(RectRgn, a3, 0LL, 5) )
        goto LABEL_4;
      v16 = -2147467259;
      v18 = 379LL;
    }
    else
    {
      v16 = -2147467259;
      v18 = 378LL;
    }
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanashellexperienceview.cpp",
      (const char *)(unsigned int)v16,
      v19);
    goto LABEL_11;
  }
LABEL_4:
  v10 = *((_DWORD *)this + 72);
  v11 = v4;
  v12 = 0LL;
  v4 = 0LL;
  v13 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = 0LL;
  v15 = v13;
  if ( v13 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v13);
    v15[2] = a2;
    v15[3] = v11;
    v11 = 0LL;
    *((_DWORD *)v15 + 8) = a4;
    *v15 = off_18042A630;
    v12 = v15;
    v14 = v15;
  }
  v16 = SHTaskPoolQueueTask(3LL, 258LL, v10, 0LL, v12, 0LL);
  if ( v14 )
    (*(void (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
  if ( v11 )
    DeleteObject(v11);
  if ( v16 < 0 )
  {
    v18 = 387LL;
    goto LABEL_17;
  }
LABEL_11:
  if ( v4 )
    DeleteObject(v4);
  return (unsigned int)v16;
}
