/*
 * XREFs of ?LoadPropertyStore@CAudioSessionStore@@AEAAJPEBG@Z @ 0x180039C0C
 * Callers:
 *     ?Initialize@CAudioSessionStore@@QEAAJPEBG0@Z @ 0x180039B34 (-Initialize@CAudioSessionStore@@QEAAJPEBG0@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180019940 (--3@YAXPEAX@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180023370 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002A780 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?OpenSessionKey@CAudioSessionStore@@AEAAJPEAPEAUHKEY__@@@Z @ 0x18002CFB0 (-OpenSessionKey@CAudioSessionStore@@AEAAJPEAPEAUHKEY__@@@Z.c)
 *     ?OpenStoreKey@CAudioSessionStore@@AEAAJPEBG@Z @ 0x180039D64 (-OpenStoreKey@CAudioSessionStore@@AEAAJPEBG@Z.c)
 *     ?StringCchCopyA@@YAJPEAD_KPEBD@Z @ 0x180042270 (-StringCchCopyA@@YAJPEAD_KPEBD@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180056510 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006430C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180064330 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x18006B903 (memcpy_0.c)
 *     WPP_SF_ @ 0x1800C2620 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800C2644 (WPP_SF_d.c)
 *     WPP_SF_q @ 0x1800C3F68 (WPP_SF_q.c)
 *     WPP_SF_dd @ 0x1800C889C (WPP_SF_dd.c)
 *     WPP_SF_dg @ 0x1800C88E4 (WPP_SF_dg.c)
 *     ?Destroy@?$CComSafeArray@M$03@ATL@@QEAAJXZ @ 0x1800CD600 (-Destroy@-$CComSafeArray@M$03@ATL@@QEAAJXZ.c)
 *     ?SetAt@?$CComSafeArray@M$03@ATL@@QEAAJJAEBMH@Z @ 0x1800D15CC (-SetAt@-$CComSafeArray@M$03@ATL@@QEAAJJAEBMH@Z.c)
 *     ?StringCbLengthA@@YAJPEBD_KPEA_K@Z @ 0x1800E145C (-StringCbLengthA@@YAJPEBD_KPEA_K@Z.c)
 *     ?StringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x1800E14B4 (-StringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 */

