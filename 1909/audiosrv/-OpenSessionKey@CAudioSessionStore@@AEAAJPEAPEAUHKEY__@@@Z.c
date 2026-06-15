/*
 * XREFs of ?OpenSessionKey@CAudioSessionStore@@AEAAJPEAPEAUHKEY__@@@Z @ 0x18002FE40
 * Callers:
 *     ?Commit@CAudioSessionStore@@UEAAJXZ @ 0x18003DD00 (-Commit@CAudioSessionStore@@UEAAJXZ.c)
 *     ?LoadPropertyStore@CAudioSessionStore@@AEAAJPEBG@Z @ 0x18003DECC (-LoadPropertyStore@CAudioSessionStore@@AEAAJPEBG@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001CC20 (--3@YAXPEAX@Z.c)
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x180025FF0 (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002D610 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Hash@?$CStringElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@ATL@@SAKPEBG@Z @ 0x18002EE70 (-Hash@-$CStringElementTraits@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@ATL.c)
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x18002F1E0 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180030A30 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?IsEqual@CAudioSessionStore@@QEAAHPEBG@Z @ 0x18004E030 (-IsEqual@CAudioSessionStore@@QEAAHPEBG@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180065320 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800C2170 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800C2194 (WPP_SF_d.c)
 *     WPP_SF_S @ 0x1800C21D0 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x1800C3AB8 (WPP_SF_q.c)
 *     WPP_SF_Sd @ 0x1800C4C2C (WPP_SF_Sd.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSessionStore::OpenSessionKey(HKEY *this, HKEY *a2)
{
  HKEY *v3; // r12
  const WCHAR *v4; // rbx
  RPC_STATUS v5; // eax
  int v6; // edi
  CAudioSessionManager *v7; // rcx
  bool v8; // sf
  int v9; // edi
  int LowRightsRegistryKey; // eax
  LSTATUS ValueW; // eax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  void *pvData; // r12
  HKEY v16; // rcx
  unsigned int v17; // eax
  int *v18; // rbx
  DWORD v19; // eax
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
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 37LL, &WPP_57d37c8ff9313a19082f121b66211c14_Traceguids);
  }
  if ( !v3[4] )
  {
    v6 = -2147024891;
    goto LABEL_25;
  }
  v5 = RpcImpersonateClient(0LL);
  v6 = v5;
  if ( !v5 )
  {
    v32 = 1;
    goto LABEL_99;
  }
  if ( v5 == 1725 )
  {
LABEL_99:
    try
    {
      v19 = ATL::CStringElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>::Hash((unsigned __int16 *)v3[2]);
      v33 = v19;
      phkResult[1] = v19;
    }
    catch ( ATL::CAtlException *v29 )
    {
      v18 = (int *)v29;
      if ( *(_DWORD *)v29 == -1073741571 )
        _o__resetstkoflw();
      v6 = *v18;
      if ( *v18 < 0 )
      {
        v4 = lpSubKey;
LABEL_22:
        if ( v32 )
          RpcRevertToSelf();
        goto LABEL_24;
      }
      v19 = phkResult[1];
      v33 = phkResult[1];
      v3 = this;
    }
    phkResult[1] = 0;
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
      (wchar_t **)&lpSubKey,
      L"%x_%d",
      v19,
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
          goto LABEL_66;
        }
        v13 = ((unsigned __int64)phkResult[0] >> 1) + 1;
        v14 = 2 * v13;
        if ( !is_mul_ok(v13, 2uLL) )
          v14 = -1LL;
        pvData = operator new[](v14, (const struct std::nothrow_t *)&std::nothrow);
        v16 = *(HKEY *)&phkResult[2];
        if ( !pvData )
        {
          v6 = -2147024882;
          goto LABEL_93;
        }
        v17 = RegGetValueW(*(HKEY *)&phkResult[2], 0LL, 0LL, 2u, 0LL, pvData, phkResult);
        v6 = v17;
        if ( v17 )
        {
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 39LL, &WPP_57d37c8ff9313a19082f121b66211c14_Traceguids, v17);
          }
          if ( v6 > 0 )
            v6 = (unsigned __int16)v6 | 0x80070000;
          operator delete(pvData);
LABEL_66:
          RegCloseKey(*(HKEY *)&phkResult[2]);
          *(_QWORD *)&phkResult[2] = 0LL;
          v7 = WPP_GLOBAL_Control;
          goto LABEL_11;
        }
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 40LL, &WPP_57d37c8ff9313a19082f121b66211c14_Traceguids, pvData);
        }
        if ( CAudioSessionStore::IsEqual((CAudioSessionStore *)this, (const unsigned __int16 *)pvData) )
          break;
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            42LL,
            &WPP_57d37c8ff9313a19082f121b66211c14_Traceguids,
            *(_QWORD *)&phkResult[2]);
        }
        operator delete(pvData);
        RegCloseKey(*(HKEY *)&phkResult[2]);
        phkResult[3] = 0;
        *(_QWORD *)&phkResult[1] = phkResult[1] + 1;
        ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
          (wchar_t **)&lpSubKey,
          L"%x_%d",
          v33,
          phkResult[1]);
        v4 = lpSubKey;
        v6 = RegOpenKeyExW(this[4], lpSubKey, 0, 0x20019u, (PHKEY)&phkResult[2]);
        if ( v6 )
          goto LABEL_7;
      }
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          41LL,
          &WPP_57d37c8ff9313a19082f121b66211c14_Traceguids,
          *(_QWORD *)&phkResult[2]);
      }
      operator delete(pvData);
      *a2 = *(HKEY *)&phkResult[2];
      v6 = 0;
      goto LABEL_22;
    }
LABEL_7:
    v7 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        38,
        (unsigned int)&WPP_57d37c8ff9313a19082f121b66211c14_Traceguids,
        (_DWORD)v4,
        v6);
      v7 = WPP_GLOBAL_Control;
    }
    if ( v6 == 2 )
    {
      v6 = 0;
    }
    else
    {
      v8 = v6 < 0;
      if ( v6 <= 0 )
      {
LABEL_12:
        if ( !v8 )
        {
          if ( v7 != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_BYTE *)v7 + 28) & 8) != 0
            && *((_BYTE *)v7 + 25) >= 4u )
          {
            WPP_SF_(*((_QWORD *)v7 + 2), 43LL, &WPP_57d37c8ff9313a19082f121b66211c14_Traceguids);
          }
          v9 = 0;
          ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
            (wchar_t **)&lpSubKey,
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
              WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 44LL, &WPP_57d37c8ff9313a19082f121b66211c14_Traceguids, v4);
            }
            RegCloseKey(*(HKEY *)&phkResult[2]);
            *(_QWORD *)&phkResult[2] = 0LL;
            ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
              (wchar_t **)&lpSubKey,
              L"%x_%d",
              v33,
              (unsigned int)++v9);
          }
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 45LL, &WPP_57d37c8ff9313a19082f121b66211c14_Traceguids, v4);
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
                WPP_SF_d(
                  *((_QWORD *)WPP_GLOBAL_Control + 2),
                  47LL,
                  &WPP_57d37c8ff9313a19082f121b66211c14_Traceguids,
                  v22);
              }
              if ( v23 > 0 )
                v6 = (unsigned __int16)v23 | 0x80070000;
              else
                v6 = v23;
              v16 = *(HKEY *)&phkResult[2];
LABEL_93:
              RegCloseKey(v16);
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
              46LL,
              &WPP_57d37c8ff9313a19082f121b66211c14_Traceguids,
              (unsigned int)LowRightsRegistryKey);
          }
        }
        goto LABEL_22;
      }
      v6 = (unsigned __int16)v6 | 0x80070000;
    }
LABEL_11:
    v8 = v6 < 0;
    goto LABEL_12;
  }
  if ( v5 > 0 )
    v6 = (unsigned __int16)v5 | 0x80070000;
LABEL_24:
  if ( v6 < 0 )
LABEL_25:
    AudSrvTraceLoggingErrorHelper("CAudioSessionStore::OpenSessionKey", 4430, v6);
  ATL::CStringData::Release((ATL::CStringData *)(v4 - 12));
  ATL::CStringData::Release(v26);
  return (unsigned int)v6;
}
