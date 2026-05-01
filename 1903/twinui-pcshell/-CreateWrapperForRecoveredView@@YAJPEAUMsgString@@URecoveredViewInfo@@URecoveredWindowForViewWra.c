/*
 * XREFs of ?CreateWrapperForRecoveredView@@YAJPEAUMsgString@@URecoveredViewInfo@@URecoveredWindowForViewWrapper@@PEAVViewEventDispatcher@@PEAPEAUIViewWrapperInternal@@@Z @ 0x18026AF20
 * Callers:
 *     _lambda_313d2f60cc252ee9599e8e6a3d95ee51_::operator() @ 0x1802694F4 (_lambda_313d2f60cc252ee9599e8e6a3d95ee51_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VLegacyViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBGPEBGW4ViewLifetimePolicy@1@PEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIViewWrapperInternal@@AEAI$$QEAPEAUIUnknown@@$$QEAPEBG3$$QEAW4ViewLifetimePolicy@LegacyViewWrapper@@$$QEAPEAVViewEventDispatcher@@@Z @ 0x180266954 (--$MakeAndInitialize@VLegacyViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBGPEBGW4View.c)
 *     ??$MakeAndInitialize@VUAPViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBGPEBGPEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIViewWrapperInternal@@AEAI$$QEAPEAUIUnknown@@$$QEAPEBG3$$QEAPEAVViewEventDispatcher@@@Z @ 0x180266C68 (--$MakeAndInitialize@VUAPViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBGPEBGPEAVViewE.c)
 *     ?IsLegacyApp@@YAJPEBGPEA_N@Z @ 0x18026C524 (-IsLegacyApp@@YAJPEBGPEA_N@Z.c)
 *     ?MsgStringGetData@@YAPEBGPEAUMsgString@@@Z @ 0x18026C5FC (-MsgStringGetData@@YAPEBGPEAUMsgString@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 CreateWrapperForRecoveredView(struct MsgString *a1, __int64 a2, __int64 a3, ...)
{
  unsigned __int16 *v6; // rsi
  CallerIdentity *Data; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rdx
  UAPViewWrapper *v13; // [rsp+40h] [rbp-30h] BYREF
  int v14[2]; // [rsp+48h] [rbp-28h] BYREF
  struct IUnknown *v15; // [rsp+50h] [rbp-20h] BYREF
  const unsigned __int16 *v16[3]; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  struct ViewEventDispatcher *v18; // [rsp+B8h] [rbp+48h] BYREF
  va_list va; // [rsp+B8h] [rbp+48h]
  wchar_t *v20; // [rsp+C0h] [rbp+50h] BYREF
  va_list va1; // [rsp+C0h] [rbp+50h]
  va_list va2; // [rsp+C8h] [rbp+58h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v18 = va_arg(va1, struct ViewEventDispatcher *);
  va_copy(va2, va1);
  v20 = va_arg(va2, wchar_t *);
  v16[1] = (const unsigned __int16 *)-2LL;
  v6 = v20;
  *(_QWORD *)v20 = 0LL;
  Data = (CallerIdentity *)MsgStringGetData(a1);
  v8 = IsLegacyApp(Data, (bool *)va1);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v13 = 0LL;
    if ( (_BYTE)v20 )
    {
      LODWORD(v20) = 0;
      *(_QWORD *)v14 = off_180431690[*(_QWORD *)(a3 + 16) & -(__int64)(*(_QWORD *)(a3 + 16) < 4uLL)];
      v15 = (struct IUnknown *)MsgStringGetData(a1);
      v16[0] = *(const unsigned __int16 **)a2;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
      v10 = Microsoft::WRL::Details::MakeAndInitialize<LegacyViewWrapper,IViewWrapperInternal,unsigned int &,IUnknown *,unsigned short const *,unsigned short const *,enum LegacyViewWrapper::ViewLifetimePolicy,ViewEventDispatcher *>(
              &v13,
              (unsigned int *)(a2 + 8),
              v16,
              (__int64 *)&v15,
              v14,
              (wchar_t **)va1,
              (struct ViewEventDispatcher **)va);
      v9 = v10;
      if ( v10 < 0 )
      {
        v11 = 2605LL;
LABEL_6:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v11,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)v10);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
        goto LABEL_10;
      }
    }
    else
    {
      v20 = off_180431690[*(_QWORD *)(a3 + 16) & -(__int64)(*(_QWORD *)(a3 + 16) < 4uLL)];
      v16[0] = MsgStringGetData(a1);
      v15 = *(struct IUnknown **)a2;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
      v10 = Microsoft::WRL::Details::MakeAndInitialize<UAPViewWrapper,IViewWrapperInternal,unsigned int &,IUnknown *,unsigned short const *,unsigned short const *,ViewEventDispatcher *>(
              &v13,
              (unsigned int *)(a2 + 8),
              &v15,
              v16,
              (const unsigned __int16 **)va1,
              (struct ViewEventDispatcher **)va);
      v9 = v10;
      if ( v10 < 0 )
      {
        v11 = 2615LL;
        goto LABEL_6;
      }
    }
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v13);
    *(_QWORD *)v6 = v13;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    v9 = 0;
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA21,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
    (const char *)(unsigned int)v8);
LABEL_10:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)a2);
  return v9;
}
