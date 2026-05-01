/*
 * XREFs of ?RaiseViewPropertyChanged@ViewManagerBridge@@AEAAJPEAUIMessageMap@@PEAUMsgString@@@Z @ 0x18023402C
 * Callers:
 *     ?OnAdded@ViewManagerBridge@@UEAAJPEAUIMessageMap@@PEAUMsgString@@PEAUIUnknown@@@Z @ 0x180232800 (-OnAdded@ViewManagerBridge@@UEAAJPEAUIMessageMap@@PEAUMsgString@@PEAUIUnknown@@@Z.c)
 *     ?OnRemoved@ViewManagerBridge@@UEAAJPEAUIMessageMap@@PEAUMsgString@@PEAUIUnknown@@@Z @ 0x180233230 (-OnRemoved@ViewManagerBridge@@UEAAJPEAUIMessageMap@@PEAUMsgString@@PEAUIUnknown@@@Z.c)
 *     ?OnReplaced@ViewManagerBridge@@UEAAJPEAUIMessageMap@@PEAUMsgString@@PEAUIUnknown@@2@Z @ 0x180233270 (-OnReplaced@ViewManagerBridge@@UEAAJPEAUIMessageMap@@PEAUMsgString@@PEAUIUnknown@@2@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18005B338 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18006FCC0 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?MsgStringGetData@@YAPEBGPEAUMsgString@@@Z @ 0x180215E04 (-MsgStringGetData@@YAPEBGPEAUMsgString@@@Z.c)
 *     ?ViewPropertyChanged@ViewEventDispatcher@@QEAAXIPEBG@Z @ 0x18021D530 (-ViewPropertyChanged@ViewEventDispatcher@@QEAAXIPEBG@Z.c)
 *     ??$PropertyChange@AEAIPEBG@RaiseViewPropertyChanged@ViewManagerInteropTraceLogging@@QEAAXAEAI$$QEAPEBG@Z @ 0x18022E574 (--$PropertyChange@AEAIPEBG@RaiseViewPropertyChanged@ViewManagerInteropTraceLogging@@QEAAXAEAI$$Q.c)
 *     ??1RaiseViewPropertyChanged@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x18022FA2C (--1RaiseViewPropertyChanged@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     ?StartActivity@RaiseViewPropertyChanged@ViewManagerInteropTraceLogging@@QEAAXXZ @ 0x1802369D4 (-StartActivity@RaiseViewPropertyChanged@ViewManagerInteropTraceLogging@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall ViewManagerBridge::RaiseViewPropertyChanged(
        ViewManagerBridge *this,
        struct IMessageMap *a2,
        struct MsgString *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // eax
  __int64 v10; // rdx
  unsigned int v11; // edi
  __int64 v12; // rbx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // r9
  __int64 v18; // rdx
  const unsigned __int16 *v19; // rax
  RTL_SRWLOCK *v20; // r9
  const WCHAR *Data; // [rsp+20h] [rbp-E0h] BYREF
  __int64 (__fastcall ***v23)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-D8h] BYREF
  __int64 v24; // [rsp+30h] [rbp-D0h] BYREF
  int v25; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v26; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v27; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v28; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+50h] [rbp-B0h] BYREF
  int v30; // [rsp+58h] [rbp-A8h]
  __int64 v31; // [rsp+60h] [rbp-A0h] BYREF
  int v32; // [rsp+68h] [rbp-98h]
  __int64 v33; // [rsp+70h] [rbp-90h]
  _QWORD v34[40]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  v33 = -2LL;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v34,
    (__int64)"RaiseViewPropertyChanged");
  v34[0] = &ViewManagerInteropTraceLogging::RaiseViewPropertyChanged::`vftable';
  ViewManagerInteropTraceLogging::RaiseViewPropertyChanged::StartActivity((ViewManagerInteropTraceLogging::RaiseViewPropertyChanged *)v34);
  v29 = 0LL;
  v30 = 0;
  v6 = (*(__int64 (__fastcall **)(struct IMessageMap *, __int64 *))(*(_QWORD *)a2 + 24LL))(a2, &v29);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v27 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
    v8 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 15))(
           *((_QWORD *)this + 15),
           &GUID_17d276d3_f5ad_4668_9d53_1ef0996b8363,
           &v27);
    v7 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x627,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v8);
LABEL_33:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
      goto LABEL_34;
    }
    v28 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v27 + 48LL))(v27, &v25);
    v7 = v9;
    if ( v9 >= 0 )
    {
      v11 = 0;
      if ( v25 > 0 )
      {
        while ( 1 )
        {
          Data = 0LL;
          v12 = v27;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&Data);
          v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, const WCHAR **))(*(_QWORD *)v12 + 80LL))(v12, v11, &Data);
          v7 = v13;
          if ( v13 < 0 )
            break;
          v23 = 0LL;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
          v14 = (**(__int64 (__fastcall ***)(const WCHAR *, GUID *, _QWORD))Data)(
                  Data,
                  &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e,
                  &v23);
          v7 = v14;
          if ( v14 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x634,
              (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
              (const char *)(unsigned int)v14);
            goto LABEL_24;
          }
          v24 = 0LL;
          v15 = (__int64)v23;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
          v16 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 104LL))(v15, &v24);
          v7 = v16;
          if ( v16 < 0 )
          {
            v18 = 1591LL;
            goto LABEL_22;
          }
          v31 = 0LL;
          v32 = 0;
          v16 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v24 + 24LL))(v24, &v31);
          v7 = v16;
          if ( v16 < 0 )
          {
            v18 = 1594LL;
            goto LABEL_22;
          }
          if ( v31 == v29 && v32 == v30 )
          {
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
            v16 = (**v23)(v23, &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e, &v28);
            v7 = v16;
            if ( v16 >= 0 )
            {
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&Data);
              goto LABEL_15;
            }
            v18 = 1597LL;
LABEL_22:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v18,
              (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
              (const char *)(unsigned int)v16);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
LABEL_24:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
            goto LABEL_26;
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&Data);
          if ( (int)++v11 >= v25 )
            goto LABEL_15;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x631,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
          (const char *)(unsigned int)v13);
LABEL_26:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&Data);
        goto LABEL_32;
      }
LABEL_15:
      if ( !v28 )
      {
        v7 = -2147023728;
        v17 = 2147943568LL;
        v10 = 1602LL;
LABEL_30:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
          (const char *)v17);
LABEL_32:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
        goto LABEL_33;
      }
      v9 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v28 + 152LL))(v28, &v26);
      v7 = v9;
      if ( v9 >= 0 )
      {
        Data = MsgStringGetData(a3);
        ViewManagerInteropTraceLogging::RaiseViewPropertyChanged::PropertyChange<unsigned int &,unsigned short const *>(
          (__int64)v34,
          (int *)&v26,
          &Data);
        v19 = MsgStringGetData(a3);
        ViewEventDispatcher::ViewPropertyChanged(v20, v26, v19);
        wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v34, 0);
        v7 = 0;
        goto LABEL_32;
      }
      v10 = 1605LL;
    }
    else
    {
      v10 = 1581LL;
    }
    v17 = (unsigned int)v9;
    goto LABEL_30;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x624,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
    (const char *)(unsigned int)v6);
LABEL_34:
  ViewManagerInteropTraceLogging::RaiseViewPropertyChanged::~RaiseViewPropertyChanged((ViewManagerInteropTraceLogging::RaiseViewPropertyChanged *)v34);
  return v7;
}
