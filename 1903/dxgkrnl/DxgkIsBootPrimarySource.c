/*
 * XREFs of DxgkIsBootPrimarySource @ 0x1C0147CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C00062E4 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetPrimaryPath@ADAPTER_DISPLAY@@QEBAXPEAI0PEAW4_DXGK_PRIMARY_TARGET_TYPE@@@Z @ 0x1C001A8D0 (-GetPrimaryPath@ADAPTER_DISPLAY@@QEBAXPEAI0PEAW4_DXGK_PRIMARY_TARGET_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?DmmIsSourcePresentedOnClientVidPnUsedByFirmware@@YAJQEAXIPEAE@Z @ 0x1C02B41E8 (-DmmIsSourcePresentedOnClientVidPnUsedByFirmware@@YAJQEAXIPEAE@Z.c)
 */

unsigned __int8 __fastcall DxgkIsBootPrimarySource(ADAPTER_DISPLAY **a1, unsigned int a2)
{
  __int64 v2; // rsi
  unsigned __int8 v4; // bl
  __int64 v5; // r8
  int v6; // edx
  int IsSourcePresentedOnClientVidPnUsedByFirmware; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbp
  _QWORD *v13; // rax
  unsigned __int8 v14[4]; // [rsp+20h] [rbp-B8h] BYREF
  unsigned int v15; // [rsp+24h] [rbp-B4h] BYREF
  _BYTE v16[4]; // [rsp+28h] [rbp-B0h] BYREF
  unsigned int v17; // [rsp+2Ch] [rbp-ACh] BYREF
  _BYTE v18[8]; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v19[64]; // [rsp+38h] [rbp-A0h] BYREF
  _BYTE v20[72]; // [rsp+78h] [rbp-60h] BYREF

  v2 = a2;
  v4 = 0;
  v14[0] = 0;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v18, (struct DXGADAPTER *const)a1, 0LL);
  if ( (int)COREADAPTERACCESS::AcquireShared((__int64)v18, 0xFFFFFFFFLL, v5) >= 0 )
  {
    v6 = *((_DWORD *)a1 + 77);
    if ( (v6 & 1) != 0 || DXGADAPTER::IsBddFallbackDriver((DXGADAPTER *)a1) )
    {
      if ( (v6 & 0x8000) != 0 )
      {
        IsSourcePresentedOnClientVidPnUsedByFirmware = DmmIsSourcePresentedOnClientVidPnUsedByFirmware(a1, v2, v14);
        v12 = IsSourcePresentedOnClientVidPnUsedByFirmware;
        if ( IsSourcePresentedOnClientVidPnUsedByFirmware >= 0 )
        {
          v4 = v14[0];
        }
        else
        {
          v13 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9, v11);
          v13[3] = a1;
          v13[4] = v2;
          v13[5] = v12;
          WdLogEvent5_WdError(v13);
        }
      }
      else
      {
        ADAPTER_DISPLAY::GetPrimaryPath(a1[319], &v15, &v17, (enum _DXGK_PRIMARY_TARGET_TYPE *)v16);
        v4 = (_DWORD)v2 == v15;
      }
    }
  }
  COREACCESS::~COREACCESS((COREACCESS *)v20);
  COREACCESS::~COREACCESS((COREACCESS *)v19);
  return v4;
}