__int64 __fastcall CAudioSessionStore::LoadPropertyStore(CAudioSessionStore *this, const unsigned __int16 *a2)
{
  char v2; // si
  CAudioSessionStore *v3; // rdi
  int v4; // ebx
  int v5; // edx
  DWORD v7; // edx
  int v8; // r15d
  LSTATUS v9; // eax
  RPC_STATUS v10; // eax
  bool v11; // cc
  LSTATUS v12; // eax
  unsigned __int64 v13; // rax
  void *v14; // r14
  BYTE *v15; // r12
  DWORD v16; // eax
  LSTATUS v17; // eax
  _QWORD *v18; // rax
  _QWORD *v19; // r15
  unsigned __int64 v20; // rdx
  CAudioSessionManager *v21; // rcx
  char v22; // di
  unsigned __int64 v23; // r14
  float *v24; // r12
  SAFEARRAY *v25; // rax
  SAFEARRAY *v26; // r13
  unsigned int v27; // edi
  float v28; // xmm0_4
  CAudioSessionManager *v29; // rcx
  char *v30; // rax
  size_t v31; // r8
  const unsigned __int16 *v32; // rdi
  unsigned __int16 *v33; // rax
  SIZE_T v34; // rdx
  const char *v35; // rdi
  char *v36; // rax
  SIZE_T v37; // rdx
  BSTR v38; // rax
  int v39; // ebx
  int v41; // [rsp+68h] [rbp-98h]
  HKEY phkResult; // [rsp+70h] [rbp-90h] BYREF
  DWORD cchName; // [rsp+78h] [rbp-88h] BYREF
  DWORD cbMaxValueNameLen; // [rsp+7Ch] [rbp-84h] BYREF
  DWORD cbMaxValueLen; // [rsp+80h] [rbp-80h] BYREF
  DWORD cbData; // [rsp+84h] [rbp-7Ch] BYREF
  DWORD v47; // [rsp+88h] [rbp-78h]
  DWORD cValues; // [rsp+8Ch] [rbp-74h] BYREF
  SAFEARRAY *v49; // [rsp+90h] [rbp-70h] BYREF
  HKEY hKey; // [rsp+98h] [rbp-68h] BYREF
  float v51; // [rsp+A0h] [rbp-60h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+A8h] [rbp-58h] BYREF
  char v53; // [rsp+B0h] [rbp-50h]
  SAFEARRAYBOUND rgsabound; // [rsp+B8h] [rbp-48h] BYREF
  SIZE_T cb; // [rsp+C0h] [rbp-40h] BYREF
  SIZE_T v56; // [rsp+C8h] [rbp-38h] BYREF
  BYTE *v57; // [rsp+D0h] [rbp-30h]
  void *v58; // [rsp+D8h] [rbp-28h]
  struct _FILETIME ftLastWriteTime; // [rsp+E0h] [rbp-20h] BYREF
  GUID pclsid; // [rsp+E8h] [rbp-18h] BYREF
  WCHAR Name[104]; // [rsp+100h] [rbp+0h] BYREF

  hKey = 0LL;
  v2 = 0;
  phkResult = 0LL;
  v3 = this;
  v4 = CAudioSessionStore::OpenStoreKey(this, a2);
  if ( v4 < 0 )
  {
    v5 = 4464;
    goto LABEL_4;
  }
  v4 = CAudioSessionStore::OpenSessionKey((HKEY *)v3, &hKey);
  if ( v4 < 0 )
  {
    v5 = 4472;
    goto LABEL_4;
  }
  v53 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)v3 + 48);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v7 = 0;
  v8 = 0;
