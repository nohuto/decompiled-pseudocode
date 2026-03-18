/*
 * XREFs of ?GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C0007644
 * Callers:
 *     ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00D09F0 (-ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00D5770 (DxgkDisplayConfigDeviceInfo.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C00E9540 (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C00F4750 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0008690 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall DXGADAPTERSOURCEHASH::GetHashBitMask(DXGADAPTERSOURCEHASH *this)
{
  unsigned int v2; // ebx
  __int64 v4; // rax
  __int64 v5; // rax
  _QWORD *v6; // rax
  DXGFASTMUTEX *v7; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]

  v7 = this;
  v8 = 0;
  if ( !this )
  {
    v4 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v4 + 24) = 659LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( *((struct _KTHREAD **)v7 + 2) == KeGetCurrentThread() )
  {
    v5 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v5 + 24) = 666LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( v8 )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v6[5] = &v7;
    v6[3] = 275LL;
    v6[4] = 4LL;
    v6[6] = 0LL;
    v6[7] = 0LL;
    WdLogEvent5_WdCriticalError(v6);
  }
  DXGFASTMUTEX::Acquire(v7);
  v8 = 0;
  v2 = 0xFFFFFFFF >> (32 - *((_BYTE *)this + 60)) << (32 - *((_BYTE *)this + 60));
  DXGFASTMUTEX::Release(v7);
  return v2;
}
