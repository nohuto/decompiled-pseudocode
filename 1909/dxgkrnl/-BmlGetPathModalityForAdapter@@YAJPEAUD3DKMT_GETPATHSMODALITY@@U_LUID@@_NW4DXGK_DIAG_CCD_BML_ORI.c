/*
 * XREFs of ?BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C0126A44
 * Callers:
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x1C00D4018 (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00D5FC0 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BE8C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C0100730 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0126B30 (-BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DI.c)
 */

__int64 __fastcall BmlGetPathModalityForAdapter(__int64 a1, __int64 a2, char a3, unsigned int a4, int a5)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v10; // rax
  DXGADAPTER *v11; // rdi
  __int64 v12; // r8
  int PathModalityForAdapterWithCoreAccessHeld; // ebx
  __int64 v14; // r8
  unsigned __int64 v16; // [rsp+38h] [rbp-C0h] BYREF
  _BYTE v17[8]; // [rsp+40h] [rbp-B8h] BYREF
  _BYTE v18[64]; // [rsp+48h] [rbp-B0h] BYREF
  _BYTE v19[72]; // [rsp+88h] [rbp-70h] BYREF

  Global = DXGGLOBAL::GetGlobal(a1, a2);
  v10 = DXGGLOBAL::ReferenceAdapterByLuid(Global, (struct _LUID)a2, &v16);
  v11 = v10;
  if ( v10 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v17, v10, 0LL);
    PathModalityForAdapterWithCoreAccessHeld = COREADAPTERACCESS::AcquireShared((__int64)v17, 0xFFFFFFFFLL, v12);
    if ( PathModalityForAdapterWithCoreAccessHeld >= 0 )
    {
      LOBYTE(v14) = a3;
      PathModalityForAdapterWithCoreAccessHeld = BmlGetPathModalityForAdapterWithCoreAccessHeld(
                                                   a1,
                                                   v11,
                                                   v14,
                                                   a4,
                                                   a5,
                                                   0LL);
    }
    COREACCESS::~COREACCESS((COREACCESS *)v19);
    COREACCESS::~COREACCESS((COREACCESS *)v18);
    DXGADAPTER::ReleaseReferenceNoTracking(v11);
  }
  else
  {
    return (unsigned int)-1073741810;
  }
  return (unsigned int)PathModalityForAdapterWithCoreAccessHeld;
}
