/*
 * XREFs of ?DeriveStreamGroupParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SYSTEM_AUDIO_STREAM_TYPE@@_JU_GUID@@4_N5PEBUtWAVEFORMATEX@@HAEAV?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@@Z @ 0x18003B400
 * Callers:
 *     ?BuildDeviceGraphForStream@@YAJPEAVCEndpointCharacteristics@@PEAUIAudioStreamInfo@@PEAUIAudioProcess@@PEAUIDeviceGraphObjectsStore@@KKW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@6PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEBUtWAVEFORMATEX@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioGraphCallback@@K_NPEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18003AF70 (-BuildDeviceGraphForStream@@YAJPEAVCEndpointCharacteristics@@PEAUIAudioStreamInfo@@PEAUIAudioPro.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800F63A4 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800642D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006430C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x18006B903 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_Idd @ 0x1800FA3C4 (WPP_SF_Idd.c)
 *     ?CreateInstance@CAecAttributes@@SAJPEBGW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@W4AecParam@@PEAPEAVCStreamGroupAttributes@@@Z @ 0x1800FC418 (-CreateInstance@CAecAttributes@@SAJPEBGW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@W4AecPara.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DeriveStreamGroupParametersForStream(
        __int64 a1,
        int a2,
        int a3,
        void *a4,
        LPVOID a5,
        __int128 *a6,
        char a7,
        char a8,
        unsigned __int16 *Src,
        int a10,
        LPVOID **a11)
{
  int v14; // eax
  int v15; // esi
  unsigned __int16 *v16; // rsi
  __int64 v17; // rbx
  void *v18; // rax
  void *v19; // rdi
  LPVOID *v20; // rax
  LPVOID *v21; // rdi
  LPVOID *v22; // rbx
  LPVOID v23; // rsi
  void *v24; // rsi
  __int64 v25; // r8
  __int128 v26; // xmm0
  unsigned __int8 v27; // bp
  unsigned __int8 v28; // r14
  LPVOID *v29; // rsi
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  int Instance; // eax
  LPVOID *v37; // [rsp+30h] [rbp-48h] BYREF
  __int64 v38; // [rsp+38h] [rbp-40h]
  __int128 v39; // [rsp+40h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  void *pv; // [rsp+80h] [rbp+8h]

  v38 = -2LL;
  a5 = 0LL;
  v14 = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(**(_QWORD **)(a1 + 16) + 40LL))(*(_QWORD *)(a1 + 16), &a5);
  v15 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x362,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v14);
    goto LABEL_19;
  }
  v16 = Src;
  v17 = Src[8];
  v18 = CoTaskMemAlloc(v17 + 18);
  v19 = v18;
  if ( v18 )
  {
    memcpy_0(v18, v16, v17 + 18);
    v15 = 0;
  }
  else
  {
    v15 = -2147024882;
  }
  pv = v19;
  if ( v15 >= 0 )
  {
    v20 = (LPVOID *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
    v21 = v20;
    if ( v20 )
    {
      v20[1] = 0LL;
      v20[3] = 0LL;
      v20[4] = 0LL;
      v20[5] = 0LL;
      v20[6] = 0LL;
      *v20 = 0LL;
      v20[2] = 0LL;
      v20[7] = 0LL;
    }
    else
    {
      v21 = 0LL;
    }
    v22 = v21;
    v37 = v21;
    if ( v21 )
    {
      v23 = a5;
      a5 = 0LL;
      CoTaskMemFree(*v21);
      *v21 = v23;
      *((_BYTE *)v21 + 49) = a2 == 3;
      v24 = pv;
      pv = 0LL;
      CoTaskMemFree(v21[2]);
      v21[2] = v24;
      v21[3] = a4;
      v26 = *a6;
      *((_OWORD *)v21 + 2) = *a6;
      v27 = a7;
      *((_BYTE *)v21 + 48) = a7;
      v28 = a8;
      *((_BYTE *)v21 + 50) = a8;
      *((_DWORD *)v21 + 2) = a3;
      v39 = v26;
      v21[7] = 0LL;
      if ( !a10 )
        goto LABEL_9;
      v31 = v39 - *(_QWORD *)&GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2.Data1;
      if ( (_QWORD)v39 == *(_QWORD *)&GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2.Data1 )
        v31 = *((_QWORD *)&v39 + 1) - *(_QWORD *)GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2.Data4;
      if ( !v31 )
        goto LABEL_40;
      v32 = v39 - *(_QWORD *)&GUID_8335b450_c436_4bb7_8639_f4bb0553e6e0.Data1;
      if ( (_QWORD)v39 == *(_QWORD *)&GUID_8335b450_c436_4bb7_8639_f4bb0553e6e0.Data1 )
        v32 = *((_QWORD *)&v39 + 1) - *(_QWORD *)GUID_8335b450_c436_4bb7_8639_f4bb0553e6e0.Data4;
      if ( !v32 )
        goto LABEL_40;
      v33 = v39 - *(_QWORD *)&GUID_461d14af_a88e_4be1_a809_d8bfd44b0121.Data1;
      if ( (_QWORD)v39 == *(_QWORD *)&GUID_461d14af_a88e_4be1_a809_d8bfd44b0121.Data1 )
        v33 = *((_QWORD *)&v39 + 1) - *(_QWORD *)GUID_461d14af_a88e_4be1_a809_d8bfd44b0121.Data4;
      if ( v33 )
      {
        v34 = v39 - *(_QWORD *)&GUID_98951333_b9cd_48b1_a0a3_ff40682d73f7.Data1;
        if ( (_QWORD)v39 == *(_QWORD *)&GUID_98951333_b9cd_48b1_a0a3_ff40682d73f7.Data1 )
          v34 = *((_QWORD *)&v39 + 1) - *(_QWORD *)GUID_98951333_b9cd_48b1_a0a3_ff40682d73f7.Data4;
        if ( v34 )
          goto LABEL_9;
        v35 = 2LL;
      }
      else
      {
LABEL_40:
        v35 = 0LL;
      }
      Instance = CAecAttributes::CreateInstance(0LL, v35);
      v15 = Instance;
      if ( Instance >= 0 )
      {
LABEL_9:
        if ( a11 != &v37 )
        {
          v22 = 0LL;
          v29 = *a11;
          *a11 = v21;
          if ( v29 )
          {
            operator delete(v29[7], (const struct std::nothrow_t *)0x10);
            v29[7] = 0LL;
            CoTaskMemFree(v29[2]);
            v29[2] = 0LL;
            CoTaskMemFree(*v29);
            *v29 = 0LL;
            operator delete(v29, (const struct std::nothrow_t *)0x40);
          }
        }
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_Idd(*((_QWORD *)WPP_GLOBAL_Control + 2), v27, v25, a4, v27, v28, v37, v38);
        }
        v15 = 0;
        goto LABEL_15;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x373,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)Instance);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x368,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)0x8007000ELL);
      v15 = -2147024882;
    }
LABEL_15:
    if ( v22 )
    {
      operator delete(v22[7], (const struct std::nothrow_t *)0x10);
      v22[7] = 0LL;
      CoTaskMemFree(v22[2]);
      v22[2] = 0LL;
      CoTaskMemFree(*v22);
      *v22 = 0LL;
      operator delete(v22, (const struct std::nothrow_t *)0x40);
    }
    goto LABEL_17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x365,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)(unsigned int)v15);
LABEL_17:
  if ( pv )
    CoTaskMemFree(pv);
LABEL_19:
  if ( a5 )
    CoTaskMemFree(a5);
  return (unsigned int)v15;
}
