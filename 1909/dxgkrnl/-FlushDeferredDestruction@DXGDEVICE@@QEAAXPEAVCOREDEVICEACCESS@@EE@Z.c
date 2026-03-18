/*
 * XREFs of ?FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z @ 0x1C0124928
 * Callers:
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C01240C8 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C01246E4 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C012629C (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 *     ?FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ @ 0x1C01F5A54 (-FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C02308B0 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002778 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000469C (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00075A8 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000C708 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 */

void __fastcall DXGDEVICE::FlushDeferredDestruction(DXGDEVICE *this, PERESOURCE **a2, char a3, char a4)
{
  int v8; // eax
  int v9; // r15d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  _BYTE v13[32]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v14; // [rsp+70h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 220) )
  {
    if ( a2 )
    {
      if ( DXGADAPTER::IsCoreResourceExclusiveOwner(a2[3]) )
      {
        v12 = WdLogNewEntry5_WdAssertion(v11, v10);
        *(_QWORD *)(v12 + 24) = 1150LL;
        WdLogEvent5_WdAssertion(v12);
      }
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)a2);
    }
    v14 = -5000000LL;
    v8 = *((_DWORD *)this + 438);
    do
    {
      v9 = v8;
      KeWaitForSingleObject(
        *((PVOID *)this + 220),
        Executive,
        0,
        0,
        (PLARGE_INTEGER)((unsigned __int64)&v14 & -(__int64)(a4 != 0)));
      if ( !a4 )
        break;
      v8 = *((_DWORD *)this + 438);
    }
    while ( v9 != v8 );
    if ( a3 )
    {
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v13, (struct _KTHREAD **)this + 17);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
    }
    if ( a2 )
      COREDEVICEACCESS::AcquireSharedUncheck((__int64)a2);
  }
}
