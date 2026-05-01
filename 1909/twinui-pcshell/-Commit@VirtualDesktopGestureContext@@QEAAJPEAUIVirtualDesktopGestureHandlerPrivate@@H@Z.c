/*
 * XREFs of ?Commit@VirtualDesktopGestureContext@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@H@Z @ 0x180413AA8
 * Callers:
 *     ?FinishSwipe@VirtualDesktopGestureHandler@@UEAAJHHHHI@Z @ 0x180414690 (-FinishSwipe@VirtualDesktopGestureHandler@@UEAAJHHHHI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?AddVelocityToHistory@VirtualDesktopGestureContext@@AEAAXH@Z @ 0x180413934 (-AddVelocityToHistory@VirtualDesktopGestureContext@@AEAAXH@Z.c)
 *     ?Commit@VirtualDesktopGestureWindow@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@M@Z @ 0x180413DA4 (-Commit@VirtualDesktopGestureWindow@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@M@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopGestureContext::Commit(
        VirtualDesktopGestureContext *this,
        struct IVirtualDesktopGestureHandlerPrivate *a2,
        int a3)
{
  int v5; // edx
  int v6; // r15d
  VirtualDesktopGestureContext *v7; // r10
  int *v8; // rdx
  int *v9; // rcx
  int *v10; // rax
  int *v11; // r8
  int *v12; // r9
  int v13; // r11d
  int v14; // ebx
  int *v15; // rax
  double v16; // xmm1_8
  double v17; // xmm2_8
  double v18; // xmm3_8
  int v19; // eax
  unsigned int v20; // r14d
  bool v21; // zf
  __int64 v22; // rdi
  __int64 (__fastcall *v23)(__int64, __int64 *); // rbx
  int v24; // eax
  unsigned int v25; // ebx
  __int64 v26; // rdi
  int (__fastcall *v27)(__int64, __int64, _QWORD, __int64 *); // rbx
  int v28; // eax
  VirtualDesktopGestureWindow **v30; // rbx
  VirtualDesktopGestureWindow **v31; // rsi
  int v32; // eax
  unsigned int v33; // edi
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v35; // [rsp+80h] [rbp+30h] BYREF
  __int64 v36; // [rsp+98h] [rbp+48h] BYREF

  v5 = -a3;
  if ( !*((_BYTE *)this + 66) )
    v5 = a3;
  VirtualDesktopGestureContext::AddVelocityToHistory(this, v5);
  v6 = 0;
  v7 = (VirtualDesktopGestureContext *)((char *)this + 164);
  v8 = (int *)((char *)this + 104);
  v9 = (int *)((char *)this + 104);
  if ( (char *)this + 104 != (char *)this + 164 )
  {
    v10 = (int *)((char *)this + 108);
    if ( (VirtualDesktopGestureContext *)((char *)this + 108) != v7 )
    {
      v11 = (int *)((char *)this + 108);
      do
      {
        v12 = v10 + 1;
        if ( v10 + 1 == (int *)v7 )
        {
          if ( *v10 >= *v8 )
          {
            if ( *v10 >= *v9 )
              v9 = v11;
          }
          else
          {
            v8 = v11;
          }
        }
        else
        {
          v13 = *v12;
          v14 = *v10;
          if ( *v12 >= *v10 )
          {
            if ( v14 >= *v8 )
              v11 = v8;
            v8 = v11;
            if ( v13 >= *v9 )
              v9 = v10 + 1;
          }
          else
          {
            v15 = v10 + 1;
            if ( v13 >= *v8 )
              v15 = v8;
            v8 = v15;
            if ( v14 < *v9 )
              v11 = v9;
            v9 = v11;
          }
          v11 = v12;
        }
        v10 = v11 + 1;
        v11 = v10;
      }
      while ( v10 != (int *)v7 );
    }
  }
  v16 = (double)*((int *)this + 12);
  v17 = (double)(int)abs32(*v8) * 1000.0 / v16;
  v18 = (double)(int)abs32(*v9) * 1000.0 / v16;
  v19 = *((_DWORD *)this + 14);
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)v19 / (float)*((int *)this + 12))) & _xmm) <= 0.25 )
  {
    if ( v17 >= 0.2 && *v8 < 0 && v19 < 0 )
      goto LABEL_32;
    if ( v18 < 0.2 || *v9 <= 0 || v19 <= 0 )
      goto LABEL_44;
  }
  if ( v19 < 0 )
  {
LABEL_32:
    v20 = 4;
    v21 = *((_BYTE *)this + 63) == 0;
    goto LABEL_34;
  }
  v20 = 3;
  v21 = *((_BYTE *)this + 62) == 0;
LABEL_34:
  if ( !v21 )
  {
    v36 = 0LL;
    v22 = *(_QWORD *)this;
    v23 = *(__int64 (__fastcall **)(__int64, __int64 *))(**(_QWORD **)this + 48LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v36);
    v24 = v23(v22, &v36);
    v25 = v24;
    if ( v24 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x26C,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v24);
LABEL_40:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v36);
      return v25;
    }
    v35 = 0LL;
    v26 = *(_QWORD *)this;
    v27 = *(int (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(**(_QWORD **)this + 64LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
    if ( v27(v26, v36, v20, &v35) >= 0 )
    {
      v28 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)this + 72LL))(*(_QWORD *)this, v35);
      v25 = v28;
      if ( v28 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x271,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)v28);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
        goto LABEL_40;
      }
      v6 = 1;
      if ( v20 == 4 )
        v6 = -1;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v36);
  }
LABEL_44:
  v30 = (VirtualDesktopGestureWindow **)*((_QWORD *)this + 9);
  v31 = &v30[*((_QWORD *)this + 10)];
  if ( v30 == v31 )
    return 0LL;
  while ( 1 )
  {
    v32 = VirtualDesktopGestureWindow::Commit(*v30, a2, (float)v6);
    v33 = v32;
    if ( v32 < 0 )
      break;
    if ( ++v30 == v31 )
      return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x284,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
    (const char *)(unsigned int)v32);
  return v33;
}
