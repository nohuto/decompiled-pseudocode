/*
 * XREFs of ?CreateStream@CSystemAudioDeviceExclusive@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140036380
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14001BC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x140035100 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     WPP_SF_Ds @ 0x140035254 (WPP_SF_Ds.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400405A8 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceExclusive::CreateStream(
        CSystemAudioDeviceExclusive *this,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        struct AUDIO_DEVICE_MODE_DESCRIPTOR *a3,
        struct IAudioGraphCallback *a4,
        struct SYSTEM_AUDIO_STREAM *a5)
{
  struct IUnknown *v8; // rcx
  struct IUnknown *v9; // rax
  HRESULT v10; // ebx
  char *v11; // r15
  __int64 v12; // r8
  struct IUnknown *v13; // rcx
  GUID v14; // xmm0
  struct IUnknown *v16; // [rsp+40h] [rbp-40h] BYREF
  struct IUnknown *v17; // [rsp+48h] [rbp-38h] BYREF
  __int128 v18; // [rsp+50h] [rbp-30h]
  __int128 v19; // [rsp+60h] [rbp-20h] BYREF

  v18 = *(_OWORD *)((char *)this + 248);
  v19 = v18;
  EtwEventActivityIdControl(4LL, &v19);
  v8 = 0LL;
  v9 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  if ( !a2 )
  {
    v10 = -2147467261;
    goto LABEL_36;
  }
  if ( !a3 && *(_DWORD *)a2 <= 2u )
  {
    if ( *(_DWORD *)a2 == 2 || *((_DWORD *)a2 + 34) )
    {
      v10 = -2147024809;
LABEL_35:
      if ( v10 >= 0 )
        goto LABEL_41;
      goto LABEL_36;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
    v10 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IUnknown **))this + 29))(
            *((_QWORD *)this + 29),
            &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
            &v16);
    if ( v10 < 0 )
      goto LABEL_33;
    v10 = CoImpersonateClient();
    if ( v10 < 0 )
      goto LABEL_33;
    v11 = (char *)OpenProcess(0x40u, 0, *((_DWORD *)a2 + 3));
    CoRevertToSelf();
    v12 = *((_QWORD *)a2 + 4);
    if ( (*((_DWORD *)this + 56) & 0x40000) != 0 )
    {
      if ( !v12 )
      {
LABEL_12:
        v10 = -2005139379;
        goto LABEL_31;
      }
      if ( v12 >= *((_QWORD *)this + 46) && v12 <= 50000000 )
      {
        if ( v12 != *((_QWORD *)a2 + 3) )
        {
          v10 = -2005139371;
          goto LABEL_31;
        }
        goto LABEL_21;
      }
    }
    else if ( !v12 || v12 >= *((_QWORD *)this + 46) && v12 <= 50000000 )
    {
      if ( *((_QWORD *)a2 + 3) > 0x2FAF080uLL )
        goto LABEL_12;
LABEL_21:
      v10 = ((__int64 (__fastcall *)(struct IUnknown *, char *))v16->lpVtbl[2].QueryInterface)(v16, v11);
      if ( v10 < 0 )
        goto LABEL_31;
      v13 = v17;
      if ( v17 != v16 )
      {
        ATL::AtlComQIPtrAssign(&v17, v16, &GUID_44b2c783_5fa3_4983_9d74_9207de1f9e63);
        v13 = v17;
      }
      if ( v13 )
      {
        v10 = ((__int64 (__fastcall *)(struct IUnknown *, char *))v13->lpVtbl[2].Release)(v13, (char *)a5 + 40);
        if ( v10 < 0 )
          goto LABEL_31;
      }
      if ( *(_DWORD *)a2 )
        v14 = GUID_1fe45ed3_b842_4cf2_8df6_43e3d6d10e64;
      else
        v14 = GUID_20404060_f24f_4f89_84c6_8af80b0a17cb;
      *(GUID *)a5 = v14;
      *((_DWORD *)a5 + 22) = 1;
LABEL_33:
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
      v8 = v16;
      v9 = v17;
      goto LABEL_35;
    }
    v10 = -2005139386;
LABEL_31:
    if ( (unsigned __int64)(v11 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v11);
    goto LABEL_33;
  }
  v10 = -2147024809;
LABEL_36:
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_Ds(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xDu,
      (__int64)&WPP_81a282081b573639e4b368def695fbcb_Traceguids,
      v10,
      (__int64)"CSystemAudioDeviceExclusive::CreateStream");
  }
  AudDGTraceLoggingErrorHelper("CSystemAudioDeviceExclusive::CreateStream", 0x187u, v10);
  v8 = v16;
  v9 = v17;
LABEL_41:
  if ( v9 )
  {
    ((void (__fastcall *)(struct IUnknown *))v9->lpVtbl->Release)(v9);
    v8 = v16;
  }
  if ( v8 )
    ((void (__fastcall *)(struct IUnknown *))v8->lpVtbl->Release)(v8);
  EtwEventActivityIdControl(4LL, &v19);
  return (unsigned int)v10;
}
