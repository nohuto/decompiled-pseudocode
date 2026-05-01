/*
 * XREFs of ?Commit@VirtualDesktopGestureContext@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@H@Z @ 0x18038E5F8
 * Callers:
 *     ?FinishSwipe@VirtualDesktopGestureHandler@@UEAAJHHHHI@Z @ 0x18038F1D0 (-FinishSwipe@VirtualDesktopGestureHandler@@UEAAJHHHHI@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?AddVelocityToHistory@VirtualDesktopGestureContext@@AEAAXH@Z @ 0x18038E480 (-AddVelocityToHistory@VirtualDesktopGestureContext@@AEAAXH@Z.c)
 *     ?Commit@VirtualDesktopGestureWindow@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@M@Z @ 0x18038E8F8 (-Commit@VirtualDesktopGestureWindow@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@M@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopGestureContext::Commit(
        VirtualDesktopGestureContext *this,
        struct IVirtualDesktopGestureHandlerPrivate *a2,
        int a3)
{
  int v5; // edx
  int v6; // r14d
  VirtualDesktopGestureContext *v7; // r10
  int *v8; // rcx
  int *v9; // rax
  int *v10; // r8
  int *v11; // rdx
  int *v12; // rsi
  int *v13; // r15
  int *v14; // r9
  int v15; // r11d
  int v16; // r8d
  int v17; // ebx
  int v18; // r8d
  double v19; // xmm1_8
  double v20; // xmm2_8
  double v21; // xmm3_8
  int v22; // eax
  int v23; // eax
  unsigned int v24; // esi
  __int64 v25; // rbx
  int v26; // eax
  unsigned int v27; // ebx
  __int64 v28; // rbx
  int v29; // eax
  VirtualDesktopGestureWindow **v31; // rbx
  VirtualDesktopGestureWindow **v32; // rsi
  int v33; // eax
  unsigned int v34; // edi
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v36; // [rsp+80h] [rbp+30h] BYREF
  __int64 v37; // [rsp+98h] [rbp+48h] BYREF

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
        v12 = v9;
        v13 = v9;
        v14 = v10 + 1;
        if ( v10 + 1 == (int *)v7 )
        {
          if ( *v10 >= *v9 )
          {
            if ( *v10 >= *v8 )
              v8 = v11;
          }
          else
          {
            v9 = v11;
          }
        }
        else
        {
          v15 = *v14;
          v16 = *v10;
          v17 = *v9;
          if ( *v14 >= v16 )
          {
            v9 = v11;
            if ( v16 >= v17 )
              v9 = v12;
            if ( v15 >= *v8 )
              v8 = v14;
          }
          else
          {
            v9 = v14;
            if ( v15 >= v17 )
              v9 = v13;
            if ( v16 < *v8 )
              v11 = v8;
            v8 = v11;
          }
          v11 = v14;
        }
        v10 = v11 + 1;
        v11 = v10;
      }
      while ( v10 != (int *)v7 );
    }
  }
  v18 = *v9;
  v19 = (double)*((int *)this + 12);
  v20 = (double)(int)abs32(*v9) * 1000.0 / v19;
  v21 = (double)(int)abs32(*v8) * 1000.0 / v19;
  v22 = *((_DWORD *)this + 14);
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)v22 / (float)*((int *)this + 12))) & _xmm) > 0.25
    || v20 >= 0.2 && v18 < 0 && v22 < 0
    || v21 >= 0.2 && *v8 > 0 && v22 > 0 )
  {
    if ( (v23 = (v22 >> 31) & 1, v24 = v23 + 3, !v23) && *((_BYTE *)this + 62) || v23 == 1 && *((_BYTE *)this + 63) )
    {
      v37 = 0LL;
      v25 = *(_QWORD *)this;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v37);
      v26 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v25 + 48LL))(v25, &v37);
      v27 = v26;
      if ( v26 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x26C,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)v26);
LABEL_40:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v37);
        return v27;
      }
      v36 = 0LL;
      v28 = *(_QWORD *)this;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v36);
      if ( (*(int (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(*(_QWORD *)v28 + 64LL))(v28, v37, v24, &v36) >= 0 )
      {
        v29 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)this + 72LL))(*(_QWORD *)this, v36);
        v27 = v29;
        if ( v29 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x271,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
            (const char *)(unsigned int)v29);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v36);
          goto LABEL_40;
        }
        v6 = 1;
        if ( v24 == 4 )
          v6 = -1;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v36);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v37);
    }
  }
  v31 = (VirtualDesktopGestureWindow **)*((_QWORD *)this + 9);
  v32 = &v31[*((_QWORD *)this + 10)];
  if ( v31 == v32 )
    return 0LL;
  while ( 1 )
  {
    v33 = VirtualDesktopGestureWindow::Commit(*v31, a2, (float)v6);
    v34 = v33;
    if ( v33 < 0 )
      break;
    if ( ++v31 == v32 )
      return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x284,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
    (const char *)(unsigned int)v33);
  return v34;
}
