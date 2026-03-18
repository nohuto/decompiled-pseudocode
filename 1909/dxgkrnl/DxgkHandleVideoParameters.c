/*
 * XREFs of DxgkHandleVideoParameters @ 0x1C026D78C
 * Callers:
 *     DpiGdoHandleVideoParameters @ 0x1C02B09B0 (DpiGdoHandleVideoParameters.c)
 * Callees:
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0002758 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateCopyProtection@ADAPTER_DISPLAY@@QEAAJIIPEAI@Z @ 0x1C01F0C70 (-CreateCopyProtection@ADAPTER_DISPLAY@@QEAAJIIPEAI@Z.c)
 *     ?DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z @ 0x1C01F138C (-DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z.c)
 *     ?UpdateCopyProtection@ADAPTER_DISPLAY@@QEAAJIII@Z @ 0x1C01F49EC (-UpdateCopyProtection@ADAPTER_DISPLAY@@QEAAJIII@Z.c)
 *     ?GetCurrentTvStandard@@YAIPEAVDXGADAPTER@@I@Z @ 0x1C026D608 (-GetCurrentTvStandard@@YAIPEAVDXGADAPTER@@I@Z.c)
 *     ?DmmGetMacrovisonSupportFromClientVidPnSource@@YAJQEAXIPEAU_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT@@@Z @ 0x1C02B3594 (-DmmGetMacrovisonSupportFromClientVidPnSource@@YAJQEAXIPEAU_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTE.c)
 *     ?DmmGetPathContentFromClientVidPnSource@@YAJQEAXIPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C02B3D88 (-DmmGetPathContentFromClientVidPnSource@@YAJQEAXIPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z.c)
 *     ?DmmIsSourcePresentedOnClientVidPnAnalogTvOut@@YAJQEAXIPEAEPEAI@Z @ 0x1C02B4398 (-DmmIsSourcePresentedOnClientVidPnAnalogTvOut@@YAJQEAXIPEAEPEAI@Z.c)
 *     ?DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C02B5890 (-DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@.c)
 */

__int64 __fastcall DxgkHandleVideoParameters(DXGADAPTER ***a1, __int64 a2, char *Source1)
{
  __int64 v4; // r15
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  _QWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // eax
  int v26; // esi
  unsigned __int8 v27; // r12
  int v28; // eax
  int CurrentTvStandard; // eax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  int updated; // eax
  __int64 v35; // rax
  unsigned __int8 v37[4]; // [rsp+20h] [rbp-99h] BYREF
  struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT v38; // [rsp+24h] [rbp-95h] BYREF
  unsigned int v39; // [rsp+28h] [rbp-91h] BYREF
  _BYTE v40[16]; // [rsp+30h] [rbp-89h] BYREF
  _BYTE v41[8]; // [rsp+40h] [rbp-79h] BYREF
  _BYTE v42[64]; // [rsp+48h] [rbp-71h] BYREF
  _BYTE v43[72]; // [rsp+88h] [rbp-31h] BYREF

  v4 = (unsigned int)a2;
  Current = DXGPROCESS::GetCurrent((__int64)a1, a2);
  if ( !Current )
  {
    v10 = WdLogNewEntry5_WdError(v8, v7, v9);
    v11 = -1073741811;
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v10);
    return (unsigned int)v11;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v40, *((struct DXGFASTMUTEX *const *)Current + 36), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v40);
  if ( !a1 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v13, v12);
    *(_QWORD *)(v14 + 24) = 65LL;
    WdLogEvent5_WdAssertion(v14);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v41, (struct DXGADAPTER *const)a1, 0LL);
  v11 = COREADAPTERACCESS::AcquireShared((__int64)v41, 0xFFFFFFFFLL, v15);
  if ( !DXGADAPTER::IsFullWDDMAdapter((DXGADAPTER *)a1) )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16, v18);
    v11 = -1073741637;
    v19[3] = a1;
    v19[4] = -1073741637LL;
