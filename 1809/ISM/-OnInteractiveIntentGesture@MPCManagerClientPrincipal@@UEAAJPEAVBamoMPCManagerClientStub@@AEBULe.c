/*
 * XREFs of ?OnInteractiveIntentGesture@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@@AEBULegacyDeviceInfo@@IIII_KI@Z @ 0x1800DF220
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000AA20 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$Make@VHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@AEAIAEAIAEAIAEA_KAEAI@Details@WRL@Microsoft@@YA?AV?$ComPtr@VHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@@12@AEAI00AEA_K0@Z @ 0x1800DB3F4 (--$Make@VHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@AEAIAEAIAEAIAEA_KAEAI@Details@W.c)
 *     ??$InvokeAll@PEAVMPCManagerClient@@PEAVHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAVMPCManagerClient@MPCManager@Input@Internal@Windows@@PEAVHomeGestureEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVMPCManagerClient@@PEAVHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@@Z @ 0x1800DB48C (--$InvokeAll@PEAVMPCManagerClient@@PEAVHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800DEE30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIHom_ea_1800DEE30.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCManagerClientPrincipal::OnInteractiveIntentGesture(
        MPCManagerClientPrincipal *this,
        struct BamoMPCManagerClientStub *a2,
        const struct LegacyDeviceInfo *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned __int64 a8,
        unsigned int a9)
{
  __int64 v10; // rsi
  _OWORD *v11; // rcx
  __int64 v12; // rax
  const char *v13; // r9
  unsigned int v14; // edi
  int v15; // eax
  __int64 v16; // rcx
  volatile signed __int64 *v18; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v19; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v20; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v21; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+58h] [rbp-B0h] BYREF
  int v23[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+68h] [rbp-A0h]
  _BYTE v25[992]; // [rsp+78h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+480h] [rbp+378h]

  v24 = -2LL;
  v10 = *((_QWORD *)this + 7);
  v19 = a9;
  *(_QWORD *)v23 = a8;
  v20 = a7;
  LODWORD(v22) = a6;
  v21 = a5;
  v11 = v25;
  v12 = 7LL;
  do
  {
    *v11 = *(_OWORD *)a3;
    v11[1] = *((_OWORD *)a3 + 1);
    v11[2] = *((_OWORD *)a3 + 2);
    v11[3] = *((_OWORD *)a3 + 3);
    v11[4] = *((_OWORD *)a3 + 4);
    v11[5] = *((_OWORD *)a3 + 5);
    v11[6] = *((_OWORD *)a3 + 6);
    v11 += 8;
    *(v11 - 1) = *((_OWORD *)a3 + 7);
    a3 = (const struct LegacyDeviceInfo *)((char *)a3 + 128);
    --v12;
  }
  while ( v12 );
  *v11 = *(_OWORD *)a3;
  v11[1] = *((_OWORD *)a3 + 1);
  v11[2] = *((_OWORD *)a3 + 2);
  v11[3] = *((_OWORD *)a3 + 3);
  v11[4] = *((_OWORD *)a3 + 4);
  *((_QWORD *)v11 + 10) = *((_QWORD *)a3 + 10);
  Microsoft::WRL::Details::Make<Windows::Internal::Input::MPCManager::HomeGestureEventArgs,unsigned int &,unsigned int &,unsigned int &,unsigned __int64 &,unsigned int &>(
    (__int64 *)&v18,
    (unsigned int *)&v22,
    &v21,
    &v20,
    (unsigned __int64 *)v23,
    &v19);
  v14 = 0;
  if ( !v18 )
  {
    wil::details::in1diag3::_FailFast_NullAlloc(
      retaddr,
      (void *)0xAD,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      v13);
    JUMPOUT(0x1800DF3F9LL);
  }
  v15 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Input::MPCManager::MPCManagerClient *,Windows::Internal::Input::MPCManager::HomeGestureEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::InvokeAll<MPCManagerClient *,Windows::Internal::Input::MPCManager::HomeGestureEventArgs *>(
          v10 + 1120,
          v10,
          (__int64)v18);
  if ( v15 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xAF,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      (const char *)(unsigned int)v15);
    __debugbreak();
  }
  v16 = *(_QWORD *)(v10 + 1048);
  if ( v16 )
    v14 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD))(*(_QWORD *)v16 + 24LL))(v16, v25, a4);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IHomeGestureEventArgs,Microsoft::WRL::FtmBase>::Release(v18);
  return v14;
}
