/*
 * XREFs of ?GetLowestLayoutView@TabletModeCoverWindow@@AEAAJPEAPEAUIApplicationView@@@Z @ 0x1803E82E4
 * Callers:
 *     ?UpdateWindowOrder@TabletModeCoverWindow@@AEAAJXZ @ 0x1803E8C4C (-UpdateWindowOrder@TabletModeCoverWindow@@AEAAJXZ.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003072C (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TabletModeCoverWindow::GetLowestLayoutView(
        TabletModeCoverWindow *this,
        struct IApplicationView **a2)
{
  __int64 v3; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  unsigned int v7; // eax
  unsigned int v8; // r14d
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rdx
  int v15; // edi
  __int64 v16; // rbx
  int v17; // eax
  unsigned int v18; // esi
  __int64 v19; // rbx
  int v20; // eax
  __int64 v21; // rbx
  int v22; // eax
  struct IApplicationView *v24; // rax
  struct IUnknown *v25; // [rsp+30h] [rbp-18h] BYREF
  int v26[2]; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+30h]
  __int64 v28; // [rsp+80h] [rbp+38h] BYREF
  struct IUnknown *v29; // [rsp+88h] [rbp+40h] BYREF
  __int64 v30; // [rsp+90h] [rbp+48h] BYREF
  __int64 v31; // [rsp+98h] [rbp+50h] BYREF

  *a2 = 0LL;
  v3 = *((_QWORD *)this + 18);
  v31 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
  v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 72LL))(v3, &v31);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x152,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_27;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v31 + 80LL))(v31, 1LL);
  v8 = v7;
  if ( v7 == 1 )
  {
    v28 = 0LL;
    v9 = v31;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)v9 + 104LL))(
            v9,
            0LL,
            1LL,
            &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
            &v28);
    v6 = v10;
    if ( v10 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, GUID *, struct IApplicationView **))(*(_QWORD *)v28 + 48LL))(
              v28,
              &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
              a2);
      v6 = v10;
      if ( v10 >= 0 )
      {
LABEL_9:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
        goto LABEL_27;
      }
      v11 = 344LL;
    }
    else
    {
      v11 = 343LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_9;
  }
  if ( v7 <= 1 )
  {
LABEL_26:
    v6 = -2147467259;
    goto LABEL_27;
  }
  v30 = 0LL;
  v12 = *((_QWORD *)this + 19);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
  v13 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 32LL))(v12, &v30);
  v6 = v13;
  if ( v13 < 0 )
  {
    v14 = 350LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_33;
  }
  v13 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v30 + 24LL))(v30, &v28);
  v6 = v13;
  if ( v13 < 0 )
  {
    v14 = 352LL;
    goto LABEL_15;
  }
  v15 = v28;
  if ( !(_DWORD)v28 )
  {
LABEL_25:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
    goto LABEL_26;
  }
  while ( 1 )
  {
    v29 = 0LL;
    v16 = v30;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v29);
    v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, struct IUnknown **))(*(_QWORD *)v16 + 32LL))(
            v16,
            (unsigned int)(v15 - 1),
            &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
            &v29);
    if ( v17 >= 0 )
      break;
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x164,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
      (const char *)(unsigned int)v17);
LABEL_24:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v29);
    if ( !--v15 )
      goto LABEL_25;
  }
  v18 = 0;
  if ( !v8 )
    goto LABEL_24;
  while ( 1 )
  {
    *(_QWORD *)v26 = 0LL;
    v19 = v31;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v26);
    v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, int *))(*(_QWORD *)v19 + 104LL))(
            v19,
            v18,
            1LL,
            &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
            v26);
    v6 = v20;
    if ( v20 < 0 )
      break;
    v25 = 0LL;
    v21 = *(_QWORD *)v26;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
    v22 = (*(__int64 (__fastcall **)(__int64, GUID *, struct IUnknown **))(*(_QWORD *)v21 + 48LL))(
            v21,
            &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
            &v25);
    v6 = v22;
    if ( v22 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x16B,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
        (const char *)(unsigned int)v22);
      goto LABEL_30;
    }
    if ( (unsigned int)SHIsSameObject(v25, v29) )
    {
      v24 = (struct IApplicationView *)v29;
      v29 = 0LL;
      v6 = 0;
      *a2 = v24;
LABEL_30:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
      goto LABEL_32;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v26);
    if ( ++v18 >= v8 )
      goto LABEL_24;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x169,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
    (const char *)(unsigned int)v20);
LABEL_32:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v26);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v29);
LABEL_33:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
LABEL_27:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
  return v6;
}
