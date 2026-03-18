/*
 * XREFs of ?_ReadConfiguration@VIDPN_MGR@@AEAAJXZ @ 0x1C0151F38
 * Callers:
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C0152300 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DpiReadPnpRegistryValue @ 0x1C0134C54 (DpiReadPnpRegistryValue.c)
 */

__int64 __fastcall VIDPN_MGR::_ReadConfiguration(unsigned __int64 this)
{
  VIDPN_MGR *v1; // rbx
  int RegistryValues; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  bool v34; // al
  _DWORD *v35; // rdi
  int v36; // eax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  unsigned int v44; // [rsp+38h] [rbp-D0h] BYREF
  _DWORD v45[3]; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v46; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v47; // [rsp+50h] [rbp-B8h]
  const wchar_t *v48; // [rsp+58h] [rbp-B0h]
  _DWORD *v49; // [rsp+60h] [rbp-A8h]
  __int64 v50; // [rsp+68h] [rbp-A0h]
  _DWORD *v51; // [rsp+70h] [rbp-98h]
  __int64 v52; // [rsp+78h] [rbp-90h]
  __int64 v53; // [rsp+80h] [rbp-88h]
  int v54; // [rsp+88h] [rbp-80h]
  const wchar_t *v55; // [rsp+90h] [rbp-78h]
  char *v56; // [rsp+98h] [rbp-70h]
  int v57; // [rsp+A0h] [rbp-68h]
  char *v58; // [rsp+A8h] [rbp-60h]
  int v59; // [rsp+B0h] [rbp-58h]
  __int64 v60; // [rsp+B8h] [rbp-50h]
  int v61; // [rsp+C0h] [rbp-48h]
  _BYTE v62[40]; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD v63[22]; // [rsp+F8h] [rbp-10h] BYREF

  v1 = (VIDPN_MGR *)this;
  if ( !VIDPN_MGR::_BadMonitorSourceModeDiagnosibility )
  {
    v44 = 2;
    memset(v63, 0, 0xA8uLL);
    v63[0] = 0LL;
    LODWORD(v63[4]) = 0x4000000;
    v63[2] = L"BadMonitorModeDiag";
    LODWORD(v63[11]) = 0x4000000;
    v63[3] = &v44;
    LODWORD(v63[1]) = 288;
    v63[9] = L"AssertOnDdiViolation";
    v63[5] = 0LL;
    v63[10] = &g_DmmAssertOnDdiViolation;
    LODWORD(v63[6]) = 0;
    v63[7] = 0LL;
    LODWORD(v63[8]) = 288;
    v63[12] = 0LL;
    LODWORD(v63[13]) = 0;
    RegistryValues = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\DMM", v63, 0LL, 0LL);
    v7 = RegistryValues;
    if ( RegistryValues >= 0 )
    {
      this = v44;
    }
    else
    {
      v8 = WdLogNewEntry5_WdDmmEvent(v4, v3, v5, v6);
      *(_QWORD *)(v8 + 24) = v7;
      WdLogEvent5_WdDmmEvent(v8);
      if ( (_DWORD)v7 != -1073741772 )
      {
        v38 = WdLogNewEntry5_WdAssertion(v9);
        WdLogEvent5_WdAssertion(v38);
      }
      this = 2LL;
      v44 = 2;
    }
    if ( (unsigned int)(this - 1) > 1 )
    {
      v39 = WdLogNewEntry5_WdError(this);
      *(_QWORD *)(v39 + 24) = v44;
      WdLogEvent5_WdError(v39);
    }
    else
    {
      VIDPN_MGR::_BadMonitorSourceModeDiagnosibility = this;
    }
  }
  v10 = *((_QWORD *)v1 + 1);
  v44 = 0;
  if ( !v10 )
  {
    v40 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v40);
    v10 = *((_QWORD *)v1 + 1);
  }
  if ( (int)DpiReadPnpRegistryValue(
              *(_QWORD *)(*(_QWORD *)(v10 + 16) + 192LL),
              L"AllowUnspecifiedVSync",
              (char *)&v44,
              4u,
              2u) >= 0 )
  {
    VIDPN_MGR::_bAllowUnspecifiedVSync = v44 != 0;
  }
  else
  {
    v15 = WdLogNewEntry5_WdDmmEvent(v12, v11, v13, v14);
    WdLogEvent5_WdDmmEvent(v15);
  }
  v16 = *((_QWORD *)v1 + 1);
  v44 = 0;
  if ( !v16 )
  {
    v41 = WdLogNewEntry5_WdAssertion(v12);
    WdLogEvent5_WdAssertion(v41);
    v16 = *((_QWORD *)v1 + 1);
  }
  if ( (int)DpiReadPnpRegistryValue(
              *(_QWORD *)(*(_QWORD *)(v16 + 16) + 192LL),
              L"AllowUnspecifiedHSync",
              (char *)&v44,
              4u,
              2u) >= 0 )
  {
    VIDPN_MGR::_bAllowUnspecifiedHSync = v44 != 0;
  }
  else
  {
    v21 = WdLogNewEntry5_WdDmmEvent(v18, v17, v19, v20);
    WdLogEvent5_WdDmmEvent(v21);
  }
  v22 = *((_QWORD *)v1 + 1);
  v44 = 0;
  if ( !v22 )
  {
    v42 = WdLogNewEntry5_WdAssertion(v18);
    WdLogEvent5_WdAssertion(v42);
    v22 = *((_QWORD *)v1 + 1);
  }
  if ( (int)DpiReadPnpRegistryValue(
              *(_QWORD *)(*(_QWORD *)(v22 + 16) + 192LL),
              L"AllowUnspecifiedPixelRate",
              (char *)&v44,
              4u,
              2u) >= 0 )
  {
    VIDPN_MGR::_bAllowUnspecifiedPixelRate = v44 != 0;
  }
  else
  {
    v27 = WdLogNewEntry5_WdDmmEvent(v24, v23, v25, v26);
    WdLogEvent5_WdDmmEvent(v27);
  }
  v28 = *((_QWORD *)v1 + 1);
  v44 = 0;
  if ( !v28 )
  {
    v43 = WdLogNewEntry5_WdAssertion(v24);
    WdLogEvent5_WdAssertion(v43);
    v28 = *((_QWORD *)v1 + 1);
  }
  if ( (int)DpiReadPnpRegistryValue(
              *(_QWORD *)(*(_QWORD *)(v28 + 16) + 192LL),
              L"ForceDualViewBehavior",
              (char *)&v44,
              4u,
              2u) >= 0 )
  {
    v34 = v44 != 0;
  }
  else
  {
    v33 = WdLogNewEntry5_WdDmmEvent(v30, v29, v31, v32);
    WdLogEvent5_WdDmmEvent(v33);
    v34 = 0;
  }
  *((_BYTE *)v1 + 464) = v34;
  v35 = (_DWORD *)((char *)v1 + 488);
  v45[0] = 1000;
  LODWORD(v50) = 67108868;
  v48 = L"RapidHPDTime";
  v57 = 67108868;
  v49 = v45;
  *((_DWORD *)v1 + 122) = 5;
  v51 = v45;
  v55 = L"RapidHPDThresholdCount";
  v46 = 0LL;
  LODWORD(v47) = 288;
  LODWORD(v52) = 4;
  v53 = 0LL;
  v54 = 288;
  v56 = (char *)v1 + 488;
  v58 = (char *)v1 + 488;
  v59 = 4;
  v60 = 0LL;
  v61 = 0;
  memset(v62, 0, sizeof(v62));
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v46, 0LL, 0LL);
  v36 = v45[0];
  if ( v45[0] > 0xEA60u )
    v36 = 60000;
  v45[0] = v36;
  *((_DWORD *)v1 + 121) = 10000 * v36 / KeQueryTimeIncrement();
  if ( *v35 == 1 )
  {
    *((_DWORD *)v1 + 122) = 0;
  }
  else if ( *v35 > 0x20u )
  {
    *v35 = 32;
  }
  return 0LL;
}
