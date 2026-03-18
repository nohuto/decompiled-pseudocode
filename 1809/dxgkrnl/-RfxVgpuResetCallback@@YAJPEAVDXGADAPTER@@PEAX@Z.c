/*
 * XREFs of ?RfxVgpuResetCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0039C10
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     DpiIsRfxVgpuDevice @ 0x1C0263094 (DpiIsRfxVgpuDevice.c)
 */

__int64 __fastcall RfxVgpuResetCallback(struct DXGADAPTER *a1, _DWORD *a2)
{
  __int64 v3; // rbx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rax
  _BYTE v14[8]; // [rsp+20h] [rbp-49h] BYREF
  struct DXGADAPTER *v15; // [rsp+28h] [rbp-41h]
  char v16; // [rsp+30h] [rbp-39h]
  _BYTE v17[8]; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v18[32]; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v19[40]; // [rsp+68h] [rbp-1h] BYREF
  int v20[4]; // [rsp+90h] [rbp+27h] BYREF

  v15 = a1;
  LODWORD(v3) = 0;
  v16 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v14);
  if ( *((_DWORD *)a1 + 44) == 1 && (unsigned __int8)DpiIsRfxVgpuDevice(*((_QWORD *)a1 + 24)) )
  {
    if ( v16 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v14);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v17, a1, 0LL);
    v5 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v17);
    v3 = v5;
    if ( v5 < 0
      || (v9 = *((_QWORD *)a1 + 316),
          v10 = *(_QWORD *)(v9 + 528),
          v20[0] = 6,
          v11 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)(*(_QWORD *)(v9 + 520) + 8LL) + 64LL))(v10, v20),
          v3 = v11,
          v11 < 0) )
    {
      v12 = WdLogNewEntry5_WdWarning(v7, v6, v8);
      *(_QWORD *)(v12 + 24) = a1;
      *(_QWORD *)(v12 + 32) = v3;
      WdLogEvent5_WdWarning(v12);
    }
    COREACCESS::~COREACCESS((COREACCESS *)v19);
    COREACCESS::~COREACCESS((COREACCESS *)v18);
    if ( a2 )
      *a2 = v3;
  }
  else if ( v16 )
  {
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v14);
  }
  return (unsigned int)v3;
}
