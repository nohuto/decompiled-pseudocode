/*
 * XREFs of ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C00A99D0
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C0025350 (HMUnlockObject.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C002EBC4 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     ?HMMarkObjectDestroyWorker@@YAHPEAX@Z @ 0x1C006F87C (-HMMarkObjectDestroyWorker@@YAHPEAX@Z.c)
 *     HMRemoveHandleForObject @ 0x1C006F8C0 (HMRemoveHandleForObject.c)
 *     ?RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C017BB70 (-RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?LogDeviceRemovedEvent@CHidInput@@AEAAXGIIKKHPEAU_UNICODE_STRING@@0@Z @ 0x1C017EA20 (-LogDeviceRemovedEvent@CHidInput@@AEAAXGIIKKHPEAU_UNICODE_STRING@@0@Z.c)
 *     ?UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z @ 0x1C018FF5C (-UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z.c)
 */

char __fastcall CHidInput::OnRIMDeviceDestroyed(
        CHidInput *this,
        struct RawInputManagerDeviceObject *a2,
        struct DEVICEINFO *a3)
{
  char v4; // di
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  _DWORD *v10; // rcx
  __int64 v11; // r8
  _BYTE v12[24]; // [rsp+50h] [rbp-18h] BYREF

  v4 = 1;
  if ( (*((_DWORD *)a2 + 72) & 0x80u) != 0 )
  {
    v6 = *((_QWORD *)a2 + 71);
    if ( (*((_DWORD *)a3 + 46) & 0x2000) == 0 )
      CHidInput::LogDeviceRemovedEvent(
        (CHidInput *)(v6 + 320),
        *(_WORD *)(*((_QWORD *)a2 + 69) + 40LL),
        *(unsigned __int16 *)(*((_QWORD *)a2 + 69) + 110LL),
        *(unsigned __int16 *)(*((_QWORD *)a2 + 69) + 112LL),
        *(_DWORD *)(v6 + 24),
        *(_DWORD *)(v6 + 720),
        *(_DWORD *)(v6 + 24) == 6,
        (struct _UNICODE_STRING *)(v6 + 320),
        (struct _UNICODE_STRING *)(v6 + 848));
    CInputSystemMetrics::UpdatePointerDeviceSystemMetrics(this, a3, 0);
    if ( *(_QWORD *)(v6 + 1000) )
      CPTPProcessorFactory::RemoveProcessor((struct tagHID_POINTER_DEVICE_INFO *)v6);
    HMUnlockObject(v6);
    if ( *(_DWORD *)(v6 + 8) )
    {
      return 0;
    }
    else
    {
      CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
        (__int64)v12,
        v7,
        v8);
      HMMarkObjectDestroyWorker((_DWORD *)v6);
      HMRemoveHandleForObject(v10, v9, v11);
    }
  }
  return v4;
}
