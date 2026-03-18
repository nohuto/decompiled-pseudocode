/*
 * XREFs of ?_ReadConfiguration@VIDPN_MGR@@AEAAJXZ @ 0x1C016BE6C
 * Callers:
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C016AC38 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     DpiReadPnpRegistryValue @ 0x1C0142644 (DpiReadPnpRegistryValue.c)
 */

__int64 __fastcall VIDPN_MGR::_ReadConfiguration(unsigned __int64 this, __int64 a2)
{
  VIDPN_MGR *v2; // rbx
  int RegistryValues; // eax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  bool v25; // al
  _DWORD *v26; // rdi
  int v27; // eax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned int v35; // [rsp+38h] [rbp-D0h] BYREF
  _DWORD v36[3]; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v37; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v38; // [rsp+50h] [rbp-B8h]
  const wchar_t *v39; // [rsp+58h] [rbp-B0h]
  _DWORD *v40; // [rsp+60h] [rbp-A8h]
  __int64 v41; // [rsp+68h] [rbp-A0h]
  _DWORD *v42; // [rsp+70h] [rbp-98h]
  __int64 v43; // [rsp+78h] [rbp-90h]
  __int64 v44; // [rsp+80h] [rbp-88h]
  int v45; // [rsp+88h] [rbp-80h]
  const wchar_t *v46; // [rsp+90h] [rbp-78h]
  char *v47; // [rsp+98h] [rbp-70h]
  int v48; // [rsp+A0h] [rbp-68h]
  char *v49; // [rsp+A8h] [rbp-60h]
  int v50; // [rsp+B0h] [rbp-58h]
  __int64 v51; // [rsp+B8h] [rbp-50h]
  int v52; // [rsp+C0h] [rbp-48h]
  _BYTE v53[40]; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD v54[22]; // [rsp+F8h] [rbp-10h] BYREF

  v2 = (VIDPN_MGR *)this;
  if ( !VIDPN_MGR::_BadMonitorSourceModeDiagnosibility )
  {
    v35 = 2;
    memset(v54, 0, 0xA8uLL);
    LODWORD(v54[1]) = 288;
    LODWORD(v54[4]) = 0x4000000;
    v54[2] = L"BadMonitorModeDiag";
    LODWORD(v54[11]) = 0x4000000;
    v54[3] = &v35;
    v54[5] = 0LL;
    v54[9] = L"AssertOnDdiViolation";
    LODWORD(v54[6]) = 0;
    v54[10] = &g_DmmAssertOnDdiViolation;
    v54[7] = 0LL;
    LODWORD(v54[8]) = 288;
    v54[12] = 0LL;
    LODWORD(v54[13]) = 0;
    RegistryValues = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\DMM", v54, 0LL, 0LL);
    v6 = RegistryValues;
    if ( RegistryValues >= 0 )
    {
      this = v35;
    }
    else
    {
      v7 = WdLogNewEntry5_WdDmmEvent(v4, a2);
      *(_QWORD *)(v7 + 24) = v6;
      WdLogEvent5_WdDmmEvent(v7);
      if ( (_DWORD)v6 != -1073741772 )
      {
        v29 = WdLogNewEntry5_WdAssertion(v8, a2);
        WdLogEvent5_WdAssertion(v29);
      }
      this = 2LL;
      v35 = 2;
    }
    if ( (unsigned int)(this - 1) > 1 )
    {
      v30 = WdLogNewEntry5_WdError(this, a2, v5);
      *(_QWORD *)(v30 + 24) = v35;
      WdLogEvent5_WdError(v30);
    }
    else
    {
      VIDPN_MGR::_BadMonitorSourceModeDiagnosibility = this;
    }
  }
  v9 = *((_QWORD *)v2 + 1);
  v35 = 0;
  if ( !v9 )
  {
    v31 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v31);
    v9 = *((_QWORD *)v2 + 1);
  }
  if ( (int)DpiReadPnpRegistryValue(
              *(_QWORD *)(*(_QWORD *)(v9 + 16) + 192LL),
              L"AllowUnspecifiedVSync",
              (char *)&v35,
              4u,
              2u) >= 0 )
  {
    VIDPN_MGR::_bAllowUnspecifiedVSync = v35 != 0;
  }
  else
  {
    v12 = WdLogNewEntry5_WdDmmEvent(v11, v10);
    WdLogEvent5_WdDmmEvent(v12);
  }
  v13 = *((_QWORD *)v2 + 1);
  v35 = 0;
  if ( !v13 )
  {
    v32 = WdLogNewEntry5_WdAssertion(v11, v10);
    WdLogEvent5_WdAssertion(v32);
    v13 = *((_QWORD *)v2 + 1);
  }
  if ( (int)DpiReadPnpRegistryValue(
              *(_QWORD *)(*(_QWORD *)(v13 + 16) + 192LL),
              L"AllowUnspecifiedHSync",
              (char *)&v35,
              4u,
              2u) >= 0 )
  {
    VIDPN_MGR::_bAllowUnspecifiedHSync = v35 != 0;
  }
  else
  {
    v16 = WdLogNewEntry5_WdDmmEvent(v15, v14);
    WdLogEvent5_WdDmmEvent(v16);
  }
  v17 = *((_QWORD *)v2 + 1);
  v35 = 0;
  if ( !v17 )
  {
    v33 = WdLogNewEntry5_WdAssertion(v15, v14);
    WdLogEvent5_WdAssertion(v33);
    v17 = *((_QWORD *)v2 + 1);
  }
  if ( (int)DpiReadPnpRegistryValue(
              *(_QWORD *)(*(_QWORD *)(v17 + 16) + 192LL),
              L"AllowUnspecifiedPixelRate",
              (char *)&v35,
              4u,
              2u) >= 0 )
  {
    VIDPN_MGR::_bAllowUnspecifiedPixelRate = v35 != 0;
  }
  else
  {
    v20 = WdLogNewEntry5_WdDmmEvent(v19, v18);
    WdLogEvent5_WdDmmEvent(v20);
  }
  v21 = *((_QWORD *)v2 + 1);
  v35 = 0;
  if ( !v21 )
  {
    v34 = WdLogNewEntry5_WdAssertion(v19, v18);
    WdLogEvent5_WdAssertion(v34);
    v21 = *((_QWORD *)v2 + 1);
  }
  if ( (int)DpiReadPnpRegistryValue(
              *(_QWORD *)(*(_QWORD *)(v21 + 16) + 192LL),
              L"ForceDualViewBehavior",
              (char *)&v35,
              4u,
              2u) >= 0 )
  {
    v25 = v35 != 0;
  }
  else
  {
    v24 = WdLogNewEntry5_WdDmmEvent(v23, v22);
    WdLogEvent5_WdDmmEvent(v24);
    v25 = 0;
  }
  *((_BYTE *)v2 + 464) = v25;
  v26 = (_DWORD *)((char *)v2 + 488);
  v36[0] = 1000;
  LODWORD(v41) = 67108868;
  v39 = L"RapidHPDTime";
  v48 = 67108868;
  v40 = v36;
  *((_DWORD *)v2 + 122) = 5;
  v42 = v36;
  v46 = L"RapidHPDThresholdCount";
  v37 = 0LL;
  LODWORD(v38) = 288;
  LODWORD(v43) = 4;
  v44 = 0LL;
  v45 = 288;
  v47 = (char *)v2 + 488;
  v49 = (char *)v2 + 488;
  v50 = 4;
  v51 = 0LL;
  v52 = 0;
  memset(v53, 0, sizeof(v53));
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v37, 0LL, 0LL);
  v27 = v36[0];
  if ( v36[0] > 0xEA60u )
    v27 = 60000;
  v36[0] = v27;
  *((_DWORD *)v2 + 121) = 10000 * v27 / KeQueryTimeIncrement();
  if ( *v26 == 1 )
  {
    *((_DWORD *)v2 + 122) = 0;
  }
  else if ( *v26 > 0x20u )
  {
    *v26 = 32;
  }
  return 0LL;
}
