/*
 * XREFs of ?RfxVgpuResetCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0040000
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000700C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007068 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     DpiIsRfxVgpuDevice @ 0x1C029CF98 (DpiIsRfxVgpuDevice.c)
 */

__int64 __fastcall RfxVgpuResetCallback(struct DXGADAPTER *a1, _DWORD *a2)
{
  __int64 v3; // rbx
  __int64 v5; // r8
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rax
  _BYTE v15[8]; // [rsp+20h] [rbp-89h] BYREF
  struct DXGADAPTER *v16; // [rsp+28h] [rbp-81h]
  char v17; // [rsp+30h] [rbp-79h]
  int v18; // [rsp+38h] [rbp-71h] BYREF
  __int64 v19; // [rsp+3Ch] [rbp-6Dh]
  _BYTE v20[8]; // [rsp+50h] [rbp-59h] BYREF
  _BYTE v21[64]; // [rsp+58h] [rbp-51h] BYREF
  _BYTE v22[72]; // [rsp+98h] [rbp-11h] BYREF

  v16 = a1;
  LODWORD(v3) = 0;
  v17 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v15);
  if ( *((_DWORD *)a1 + 44) == 1 && (unsigned __int8)DpiIsRfxVgpuDevice(*((_QWORD *)a1 + 24)) )
  {
    if ( v17 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v15);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v20, a1, 0LL);
    v6 = COREADAPTERACCESS::AcquireShared((__int64)v20, 0xFFFFFFFFLL, v5);
    v3 = v6;
    if ( v6 < 0
      || (v10 = *((_QWORD *)a1 + 320),
          v11 = *(_QWORD *)(v10 + 528),
          v19 = 0LL,
          v18 = 6,
          v12 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)(*(_QWORD *)(v10 + 520) + 8LL) + 64LL))(
                  v11,
                  &v18),
          v3 = v12,
          v12 < 0) )
    {
      v13 = WdLogNewEntry5_WdWarning(v8, v7, v9);
      *(_QWORD *)(v13 + 24) = a1;
      *(_QWORD *)(v13 + 32) = v3;
      WdLogEvent5_WdWarning(v13);
    }
    COREACCESS::~COREACCESS((COREACCESS *)v22);
    COREACCESS::~COREACCESS((COREACCESS *)v21);
    if ( a2 )
      *a2 = v3;
  }
  else if ( v17 )
  {
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v15);
  }
  return (unsigned int)v3;
}
