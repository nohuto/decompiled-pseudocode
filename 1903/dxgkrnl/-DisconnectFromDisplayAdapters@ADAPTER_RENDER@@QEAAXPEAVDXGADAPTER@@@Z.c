/*
 * XREFs of ?DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01F4C0C
 * Callers:
 *     DxgkSetIndirectDisplayRenderAdapter @ 0x1C0205304 (DxgkSetIndirectDisplayRenderAdapter.c)
 * Callees:
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0001E68 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000CE40 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFI.c)
 *     ?IsAddapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000E028 (-IsAddapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@PEAVDXGADAPTER@@@Z @ 0x1C01F6494 (-StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@PEAVDXGADAPTER@@@Z.c)
 */

void __fastcall ADAPTER_RENDER::DisconnectFromDisplayAdapters(ADAPTER_RENDER *this, PDEVICE_OBJECT *a2)
{
  ADAPTER_RENDER *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // r8
  struct _LUID *v7; // rdx
  PDEVICE_OBJECT v8; // rax
  unsigned int i; // edi
  __int64 v10; // rdx
  PVOID v11; // rcx
  unsigned int v12; // edi
  struct _IO_WORKITEM *WorkItem; // rax
  PVOID Context[2]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+40h] [rbp-A8h] BYREF
  _BYTE v16[64]; // [rsp+48h] [rbp-A0h] BYREF
  _BYTE v17[72]; // [rsp+88h] [rbp-60h] BYREF

  v3 = this;
  if ( a2 )
  {
    this = KeGetCurrentThread();
    if ( *(ADAPTER_RENDER **)&a2[319]->AlignmentRequirement != this )
    {
      v4 = WdLogNewEntry5_WdAssertion(this, a2);
      *(_QWORD *)(v4 + 24) = 4961LL;
      WdLogEvent5_WdAssertion(v4);
    }
  }
  if ( *((struct _KTHREAD **)v3 + 4) != KeGetCurrentThread() || *((struct _KTHREAD **)v3 + 6) != KeGetCurrentThread() )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v5 + 24) = 4962LL;
    WdLogEvent5_WdAssertion(v5);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v15, *((struct DXGADAPTER *const *)v3 + 2), 0LL);
  if ( (int)COREADAPTERACCESS::AcquireExclusive(&v15, (unsigned int)(v6 + 1), v6) >= 0 )
  {
    ADAPTER_RENDER::StopDisplayDevices(v3, 2LL, a2);
    ADAPTER_RENDER::StopDisplayDevices(v3, 1LL, a2);
    if ( a2 )
      LOBYTE(a2[319]->Dpc.DeferredContext) = 1;
  }
  v8 = a2[319];
  for ( i = 0; i < LODWORD(v8->Queue.ListEntry.Flink); ++i )
  {
    if ( ADAPTER_DISPLAY::IsPartOfDesktop((DXGADAPTER **)v8, i) )
      break;
    v8 = a2[319];
  }
  if ( i < LODWORD(a2[319]->Queue.ListEntry.Flink) )
  {
    DXGADAPTER::IsAddapterSessionized((DXGADAPTER *)a2, v7, 0LL, (unsigned __int64 *)Context);
    v11 = Context[0];
    if ( Context[0] == (PVOID)0x200000000LL )
      v11 = (PVOID)*(unsigned int *)(*((_QWORD *)DXGGLOBAL::GetGlobal(0x200000000LL, v10) + 74) + 128LL);
    v12 = -1;
    if ( v11 != (PVOID)0x100000000LL )
      v12 = (unsigned int)v11;
    WorkItem = IoAllocateWorkItem(a2[24]);
    if ( WorkItem )
      IoQueueWorkItemEx(WorkItem, DisconnectFromDisplayAdaptersWorkItem, DelayedWorkQueue, (PVOID)v12);
  }
  COREACCESS::~COREACCESS((COREACCESS *)v17);
  COREACCESS::~COREACCESS((COREACCESS *)v16);
}
