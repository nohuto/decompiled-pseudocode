/*
 * XREFs of ?CreateStream@CSystemAudioDeviceExclusive@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400308E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140015E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x14002F15C (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     WPP_SF_Ds @ 0x14002F384 (WPP_SF_Ds.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14003CAE8 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
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
  __int64 v11; // rdx
  char *v12; // r15
  __int64 v13; // r8
  struct IUnknown *v14; // rcx
  struct IUnknown *v15; // rdx
  GUID v16; // xmm0
  struct IUnknown *v18; // [rsp+40h] [rbp-40h] BYREF
  struct IUnknown *v19; // [rsp+48h] [rbp-38h] BYREF
  __int128 v20; // [rsp+50h] [rbp-30h]
  __int128 v21; // [rsp+60h] [rbp-20h] BYREF

  v20 = *(_OWORD *)((char *)this + 248);
  v21 = v20;
  EtwEventActivityIdControl(4LL, &v21);
  v8 = 0LL;
  v9 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  if ( !a2 )
  {
    v10 = -2147467261;
    goto LABEL_39;
  }
  if ( !a3 )
  {
    v11 = *((_QWORD *)a2 + 8) - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    if ( !v11 )
      v11 = *((_QWORD *)a2 + 9) - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    if ( !v11 )
    {
      *((_DWORD *)a5 + 238) = 0;
      if ( *(_DWORD *)a2 <= 2u )
      {
        if ( *(_DWORD *)a2 == 2 || *((_DWORD *)a2 + 46) )
        {
          v10 = -2147024809;
LABEL_38:
          if ( v10 >= 0 )
            goto LABEL_44;
          goto LABEL_39;
        }
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
        v10 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IUnknown **))this + 29))(
                *((_QWORD *)this + 29),
                &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
                &v18);
        if ( v10 < 0 )
          goto LABEL_36;
        v10 = CoImpersonateClient();
        if ( v10 < 0 )
          goto LABEL_36;
        v12 = (char *)OpenProcess(0x40u, 0, *((_DWORD *)a2 + 3));
        CoRevertToSelf();
        v13 = *((_QWORD *)a2 + 4);
        if ( (*((_DWORD *)this + 56) & 0x40000) != 0 )
        {
          if ( !v13 )
          {
LABEL_15:
            v10 = -2005139379;
            goto LABEL_34;
          }
          if ( v13 >= *((_QWORD *)this + 46) && v13 <= 50000000 )
          {
            if ( v13 != *((_QWORD *)a2 + 3) )
            {
              v10 = -2005139371;
              goto LABEL_34;
            }
            goto LABEL_24;
          }
        }
        else if ( !v13 || v13 >= *((_QWORD *)this + 46) && v13 <= 50000000 )
        {
          if ( *((_QWORD *)a2 + 3) > 0x2FAF080uLL )
            goto LABEL_15;
LABEL_24:
          v10 = ((__int64 (__fastcall *)(struct IUnknown *, char *))v18->lpVtbl[2].QueryInterface)(v18, v12);
          if ( v10 < 0 )
            goto LABEL_34;
          v14 = v19;
          v15 = v18;
          *((_DWORD *)a5 + 238) = 2;
          if ( v14 != v15 )
          {
            ATL::AtlComQIPtrAssign(&v19, v15, &GUID_44b2c783_5fa3_4983_9d74_9207de1f9e63);
            v14 = v19;
          }
          if ( v14 )
          {
            v10 = ((__int64 (__fastcall *)(struct IUnknown *, char *))v14->lpVtbl[2].Release)(v14, (char *)a5 + 24);
            if ( v10 < 0 )
              goto LABEL_34;
          }
          if ( *(_DWORD *)a2 )
            v16 = GUID_1fe45ed3_b842_4cf2_8df6_43e3d6d10e64;
          else
            v16 = GUID_20404060_f24f_4f89_84c6_8af80b0a17cb;
          *(GUID *)a5 = v16;
          *((_DWORD *)a5 + 236) = 1;
LABEL_36:
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
          v8 = v18;
          v9 = v19;
          goto LABEL_38;
        }
        v10 = -2005139386;
LABEL_34:
        if ( (unsigned __int64)(v12 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(v12);
        goto LABEL_36;
      }
    }
  }
  v10 = -2147024809;
LABEL_39:
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_Ds(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xDu,
      (__int64)&WPP_f0d7d168ecd8305ac247a74819cf4a63_Traceguids,
      v10,
      (__int64)"CSystemAudioDeviceExclusive::CreateStream");
  }
  AudDGTraceLoggingErrorHelper("CSystemAudioDeviceExclusive::CreateStream", 0x18Eu, v10);
  v8 = v18;
  v9 = v19;
LABEL_44:
  if ( v9 )
  {
    ((void (__fastcall *)(struct IUnknown *))v9->lpVtbl->Release)(v9);
    v8 = v18;
  }
  if ( v8 )
    ((void (__fastcall *)(struct IUnknown *))v8->lpVtbl->Release)(v8);
  EtwEventActivityIdControl(4LL, &v21);
  return (unsigned int)v10;
}
