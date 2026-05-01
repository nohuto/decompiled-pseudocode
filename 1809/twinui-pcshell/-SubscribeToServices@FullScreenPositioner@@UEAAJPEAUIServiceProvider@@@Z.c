/*
 * XREFs of ?SubscribeToServices@FullScreenPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x180142DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180022984 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall FullScreenPositioner::SubscribeToServices(FullScreenPositioner *this, struct IServiceProvider *a2)
{
  char *v4; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rdx
  char *v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // r8
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  int v16; // [rsp+70h] [rbp+30h] BYREF
  __int64 v17; // [rsp+78h] [rbp+38h] BYREF
  __int64 v18; // [rsp+80h] [rbp+40h] BYREF
  __int64 v19; // [rsp+88h] [rbp+48h] BYREF

  v4 = (char *)this + 192;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 24);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &IID_IImmersiveApplicationManager,
         &GUID_bf63999f_7411_40da_861c_df72c0ffee84,
         v4);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v19 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
           a2,
           &IID_IActiveZBandNotificationForMonitorService,
           &GUID_0f019ffe_0388_4dcf_a2e2_f059a60a5704,
           &v19);
    v6 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCE,
        (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
        (const char *)(unsigned int)v7);
LABEL_27:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
      return v6;
    }
    v18 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    v8 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
           a2,
           &SID_IImmersiveMonitorService,
           &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
           &v18);
    v6 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD1,
        (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
        (const char *)(unsigned int)v8);
LABEL_26:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
      goto LABEL_27;
    }
    v17 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    v9 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
           a2,
           &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
           &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
           &v17);
    v6 = v9;
    if ( v9 >= 0 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 23);
      v9 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
             a2,
             &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
             &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
             (char *)this + 184);
      v6 = v9;
      if ( v9 >= 0 )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 30);
        v9 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
               a2,
               &GUID_6fdc29fe_42bd_4dc0_b783_b7854dcba425,
               &GUID_6fdc29fe_42bd_4dc0_b783_b7854dcba425,
               (char *)this + 240);
        v6 = v9;
        if ( v9 >= 0 )
        {
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 31);
          v9 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
                 a2,
                 &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
                 &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
                 (char *)this + 248);
          v6 = v9;
          if ( v9 >= 0 )
          {
            v11 = (char *)this - 32;
            v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v19 + 24LL))(
                   v19,
                   ((unsigned __int64)this + 112) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 32) >> 64),
                   (char *)this + 320);
            v6 = v9;
            if ( v9 >= 0 )
            {
              v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v18 + 24LL))(
                     v18,
                     ((unsigned __int64)this + 104) & ((unsigned __int128)-(__int128)(unsigned __int64)v11 >> 64),
                     (char *)this + 324);
              v6 = v9;
              if ( v9 >= 0 )
              {
                v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 23) + 96LL))(
                       *((_QWORD *)this + 23),
                       ((unsigned __int64)this + 120) & ((unsigned __int128)-(__int128)(unsigned __int64)v11 >> 64),
                       (char *)this + 328);
                v6 = v9;
                if ( v9 >= 0 )
                {
                  v9 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *))(*(_QWORD *)v17 + 72LL))(
                         v17,
                         ((unsigned __int64)this + 128) & -(__int64)(this != (FullScreenPositioner *)32),
                         (char *)this + 332);
                  v6 = v9;
                  if ( v9 >= 0 )
                  {
                    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v17 + 24LL))(v17, &v16);
                    *((_BYTE *)this + 392) = v16 == 1;
                    wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(v12, 3u, v13);
                    v6 = 0;
                    goto LABEL_25;
                  }
                  v10 = 221LL;
                }
                else
                {
                  v10 = 220LL;
                }
              }
              else
              {
                v10 = 219LL;
              }
            }
            else
            {
              v10 = 218LL;
            }
          }
          else
          {
            v10 = 216LL;
          }
        }
        else
        {
          v10 = 215LL;
        }
      }
      else
      {
        v10 = 214LL;
      }
    }
    else
    {
      v10 = 212LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
      (const char *)(unsigned int)v9);
LABEL_25:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    goto LABEL_26;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xCB,
    (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
