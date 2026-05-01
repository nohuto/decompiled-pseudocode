/*
 * XREFs of ?SetChromeOptions@CFrameApplicationPresentation@@UEAAJUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@Z @ 0x18005CC40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppressionReason@2@@Z @ 0x180151804 (-ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppress.c)
 */

__int64 __fastcall CFrameApplicationPresentation::SetChromeOptions(__int64 *a1, int *a2)
{
  int v4; // edx
  __int64 v5; // rdi
  unsigned int v6; // ebx
  int v7; // r15d
  char v8; // r12
  unsigned int v9; // eax
  char v10; // r13
  __int128 v11; // xmm6
  int v12; // ecx
  __int64 v13; // rcx
  bool v14; // zf
  int v15; // eax
  char v16; // di
  bool v17; // bl
  __int64 v18; // r15
  int v19; // ebx
  int v20; // r12d
  __int128 v21; // xmm6
  __int64 v22; // rax
  __int64 *v23; // r13
  __int64 v24; // r12
  _DWORD *v25; // rbx
  _DWORD *v26; // rax
  _DWORD *v27; // rdi
  int v28; // edi
  __int64 v29; // rcx
  unsigned int v31; // ebx
  int v32; // [rsp+28h] [rbp-E0h]
  __int16 v33; // [rsp+38h] [rbp-D0h]
  char v34; // [rsp+3Ah] [rbp-CEh]
  int v35; // [rsp+3Ch] [rbp-CCh]
  int v36; // [rsp+3Ch] [rbp-CCh]
  int v37; // [rsp+40h] [rbp-C8h]
  unsigned int v38; // [rsp+44h] [rbp-C4h]
  _DWORD *v39; // [rsp+48h] [rbp-C0h]
  _QWORD v40[3]; // [rsp+60h] [rbp-A8h] BYREF
  char v41; // [rsp+78h] [rbp-90h]
  char v42; // [rsp+79h] [rbp-8Fh]
  char v43; // [rsp+80h] [rbp-88h]
  __int64 *v44; // [rsp+88h] [rbp-80h]
  __int64 v45; // [rsp+90h] [rbp-78h]
  int v46; // [rsp+98h] [rbp-70h]
  unsigned int v47; // [rsp+9Ch] [rbp-6Ch]
  __int64 v48; // [rsp+A0h] [rbp-68h]
  __int128 v49; // [rsp+A8h] [rbp-60h]
  char v50; // [rsp+B8h] [rbp-50h]
  char v51; // [rsp+B9h] [rbp-4Fh]
  _QWORD v52[2]; // [rsp+C8h] [rbp-40h] BYREF
  int v53; // [rsp+D8h] [rbp-30h]
  int v54; // [rsp+DCh] [rbp-2Ch]
  __int64 v55; // [rsp+E0h] [rbp-28h] BYREF
  __int128 v56; // [rsp+E8h] [rbp-20h]
  __int16 v57; // [rsp+F8h] [rbp-10h]
  char v58; // [rsp+100h] [rbp-8h]
  __int64 *v59; // [rsp+108h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+170h] [rbp+68h]

  *((_DWORD *)a1 + 140) |= *a2;
  *((_DWORD *)a1 + 141) = *a2 & a2[1] | *((_DWORD *)a1 + 141) & ~*a2;
  v4 = *a2;
  v5 = *((_QWORD *)a2 + 1);
  v6 = a2[1];
  v7 = *((_DWORD *)a1 + 163);
  v35 = v4;
  v46 = v4;
  v47 = v6;
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v4 = v35;
  }
  v8 = *((_BYTE *)a2 + 32);
  v9 = v6;
  v10 = *((_BYTE *)a2 + 33);
  v50 = v8;
  v51 = v10;
  v11 = *((_OWORD *)a2 + 1);
  v49 = v11;
  if ( (v7 & 2) == 0 )
  {
    v12 = *((_DWORD *)a1 + 150);
    if ( (v12 & 1) != 0 && (*(_BYTE *)a2 & 1) != 0 )
    {
      if ( (*((_BYTE *)a1 + 604) & 1) != 0 )
        v6 |= 1u;
      else
        v6 &= ~1u;
      v9 = v6;
      v47 = v6;
    }
    if ( (v12 & 0x100) != 0 && (*a2 & 0x100) != 0 )
    {
      if ( (*((_DWORD *)a1 + 151) & 0x100) != 0 )
        v31 = v6 | 0x100;
      else
        v31 = v6 & 0xFFFFFEFF;
      v9 = v31;
      v47 = v31;
    }
  }
  v48 = 0LL;
  *a2 = v4;
  a2[1] = v9;
  v13 = *((_QWORD *)a2 + 1);
  *((_QWORD *)a2 + 1) = v5;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  v14 = (*(_BYTE *)a2 & 4) == 0;
  *((_OWORD *)a2 + 1) = v11;
  *((_BYTE *)a2 + 32) = v8;
  *((_BYTE *)a2 + 33) = v10;
  if ( !v14 )
  {
    v14 = *((_BYTE *)a1 + 558) == 0;
    *((_BYTE *)a1 + 559) = (a2[1] & 4) != 0;
    if ( !v14 )
      a2[1] |= 4u;
  }
  v15 = *a2;
  if ( (*a2 & 0x20) != 0 )
  {
    *((_BYTE *)a1 + 656) = (a2[1] & 0x20) != 0;
    v15 = *a2;
  }
  if ( (v15 & 0x80u) != 0 )
  {
    *((_BYTE *)a1 + 657) = (a2[1] & 0x80) != 0;
    v15 = *a2;
  }
  v16 = 0;
  v34 = 0;
  if ( (v15 & 0x40) != 0 )
  {
    v17 = (a2[1] & 0x40) != 0;
    if ( *((_DWORD *)a1 + 57) == 1 && (a2[1] & 0x40) == 0 )
    {
      CFrameApplicationPresentation::FrameSystemVisual::ShowSplashScreen(a1 + 28, 3LL);
      v16 = *((_BYTE *)a1 + 52);
      v34 = v16;
    }
    *((_BYTE *)a1 + 556) = v17;
  }
  v18 = *((_QWORD *)a2 + 1);
  v19 = *a2;
  v20 = a2[1];
  v36 = *a2;
  v37 = v20;
  v40[0] = v18;
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
  v14 = *((_DWORD *)a1 + 14) == 2;
  v21 = *((_OWORD *)a2 + 1);
  LOBYTE(v33) = *((_BYTE *)a2 + 32);
  v41 = v33;
  HIBYTE(v33) = *((_BYTE *)a2 + 33);
  v42 = HIBYTE(v33);
  *(_OWORD *)&v40[1] = v21;
  v43 = v16;
  v44 = a1;
  if ( v14 )
  {
    v28 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x823,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL,
      v32);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v40);
  }
  else
  {
    (*(void (__fastcall **)(__int64 *))(*a1 + 8))(a1);
    v22 = *a1;
    v23 = a1;
    v52[0] = a1;
    (*(void (__fastcall **)(__int64 *))(v22 + 8))(a1);
    v54 = v20;
    v24 = v18;
    v52[1] = a1;
    v53 = v19;
    v55 = v18;
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
    v57 = v33;
    v25 = 0LL;
    v38 = *((_DWORD *)a1 + 12);
    v56 = v21;
    v58 = v16;
    v59 = a1;
    v45 = 0LL;
    v26 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
    v39 = 0LL;
    v27 = v26;
    if ( v26 )
    {
      v26[3] = 1;
      *(_QWORD *)v26 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *((_QWORD *)v27 + 2) = 0LL;
      if ( v27 + 4 != (_DWORD *)v52 )
      {
        *((_QWORD *)v27 + 2) = a1;
        v23 = 0LL;
      }
      *((_QWORD *)v27 + 3) = a1;
      v27[8] = v36;
      v27[9] = v37;
      *((_QWORD *)v27 + 5) = 0LL;
      if ( v27 + 10 != (_DWORD *)&v55 )
      {
        *((_QWORD *)v27 + 5) = v18;
        v24 = 0LL;
      }
      v25 = v27;
      *((_BYTE *)v27 + 65) = HIBYTE(v33);
      *((_OWORD *)v27 + 3) = v21;
      *((_BYTE *)v27 + 64) = v33;
      *((_BYTE *)v27 + 72) = v34;
      *((_QWORD *)v27 + 10) = a1;
      *(_QWORD *)v27 = off_180429D10;
      v39 = v27;
    }
    v28 = SHTaskPoolQueueTask(3LL, 2LL, v38, 0LL, v25, 0LL);
    if ( v39 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v25 + 16LL))(v25);
    if ( v24 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    if ( v23 )
      (*(void (__fastcall **)(__int64 *))(*v23 + 16))(v23);
    if ( v28 >= 0 )
      ++*((_DWORD *)a1 + 53);
    (*(void (__fastcall **)(__int64 *))(*a1 + 16))(a1);
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  v29 = *((_QWORD *)a2 + 1);
  if ( v29 )
  {
    *((_QWORD *)a2 + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  }
  return (unsigned int)v28;
}
