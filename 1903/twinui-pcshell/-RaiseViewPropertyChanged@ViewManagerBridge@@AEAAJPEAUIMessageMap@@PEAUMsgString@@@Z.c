/*
 * XREFs of ?RaiseViewPropertyChanged@ViewManagerBridge@@AEAAJPEAUIMessageMap@@PEAUMsgString@@@Z @ 0x18028947C
 * Callers:
 *     ?OnAdded@ViewManagerBridge@@UEAAJPEAUIMessageMap@@PEAUMsgString@@PEAUIUnknown@@@Z @ 0x180287C00 (-OnAdded@ViewManagerBridge@@UEAAJPEAUIMessageMap@@PEAUMsgString@@PEAUIUnknown@@@Z.c)
 *     ?OnRemoved@ViewManagerBridge@@UEAAJPEAUIMessageMap@@PEAUMsgString@@PEAUIUnknown@@@Z @ 0x180288670 (-OnRemoved@ViewManagerBridge@@UEAAJPEAUIMessageMap@@PEAUMsgString@@PEAUIUnknown@@@Z.c)
 *     ?OnReplaced@ViewManagerBridge@@UEAAJPEAUIMessageMap@@PEAUMsgString@@PEAUIUnknown@@2@Z @ 0x1802886B0 (-OnReplaced@ViewManagerBridge@@UEAAJPEAUIMessageMap@@PEAUMsgString@@PEAUIUnknown@@2@Z.c)
 * Callees:
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18000C348 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18005FB64 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?MsgStringGetData@@YAPEBGPEAUMsgString@@@Z @ 0x18026C5FC (-MsgStringGetData@@YAPEBGPEAUMsgString@@@Z.c)
 *     ?ViewPropertyChanged@ViewEventDispatcher@@QEAAXIPEBG@Z @ 0x180272FB8 (-ViewPropertyChanged@ViewEventDispatcher@@QEAAXIPEBG@Z.c)
 *     ??$PropertyChange@AEAIPEBG@RaiseViewPropertyChanged@ViewManagerInteropTraceLogging@@QEAAXAEAI$$QEAPEBG@Z @ 0x180283850 (--$PropertyChange@AEAIPEBG@RaiseViewPropertyChanged@ViewManagerInteropTraceLogging@@QEAAXAEAI$$Q.c)
 *     ??1RaiseViewPropertyChanged@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x180284D08 (--1RaiseViewPropertyChanged@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     ?StartActivity@RaiseViewPropertyChanged@ViewManagerInteropTraceLogging@@QEAAXXZ @ 0x18028C060 (-StartActivity@RaiseViewPropertyChanged@ViewManagerInteropTraceLogging@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall ViewManagerBridge::RaiseViewPropertyChanged(
        ViewManagerBridge *this,
        struct IMessageMap *a2,
        struct MsgString *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v9)(_QWORD, GUID *, __int64 *); // rbx
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdx
  unsigned int v13; // esi
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, _QWORD, const WCHAR **); // rdi
  int v16; // eax
  const WCHAR *v17; // rbx
  __int64 (__fastcall *v18)(const WCHAR *, GUID *, __int64 *); // rdi
  int v19; // eax
  __int64 v20; // rbx
  __int64 (__fastcall *v21)(__int64, __int64 *); // rdi
  int v22; // eax
  __int64 v23; // r9
  __int64 v24; // rdx
  const unsigned __int16 *v25; // rax
  RTL_SRWLOCK *v26; // r9
  const WCHAR *Data; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v29; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v30; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v31[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v32; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v33; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v34; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v35; // [rsp+60h] [rbp-A8h]
  __int64 v36; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v37; // [rsp+70h] [rbp-98h]
  __int64 v38; // [rsp+78h] [rbp-90h]
  _QWORD v39[40]; // [rsp+88h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+200h] [rbp+F8h]

  v38 = -2LL;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v39,
    (__int64)"RaiseViewPropertyChanged");
  v39[0] = &ViewManagerInteropTraceLogging::RaiseViewPropertyChanged::`vftable';
  ViewManagerInteropTraceLogging::RaiseViewPropertyChanged::StartActivity((ViewManagerInteropTraceLogging::RaiseViewPropertyChanged *)v39);
  v34 = 0LL;
  LODWORD(v35) = 0;
  v6 = (*(__int64 (__fastcall **)(struct IMessageMap *, __int64 *))(*(_QWORD *)a2 + 24LL))(a2, &v34);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v32 = 0LL;
    v8 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 15);
    v9 = **v8;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
    v10 = v9(v8, &GUID_17d276d3_f5ad_4668_9d53_1ef0996b8363, &v32);
    v7 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x62A,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v10);
LABEL_33:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
      goto LABEL_34;
    }
    v33 = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v32 + 48LL))(v32, v31);
    v7 = v11;
    if ( v11 >= 0 )
    {
      v13 = 0;
      if ( (int)v31[0] > 0 )
      {
        while ( 1 )
        {
          Data = 0LL;
          v14 = v32;
          v15 = *(__int64 (__fastcall **)(__int64, _QWORD, const WCHAR **))(*(_QWORD *)v32 + 80LL);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&Data);
          v16 = v15(v14, v13, &Data);
          v7 = v16;
          if ( v16 < 0 )
            break;
          v29 = 0LL;
          v17 = Data;
          v18 = **(__int64 (__fastcall ***)(const WCHAR *, GUID *, __int64 *))Data;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
          v19 = v18(v17, &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e, &v29);
          v7 = v19;
          if ( v19 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x637,
              (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
              (const char *)(unsigned int)v19);
            goto LABEL_24;
          }
          v30 = 0LL;
          v20 = v29;
          v21 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v29 + 104LL);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
          v22 = v21(v20, &v30);
          v7 = v22;
          if ( v22 < 0 )
          {
            v24 = 1594LL;
            goto LABEL_22;
          }
          v36 = 0LL;
          LODWORD(v37) = 0;
          v22 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v30 + 24LL))(v30, &v36);
          v7 = v22;
          if ( v22 < 0 )
          {
            v24 = 1597LL;
            goto LABEL_22;
          }
          if ( v36 == v34 && (_DWORD)v37 == (_DWORD)v35 )
          {
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
            v22 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v29)(
                    v29,
                    &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e,
                    &v33);
            v7 = v22;
            if ( v22 >= 0 )
            {
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&Data);
              goto LABEL_15;
            }
            v24 = 1600LL;
LABEL_22:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v24,
              (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
              (const char *)(unsigned int)v22);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
LABEL_24:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
            goto LABEL_26;
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&Data);
          if ( (int)++v13 >= (int)v31[0] )
            goto LABEL_15;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x634,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
          (const char *)(unsigned int)v16);
LABEL_26:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&Data);
        goto LABEL_32;
      }
LABEL_15:
      if ( !v33 )
      {
        v7 = -2147023728;
        v23 = 2147943568LL;
        v12 = 1605LL;
LABEL_30:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v12,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
          (const char *)v23);
LABEL_32:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
        goto LABEL_33;
      }
      v11 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v33 + 152LL))(v33, &v31[1]);
      v7 = v11;
      if ( v11 >= 0 )
      {
        Data = MsgStringGetData(a3);
        ViewManagerInteropTraceLogging::RaiseViewPropertyChanged::PropertyChange<unsigned int &,unsigned short const *>(
          (__int64)v39,
          (int *)&v31[1],
          &Data);
        v25 = MsgStringGetData(a3);
        ViewEventDispatcher::ViewPropertyChanged(v26, v31[1], v25);
        wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
          (__int64)v39,
          0);
        v7 = 0;
        goto LABEL_32;
      }
      v12 = 1608LL;
    }
    else
    {
      v12 = 1584LL;
    }
    v23 = (unsigned int)v11;
    goto LABEL_30;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x627,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
    (const char *)(unsigned int)v6);
LABEL_34:
  ViewManagerInteropTraceLogging::RaiseViewPropertyChanged::~RaiseViewPropertyChanged((ViewManagerInteropTraceLogging::RaiseViewPropertyChanged *)v39);
  return v7;
}
