/*
 * XREFs of ?OpenSessionKey@CAudioSessionStore@@AEAAJPEAPEAUHKEY__@@@Z @ 0x18001F2CC
 * Callers:
 *     ?LoadPropertyStore@CAudioSessionStore@@AEAAJXZ @ 0x180006E2C (-LoadPropertyStore@CAudioSessionStore@@AEAAJXZ.c)
 *     ?Commit@CAudioSessionStore@@UEAAJXZ @ 0x180009AA0 (-Commit@CAudioSessionStore@@UEAAJXZ.c)
 * Callees:
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x180007220 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800095D0 (--3@YAXPEAX@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001FAA0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?Hash@?$CStringElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@ATL@@SAKPEBG@Z @ 0x180020320 (-Hash@-$CStringElementTraits@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@ATL.c)
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x18002B5E0 (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 *     ?IsEqual@CAudioSessionStore@@QEAAHPEBG@Z @ 0x180045E8C (-IsEqual@CAudioSessionStore@@QEAAHPEBG@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CF0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800B3E78 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800B3E9C (WPP_SF_d.c)
 *     WPP_SF_S @ 0x1800B3ED8 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x1800B5888 (WPP_SF_q.c)
 *     WPP_SF_Sd @ 0x1800B69FC (WPP_SF_Sd.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSessionStore::OpenSessionKey(HKEY *this, HKEY *a2)
{
  HKEY *v3; // r12
  const WCHAR *v4; // rbx
  RPC_STATUS v5; // eax
  int v6; // edi
  LSTATUS ValueW; // eax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  void *pvData; // r12
  HKEY v11; // rcx
  unsigned int v12; // eax
  int *v14; // rbx
  DWORD v15; // eax
  CAudioSessionManager *v16; // rcx
  bool v17; // sf
  int v18; // edi
  int LowRightsRegistryKey; // eax
  const BYTE *v20; // rcx
  __int64 v21; // rax
  unsigned int v22; // eax
  int v23; // r12d
  DWORD phkResult[4]; // [rsp+40h] [rbp-68h] BYREF
  LPCWSTR lpSubKey; // [rsp+50h] [rbp-58h] BYREF
  ATL::CStringData *v26; // [rsp+58h] [rbp-50h]
  __int64 v27; // [rsp+60h] [rbp-48h]
  char *v28; // [rsp+68h] [rbp-40h]
  ATL::CAtlException *v29; // [rsp+70h] [rbp-38h] BYREF
  char v32; // [rsp+C0h] [rbp+18h]
  DWORD v33; // [rsp+C8h] [rbp+20h]

  v27 = -2LL;
  v3 = this;
  v32 = 0;
  memset(&phkResult[1], 0, 12);
  v26 = (ATL::CStringData *)(*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr);
  v28 = (char *)v26 + 24;
  v4 = (const WCHAR *)((*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24);
  lpSubKey = v4;
  *a2 = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 39LL, &WPP_8e50d3333ef73ff52f011be4f2d35929_Traceguids);
  }
  if ( !v3[4] )
  {
    v6 = -2147024891;
    goto LABEL_23;
  }
  v5 = RpcImpersonateClient(0LL);
  v6 = v5;
  if ( !v5 )
  {
    v32 = 1;
    goto LABEL_98;
  }
  if ( v5 == 1725 )
  {
LABEL_98:
    try
    {
      v15 = ATL::CStringElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>::Hash(v3[2]);
      v33 = v15;
      phkResult[1] = v15;
    }
    catch ( ATL::CAtlException *v29 )
    {
      v14 = (int *)v29;
      if ( *(_DWORD *)v29 == -1073741571 )
        _o__resetstkoflw();
      v6 = *v14;
      if ( *v14 < 0 )
      {
        v4 = lpSubKey;
LABEL_18:
        if ( v32 )
          RpcRevertToSelf();
        goto LABEL_20;
      }
      v15 = phkResult[1];
      v33 = phkResult[1];
      v3 = this;
    }
    phkResult[1] = 0;
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
      &lpSubKey,
      L"%x_%d",
      v15,
      0LL);
    v4 = lpSubKey;
    v6 = RegOpenKeyExW(v3[4], lpSubKey, 0, 0x20019u, (PHKEY)&phkResult[2]);
    if ( !v6 )
    {
      while ( 1 )
      {
        phkResult[0] = 0;
        ValueW = RegGetValueW(*(HKEY *)&phkResult[2], 0LL, 0LL, 2u, 0LL, 0LL, phkResult);
        v6 = ValueW;
        if ( ValueW )
        {
          if ( ValueW > 0 )
            v6 = (unsigned __int16)ValueW | 0x80070000;
          goto LABEL_57;
        }
        v8 = ((unsigned __int64)phkResult[0] >> 1) + 1;
        v9 = 2 * v8;
        if ( !is_mul_ok(v8, 2uLL) )
          v9 = -1LL;
        pvData = operator new[](v9, (const struct std::nothrow_t *)&std::nothrow);
        v11 = *(HKEY *)&phkResult[2];
        if ( !pvData )
        {
          v6 = -2147024882;
          goto LABEL_92;
        }
        v12 = RegGetValueW(*(HKEY *)&phkResult[2], 0LL, 0LL, 2u, 0LL, pvData, phkResult);
        v6 = v12;
        if ( v12 )
        {
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 41LL, &WPP_8e50d3333ef73ff52f011be4f2d35929_Traceguids, v12);
          }
          if ( v6 > 0 )
            v6 = (unsigned __int16)v6 | 0x80070000;
          operator delete(pvData);
LABEL_57:
          RegCloseKey(*(HKEY *)&phkResult[2]);
          *(_QWORD *)&phkResult[2] = 0LL;
          v16 = WPP_GLOBAL_Control;
          goto LABEL_59;
        }
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 42LL, &WPP_8e50d3333ef73ff52f011be4f2d35929_Traceguids, pvData);
        }
        if ( CAudioSessionStore::IsEqual((CAudioSessionStore *)this, (const unsigned __int16 *)pvData) )
          break;
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            44LL,
            &WPP_8e50d3333ef73ff52f011be4f2d35929_Traceguids,
            *(_QWORD *)&phkResult[2]);
        }
        operator delete(pvData);
        RegCloseKey(*(HKEY *)&phkResult[2]);
        phkResult[3] = 0;
        *(_QWORD *)&phkResult[1] = phkResult[1] + 1;
        ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
          &lpSubKey,
          L"%x_%d",
          v33,
          phkResult[1]);
        v4 = lpSubKey;
        v6 = RegOpenKeyExW(this[4], lpSubKey, 0, 0x20019u, (PHKEY)&phkResult[2]);
        if ( v6 )
          goto LABEL_38;
      }
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          43LL,
          &WPP_8e50d3333ef73ff52f011be4f2d35929_Traceguids,
          *(_QWORD *)&phkResult[2]);
      }
      operator delete(pvData);
      *a2 = *(HKEY *)&phkResult[2];
      v6 = 0;
      goto LABEL_18;
    }
LABEL_38:
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        40,
        (unsigned int)&WPP_8e50d3333ef73ff52f011be4f2d35929_Traceguids,
        (_DWORD)v4,
        v6);
      v16 = WPP_GLOBAL_Control;
    }
    if ( v6 == 2 )
    {
      v6 = 0;
    }
    else
    {
      v17 = v6 < 0;
      if ( v6 <= 0 )
        goto LABEL_60;
      v6 = (unsigned __int16)v6 | 0x80070000;
    }
LABEL_59:
    v17 = v6 < 0;
LABEL_60:
    if ( !v17 )
    {
      if ( v16 != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)v16 + 28) & 8) != 0
        && *((_BYTE *)v16 + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)v16 + 2), 45LL, &WPP_8e50d3333ef73ff52f011be4f2d35929_Traceguids);
      }
      v18 = 0;
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
        &lpSubKey,
        L"%x_%d",
        v33,
        0LL);
      while ( 1 )
      {
        v4 = lpSubKey;
        if ( RegOpenKeyExW(this[4], lpSubKey, 0, 0x20019u, (PHKEY)&phkResult[2]) )
          break;
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 46LL, &WPP_8e50d3333ef73ff52f011be4f2d35929_Traceguids, v4);
        }
        RegCloseKey(*(HKEY *)&phkResult[2]);
        *(_QWORD *)&phkResult[2] = 0LL;
        ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
          &lpSubKey,
          L"%x_%d",
          v33,
          (unsigned int)++v18);
      }
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 47LL, &WPP_8e50d3333ef73ff52f011be4f2d35929_Traceguids, v4);
      }
      *(_QWORD *)&phkResult[2] = 0LL;
      LowRightsRegistryKey = CreateLowRightsRegistryKey(this[4], v4, 131103, (HKEY *)&phkResult[2]);
      v6 = LowRightsRegistryKey;
      if ( LowRightsRegistryKey >= 0 )
      {
        v20 = (const BYTE *)this[2];
        v21 = -1LL;
        do
          ++v21;
        while ( *(_WORD *)&v20[2 * v21] );
        phkResult[0] = 2 * v21 + 2;
        v22 = RegSetValueExW(*(HKEY *)&phkResult[2], 0LL, 0, 1u, v20, phkResult[0]);
        v23 = v22;
        if ( v22 )
        {
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 49LL, &WPP_8e50d3333ef73ff52f011be4f2d35929_Traceguids, v22);
          }
          if ( v23 > 0 )
            v6 = (unsigned __int16)v23 | 0x80070000;
          else
            v6 = v23;
          v11 = *(HKEY *)&phkResult[2];
LABEL_92:
          RegCloseKey(v11);
          *(_QWORD *)&phkResult[2] = 0LL;
        }
        else
        {
          *a2 = *(HKEY *)&phkResult[2];
        }
      }
      else if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
             && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          48LL,
          &WPP_8e50d3333ef73ff52f011be4f2d35929_Traceguids,
          (unsigned int)LowRightsRegistryKey);
      }
    }
    goto LABEL_18;
  }
  if ( v5 > 0 )
    v6 = (unsigned __int16)v5 | 0x80070000;
LABEL_20:
  if ( v6 < 0 )
LABEL_23:
    AudSrvTraceLoggingErrorHelper("CAudioSessionStore::OpenSessionKey", 6428, v6);
  ATL::CStringData::Release((ATL::CStringData *)(v4 - 12));
  ATL::CStringData::Release(v26);
  return (unsigned int)v6;
}
