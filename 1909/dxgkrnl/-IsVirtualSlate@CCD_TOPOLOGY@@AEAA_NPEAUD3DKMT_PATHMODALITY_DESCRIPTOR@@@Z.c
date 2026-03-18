/*
 * XREFs of ?IsVirtualSlate@CCD_TOPOLOGY@@AEAA_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00D540C
 * Callers:
 *     ?AdjustSlateVirtualMonitorsPosition@CCD_TOPOLOGY@@AEAAJPEAUtagRECT@@AEAIAEAJ@Z @ 0x1C00D5C58 (-AdjustSlateVirtualMonitorsPosition@CCD_TOPOLOGY@@AEAAJPEAUtagRECT@@AEAIAEAJ@Z.c)
 *     ?AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00D844C (-AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z @ 0x1C00038C0 (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000BE40 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z @ 0x1C01ED6D0 (-GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z.c)
 */

bool __fastcall CCD_TOPOLOGY::IsVirtualSlate(CCD_TOPOLOGY *this, struct _LUID *a2)
{
  bool v3; // bl
  struct DXGADAPTER *v4; // rdi
  __int64 v5; // r8
  struct DXGADAPTER *v7[2]; // [rsp+28h] [rbp-79h] BYREF
  _QWORD v8[4]; // [rsp+38h] [rbp-69h] BYREF
  _BYTE v9[8]; // [rsp+58h] [rbp-49h] BYREF
  _BYTE v10[64]; // [rsp+60h] [rbp-41h] BYREF
  _BYTE v11[72]; // [rsp+A0h] [rbp-1h] BYREF

  v3 = 0;
  v7[0] = 0LL;
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v7, a2 + 2);
  v4 = v7[0];
  if ( v7[0] )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v9, v7[0], 0LL);
    memset(v8, 0, 24);
    if ( (int)COREADAPTERACCESS::AcquireShared((__int64)v9, 0xFFFFFFFFLL, v5) >= 0
      && (*((_DWORD *)v4 + 77) & 0x40000) != 0
      && (int)DXGADAPTER::GetVirtualMonitorInfo(v4, a2[3].HighPart, (struct _DXGK_IDD_VIRTUAL_MONITOR_INFO *)v8) >= 0 )
    {
      v3 = HIDWORD(v8[0]) == 2;
    }
    COREACCESS::~COREACCESS((COREACCESS *)v11);
    COREACCESS::~COREACCESS((COREACCESS *)v10);
  }
  DXGADAPTER_REFERENCE::Assign(v7, 0LL);
  return v3;
}
