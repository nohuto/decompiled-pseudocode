/*
 * XREFs of ?ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x140034C5C
 * Callers:
 *     ?Initialize@CSystemAudioDeviceExclusive@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x1400369E0 (-Initialize@CSystemAudioDeviceExclusive@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphC.c)
 *     ?Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140039240 (-Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGra.c)
 * Callees:
 *     ?ValidateDevicePipeDescriptor@@YAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x1400019E0 (-ValidateDevicePipeDescriptor@@YAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z.c)
 *     memset_0 @ 0x14001CA76 (memset_0.c)
 *     memcpy_0 @ 0x14001D9AF (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x140035100 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     WPP_SF_Ds @ 0x140035254 (WPP_SF_Ds.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400405A8 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CSystemAudioDeviceBase::ActivateEndpoint(
        CSystemAudioDeviceBase *this,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a2)
{
  int v4; // ebx
  struct IUnknown *v5; // rcx
  int v6; // eax
  unsigned __int16 *v7; // rsi
  __int64 v8; // rcx
  char *v9; // rbx
  int v10; // eax
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rax
  __int64 (__fastcall ***v12)(_QWORD, GUID *, char *); // rcx
  BOOL v13; // r12d
  int v14; // r13d
  __int64 (__fastcall ***v16)(_QWORD, GUID *, char *); // [rsp+38h] [rbp-99h] BYREF
  __int64 (__fastcall ***v17)(_QWORD, GUID *, char *); // [rsp+40h] [rbp-91h] BYREF
  LPVOID ppv; // [rsp+48h] [rbp-89h] BYREF
  PROPVARIANT pvar; // [rsp+50h] [rbp-81h] BYREF
  __int64 v20; // [rsp+58h] [rbp-79h]
  char *v21; // [rsp+60h] [rbp-71h]
  _WORD v22[12]; // [rsp+68h] [rbp-69h] BYREF
  __int128 v23; // [rsp+80h] [rbp-51h]
  int v24; // [rsp+94h] [rbp-3Dh]
  CSystemAudioDeviceBase *v25; // [rsp+98h] [rbp-39h]
  int v26; // [rsp+A0h] [rbp-31h]
  int v27; // [rsp+A8h] [rbp-29h]
  int v28; // [rsp+ACh] [rbp-25h]
  int v29; // [rsp+B0h] [rbp-21h]
  int v30; // [rsp+B4h] [rbp-1Dh]
  int v31; // [rsp+B8h] [rbp-19h]
  int v32; // [rsp+BCh] [rbp-15h]
  int v33; // [rsp+C0h] [rbp-11h]
  int v34; // [rsp+C4h] [rbp-Dh]
  int v35; // [rsp+C8h] [rbp-9h]
  int v36; // [rsp+CCh] [rbp-5h]
  BOOL v37; // [rsp+D0h] [rbp-1h]
  int v38; // [rsp+D4h] [rbp+3h]
  int v39; // [rsp+D8h] [rbp+7h]
  __int64 v40; // [rsp+E8h] [rbp+17h]
  __int64 v41; // [rsp+F0h] [rbp+1Fh]
  struct IUnknown *v42; // [rsp+148h] [rbp+77h] BYREF
  struct IUnknown *v43; // [rsp+150h] [rbp+7Fh] BYREF

  v40 = -2LL;
  ppv = 0LL;
  v42 = 0LL;
  v41 = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  v43 = 0LL;
  pvar = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v4 = ValidateDevicePipeDescriptor((const struct tWAVEFORMATEX **)a2);
  if ( v4 >= 0 )
  {
    v4 = CoCreateInstance(
           &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
           0LL,
           0x17u,
           &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
           &ppv);
    if ( v4 >= 0 )
    {
      v4 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, struct IUnknown **))(*(_QWORD *)ppv + 40LL))(
             ppv,
             *((_QWORD *)a2 + 7),
             &v42);
      if ( v4 >= 0 )
      {
        v5 = v43;
        if ( v43 != v42 )
        {
          ATL::AtlComQIPtrAssign(&v43, v42, &GUID_a4566d7a_c8f5_4150_0b7b_4ee7e744fc5c);
          v5 = v43;
        }
        if ( !v5 )
        {
          v4 = -2147467262;
          goto LABEL_23;
        }
        LOWORD(pvar) = 65;
        v6 = ((__int64 (__fastcall *)(struct IUnknown *))v5->lpVtbl[2].QueryInterface)(v5);
        v7 = (unsigned __int16 *)*((_QWORD *)a2 + 1);
        v8 = v7[8];
        if ( v6 )
        {
          v9 = (char *)CoTaskMemAlloc(v8 + 32);
          if ( !v9 )
            goto LABEL_10;
          *(_DWORD *)v9 = v7[8] + 32;
          *((_DWORD *)v9 + 1) = GetSessionIdFromEndpointId(*((_QWORD *)a2 + 7));
          *((_DWORD *)v9 + 2) = *((_DWORD *)a2 + 25);
          memcpy_0(v9 + 12, v7, v7[8] + 18LL);
          v10 = v7[8] + 32;
        }
        else
        {
          v9 = (char *)CoTaskMemAlloc(v8 + 64);
          if ( !v9 )
          {
LABEL_10:
            v4 = -2147024882;
            goto LABEL_23;
          }
          *(_DWORD *)v9 = v7[8] + 64;
          *((_DWORD *)v9 + 1) = GetSessionIdFromEndpointId(*((_QWORD *)a2 + 7));
          *((_DWORD *)v9 + 2) = *((_DWORD *)a2 + 25);
          *(_OWORD *)(v9 + 12) = *(_OWORD *)((char *)a2 + 104);
          *(_OWORD *)(v9 + 28) = *(_OWORD *)((char *)a2 + 152);
          memcpy_0(v9 + 44, v7, v7[8] + 18LL);
          v10 = v7[8] + 64;
        }
        v21 = v9;
        LODWORD(v20) = v10;
        QueryInterface = v42->lpVtbl[1].QueryInterface;
        if ( *((_DWORD *)a2 + 18) )
        {
          v4 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64, PROPVARIANT *, __int64 (__fastcall ****)(_QWORD, GUID *, char *)))QueryInterface)(
                 v42,
                 &GUID_8026ab61_92b2_43c1_a1df_5c37ebd08d82,
                 1LL,
                 &pvar,
                 &v17);
          if ( v4 < 0 )
            goto LABEL_23;
          v12 = v17;
        }
        else
        {
          v4 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64, PROPVARIANT *, __int64 (__fastcall ****)(_QWORD, GUID *, char *)))QueryInterface)(
                 v42,
                 &GUID_8fa906e4_c31c_4e31_932e_19a66385e9aa,
                 1LL,
                 &pvar,
                 &v16);
          if ( v4 < 0 )
            goto LABEL_23;
          v12 = v16;
        }
        v4 = (**v12)(v12, &GUID_30a99515_1527_4451_af9f_00c5f0234daf, (char *)this + 232);
        v13 = *((_DWORD *)a2 + 20) != 0;
        v14 = *((_DWORD *)a2 + 24);
        if ( g_u32AEWMILogLevel >= 4 )
        {
          memset_0(v22, 0, 0x40uLL);
          v22[0] = 120;
          v24 = 0x20000;
          v23 = AEWMIGUID_ENDPOINT_ACTIVATION;
          v22[2] = 1025;
          v25 = this;
          v26 = 0;
          v27 = *((_DWORD *)a2 + 34);
          v28 = *((_DWORD *)a2 + 25);
          v29 = *((_DWORD *)a2 + 18);
          v30 = *((_DWORD *)a2 + 36);
          v31 = *v7;
          v32 = *((_DWORD *)v7 + 1);
          v33 = v7[7];
          v34 = v7[1];
          v35 = *((_DWORD *)a2 + 8);
          v36 = *((_DWORD *)this + 56);
          v37 = v13;
          v38 = v14;
          v39 = v4;
          EtwLogTraceEvent(g_hAEWMITraceHandle, v22);
        }
        if ( v4 >= 0 )
          (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 29) + 48LL))(
            *((_QWORD *)this + 29),
            *((unsigned int *)this + 56));
      }
    }
  }
LABEL_23:
  PropVariantClear(&pvar);
  if ( v4 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_Ds(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        14,
        (unsigned int)&WPP_f7c1684e0fd03896dd429f2405748dee_Traceguids,
        v4,
        (__int64)"CSystemAudioDeviceBase::ActivateEndpoint");
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceBase::ActivateEndpoint", 0x216u, v4);
  }
  if ( v43 )
    ((void (__fastcall *)(struct IUnknown *))v43->lpVtbl->Release)(v43);
  if ( v16 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, char *)))(*v16)[2])(v16);
  if ( v17 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, char *)))(*v17)[2])(v17);
  if ( v42 )
    ((void (__fastcall *)(struct IUnknown *))v42->lpVtbl->Release)(v42);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)v4;
}
