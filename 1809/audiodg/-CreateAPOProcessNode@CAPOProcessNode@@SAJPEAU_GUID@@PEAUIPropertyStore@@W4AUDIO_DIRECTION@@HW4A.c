/*
 * XREFs of ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x14000E6B0
 * Callers:
 *     ?FixupStreamPipe@CPipeInstance@@AEAAJXZ @ 0x14000B36C (-FixupStreamPipe@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000B420 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14000BF50 (-CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@.c)
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@AEAV?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@@Z @ 0x14000C7B0 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14000DAD0 (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x140010F90 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14003A344 (-CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CON.c)
 * Callees:
 *     ?InnerGetCommon@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z @ 0x14000EA70 (-InnerGetCommon@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x14000EE40 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x14001BC40 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001C35C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14002FDF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1400325B4 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     WPP_SF__guid_ @ 0x14003B204 (WPP_SF__guid_.c)
 *     ?GetAPOPropertiesInternal@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z @ 0x140043250 (-GetAPOPropertiesInternal@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAPOProcessNode::CreateAPOProcessNode(
        const struct _GUID *a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        __int128 *a6,
        HKEY *a7)
{
  __int16 v11; // ax
  WCHAR *v12; // rdx
  __int64 v13; // rcx
  OLECHAR *v14; // rax
  HKEY v15; // rdi
  LSTATUS ValueW; // eax
  struct APO_REG_PROPERTIES *v17; // rcx
  APO_REG_PROPERTIES *v18; // rax
  __int64 v19; // rdx
  APO_FLAG Flags; // ebx
  HKEY v21; // rax
  HKEY v22; // rdi
  HKEY v23; // rax
  __int128 v24; // xmm1
  int v26; // eax
  unsigned __int64 v27; // r9
  __int64 v28; // rdx
  CONFIGRET v29; // eax
  DWORD v30; // eax
  CONFIGRET v31; // eax
  DWORD v32; // eax
  int APOPropertiesInternal; // eax
  int Common; // ebx
  OLECHAR *phkResult; // [rsp+20h] [rbp-E0h]
  HKEY hkey; // [rsp+40h] [rbp-C0h] BYREF
  DWORD pdnDevInst; // [rsp+48h] [rbp-B8h] BYREF
  PROPVARIANT pvar; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR *v39; // [rsp+58h] [rbp-A8h]
  __int64 v40; // [rsp+60h] [rbp-A0h]
  __int64 v41; // [rsp+68h] [rbp-98h]
  struct APO_REG_PROPERTIES v42; // [rsp+70h] [rbp-90h] BYREF
  GUID v43; // [rsp+4C0h] [rbp+3C0h] BYREF
  int v44; // [rsp+4D0h] [rbp+3D0h]
  APO_REG_PROPERTIES v45; // [rsp+4E0h] [rbp+3E0h] BYREF
  OLECHAR sz[40]; // [rsp+930h] [rbp+830h] BYREF
  WCHAR SubKey[80]; // [rsp+980h] [rbp+880h] BYREF
  OLECHAR pvData[512]; // [rsp+A20h] [rbp+920h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E68h] [rbp+D68h]

  v41 = -2LL;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF__guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, &WPP_968226bc83e533aa0e0333cfe0d2c4af_Traceguids, a1);
  }
  v43 = *a1;
  v44 = 100;
  v11 = 0;
  pvar = 0LL;
  v12 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  if ( a2 )
  {
    v26 = (*(__int64 (__fastcall **)(__int64, GUID *, PROPVARIANT *))(*(_QWORD *)a2 + 40LL))(a2, &v43, &pvar);
    Common = v26;
    if ( v26 < 0 )
    {
      v27 = (unsigned int)v26;
      v28 = 532LL;
LABEL_53:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v28,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
        (const char *)v27,
        (int)phkResult);
      goto LABEL_26;
    }
    v12 = v39;
    v11 = (__int16)pvar;
  }
  if ( v11 != 31 )
  {
    if ( StringFromGUID2(a1, sz, 39) <= 0 )
    {
      Common = -2147024809;
LABEL_43:
      v28 = 553LL;
      goto LABEL_52;
    }
    v13 = 39LL;
    v14 = sz;
    while ( *v14 )
    {
      ++v14;
      if ( !--v13 )
      {
        Common = -2147024809;
        goto LABEL_20;
      }
    }
    if ( v13 == 1 )
    {
      phkResult = sz;
      Common = StringCchPrintfW(SubKey, 0x4BuLL, L"%s\\%s", L"AudioEngine\\AudioProcessingObjects");
      if ( Common < 0 )
        goto LABEL_43;
      if ( RegOpenKeyExW(HKEY_CLASSES_ROOT, SubKey, 0, 0x20019u, &hkey) )
      {
        Common = -2005139398;
        goto LABEL_43;
      }
      v15 = hkey;
      Common = InnerGetCommon(hkey, a1, &v45);
      if ( Common >= 0 )
      {
        v45.u32NumAPOInterfaces = 1;
        pdnDevInst = 1024;
        ValueW = RegGetValueW(v15, 0LL, L"APOInterface0", 2u, 0LL, pvData, &pdnDevInst);
        Common = ValueW;
        if ( ValueW )
        {
          if ( ValueW > 0 )
            Common = (unsigned __int16)ValueW | 0x80070000;
        }
        else
        {
          Common = CLSIDFromString(pvData, v45.iidAPOInterfaceList);
          if ( Common >= 0 )
          {
            v17 = &v42;
            v18 = &v45;
            v19 = 8LL;
            do
            {
              v17->clsid = v18->clsid;
              *(_OWORD *)&v17->Flags = *(_OWORD *)&v18->Flags;
              *(_OWORD *)&v17->szFriendlyName[6] = *(_OWORD *)&v18->szFriendlyName[6];
              *(_OWORD *)&v17->szFriendlyName[14] = *(_OWORD *)&v18->szFriendlyName[14];
              *(_OWORD *)&v17->szFriendlyName[22] = *(_OWORD *)&v18->szFriendlyName[22];
              *(_OWORD *)&v17->szFriendlyName[30] = *(_OWORD *)&v18->szFriendlyName[30];
              *(_OWORD *)&v17->szFriendlyName[38] = *(_OWORD *)&v18->szFriendlyName[38];
              v17 = (struct APO_REG_PROPERTIES *)((char *)v17 + 128);
              v17[-1].iidAPOInterfaceList[0] = *(IID *)&v18->szFriendlyName[46];
              v18 = (APO_REG_PROPERTIES *)((char *)v18 + 128);
              --v19;
            }
            while ( v19 );
            v17->clsid = v18->clsid;
            *(_OWORD *)&v17->Flags = *(_OWORD *)&v18->Flags;
            *(_OWORD *)&v17->szFriendlyName[6] = *(_OWORD *)&v18->szFriendlyName[6];
            *(_OWORD *)&v17->szFriendlyName[14] = *(_OWORD *)&v18->szFriendlyName[14];
            *(_DWORD *)&v17->szFriendlyName[22] = *(_DWORD *)&v18->szFriendlyName[22];
          }
        }
      }
      RegCloseKey(hkey);
    }
    else
    {
      Common = -2147418113;
    }
LABEL_20:
    if ( Common < 0 )
      goto LABEL_43;
    goto LABEL_21;
  }
  v29 = CM_Locate_DevNodeW(&pdnDevInst, v12, 0);
  v30 = CM_MapCrToWin32Err(v29, 0x507u);
  if ( v30 )
  {
    Common = wil::details::in1diag3::Return_Win32(
               retaddr,
               (void *)0x21D,
               (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
               (const char *)v30,
               (unsigned int)phkResult);
    goto LABEL_26;
  }
  hkey = 0LL;
  v31 = CM_Open_DevNode_Key(pdnDevInst, 0x20019u, 0, 1u, &hkey, 1u);
  v32 = CM_MapCrToWin32Err(v31, 0x507u);
  if ( v32 )
  {
    Common = wil::details::in1diag3::Return_Win32(
               retaddr,
               (void *)0x221,
               (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
               (const char *)v32,
               (unsigned int)phkResult);
    goto LABEL_38;
  }
  APOPropertiesInternal = GetAPOPropertiesInternal(hkey, a1, &v42);
  Common = APOPropertiesInternal;
  if ( APOPropertiesInternal < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x224,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
      (const char *)(unsigned int)APOPropertiesInternal,
      (int)phkResult);
LABEL_38:
    if ( hkey )
      RegCloseKey(hkey);
    goto LABEL_26;
  }
  if ( hkey )
    RegCloseKey(hkey);
LABEL_21:
  Flags = v42.Flags;
  if ( (v42.u32MaxOutputConnections != 1 || v42.u32MaxInputConnections != 1) && (v42.Flags & 0x10) == 0 )
  {
    Common = -2005139401;
    v28 = 557LL;
LABEL_52:
    v27 = (unsigned int)Common;
    goto LABEL_53;
  }
  v21 = (HKEY)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v22 = v21;
  hkey = v21;
  if ( !v21 )
  {
    Common = -2147024882;
    v28 = 560LL;
    goto LABEL_52;
  }
  *((_QWORD *)v21 + 1) = 0LL;
  *((_QWORD *)v21 + 2) = 0LL;
  *((_DWORD *)v21 + 6) = a3;
  *((_QWORD *)v21 + 4) = 0LL;
  *((_DWORD *)v21 + 10) = 2;
  *(_QWORD *)v21 = &CAPOProcessNode::`vftable';
  *((_DWORD *)v21 + 12) = Flags;
  v23 = (HKEY)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  hkey = v23;
  if ( v23 )
  {
    v24 = *a6;
    *((_QWORD *)v23 + 5) = 0LL;
    *((_DWORD *)v23 + 12) = 1;
    *((_DWORD *)v23 + 13) = 1;
    *(_DWORD *)v23 = a4;
    *((_DWORD *)v23 + 1) = a5;
    *(CLSID *)(v23 + 2) = v42.clsid;
    *(_OWORD *)(v23 + 6) = v24;
    *((_QWORD *)v22 + 4) = v23;
    *a7 = v22;
    Common = 0;
  }
  else
  {
    Common = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x233,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
      (const char *)0x8007000ELL,
      (int)phkResult);
    (**(void (__fastcall ***)(HKEY, __int64))v22)(v22, 1LL);
  }
LABEL_26:
  PropVariantClear(&pvar);
  return (unsigned int)Common;
}
