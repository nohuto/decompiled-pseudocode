/*
 * XREFs of ?GetFxClsids@@YAJPEAUIMMDevice@@U_tagpropertykey@@1PEAIPEAPEAU_GUID@@@Z @ 0x180056560
 * Callers:
 *     ?FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HH@Z @ 0x1800556AC (-FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z @ 0x180055D50 (-DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsAPOClsidRegistered@@YA_NPEAUHKEY__@@PEBG@Z @ 0x1800549F4 (-IsAPOClsidRegistered@@YA_NPEAUHKEY__@@PEBG@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     ??$make_unique_cotaskmem_nothrow@$$BY0A@U_GUID@@@wil@@YA?AV?$unique_ptr@$$BY0A@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@_K@Z @ 0x18006A7B8 (--$make_unique_cotaskmem_nothrow@$$BY0A@U_GUID@@@wil@@YA-AV-$unique_ptr@$$BY0A@U_GUID@@U-$functi.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800C3008 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800D0F38 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?IsAPOClsidRegistered@@YA_NPEAUHKEY__@@U_GUID@@@Z @ 0x18013C134 (-IsAPOClsidRegistered@@YA_NPEAUHKEY__@@U_GUID@@@Z.c)
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
  void *v18; // rcx
  HRESULT v19; // eax
  GUID *v20; // r15
  unsigned int v21; // r13d
  __int16 v22; // ax
  WCHAR *v23; // rdx
  int v24; // eax
  __int64 v25; // rax
  struct _GUID **v26; // rax
  void *v27; // rcx
  unsigned int v28; // r15d
  __int64 v29; // r13
  HRESULT v30; // eax
  CONFIGRET v31; // eax
  DWORD v32; // eax
  CONFIGRET v33; // eax
  DWORD v34; // eax
  struct _GUID *v35; // r12
  struct _GUID *v36; // r12
  unsigned int phkDevice; // [rsp+20h] [rbp-E0h]
  const char *ulFlags; // [rsp+28h] [rbp-D8h]
  LPVOID pv; // [rsp+80h] [rbp-80h] BYREF
  __int64 v40; // [rsp+88h] [rbp-78h] BYREF
  DEVNODE pdnDevInst; // [rsp+90h] [rbp-70h] BYREF
  __int64 v42; // [rsp+98h] [rbp-68h] BYREF
  PROPVARIANT pvar; // [rsp+A0h] [rbp-60h] BYREF
  LPCOLESTR lpsz; // [rsp+A8h] [rbp-58h]
  __int64 v45; // [rsp+B0h] [rbp-50h]
  struct _GUID *v46; // [rsp+B8h] [rbp-48h]
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
  v42 = 0LL;
  v9 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))a1->lpVtbl->QueryInterface)(
         a1,
         &GUID_c537ee8d_5574_454a_9354_aaa4e421d31e,
         &v42);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4C8,
      (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\com.h",
      (const char *)(unsigned int)v9);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x76,
      (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
      (const char *)v10);
    goto LABEL_14;
  }
  v40 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v42 + 40LL))(v42, 0LL, &v40);
  v10 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7A,
      (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
      (const char *)(unsigned int)v11);
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
  v45 = 0LL;
  v13 = 0LL;
  v46 = 0LL;
  v14 = (*(__int64 (__fastcall **)(__int64, struct _tagpropertykey *, PROPVARIANT *))(*(_QWORD *)v40 + 40LL))(
          v40,
          a2,
          &pvar);
  v10 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x83,
      (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
      (const char *)(unsigned int)v14);
    goto LABEL_69;
  }
  if ( (_WORD)pvar )
  {
    if ( (_WORD)pvar != 31 )
    {
      LODWORD(ulFlags) = (unsigned __int16)pvar;
      v10 = -2147023092;
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)0x89,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
        (const char *)0x8007070CLL,
        (int)"0x%08X",
        ulFlags);
      goto LABEL_69;
    }
    v8 = 1;
    unique_cotaskmem = (struct _GUID **)wil::make_unique_cotaskmem_nothrow<_GUID [0]>(&pv);
    v13 = *unique_cotaskmem;
    *unique_cotaskmem = 0LL;
    v46 = v13;
    v18 = pv;
    pv = 0LL;
    if ( v18 )
      CoTaskMemFree(v18);
    if ( !v13 )
    {
      v10 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8D,
        (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
        (const char *)0x8007000ELL);
      goto LABEL_69;
    }
    v19 = CLSIDFromString(lpsz, v13);
    v10 = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8E,
        (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
        (const char *)(unsigned int)v19);
      goto LABEL_69;
    }
  }
  else
  {
    if ( a3->pid )
      goto LABEL_8;
    v25 = *(_QWORD *)&a3->fmtid.Data1;
    if ( !*(_QWORD *)&a3->fmtid.Data1 )
      v25 = *(_QWORD *)a3->fmtid.Data4;
    if ( v25 )
    {
LABEL_8:
      v15 = (*(__int64 (__fastcall **)(__int64, struct _tagpropertykey *, PROPVARIANT *))(*(_QWORD *)v40 + 40LL))(
              v40,
              a3,
              &pvar);
      v10 = v15;
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x92,
          (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
          (const char *)(unsigned int)v15);
        goto LABEL_69;
      }
      if ( (_WORD)pvar )
      {
        if ( (_WORD)pvar != 4127 )
        {
          LODWORD(ulFlags) = (unsigned __int16)pvar;
          v10 = -2147023092;
          wil::details::in1diag3::Return_HrMsg(
            retaddr,
            (void *)0x95,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
            (const char *)0x8007070CLL,
            (int)"0x%08X",
            ulFlags);
          goto LABEL_69;
        }
        v8 = (unsigned int)lpsz;
        if ( !(_DWORD)lpsz )
        {
          v10 = -2147024883;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x96,
            (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
            (const char *)0x8007000DLL);
          goto LABEL_69;
        }
        v26 = (struct _GUID **)wil::make_unique_cotaskmem_nothrow<_GUID [0]>(&pv);
        v13 = *v26;
        *v26 = 0LL;
        v46 = v13;
        v27 = pv;
        pv = 0LL;
        if ( v27 )
          CoTaskMemFree(v27);
        if ( !v13 )
        {
          v10 = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x9A,
            (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
            (const char *)0x8007000ELL);
          goto LABEL_69;
        }
        v28 = 0;
        if ( !v8 )
          goto LABEL_10;
        v29 = 0LL;
        do
        {
          v30 = CLSIDFromString(*(LPCOLESTR *)(v45 + v29), &v13[v28]);
          v10 = v30;
          if ( v30 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x9D,
              (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
              (const char *)(unsigned int)v30);
            goto LABEL_69;
          }
          ++v28;
          v29 += 8LL;
        }
        while ( v28 < v8 );
      }
    }
    if ( !v8 )
    {
LABEL_10:
      *a5 = v13;
      *a4 = v8;
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
          (void *)0xAE,
          (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
          (const char *)(unsigned int)v24);
        goto LABEL_68;
      }
      v23 = pDeviceID;
      v22 = (__int16)v47;
    }
    if ( v22 != 31 )
    {
      rguid = *v20;
      if ( StringFromGUID2(&rguid, sz, 39) <= 0 || !IsAPOClsidRegistered(HKEY_CLASSES_ROOT, sz) )
      {
        v36 = &v13[v21];
        LODWORD(ulFlags) = v36->Data1;
        v10 = -2005139398;
        wil::details::in1diag3::Return_HrMsg(
          retaddr,
          (void *)0xC7,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
          (const char *)0x887C003ALL,
          (int)"Missing APO registration for {%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}",
          ulFlags,
          v36->Data2,
          v36->Data3,
          v36->Data4[0],
          v36->Data4[1],
          v36->Data4[2],
          v36->Data4[3],
          v36->Data4[4],
          v36->Data4[5],
          v36->Data4[6],
          v36->Data4[7],
          pv);
        goto LABEL_68;
      }
      goto LABEL_29;
    }
    v31 = CM_Locate_DevNodeW(&pdnDevInst, v23, 0);
    v32 = CM_MapCrToWin32Err(v31, 0x507u);
    if ( v32 )
    {
      v10 = wil::details::in1diag3::Return_Win32(
              retaddr,
              (void *)0xB5,
              (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
              (const char *)v32,
              phkDevice);
      goto LABEL_68;
    }
    pv = 0LL;
    v33 = CM_Open_DevNode_Key(pdnDevInst, 0x20019u, 0, 1u, (PHKEY)&pv, 1u);
    v34 = CM_MapCrToWin32Err(v33, 0x507u);
    if ( v34 )
      break;
    rguid = *v20;
    if ( !IsAPOClsidRegistered((HKEY)pv, &rguid) )
    {
      v35 = &v13[v21];
      LODWORD(ulFlags) = v35->Data1;
      v10 = -2005139398;
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)0xBF,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
        (const char *)0x887C003ALL,
        (int)"Missing device relative APO registration for {%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}",
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
      goto LABEL_64;
    }
    if ( pv )
      RegCloseKey((HKEY)pv);
LABEL_29:
    PropVariantClear(&v47);
    ++v21;
    ++v20;
    if ( v21 >= v8 )
      goto LABEL_10;
  }
  v10 = wil::details::in1diag3::Return_Win32(
          retaddr,
          (void *)0xB9,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
          (const char *)v34,
          phkDevice);
LABEL_64:
  if ( pv )
    RegCloseKey((HKEY)pv);
LABEL_68:
  PropVariantClear(&v47);
LABEL_69:
  if ( v13 )
    CoTaskMemFree(v13);
  PropVariantClear(&pvar);
  v12 = v40;
LABEL_12:
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
LABEL_14:
  if ( v42 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
  return v10;
}
