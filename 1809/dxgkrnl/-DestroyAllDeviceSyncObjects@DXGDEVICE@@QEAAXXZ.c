/*
 * XREFs of ?DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ @ 0x1C00EE58C
 * Callers:
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00EE2D4 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z @ 0x1C00EF694 (-DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C00DC48C (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 */

void __fastcall DXGDEVICE::DestroyAllDeviceSyncObjects(DXGDEVICE *this)
{
  __int64 v2; // rcx
  DXGDEVICESYNCOBJECT **v3; // rdi
  DXGDEVICESYNCOBJECT *v4; // rbx
  __int64 v5; // rax

  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13)) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v5 + 24) = 2418LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( *((_QWORD *)this + 221) )
  {
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 520LL) + 8LL) + 616LL))();
    *((_QWORD *)this + 221) = 0LL;
  }
  v3 = (DXGDEVICESYNCOBJECT **)((char *)this + 408);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == (DXGDEVICESYNCOBJECT *)v3 )
      break;
    if ( v4 )
    {
      DXGDEVICESYNCOBJECT::~DXGDEVICESYNCOBJECT(*v3);
      ExFreePoolWithTag(v4, 0);
    }
  }
}
