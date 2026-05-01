/*
 * XREFs of ?_OnSizeConstraintsChanged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800557DC
 * Callers:
 *     ?OnApplicationViewChanged@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180022350 (-OnApplicationViewChanged@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHAN.c)
 * Callees:
 *     ?_IsViewManaged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x1800229E8 (-_IsViewManaged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?ResizeView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x18033E8D0 (-ResizeView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDesktopPositioner::_OnSizeConstraintsChanged(CDesktopPositioner *this, struct IApplicationView *a2)
{
  int IsViewManaged; // eax
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // eax
  LONG v8; // edx
  LONG v9; // eax
  LONG v10; // r8d
  __int64 v12; // rdx
  __int64 v13; // rdx
  bool v14; // [rsp+30h] [rbp-50h] BYREF
  LONG v15; // [rsp+38h] [rbp-48h] BYREF
  LONG v16; // [rsp+3Ch] [rbp-44h]
  __int64 v17; // [rsp+40h] [rbp-40h] BYREF
  __int64 v18; // [rsp+48h] [rbp-38h] BYREF
  struct tagSIZE v19; // [rsp+50h] [rbp-30h]
  __int64 v20; // [rsp+58h] [rbp-28h]
  char v21[8]; // [rsp+60h] [rbp-20h] BYREF
  int v22; // [rsp+68h] [rbp-18h] BYREF
  int v23; // [rsp+6Ch] [rbp-14h]
  int v24; // [rsp+70h] [rbp-10h]
  int v25; // [rsp+74h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v20 = -2LL;
  IsViewManaged = CDesktopPositioner::_IsViewManaged(this, a2, &v14);
  v5 = IsViewManaged;
  if ( IsViewManaged < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x910,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)IsViewManaged);
    return v5;
  }
  if ( v14 )
  {
    v18 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    v6 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 80LL))(a2, &v18);
    v5 = v6;
    if ( v6 < 0 )
    {
      v12 = 2324LL;
    }
    else
    {
      v6 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64, LONG *, char *))(*(_QWORD *)a2 + 280LL))(
             a2,
             v18,
             &v15,
             v21);
      v5 = v6;
      if ( v6 >= 0 )
      {
        v17 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
        v7 = (*(__int64 (__fastcall **)(struct IApplicationView *, GUID *, __int64 *))(*(_QWORD *)a2 + 104LL))(
               a2,
               &GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6,
               &v17);
        v5 = v7;
        if ( v7 < 0 )
        {
          v13 = 2331LL;
        }
        else
        {
          v7 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v17 + 24LL))(v17, &v22);
          v5 = v7;
          if ( v7 < 0 )
          {
            v13 = 2334LL;
          }
          else
          {
            v8 = v25 - v23;
            v9 = v24 - v22;
            if ( v15 > v24 - v22 )
              v9 = v15;
            v19.cx = v9;
            v10 = v25 - v23;
            if ( v16 > v8 )
              v10 = v16;
            v19.cy = v10;
            if ( v9 == v24 - v22 && v10 == v8
              || (v7 = CDesktopPositioner::ResizeView((CDesktopPositioner *)((char *)this + 104), a2, v19, v19),
                  v5 = v7,
                  v7 >= 0) )
            {
              v5 = 0;
LABEL_14:
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
LABEL_15:
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
              return v5;
            }
            v13 = 2342LL;
          }
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v13,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v7);
        goto LABEL_14;
      }
      v12 = 2328LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_15;
  }
  return 0LL;
}