LABEL_7:
  v41 = v8;
  cchName = 100;
  v9 = RegEnumKeyExW(hKey, v7, Name, &cchName, 0LL, 0LL, 0LL, &ftLastWriteTime);
  v4 = v9;
  if ( !v9 )
  {
    v4 = CLSIDFromString(Name, &pclsid);
    if ( v4 < 0 )
      goto LABEL_10;
    v10 = RpcImpersonateClient(0LL);
    if ( v10 )
    {
      if ( v10 != 1725 )
      {
        v11 = v10 <= 0;
LABEL_23:
        if ( v11 )
        {
          v4 = v10;
          goto LABEL_10;
        }
        v39 = (unsigned __int16)v10;
        goto LABEL_115;
      }
    }
    else
    {
      v2 = 1;
    }
    v10 = RegOpenKeyExW(hKey, Name, 0, 0x20019u, &phkResult);
    v11 = v10 <= 0;
    if ( v10 )
      goto LABEL_23;
    if ( v2 )
      RpcRevertToSelf();
    v2 = 0;
    v12 = RegQueryInfoKeyW(
            phkResult,
            0LL,
            0LL,
            0LL,
            0LL,
            0LL,
            0LL,
            &cValues,
            &cbMaxValueNameLen,
            &cbMaxValueLen,
            0LL,
            0LL);
    if ( v12 )
    {
      if ( v12 > 0 )
        v4 = (unsigned __int16)v12 | 0x80070000;
      else
        v4 = v12;
      goto LABEL_113;
    }
    v13 = 2LL * ++cbMaxValueNameLen;
    if ( !is_mul_ok(cbMaxValueNameLen, 2uLL) )
      v13 = -1LL;
    v58 = operator new[](v13, (const struct std::nothrow_t *)&std::nothrow);
    v14 = v58;
    if ( !v58 )
    {
      v4 = -2147024882;
      goto LABEL_113;
    }
    v57 = (BYTE *)operator new[](cbMaxValueLen, (const struct std::nothrow_t *)&std::nothrow);
    v15 = v57;
    if ( !v57 )
    {
      v4 = -2147024882;
      operator delete(v14);
LABEL_113:
      RegCloseKey(phkResult);
      phkResult = 0LL;
      goto LABEL_10;
    }
    v16 = 0;
    v47 = 0;
    if ( !cValues )
      goto LABEL_97;
    while ( 1 )
    {
      cchName = cbMaxValueNameLen;
      cbData = cbMaxValueLen;
      v17 = RegEnumValueW(phkResult, v16, (LPWSTR)v14, &cchName, 0LL, 0LL, v15, &cbData);
      if ( v17 == 259 )
        goto LABEL_96;
      if ( v17 )
      {
        v8 = v41;
        if ( v17 > 0 )
          v4 = (unsigned __int16)v17 | 0x80070000;
        else
          v4 = v17;
LABEL_97:
        operator delete(v15);
        operator delete(v14);
        RegCloseKey(phkResult);
        phkResult = 0LL;
        if ( v4 < 0 )
          goto LABEL_10;
        v7 = ++v8;
        goto LABEL_7;
      }
      v18 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
      v19 = v18;
      if ( !v18 )
      {
        v4 = -2147024882;
LABEL_96:
        v8 = v41;
        goto LABEL_97;
      }
      v18[6] = *((_QWORD *)v3 + 3);
      *((_DWORD *)v18 + 4) = _o__wtoi(v14);
      v4 = 0;
      *(GUID *)v19 = pclsid;
      *(_OWORD *)(v19 + 3) = *(_OWORD *)v15;
      v19[5] = *((_QWORD *)v15 + 2);
      switch ( *((_WORD *)v19 + 12) )
      {
        case 8:
          v38 = SysAllocString((const OLECHAR *)&v15[v19[4]]);
          v19[4] = v38;
          if ( !v38 )
          {
            v4 = -2147024882;
            goto LABEL_95;
          }
          goto LABEL_58;
        case 0x1E:
          v35 = (const char *)&v15[v19[4]];
          v4 = StringCbLengthA(v35, v20, &v56);
          if ( v4 )
            goto LABEL_94;
          v36 = (char *)CoTaskMemAlloc(v56);
          if ( !v36 )
          {
LABEL_93:
            v4 = -2147024882;
LABEL_94:
            v3 = this;
            goto LABEL_95;
          }
          v37 = v56;
          v19[4] = v36;
          StringCchCopyA(v36, v37, v35);
          goto LABEL_57;
        case 0x1F:
          v32 = (const unsigned __int16 *)&v15[v19[4]];
          v4 = StringCbLengthW(v32, 0x7FFFFFFFuLL, &cb);
          if ( v4 )
            goto LABEL_94;
          v33 = (unsigned __int16 *)CoTaskMemAlloc(cb);
          if ( !v33 )
            goto LABEL_93;
          v34 = cb;
          v19[4] = v33;
          v4 = StringCbCopyW(v33, v34, v32);
          if ( v4 )
            goto LABEL_75;
          goto LABEL_57;
        case 0x41:
        case 0x46:
          v30 = (char *)CoTaskMemAlloc(*((unsigned int *)v19 + 8));
          if ( !v30 )
          {
            v4 = -2147024882;
            goto LABEL_95;
          }
          v31 = *((unsigned int *)v19 + 8);
          v19[5] = v30;
          memcpy_0(v30, &v15[(_QWORD)v30], v31);
          goto LABEL_58;
      }
      if ( *((_WORD *)v19 + 12) == 8196 )
        break;
LABEL_58:
      *((_QWORD *)v3 + 3) = v19;
LABEL_95:
      v15 = v57;
      v16 = v47 + 1;
      v14 = v58;
      v47 = v16;
      if ( v16 >= cValues )
        goto LABEL_96;
    }
    v21 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 48LL, &WPP_57d37c8ff9313a19082f121b66211c14_Traceguids);
      v21 = WPP_GLOBAL_Control;
    }
    v22 = cbData - 24;
    v23 = ((unsigned __int64)cbData - 24) >> 2;
    if ( v21 != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)v21 + 28) & 8) != 0
      && *((_BYTE *)v21 + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)v21 + 2), 49LL, &WPP_57d37c8ff9313a19082f121b66211c14_Traceguids, cbData - 24LL);
      v21 = WPP_GLOBAL_Control;
    }
    if ( (v22 & 3) != 0 )
    {
      if ( v21 != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)v21 + 28) & 8) != 0
        && *((_BYTE *)v21 + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)v21 + 2), 50LL, &WPP_57d37c8ff9313a19082f121b66211c14_Traceguids);
      }
