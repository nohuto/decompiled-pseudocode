/*
 * XREFs of ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x1400074C0
 * Callers:
 *     ?FixupStreamPipe@CPipeInstance@@AEAAJXZ @ 0x140003E3C (-FixupStreamPipe@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x140004980 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x140004F50 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140005B20 (-CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@.c)
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@AEAV?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@@Z @ 0x14000607C (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x1400066B4 (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM.c)
 *     ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140034F84 (-CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CON.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x14000778C (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?InnerGetAPOProperties@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z @ 0x140007804 (-InnerGetAPOProperties@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z.c)
 *     __security_check_cookie @ 0x140015A80 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001619C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028234 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x14002B834 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     WPP_SF__guid_ @ 0x140035CE8 (WPP_SF__guid_.c)
 *     ?GetAPOPropertiesInternal@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z @ 0x1400402F0 (-GetAPOPropertiesInternal@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAPOProcessNode::CreateAPOProcessNode(
        const struct _GUID *a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        _OWORD *a6,
        HKEY *a7)
{
  __int16 v11; // ax
  WCHAR *v12; // rdx
  __int64 v13; // rcx
  OLECHAR *v14; // rax
  APO_FLAG Flags; // edi
  HKEY v16; // rax
  HKEY v17; // rbx
  HKEY v18; // rax
  int v20; // eax
  CONFIGRET v21; // eax
  DWORD v22; // eax
  CONFIGRET v23; // eax
  DWORD v24; // eax
  int APOPropertiesInternal; // eax
  int APOProperties; // edi
  __int64 v27; // rdx
  OLECHAR *phkResult; // [rsp+20h] [rbp-E0h]
  HKEY hKey; // [rsp+30h] [rbp-D0h] BYREF
  DEVNODE pdnDevInst; // [rsp+38h] [rbp-C8h] BYREF
  PROPVARIANT pvar; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR *v32; // [rsp+48h] [rbp-B8h]
  __int64 v33; // [rsp+50h] [rbp-B0h]
  __int64 v34; // [rsp+58h] [rbp-A8h]
  struct APO_REG_PROPERTIES v35; // [rsp+60h] [rbp-A0h] BYREF
  struct _GUID v36; // [rsp+4B0h] [rbp+3B0h] BYREF
  int v37; // [rsp+4C0h] [rbp+3C0h]
  OLECHAR sz[40]; // [rsp+4D0h] [rbp+3D0h] BYREF
  WCHAR SubKey[80]; // [rsp+520h] [rbp+420h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+608h] [rbp+508h]

  v34 = -2LL;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF__guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, &WPP_8d9f8a1f47633de0740c8ad81d33d659_Traceguids, a1);
  }
  v36 = *a1;
  v37 = 100;
  v11 = 0;
  pvar = 0LL;
  v12 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  if ( a2 )
  {
    v20 = (*(__int64 (__fastcall **)(__int64, struct _GUID *, PROPVARIANT *))(*(_QWORD *)a2 + 40LL))(a2, &v36, &pvar);
    APOProperties = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x21C,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
        (const char *)(unsigned int)v20,
        (int)phkResult);
      goto LABEL_22;
    }
    v12 = v32;
    v11 = (__int16)pvar;
  }
  if ( v11 == 31 )
  {
    v21 = CM_Locate_DevNodeW(&pdnDevInst, v12, 0);
    v22 = CM_MapCrToWin32Err(v21, 0x507u);
    if ( v22 )
    {
      APOProperties = wil::details::in1diag3::Return_Win32(
                        retaddr,
                        (void *)0x225,
                        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
                        (const char *)v22,
                        (unsigned int)phkResult);
      goto LABEL_22;
    }
    hKey = 0LL;
    v23 = CM_Open_DevNode_Key(pdnDevInst, 0x20019u, 0, 1u, &hKey, 1u);
    v24 = CM_MapCrToWin32Err(v23, 0x507u);
    if ( v24 )
    {
      APOProperties = wil::details::in1diag3::Return_Win32(
                        retaddr,
                        (void *)0x229,
                        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
                        (const char *)v24,
                        (unsigned int)phkResult);
    }
    else
    {
      APOPropertiesInternal = GetAPOPropertiesInternal(hKey, a1, &v35);
      APOProperties = APOPropertiesInternal;
      if ( APOPropertiesInternal >= 0 )
      {
        if ( hKey )
          RegCloseKey(hKey);
        goto LABEL_15;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x22C,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
        (const char *)(unsigned int)APOPropertiesInternal,
        (int)phkResult);
    }
    if ( hKey )
      RegCloseKey(hKey);
    goto LABEL_22;
  }
  if ( StringFromGUID2(a1, sz, 39) <= 0 )
  {
    APOProperties = -2147024809;
LABEL_39:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x231,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
      (const char *)(unsigned int)APOProperties,
      (int)phkResult);
    goto LABEL_22;
  }
  v13 = 39LL;
  v14 = sz;
  while ( *v14 )
  {
    ++v14;
    if ( !--v13 )
    {
      APOProperties = -2147024809;
      goto LABEL_14;
    }
  }
  if ( v13 == 1 )
  {
    phkResult = sz;
    APOProperties = StringCchPrintfW(SubKey, 0x4BuLL, L"%s\\%s", L"AudioEngine\\AudioProcessingObjects");
    if ( APOProperties < 0 )
      goto LABEL_39;
    if ( RegOpenKeyExW(HKEY_CLASSES_ROOT, SubKey, 0, 0x20019u, &hKey) )
    {
      APOProperties = -2005139398;
      goto LABEL_39;
    }
    APOProperties = InnerGetAPOProperties(hKey, a1, &v35);
    RegCloseKey(hKey);
  }
  else
  {
    APOProperties = -2147418113;
  }
LABEL_14:
  if ( APOProperties < 0 )
    goto LABEL_39;
LABEL_15:
  Flags = v35.Flags;
  if ( (v35.u32MaxOutputConnections != 1 || v35.u32MaxInputConnections != 1) && (v35.Flags & 0x10) == 0 )
  {
    APOProperties = -2005139401;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x235,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
      (const char *)0x887C0037LL,
      (int)phkResult);
    goto LABEL_22;
  }
  v16 = (HKEY)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v17 = v16;
  hKey = v16;
  if ( v16 )
  {
    *((_QWORD *)v16 + 1) = 0LL;
    *((_QWORD *)v16 + 2) = 0LL;
    *((_DWORD *)v16 + 6) = a3;
    *((_QWORD *)v16 + 4) = 0LL;
    *((_DWORD *)v16 + 10) = 2;
    *(_QWORD *)v16 = &CAPOProcessNode::`vftable';
    *((_DWORD *)v16 + 12) = Flags;
  }
  else
  {
    v17 = 0LL;
  }
  if ( v17 )
  {
    v18 = (HKEY)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    hKey = v18;
    if ( v18 )
    {
      *((_QWORD *)v18 + 5) = 0LL;
      *((_DWORD *)v18 + 12) = 1;
      *((_DWORD *)v18 + 13) = 1;
      *(_DWORD *)v18 = a4;
      *((_DWORD *)v18 + 1) = a5;
      *(CLSID *)(v18 + 2) = v35.clsid;
      *(_OWORD *)(v18 + 6) = *a6;
      *((_QWORD *)v17 + 4) = v18;
      *a7 = v17;
      APOProperties = 0;
      goto LABEL_22;
    }
    v27 = 571LL;
  }
  else
  {
    v27 = 568LL;
  }
  APOProperties = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v27,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
    (const char *)0x8007000ELL,
    (int)phkResult);
  if ( v17 )
    (**(void (__fastcall ***)(HKEY, __int64))v17)(v17, 1LL);
LABEL_22:
  PropVariantClear(&pvar);
  return (unsigned int)APOProperties;
}
