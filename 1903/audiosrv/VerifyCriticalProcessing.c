/*
 * XREFs of VerifyCriticalProcessing @ 0x180006084
 * Callers:
 *     ReconsiderSpatialOnComboEndpoints @ 0x180005568 (ReconsiderSpatialOnComboEndpoints.c)
 * Callees:
 *     ?IsSpeakerOverrideEnabled@AtmosCheck@@QEAAHPEBG@Z @ 0x1800030B4 (-IsSpeakerOverrideEnabled@AtmosCheck@@QEAAHPEBG@Z.c)
 *     ?LogSpatialCriticalProcessingList@@YAXPEBGKK_N@Z @ 0x1800057B0 (-LogSpatialCriticalProcessingList@@YAXPEBGKK_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     GetPackedSysFx2List @ 0x1800070D0 (GetPackedSysFx2List.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18003A5B0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??B?$ComPtrRef@V?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAVAtmosCheck@@XZ @ 0x180067B90 (--B-$ComPtrRef@V-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAVAtmosCh.c)
 *     ?GetAtmosCheckInstance@CSpatialAudioTech@@CAJPEAPEAVAtmosCheck@@@Z @ 0x180068790 (-GetAtmosCheckInstance@CSpatialAudioTech@@CAJPEAPEAVAtmosCheck@@@Z.c)
 *     ??1?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@QEAA@XZ @ 0x180069FD8 (--1-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VerifyCriticalProcessing(__int64 a1, __int64 a2, bool *a3)
{
  BOOL IsSpeakerOverrideEnabled; // esi
  const unsigned __int16 *v7; // r15
  struct AtmosCheck **v8; // rax
  int v9; // eax
  int v10; // ebx
  int PackedSysFx2List; // ebx
  int v12; // eax
  LPVOID pv; // [rsp+20h] [rbp-30h] BYREF
  unsigned __int16 *v15[3]; // [rsp+28h] [rbp-28h] BYREF
  GUID v16; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  AtmosCheck *v18; // [rsp+90h] [rbp+40h] BYREF
  AtmosCheck **v19; // [rsp+98h] [rbp+48h] BYREF

  v15[1] = (unsigned __int16 *)-2LL;
  *a3 = 0;
  v15[0] = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    v15,
    0LL);
  if ( (int)mmdDevGetInterfaceIdFromMMDevice(a2, v15) < 0 )
    goto LABEL_10;
  IsSpeakerOverrideEnabled = 0;
  v7 = v15[0];
  v18 = 0LL;
  v19 = &v18;
  v8 = (struct AtmosCheck **)Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<AtmosCheck>>::operator AtmosCheck * *(&v19);
  v9 = CSpatialAudioTech::GetAtmosCheckInstance(v8);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x82,
      (__int64)"avcore\\audiocore\\server\\lib\\spatialsettings\\spatialproviders.h",
      (const char *)(unsigned int)v9);
    Microsoft::WRL::ComPtr<AtmosCheck>::~ComPtr<AtmosCheck>(&v18);
    goto LABEL_7;
  }
  if ( !v18 )
  {
    Microsoft::WRL::ComPtr<AtmosCheck>::~ComPtr<AtmosCheck>(&v18);
    v10 = -2147418113;
LABEL_7:
    if ( v10 < 0 )
      goto LABEL_10;
    goto LABEL_8;
  }
  IsSpeakerOverrideEnabled = AtmosCheck::IsSpeakerOverrideEnabled(v18, v7);
  Microsoft::WRL::ComPtr<AtmosCheck>::~ComPtr<AtmosCheck>(&v18);
LABEL_8:
  if ( IsSpeakerOverrideEnabled )
  {
    *a3 = 1;
    PackedSysFx2List = 0;
    goto LABEL_17;
  }
LABEL_10:
  v16 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  PackedSysFx2List = GetPackedSysFx2List(a1, &v16, &v19);
  if ( PackedSysFx2List >= 0 )
  {
    v16 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    PackedSysFx2List = GetPackedSysFx2List(a1, &v16, &v18);
    if ( PackedSysFx2List >= 0 )
    {
      *a3 = (((unsigned int)v19 | (unsigned int)v18) & 0x28800) == 0;
      pv = 0LL;
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        &pv,
        0LL);
      v12 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)a2 + 40LL))(a2, &pv);
      PackedSysFx2List = v12;
      if ( v12 >= 0 )
      {
        LogSpatialCriticalProcessingList((const unsigned __int16 *)pv);
        PackedSysFx2List = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xFE,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
          (const char *)(unsigned int)v12);
      }
      if ( pv )
        CoTaskMemFree(pv);
    }
  }
LABEL_17:
  if ( v15[0] )
    CoTaskMemFree(v15[0]);
  return (unsigned int)PackedSysFx2List;
}