LABEL_57:
      v3 = this;
      goto LABEL_58;
    }
    v24 = (float *)&v15[v19[4]];
    rgsabound.cElements = v23;
    rgsabound.lLbound = 0;
    v25 = SafeArrayCreate(4u, 1u, &rgsabound);
    v49 = v25;
    v26 = v25;
    if ( !v25 )
    {
      v4 = -2147024882;
LABEL_61:
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 51LL, &WPP_57d37c8ff9313a19082f121b66211c14_Traceguids);
      }
      goto LABEL_74;
    }
    v4 = SafeArrayLock(v25);
    if ( v4 )
      goto LABEL_61;
    v27 = 0;
    if ( v23 )
    {
      while ( 1 )
      {
        v28 = *v24;
        v51 = *v24;
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_dg(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            52LL,
            &WPP_57d37c8ff9313a19082f121b66211c14_Traceguids,
            v27,
            v28);
        }
        v4 = ATL::CComSafeArray<float,4>::SetAt(&v49, v27, &v51);
        if ( v4 )
          break;
        ++v27;
        ++v24;
        if ( v27 >= v23 )
          goto LABEL_73;
      }
      v29 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CAudioSessionManager *)&WPP_GLOBAL_Control
        || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
      {
        goto LABEL_81;
      }
      WPP_SF_dd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        53LL,
        &WPP_57d37c8ff9313a19082f121b66211c14_Traceguids,
        (unsigned int)v4,
        v27);
    }
    v29 = WPP_GLOBAL_Control;
LABEL_81:
    if ( v4 )
    {
      if ( v29 != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)v29 + 28) & 8) != 0
        && *((_BYTE *)v29 + 25) >= 4u )
      {
        WPP_SF_d(*((_QWORD *)v29 + 2), 54LL, &WPP_57d37c8ff9313a19082f121b66211c14_Traceguids, (unsigned int)v4);
      }
LABEL_74:
      ATL::CComSafeArray<float,4>::Destroy(&v49);
LABEL_75:
      v3 = this;
      goto LABEL_95;
    }
LABEL_73:
    SafeArrayUnlock(v26);
    v49 = 0LL;
    v19[4] = v26;
    ATL::CComSafeArray<float,4>::Destroy(&v49);
    goto LABEL_57;
  }
  if ( v9 == 259 )
  {
    v4 = 0;
    goto LABEL_10;
  }
  if ( v9 > 0 )
  {
    v39 = (unsigned __int16)v9;
LABEL_115:
    v4 = v39 | 0x80070000;
  }
LABEL_10:
  if ( v53 )
    LeaveCriticalSection(lpCriticalSection);
  RegCloseKey(hKey);
  phkResult = 0LL;
  if ( v2 )
    RpcRevertToSelf();
  if ( v4 < 0 )
  {
    v5 = 4825;
LABEL_4:
    AudSrvTraceLoggingErrorHelper("CAudioSessionStore::LoadPropertyStore", v5, v4);
  }
  return (unsigned int)v4;
}
