/*
 * XREFs of ?ResetVirtualFunction@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAPEAVDXGPROCESSVMWP@@E@Z @ 0x1C0215D50
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?ReleaseReferenceSafe@DXGPROCESS@@QEAAXXZ @ 0x1C003C900 (-ReleaseReferenceSafe@DXGPROCESS@@QEAAXXZ.c)
 *     ?ResetVirtualGpu@DXGVIRTUALMACHINE@@QEAAEXZ @ 0x1C003C9C0 (-ResetVirtualGpu@DXGVIRTUALMACHINE@@QEAAEXZ.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C0124B10 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?DestroyVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAXXZ @ 0x1C021864C (-DestroyVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAXXZ.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_PARAV::ResetVirtualFunction(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct DXGPROCESSVMWP **a2,
        char a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  DXGK_VIRTUAL_GPU_PARAV *i; // rdi
  DXGPROCESS *v10; // rcx
  _BYTE v12[8]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v13[16]; // [rsp+28h] [rbp-B0h] BYREF
  DXGADAPTER *v14; // [rsp+38h] [rbp-A0h]
  _BYTE v15[72]; // [rsp+68h] [rbp-70h] BYREF

  if ( !*((_BYTE *)this + 146) )
  {
    if ( *(_DWORD *)(*((_QWORD *)this + 2) + 176LL) == 1 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v12, *((struct DXGADAPTER *const *)this + 2), 0LL);
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(v14) )
      {
        v8 = WdLogNewEntry5_WdAssertion(v7, v6);
        *(_QWORD *)(v8 + 24) = 531LL;
        WdLogEvent5_WdAssertion(v8);
      }
      for ( i = (DXGK_VIRTUAL_GPU_PARAV *)*((_QWORD *)this + 30);
            i != (DXGK_VIRTUAL_GPU_PARAV *)((char *)this + 240);
            i = *(DXGK_VIRTUAL_GPU_PARAV **)i )
      {
        DXGDEVICE::FlushScheduler((_QWORD *)i - 11, 4u);
      }
      COREACCESS::~COREACCESS((COREACCESS *)v15);
      COREACCESS::~COREACCESS((COREACCESS *)v13);
    }
    if ( *((_QWORD *)this + 11) && DXGVIRTUALMACHINE::ResetVirtualGpu(*((struct _KTHREAD ***)this + 12)) && a2 )
      *a2 = (struct DXGPROCESSVMWP *)*((_QWORD *)this + 11);
    *((_BYTE *)this + 157) = 0;
    DXG_HOST_GLOBAL_VMBUS::DestroyVmBusChannel((DXGK_VIRTUAL_GPU_PARAV *)((char *)this + 160));
  }
  if ( a3 )
  {
    v10 = (DXGPROCESS *)*((_QWORD *)this + 11);
    if ( v10 )
    {
      DXGPROCESS::ReleaseReferenceSafe(v10, (__int64)a2);
      *((_QWORD *)this + 11) = 0LL;
      *((_QWORD *)this + 12) = 0LL;
    }
  }
  *((_BYTE *)this + 146) = 1;
  return 0LL;
}