LABEL_11:
    WdLogEvent5_WdError(v19);
    goto LABEL_45;
  }
  if ( (unsigned int)v4 >= *((_DWORD *)a1[319] + 20) )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16, v18);
    v11 = -1071774975;
    v19[3] = v4;
    v19[4] = a1;
    v19[5] = -1071774975LL;
    goto LABEL_11;
  }
  if ( RtlCompareMemory(Source1, &GUID_VIDEO_PARAMETERS, 0x10uLL) != 16 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20, v22);
    v11 = -1073741811;
    v19[3] = -1073741811LL;
    goto LABEL_11;
  }
  v37[0] = 0;
  DmmIsSourcePresentedOnClientVidPnAnalogTvOut(a1, v4, v37, &v39);
  v25 = *((_DWORD *)Source1 + 5);
  v26 = 1;
  v27 = v37[0];
  if ( v25 == 1 )
  {
    *(_QWORD *)(Source1 + 28) = 0LL;
    *(_QWORD *)(Source1 + 36) = 0LL;
    *(_QWORD *)(Source1 + 44) = 0LL;
    v11 = 0;
    *(_QWORD *)(Source1 + 52) = 0LL;
    *(_QWORD *)(Source1 + 60) = 0LL;
    *(_QWORD *)(Source1 + 68) = 0LL;
    *(_QWORD *)(Source1 + 76) = 0LL;
    *(_QWORD *)(Source1 + 84) = 0LL;
    *(_QWORD *)(Source1 + 92) = 0LL;
    memset(Source1 + 100, 0, 0x100uLL);
    *((_DWORD *)Source1 + 6) = 3;
    if ( v27 == 1 )
    {
      v38 = 0;
      DmmGetPathContentFromClientVidPnSource(a1, v4, (enum _D3DKMDT_VIDPN_PRESENT_PATH_CONTENT *)&v38);
      v28 = (v38 == 2) + 1;
    }
    else
    {
      v28 = 1;
    }
    *((_DWORD *)Source1 + 7) = v28;
    *((_DWORD *)Source1 + 9) = 3;
    if ( v27 == 1 )
      CurrentTvStandard = GetCurrentTvStandard((struct DXGADAPTER *)a1, v39);
    else
      CurrentTvStandard = 0x8000;
    *((_DWORD *)Source1 + 8) = CurrentTvStandard;
    *((_DWORD *)Source1 + 10) = CurrentTvStandard | 0x8000;
    if ( v27 == 1 )
    {
      v38 = 0;
      DmmGetMacrovisonSupportFromClientVidPnSource(a1, v4, &v38);
      if ( (*(_BYTE *)&v38 & 4) == 0 && (*(_BYTE *)&v38 & 2) == 0 )
        v26 = 0;
    }
    *((_DWORD *)Source1 + 20) = v26;
    if ( v26 )
    {
      *((_DWORD *)Source1 + 6) |= 0x100u;
      *((_DWORD *)Source1 + 22) = 196799;
    }
    goto LABEL_45;
  }
  if ( v25 != 2 )
    goto LABEL_45;
  v11 = 0;
  if ( (*((_DWORD *)Source1 + 6) & 0x100) == 0 )
  {
LABEL_42:
    if ( v27 == 1 && (*((_DWORD *)Source1 + 6) & 1) != 0 )
      DmmUpdateContentOnAllClientVidPnPathsFromSource(
        a1,
        v4,
        (enum _D3DKMDT_VIDPN_PRESENT_PATH_CONTENT)((*((_DWORD *)Source1 + 7) == 2) + 1));
    goto LABEL_45;
  }
  v30 = (unsigned int)(*((_DWORD *)Source1 + 21) - 1);
  if ( *((_DWORD *)Source1 + 21) != 1 )
  {
    v30 = (unsigned int)(*((_DWORD *)Source1 + 21) - 2);
    if ( *((_DWORD *)Source1 + 21) == 2 )
    {
      updated = ADAPTER_DISPLAY::DestroyCopyProtection(a1[319], v4, *((_DWORD *)Source1 + 23));
    }
    else
    {
      if ( *((_DWORD *)Source1 + 21) != 4 )
      {
        v31 = WdLogNewEntry5_WdWarning(v30, v23, v24);
        v32 = *((unsigned int *)Source1 + 21);
LABEL_33:
        *(_QWORD *)(v31 + 24) = v32;
        v11 = -1073741811;
        *(_QWORD *)(v31 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v31);
        goto LABEL_45;
      }
      v33 = *((unsigned int *)Source1 + 24);
      if ( (unsigned int)v33 > 3 )
      {
LABEL_32:
        v31 = WdLogNewEntry5_WdWarning(v30, v23, v33);
        v32 = *((unsigned int *)Source1 + 24);
        goto LABEL_33;
      }
      updated = ADAPTER_DISPLAY::UpdateCopyProtection(a1[319], v4, v33, *((_DWORD *)Source1 + 23));
    }
    goto LABEL_39;
  }
  v33 = *((unsigned int *)Source1 + 24);
  if ( (unsigned int)(v33 - 1) <= 2 )
  {
    if ( *((_DWORD *)Source1 + 20) != 1 )
      goto LABEL_32;
    updated = ADAPTER_DISPLAY::CreateCopyProtection(a1[319], v4, v33, (unsigned int *)Source1 + 23);
LABEL_39:
    v11 = updated;
    goto LABEL_41;
  }
  v35 = WdLogNewEntry5_WdWarning(v30, v23, v33);
  v11 = -1073741811;
  *(_QWORD *)(v35 + 24) = *((unsigned int *)Source1 + 24);
  *(_QWORD *)(v35 + 32) = -1073741811LL;
  WdLogEvent5_WdWarning(v35);
LABEL_41:
  if ( v11 >= 0 )
    goto LABEL_42;
LABEL_45:
  COREACCESS::~COREACCESS((COREACCESS *)v43);
  COREACCESS::~COREACCESS((COREACCESS *)v42);
  if ( v40[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v40);
  return (unsigned int)v11;
}
