/*
 * XREFs of ?BmlGetPathModeListForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C02C17D0
 * Callers:
 *     ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C02C0560 (-EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BC9C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FBA60 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?BmlGetPathModeListForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C02C18C4 (-BmlGetPathModeListForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DI.c)
 */

__int64 __fastcall BmlGetPathModeListForAdapter(__int64 a1, __int64 a2, char a3, unsigned int a4, int a5, __int64 a6)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v11; // rax
  DXGADAPTER *v12; // rdi
  int PathModeListForAdapterWithCoreAccessHeld; // ebx
  __int64 v14; // r8
  __int64 v15; // r8
  unsigned __int64 v17; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v18[8]; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v19[64]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v20[72]; // [rsp+88h] [rbp-80h] BYREF

  Global = DXGGLOBAL::GetGlobal(a1, a2);
  v11 = DXGGLOBAL::ReferenceAdapterByLuid(Global, (struct _LUID)a2, &v17);
  v12 = v11;
  if ( v11 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v18, v11, 0LL);
    PathModeListForAdapterWithCoreAccessHeld = COREADAPTERACCESS::AcquireShared((__int64)v18, 0xFFFFFFFFLL, v14);
    if ( PathModeListForAdapterWithCoreAccessHeld >= 0 )
    {
      LOBYTE(v15) = a3;
      PathModeListForAdapterWithCoreAccessHeld = BmlGetPathModeListForAdapterWithCoreAccessHeld(
                                                   a1,
                                                   v12,
                                                   v15,
                                                   a4,
                                                   a5,
                                                   a6);
    }
    COREACCESS::~COREACCESS((COREACCESS *)v20);
    COREACCESS::~COREACCESS((COREACCESS *)v19);
    DXGADAPTER::ReleaseReferenceNoTracking(v12);
  }
  else
  {
    return (unsigned int)-1073741810;
  }
  return (unsigned int)PathModeListForAdapterWithCoreAccessHeld;
}
