/*
 * XREFs of ?DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ @ 0x1C0124A4C
 * Callers:
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C01246E4 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z @ 0x1C012542C (-DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z.c)
 * Callees:
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C000CABC (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGDEVICE::DestroyAllDeviceSyncObjects(DXGDEVICE *this)
{
  DXGDEVICESYNCOBJECT **v2; // rbx
  DXGDEVICESYNCOBJECT *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax

  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13)) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v6 + 24) = 2464LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( *((_QWORD *)this + 221) )
  {
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 520LL) + 8LL) + 616LL))();
    *((_QWORD *)this + 221) = 0LL;
  }
  v2 = (DXGDEVICESYNCOBJECT **)((char *)this + 408);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == (DXGDEVICESYNCOBJECT *)v2 )
      break;
    if ( v3 )
      DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v3);
  }
}
