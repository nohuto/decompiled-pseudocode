/*
 * XREFs of ?SetActiveTabsOnTabletModeExit@CDesktopPositioner@@AEAAJPEAUIAppLayout@@@Z @ 0x1803C3250
 * Callers:
 *     ?ControlGained@CDesktopPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x1803C0710 (-ControlGained@CDesktopPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003072C (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CDesktopPositioner::SetActiveTabsOnTabletModeExit(CDesktopPositioner *this, struct IAppLayout *a2)
{
  unsigned int v4; // r12d
  unsigned int v5; // r14d
  __int64 (__fastcall *v6)(struct IAppLayout *, _QWORD, __int64, GUID *, int *); // rbx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, GUID *, __int64 *); // rdi
  int v11; // eax
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, __int64, GUID *, __int64 *); // rbx
  int v14; // eax
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, struct IUnknown **); // rdi
  int v17; // eax
  __int64 v18; // rdi
  __int64 (__fastcall *v19)(__int64, __int64, struct IUnknown **); // rbx
  int v20; // eax
  __int64 v22; // rdx
  __int64 v23; // [rsp+30h] [rbp-50h] BYREF
  __int64 v24; // [rsp+38h] [rbp-48h] BYREF
  struct IUnknown *v25; // [rsp+40h] [rbp-40h] BYREF
  struct IUnknown *v26; // [rsp+48h] [rbp-38h] BYREF
  int v27[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v28; // [rsp+58h] [rbp-28h]
  _QWORD v29[2]; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v28 = -2LL;
  if ( !a2 )
    return 0LL;
  if ( !*((_QWORD *)this + 39) )
    return 0LL;
  v4 = (*(__int64 (__fastcall **)(struct IAppLayout *, __int64))(*(_QWORD *)a2 + 80LL))(a2, 1LL);
  v5 = 0;
  if ( !v4 )
    return 0LL;
  while ( 1 )
  {
    *(_QWORD *)v27 = 0LL;
    v6 = *(__int64 (__fastcall **)(struct IAppLayout *, _QWORD, __int64, GUID *, int *))(*(_QWORD *)a2 + 104LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v27);
    v7 = v6(a2, v5, 1LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, v27);
    v8 = v7;
    if ( v7 < 0 )
      break;
    v23 = 0LL;
    v9 = *(_QWORD *)v27;
    v10 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(**(_QWORD **)v27 + 48LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
    v11 = v10(v9, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v23);
    v8 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA02,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v11);
      goto LABEL_25;
    }
    v24 = 0LL;
    v12 = *((_QWORD *)this + 39);
    v13 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v12 + 64LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
    v14 = v13(v12, v23, &GUID_f264283f_b510_4555_80ed_4c7216018854, &v24);
    v8 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA06,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v14);
      goto LABEL_23;
    }
    v15 = v24;
    if ( v24 )
    {
      v26 = 0LL;
      v16 = *(__int64 (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)v24 + 96LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v26);
      v17 = v16(v15, &v26);
      v8 = v17;
      if ( v17 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA0A,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v17);
        goto LABEL_21;
      }
      v25 = 0LL;
      v18 = *((_QWORD *)this + 39);
      v19 = *(__int64 (__fastcall **)(__int64, __int64, struct IUnknown **))(*(_QWORD *)v18 + 32LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
      v20 = v19(v18, v23, &v25);
      v8 = v20;
      if ( v20 < 0 )
      {
        v22 = 2573LL;
LABEL_19:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v22,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v20);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
LABEL_21:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v26);
LABEL_23:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
LABEL_25:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
        goto LABEL_27;
      }
      if ( !(unsigned int)SHIsSameObject(v26, v25) )
      {
        v29[0] = 0LL;
        v29[1] = 0LL;
        v20 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v24 + 48LL))(v24, v29);
        v8 = v20;
        if ( v20 < 0 )
        {
          v22 = 2580LL;
          goto LABEL_19;
        }
        v20 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD *))(**((_QWORD **)this + 39) + 96LL))(
                *((_QWORD *)this + 39),
                v23,
                v29);
        v8 = v20;
        if ( v20 < 0 )
        {
          v22 = 2581LL;
          goto LABEL_19;
        }
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v26);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v27);
    if ( ++v5 >= v4 )
      return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x9FF,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v7);
LABEL_27:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v27);
  return v8;
}
