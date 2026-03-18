/*
 * XREFs of ?DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0200604
 * Callers:
 *     DxgkEscape @ 0x1C01012F0 (DxgkEscape.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BC9C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000CE40 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFI.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FBA60 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     MonitorSetUsageClass @ 0x1C02CA808 (MonitorSetUsageClass.c)
 */

__int64 __fastcall DxgkEnableDisableTargetAsHMD(
        struct _D3DKMT_SOFTGPU_LUID_TARGET *a1,
        __int64 a2,
        char a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  struct _LUID *v6; // r14
  __int64 v7; // rdi
  int *v8; // rbx
  __int64 v9; // r15
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  DXGADAPTER *v15; // rsi
  _QWORD *v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  _QWORD *v21; // rax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned __int64 v27; // [rsp+30h] [rbp-89h] BYREF
  __int64 v28; // [rsp+40h] [rbp-79h] BYREF
  _BYTE v29[64]; // [rsp+48h] [rbp-71h] BYREF
  _BYTE v30[72]; // [rsp+88h] [rbp-31h] BYREF

  v6 = (struct _LUID *)a1;
  LODWORD(v7) = -1073741811;
  if ( (unsigned int)a2 <= 0x10 && (_DWORD)a2 )
  {
    v8 = (int *)((char *)a1 + 4);
    v9 = (unsigned int)a2;
    while ( 1 )
    {
      Global = DXGGLOBAL::GetGlobal((__int64)a1, a2);
      v11 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *v6, &v27);
      v15 = v11;
      if ( v11 )
        break;
      LODWORD(v7) = -1073741811;
      v16 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12, v14);
      v16[3] = *v8;
      v16[4] = (unsigned int)*(v8 - 1);
      v16[5] = -1073741811LL;
      WdLogEvent5_WdError(v16);
LABEL_13:
      v6 = (struct _LUID *)((char *)v6 + 12);
      v8 += 3;
      if ( !--v9 )
        return (unsigned int)v7;
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v28, v11, 0LL);
    DXGADAPTER::ReleaseReferenceNoTracking(v15);
    v17 = COREADAPTERACCESS::AcquireExclusive(&v28, 1LL, 0LL);
    v7 = v17;
    if ( v17 >= 0 )
    {
      if ( !*((_QWORD *)v15 + 319) )
        goto LABEL_12;
      v22 = MonitorSetUsageClass(v15, (unsigned int)v8[1], a3 != 0, a4);
      v7 = v22;
      if ( v22 >= 0 )
        goto LABEL_12;
      v21 = (_QWORD *)WdLogNewEntry5_WdError(v24, v23, v25);
      v21[3] = (unsigned int)v8[1];
      v21[4] = *v8;
      v21[5] = (unsigned int)*(v8 - 1);
      v21[6] = v7;
    }
    else
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18, v20);
      v21[3] = *v8;
      v21[4] = (unsigned int)*(v8 - 1);
      v21[5] = v7;
    }
    WdLogEvent5_WdError(v21);
LABEL_12:
    COREACCESS::~COREACCESS((COREACCESS *)v30);
    COREACCESS::~COREACCESS((COREACCESS *)v29);
    goto LABEL_13;
  }
  return (unsigned int)v7;
}
