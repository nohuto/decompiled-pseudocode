/*
 * XREFs of ?Commit@CAudioSessionStore@@UEAAJXZ @ 0x180039A40
 * Callers:
 *     ??1CAudioSessionStore@@AEAA@XZ @ 0x18003993C (--1CAudioSessionStore@@AEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180019940 (--3@YAXPEAX@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180023370 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x180029F18 (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x18002C350 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     ?OpenSessionKey@CAudioSessionStore@@AEAAJPEAPEAUHKEY__@@@Z @ 0x18002CFB0 (-OpenSessionKey@CAudioSessionStore@@AEAAJPEAPEAUHKEY__@@@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1800C2620 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800C2644 (WPP_SF_d.c)
 *     WPP_SF_Sd @ 0x1800C50DC (WPP_SF_Sd.c)
 *     ?FlattenProperty@CAudioSessionStore@@AEAAPEAEPEBUtagPROPVARIANT@@PEA_K@Z @ 0x1800DECA0 (-FlattenProperty@CAudioSessionStore@@AEAAPEAEPEBUtagPROPVARIANT@@PEA_K@Z.c)
 */

__int64 __fastcall CAudioSessionStore::Commit(HKEY *this)
{
  int v2; // edi
  unsigned int v3; // eax
  unsigned int v4; // ebx
  HKEY v6; // rbx
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // esi
  int v10; // r14d
  CAudioSessionManager *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r9
  unsigned int v14; // eax
  CAudioSessionStore *v15; // rcx
  RPC_STATUS v16; // eax
  bool v17; // zf
  LSTATUS v18; // eax
  char v19; // si
  const BYTE *lpData; // rax
  BYTE *v21; // rsi
  char v22; // al
  HKEY v23; // [rsp+38h] [rbp-19h] BYREF
  HKEY hKey; // [rsp+40h] [rbp-11h] BYREF
  LPOLESTR lpsz; // [rsp+48h] [rbp-9h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-1h] BYREF
  char v27; // [rsp+58h] [rbp+7h]
  unsigned __int64 cbData; // [rsp+60h] [rbp+Fh] BYREF
  WCHAR ValueName[20]; // [rsp+68h] [rbp+17h] BYREF

  hKey = 0LL;
  v2 = 0;
  v23 = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 23LL, &WPP_57d37c8ff9313a19082f121b66211c14_Traceguids);
  }
  v3 = CAudioSessionStore::OpenSessionKey(this, &hKey);
  v4 = v3;
  if ( v3 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 24LL, &WPP_57d37c8ff9313a19082f121b66211c14_Traceguids, v3);
    }
    return v4;
  }
  v27 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 6);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v6 = this[3];
  while ( v6 )
  {
    v7 = StringFromCLSID((const IID *const)v6, &lpsz);
    if ( v7 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 25LL, &WPP_57d37c8ff9313a19082f121b66211c14_Traceguids, v7);
      }
    }
    else
    {
      v8 = RpcImpersonateClient(0LL);
      if ( !v8 )
      {
        v2 = 1;
LABEL_28:
        v9 = CreateLowRightsRegistryKey(hKey, lpsz, 131078, &v23);
        CoTaskMemFree(lpsz);
        if ( v2 )
          RpcRevertToSelf();
        v2 = 0;
        v10 = 0;
        if ( v9 )
        {
          v11 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            v12 = 27LL;
            v13 = v9;
            goto LABEL_35;
          }
        }
        else
        {
          v14 = StringCbPrintfW(ValueName, 0x28uLL, L"%d", *((unsigned int *)v6 + 4));
          if ( v14 )
          {
            v11 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              v12 = 28LL;
              v13 = v14;
LABEL_35:
              WPP_SF_d(*((_QWORD *)v11 + 2), v12, &WPP_57d37c8ff9313a19082f121b66211c14_Traceguids, v13);
            }
          }
          else
          {
            if ( *((_WORD *)v6 + 12) )
            {
              lpData = CAudioSessionStore::FlattenProperty(v15, (const struct tagPROPVARIANT *)v6 + 1, &cbData);
              v21 = (BYTE *)lpData;
              if ( lpData )
                v22 = RegSetValueExW(v23, ValueName, 0, 3u, lpData, cbData);
              else
                v22 = 8;
              if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
                && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
              {
                WPP_SF_Sd(
                  *((_QWORD *)WPP_GLOBAL_Control + 2),
                  30,
                  (unsigned int)&WPP_57d37c8ff9313a19082f121b66211c14_Traceguids,
                  (unsigned int)ValueName,
                  v22);
              }
              operator delete(v21);
            }
            else
            {
              v16 = RpcImpersonateClient(0LL);
              v17 = v16 == 0;
              if ( v16 )
              {
                if ( v16 != 1725 )
                  continue;
                v17 = 0;
              }
              if ( v17 )
                v10 = 1;
              v18 = RegDeleteValueW(v23, ValueName);
              v19 = v18;
              if ( v18 > 0 )
                v19 = v18;
              if ( v10 )
                RpcRevertToSelf();
              if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
                && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
              {
                WPP_SF_Sd(
                  *((_QWORD *)WPP_GLOBAL_Control + 2),
                  29,
                  (unsigned int)&WPP_57d37c8ff9313a19082f121b66211c14_Traceguids,
                  (unsigned int)ValueName,
                  v19);
              }
            }
            RegCloseKey(v23);
            v23 = 0LL;
          }
        }
        v6 = (HKEY)*((_QWORD *)v6 + 6);
        continue;
      }
      if ( v8 == 1725 )
        goto LABEL_28;
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 26LL, &WPP_57d37c8ff9313a19082f121b66211c14_Traceguids, v8);
      }
    }
    v6 = (HKEY)*((_QWORD *)v6 + 6);
  }
  if ( v27 )
    LeaveCriticalSection(lpCriticalSection);
  RegCloseKey(hKey);
  return 0LL;
}
