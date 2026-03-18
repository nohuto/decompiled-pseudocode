/*
 * XREFs of ?CheckBlockList@DXGADAPTER@@AEAAXIIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C0150524
 * Callers:
 *     ?InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ @ 0x1C0150138 (-InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?CheckKernelBlockList@DXGADAPTER@@AEAAJIIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C0150620 (-CheckKernelBlockList@DXGADAPTER@@AEAAJIIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 *     ?FindBlockListStrings@@YAJPEAGIIPEBGW4_QAI_DRIVERVERSION@@PEAIPEAU_UNICODE_STRING@@@Z @ 0x1C0150A40 (-FindBlockListStrings@@YAJPEAGIIPEBGW4_QAI_DRIVERVERSION@@PEAIPEAU_UNICODE_STRING@@@Z.c)
 *     ?ConvertStringsToOneMultiString@@YAJPEAU_UNICODE_STRING@@IPEAPEAGPEAI@Z @ 0x1C025E790 (-ConvertStringsToOneMultiString@@YAJPEAU_UNICODE_STRING@@IPEAPEAGPEAI@Z.c)
 *     DxgkFreeUnicodeString @ 0x1C02634C8 (DxgkFreeUnicodeString.c)
 */

void __fastcall DXGADAPTER::CheckBlockList(
        unsigned __int16 **this,
        unsigned int a2,
        const GUID *a3,
        const unsigned __int16 *a4,
        enum _QAI_DRIVERVERSION a5)
{
  unsigned int v6; // r14d
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rcx
  const GUID *v12; // r8
  __int64 v13; // rax
  int v14; // eax
  struct _UNICODE_STRING *v15; // rdi
  unsigned int v16; // [rsp+40h] [rbp-C0h] BYREF
  int v17; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B0h]
  char v19; // [rsp+58h] [rbp-A8h]
  struct _UNICODE_STRING v20; // [rsp+60h] [rbp-A0h] BYREF

  v17 = -1;
  v18 = 0LL;
  v6 = (unsigned int)a3;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v19 = 1;
    v17 = 8015;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 8015);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v17, 8015);
  DXGADAPTER::CheckKernelBlockList((DXGADAPTER *)this, a2, v6, a4, a5);
  v16 = 0;
  FindBlockListStrings(
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\BlockList\\Runtime",
    a2,
    v6,
    a4,
    a5,
    &v16,
    &v20);
  v10 = v16;
  if ( v16 >= 0x14 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v13 + 24) = 781LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( (_DWORD)v10 )
  {
    v16 = 0;
    v14 = ConvertStringsToOneMultiString(&v20, v10, this + 517, &v16);
    if ( v14 >= 0 )
      *((_DWORD *)this + 1036) = 2 * v16;
    if ( v14 == -1073741637 )
      *((_BYTE *)this + 4148) = 1;
    v15 = &v20;
    do
    {
      DxgkFreeUnicodeString(v15++);
      --v10;
    }
    while ( v10 );
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
  if ( v19 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v11, &EventProfilerExit, v12, v17);
  }
}
