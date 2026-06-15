/*
 * XREFs of ?GetFxClsids@@YAJPEAUIMMDevice@@U_tagpropertykey@@1PEAIPEAPEAU_GUID@@@Z @ 0x18004F4F0
 * Callers:
 *     ?FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HH@Z @ 0x18004E4CC (-FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z @ 0x18004ECF4 (-DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z.c)
 * Callees:
 *     ?IsAPOClsidRegistered@@YA_NPEAUHKEY__@@PEBG@Z @ 0x18004F90C (-IsAPOClsidRegistered@@YA_NPEAUHKEY__@@PEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     ??$make_unique_cotaskmem_nothrow@$$BY0A@U_GUID@@@wil@@YA?AV?$unique_ptr@$$BY0A@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@_K@Z @ 0x18006733C (--$make_unique_cotaskmem_nothrow@$$BY0A@U_GUID@@@wil@@YA-AV-$unique_ptr@$$BY0A@U_GUID@@U-$functi.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800B4814 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800C2BC4 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ??4?$unique_ptr@$$BY0A@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x18012EAC4 (--4-$unique_ptr@$$BY0A@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@@wist.c)
 *     ?IsAPOClsidRegistered@@YA_NPEAUHKEY__@@U_GUID@@@Z @ 0x180134CA0 (-IsAPOClsidRegistered@@YA_NPEAUHKEY__@@U_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall GetFxClsids(
        struct IMMDevice *a1,
        struct _tagpropertykey *a2,
        struct _tagpropertykey *a3,
        unsigned int *a4,
        struct _GUID **a5)
{
  unsigned int v8; // r12d
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  __int64 v12; // rcx
  struct _GUID *v13; // rbx
  int v14; // eax
  int v15; // eax
  struct _GUID **unique_cotaskmem; // rax
  struct _GUID *v18; // rdi
  HRESULT v19; // eax
  GUID *v20; // r15
  unsigned int v21; // r13d
  __int16 v22; // ax
  WCHAR *v23; // rdx
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned int v27; // r15d
  __int64 v28; // r13
  HRESULT v29; // eax
  CONFIGRET v30; // eax
  DWORD v31; // eax
  CONFIGRET v32; // eax
  DWORD v33; // eax
  struct _GUID *v34; // r12
  struct _GUID *v35; // r12
  unsigned int phkDevice; // [rsp+20h] [rbp-E0h]
  int phkDevicea; // [rsp+20h] [rbp-E0h]
  const char *ulFlags; // [rsp+28h] [rbp-D8h]
  LPVOID pv; // [rsp+80h] [rbp-80h] BYREF
  __int64 v40; // [rsp+88h] [rbp-78h] BYREF
  struct _GUID *v41; // [rsp+90h] [rbp-70h] BYREF
  DEVNODE pdnDevInst; // [rsp+98h] [rbp-68h] BYREF
  __int64 v43; // [rsp+A0h] [rbp-60h] BYREF
  PROPVARIANT pvar; // [rsp+A8h] [rbp-58h] BYREF
  LPCOLESTR lpsz; // [rsp+B0h] [rbp-50h]
  __int64 v46; // [rsp+B8h] [rbp-48h]
  PROPVARIANT v47; // [rsp+C0h] [rbp-40h] BYREF
  DEVINSTID_W pDeviceID; // [rsp+C8h] [rbp-38h]
  __int64 v49; // [rsp+D0h] [rbp-30h]
  GUID rguid; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v51; // [rsp+F0h] [rbp-10h]
  GUID v52; // [rsp+F8h] [rbp-8h] BYREF
  int v53; // [rsp+108h] [rbp+8h]
  OLECHAR sz[40]; // [rsp+110h] [rbp+10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  v51 = -2LL;
  v8 = 0;
  *a4 = 0;
  *a5 = 0LL;
  v43 = 0LL;
  v9 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))a1->lpVtbl->QueryInterface)(
         a1,
         &GUID_a4566d7a_c8f5_4150_0b7b_4ee7e744fc5c,
         &v43);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4E0,
      (unsigned int)"internal\\sdk\\inc\\wil\\com.h",
      (const char *)(unsigned int)v9,
      phkDevice);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x74,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
      (const char *)v10,
      phkDevicea);
    goto LABEL_14;
  }
  v40 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v43 + 40LL))(v43, 0LL, &v40);
  v10 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x78,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
      (const char *)(unsigned int)v11,
      phkDevice);
    v12 = v40;
    goto LABEL_12;
  }
  v12 = v40;
  if ( !v40 )
  {
LABEL_11:
    v10 = 0;
    goto LABEL_12;
  }
  pvar = 0LL;
  lpsz = 0LL;
  v46 = 0LL;
  v13 = 0LL;
  v41 = 0LL;
  v14 = (*(__int64 (__fastcall **)(__int64, struct _tagpropertykey *, PROPVARIANT *))(*(_QWORD *)v40 + 40LL))(
          v40,
          a2,
          &pvar);
  v10 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x81,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
      (const char *)(unsigned int)v14,
      phkDevice);
    goto LABEL_68;
  }
  if ( (_WORD)pvar )
  {
    if ( (_WORD)pvar != 31 )
    {
      LODWORD(ulFlags) = (unsigned __int16)pvar;
      v10 = -2147023092;
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)0x87,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
        (const char *)0x8007070CLL,
        (int)"0x%08X",
        ulFlags);
      goto LABEL_68;
    }
    v8 = 1;
    unique_cotaskmem = (struct _GUID **)wil::make_unique_cotaskmem_nothrow<_GUID [0]>(&pv);
    if ( &v41 != unique_cotaskmem )
    {
      v18 = *unique_cotaskmem;
      *unique_cotaskmem = 0LL;
      if ( v18 )
      {
        CoTaskMemFree(0LL);
        v13 = v18;
        v41 = v18;
      }
    }
    CoTaskMemFree(pv);
    if ( !v13 )
    {
      v10 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8B,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
        (const char *)0x8007000ELL,
        phkDevice);
      goto LABEL_68;
    }
    v19 = CLSIDFromString(lpsz, v13);
    v10 = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8C,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
        (const char *)(unsigned int)v19,
        phkDevice);
      goto LABEL_68;
    }
  }
  else
  {
    if ( !a3->pid )
    {
      v25 = *(_QWORD *)&a3->fmtid.Data1;
      if ( !*(_QWORD *)&a3->fmtid.Data1 )
        v25 = *(_QWORD *)a3->fmtid.Data4;
      if ( !v25 )
        goto LABEL_10;
    }
    v15 = (*(__int64 (__fastcall **)(__int64, struct _tagpropertykey *, PROPVARIANT *))(*(_QWORD *)v40 + 40LL))(
            v40,
            a3,
            &pvar);
    v10 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x90,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
        (const char *)(unsigned int)v15,
        phkDevice);
      goto LABEL_68;
    }
    if ( (_WORD)pvar )
    {
      if ( (_WORD)pvar != 4127 )
      {
        LODWORD(ulFlags) = (unsigned __int16)pvar;
        v10 = -2147023092;
        wil::details::in1diag3::Return_HrMsg(
          retaddr,
          (void *)0x93,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
          (const char *)0x8007070CLL,
          (int)"0x%08X",
          ulFlags);
        goto LABEL_68;
      }
      v8 = (unsigned int)lpsz;
      if ( !(_DWORD)lpsz )
      {
        v10 = -2147024883;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x94,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
          (const char *)0x8007000DLL,
          phkDevice);
        goto LABEL_68;
      }
      v26 = wil::make_unique_cotaskmem_nothrow<_GUID [0]>(&pv);
      wistd::unique_ptr<_GUID [0],wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::operator=(
        &v41,
        v26);
      CoTaskMemFree(pv);
      v13 = v41;
      if ( !v41 )
      {
        v10 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x98,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
          (const char *)0x8007000ELL,
          phkDevice);
        goto LABEL_68;
      }
      v27 = 0;
      if ( !v8 )
        goto LABEL_10;
      v28 = 0LL;
      do
      {
        v29 = CLSIDFromString(*(LPCOLESTR *)(v46 + v28), &v13[v27]);
        v10 = v29;
        if ( v29 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x9B,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
            (const char *)(unsigned int)v29,
            phkDevice);
          goto LABEL_68;
        }
        ++v27;
        v28 += 8LL;
      }
      while ( v27 < v8 );
    }
    if ( !v8 )
    {
LABEL_10:
      *a5 = v13;
      *a4 = v8;
      CoTaskMemFree(0LL);
      PropVariantClear(&pvar);
      v12 = v40;
      goto LABEL_11;
    }
  }
  v20 = v13;
  v21 = 0;
  while ( 1 )
  {
    v52 = *v20;
    v53 = 100;
    v22 = 0;
    v47 = 0LL;
    v23 = 0LL;
    pDeviceID = 0LL;
    v49 = 0LL;
    if ( v40 )
    {
      v24 = (*(__int64 (__fastcall **)(__int64, GUID *, PROPVARIANT *))(*(_QWORD *)v40 + 40LL))(v40, &v52, &v47);
      v10 = v24;
      if ( v24 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xAC,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
          (const char *)(unsigned int)v24,
          phkDevice);
        goto LABEL_67;
      }
      v23 = pDeviceID;
      v22 = (__int16)v47;
    }
    if ( v22 != 31 )
    {
      rguid = *v20;
      if ( StringFromGUID2(&rguid, sz, 39) <= 0 || !IsAPOClsidRegistered(HKEY_CLASSES_ROOT, sz) )
      {
        v35 = &v13[v21];
        LODWORD(ulFlags) = v35->Data1;
        v10 = -2005139398;
        wil::details::in1diag3::Return_HrMsg(
          retaddr,
          (void *)0xC5,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
          (const char *)0x887C003ALL,
          (int)"Missing APO registration for {%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}",
          ulFlags,
          v35->Data2,
          v35->Data3,
          v35->Data4[0],
          v35->Data4[1],
          v35->Data4[2],
          v35->Data4[3],
          v35->Data4[4],
          v35->Data4[5],
          v35->Data4[6],
          v35->Data4[7]);
        goto LABEL_67;
      }
      goto LABEL_30;
    }
    v30 = CM_Locate_DevNodeW(&pdnDevInst, v23, 0);
    v31 = CM_MapCrToWin32Err(v30, 0x507u);
    if ( v31 )
    {
      v10 = wil::details::in1diag3::Return_Win32(
              retaddr,
              (void *)0xB3,
              (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
              (const char *)v31,
              phkDevice);
      goto LABEL_67;
    }
    pv = 0LL;
    v32 = CM_Open_DevNode_Key(pdnDevInst, 0x20019u, 0, 1u, (PHKEY)&pv, 1u);
    v33 = CM_MapCrToWin32Err(v32, 0x507u);
    if ( v33 )
      break;
    rguid = *v20;
    if ( !IsAPOClsidRegistered((HKEY)pv, &rguid) )
    {
      v34 = &v13[v21];
      LODWORD(ulFlags) = v34->Data1;
      v10 = -2005139398;
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)0xBD,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
        (const char *)0x887C003ALL,
        (int)"Missing device relative APO registration for {%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}",
        ulFlags,
        v34->Data2,
        v34->Data3,
        v34->Data4[0],
        v34->Data4[1],
        v34->Data4[2],
        v34->Data4[3],
        v34->Data4[4],
        v34->Data4[5],
        v34->Data4[6],
        v34->Data4[7]);
      goto LABEL_63;
    }
    if ( pv )
      RegCloseKey((HKEY)pv);
LABEL_30:
    PropVariantClear(&v47);
    ++v21;
    ++v20;
    if ( v21 >= v8 )
      goto LABEL_10;
  }
  v10 = wil::details::in1diag3::Return_Win32(
          retaddr,
          (void *)0xB7,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
          (const char *)v33,
          phkDevice);
LABEL_63:
  if ( pv )
    RegCloseKey((HKEY)pv);
LABEL_67:
  PropVariantClear(&v47);
LABEL_68:
  CoTaskMemFree(v13);
  PropVariantClear(&pvar);
  v12 = v40;
LABEL_12:
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
LABEL_14:
  if ( v43 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
  return v10;
}
