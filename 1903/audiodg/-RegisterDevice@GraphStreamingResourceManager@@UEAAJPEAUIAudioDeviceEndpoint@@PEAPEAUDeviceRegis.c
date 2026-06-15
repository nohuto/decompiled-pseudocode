/*
 * XREFs of ?RegisterDevice@GraphStreamingResourceManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegistrationToken__@@@Z @ 0x14000E490
 * Callers:
 *     <none>
 * Callees:
 *     ?GetNode@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@AEBAPEAVCNode@12@AEBQEAUIUnknown@@AEAI1AEAPEAV312@@Z @ 0x140003164 (-GetNode@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V.c)
 *     ?SetAt@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@QEAAPEAU__POSITION@@AEBQEAUIUnknown@@AEBUListValue@DeviceRegistrations@GraphStreamingResourceManager@@@Z @ 0x1400031A4 (-SetAt@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V-$.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x14000BCC4 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Attach@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAXPEAUIUnknown@@@Z @ 0x14000E5E0 (-Attach@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAXPEAUIUnknown@@@Z.c)
 *     ?ListKeyForDevice@@YAPEAUIUnknown@@PEAUIAudioDeviceEndpoint@@@Z @ 0x14000E610 (-ListKeyForDevice@@YAPEAUIUnknown@@PEAUIAudioDeviceEndpoint@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x14001357C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAtPos@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x14002E5F8 (-RemoveAtPos@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElemen.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GraphStreamingResourceManager::RegisterDevice(
        GraphStreamingResourceManager *this,
        struct IAudioDeviceEndpoint *a2,
        struct DeviceRegistrationToken__ **a3)
{
  struct DeviceRegistrationToken__ **v3; // r14
  struct IAudioDeviceEndpoint *v4; // r15
  GraphStreamingResourceManager *v5; // rsi
  struct IUnknown *v6; // rax
  __int64 v7; // rbx
  __int64 Node; // rax
  __int64 v9; // rdi
  int v10; // ebx
  __int64 result; // rax
  unsigned int *v12; // rbx
  __int64 v13; // [rsp+30h] [rbp-A8h]
  __int64 v14; // [rsp+38h] [rbp-A0h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-98h] BYREF
  char v16; // [rsp+48h] [rbp-90h]
  int v17; // [rsp+50h] [rbp-88h] BYREF
  __int64 v18; // [rsp+58h] [rbp-80h] BYREF
  __int64 v19; // [rsp+60h] [rbp-78h] BYREF
  char *v20; // [rsp+68h] [rbp-70h]
  _QWORD v21[4]; // [rsp+70h] [rbp-68h] BYREF
  __int64 v22; // [rsp+90h] [rbp-48h] BYREF
  ATL::CAtlException *v23; // [rsp+98h] [rbp-40h] BYREF
  int v27; // [rsp+F8h] [rbp+20h] BYREF

  v21[3] = -2LL;
  v3 = a3;
  v4 = a2;
  v5 = this;
  v14 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v16 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v6 = ListKeyForDevice(v4);
  Microsoft::WRL::ComPtr<IUnknown>::Attach(&v14, v6);
  v7 = v14;
  v18 = v14;
  v20 = (char *)v5 + 200;
  Node = ATL::CAtlMap<IUnknown *,GraphStreamingResourceManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<GraphStreamingResourceManager::DeviceRegistrations::ListValue>>::GetNode(
           (__int64)v5 + 200,
           (unsigned int *)&v18,
           &v17,
           (unsigned int *)&v27,
           &v22);
  v9 = Node;
  if ( Node )
  {
    _InterlockedIncrement((volatile signed __int32 *)(Node + 8));
LABEL_4:
    *v3 = (struct DeviceRegistrationToken__ *)v9;
    v9 = 0LL;
    v10 = 0;
    goto LABEL_5;
  }
  try
  {
    v21[1] = 0LL;
    v21[2] = 0LL;
    v21[0] = 1LL;
    v19 = v7;
    v9 = ATL::CAtlMap<IUnknown *,GraphStreamingResourceManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<GraphStreamingResourceManager::DeviceRegistrations::ListValue>>::SetAt(
           (__int64)v5 + 200,
           (unsigned int *)&v19,
           (__int64)v21);
    v13 = v9;
  }
  catch ( ATL::CAtlException *v23 )
  {
    v12 = (unsigned int *)v23;
    if ( *(_DWORD *)v23 == -1073741571 )
      _o__resetstkoflw();
    v27 = *v12;
    v10 = v27;
    v9 = v13;
    if ( v27 >= 0 )
    {
      v5 = this;
      v3 = a3;
      v4 = a2;
      goto LABEL_3;
    }
LABEL_5:
    if ( v9 )
      ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::RemoveAtPos(
        v20,
        v9);
    if ( v16 )
      LeaveCriticalSection(lpCriticalSection);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
    result = (unsigned int)v10;
  }
LABEL_3:
  v10 = (*(__int64 (__fastcall **)(__int64, struct IAudioDeviceEndpoint *, __int64))(*((_QWORD *)v5 - 1) + 64LL))(
          (__int64)v5 - 8,
          v4,
          v9 + 16);
  if ( v10 < 0 )
    goto LABEL_5;
  goto LABEL_4;
}
