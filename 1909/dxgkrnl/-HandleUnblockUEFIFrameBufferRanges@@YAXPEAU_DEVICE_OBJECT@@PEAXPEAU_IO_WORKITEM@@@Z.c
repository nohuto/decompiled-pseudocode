/*
 * XREFs of ?HandleUnblockUEFIFrameBufferRanges@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C01ED9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BE8C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C0100730 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

void __fastcall HandleUnblockUEFIFrameBufferRanges(__int64 IoObject, struct _LUID *Context, PIO_WORKITEM IoWorkItem)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  DXGADAPTER *v9; // rsi
  _QWORD *v10; // rax
  __int64 v11; // r8
  int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  unsigned __int64 v18; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v19[8]; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v20[64]; // [rsp+38h] [rbp-B0h] BYREF
  _BYTE v21[72]; // [rsp+78h] [rbp-70h] BYREF

  Global = DXGGLOBAL::GetGlobal(IoObject, (__int64)Context);
  v6 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *Context, &v18);
  v9 = v6;
  if ( v6 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v19, v6, 0LL);
    v12 = COREADAPTERACCESS::AcquireShared((__int64)v19, 0xFFFFFFFFLL, v11);
    DXGADAPTER::ReleaseReferenceNoTracking(v9);
    if ( v12 >= 0 )
    {
      v16 = *((_QWORD *)v9 + 320);
      if ( !v16 )
      {
        v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(0LL, v13);
        v17[5] = 0LL;
        v17[6] = 0LL;
        v17[7] = 0LL;
        v17[3] = 275LL;
        v17[4] = 7LL;
        WdLogEvent5_WdCriticalError(v17);
        v16 = *((_QWORD *)v9 + 320);
      }
      (*(void (__fastcall **)(_QWORD, struct _LUID *))(*(_QWORD *)(*(_QWORD *)(v16 + 544) + 8LL) + 1168LL))(
        *(_QWORD *)(v16 + 552),
        Context + 1);
    }
    else
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v13);
      v15[3] = v9;
      v15[4] = Context->HighPart;
      v15[5] = Context->LowPart;
    }
    COREACCESS::~COREACCESS((COREACCESS *)v21);
    COREACCESS::~COREACCESS((COREACCESS *)v20);
  }
  else
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7);
    v10[3] = 0LL;
    v10[4] = Context->HighPart;
    v10[5] = Context->LowPart;
  }
  ExFreePoolWithTag(Context, 0);
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
}
