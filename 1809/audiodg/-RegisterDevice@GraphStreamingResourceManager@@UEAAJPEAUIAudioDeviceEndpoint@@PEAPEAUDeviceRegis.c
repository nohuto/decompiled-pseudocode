/*
 * XREFs of ?RegisterDevice@GraphStreamingResourceManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegistrationToken__@@@Z @ 0x140005690
 * Callers:
 *     <none>
 * Callees:
 *     ?GetNode@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@AEBAPEAVCNode@12@AEBQEAUIUnknown@@AEAI1AEAPEAV312@@Z @ 0x1400057F0 (-GetNode@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V.c)
 *     ?SetAt@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@QEAAPEAU__POSITION@@AEBQEAUIUnknown@@AEBUListValue@DeviceRegistrations@GraphStreamingResourceManager@@@Z @ 0x1400058BC (-SetAt@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V-$.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140009730 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1400181CC (-RemoveAtPos@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManage.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140019F84 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GraphStreamingResourceManager::RegisterDevice(
        GraphStreamingResourceManager *this,
        struct IAudioDeviceEndpoint *a2,
        struct DeviceRegistrationToken__ **a3)
{
  struct DeviceRegistrationToken__ **v3; // r14
  struct IAudioDeviceEndpoint *v4; // rdi
  GraphStreamingResourceManager *v5; // rsi
  __int64 v6; // r15
  __int64 Node; // rax
  __int64 v8; // rbx
  int v9; // edi
  __int64 result; // rax
  ATL::CAtlException *v11; // rbx
  __int64 v12; // [rsp+30h] [rbp-B8h]
  __int64 v13; // [rsp+38h] [rbp-B0h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-A8h] BYREF
  char v15; // [rsp+48h] [rbp-A0h]
  char v16; // [rsp+50h] [rbp-98h] BYREF
  __int64 v17; // [rsp+58h] [rbp-90h] BYREF
  __int64 v18; // [rsp+60h] [rbp-88h] BYREF
  __int64 v19; // [rsp+68h] [rbp-80h] BYREF
  char *v20; // [rsp+70h] [rbp-78h]
  _QWORD v21[4]; // [rsp+78h] [rbp-70h] BYREF
  _BYTE v22[8]; // [rsp+98h] [rbp-50h] BYREF
  ATL::CAtlException *v23; // [rsp+A0h] [rbp-48h] BYREF
  int v27; // [rsp+108h] [rbp+20h] BYREF

  v21[3] = -2LL;
  v3 = a3;
  v4 = a2;
  v5 = this;
  v13 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v15 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  ((void (__fastcall *)(struct IAudioDeviceEndpoint *, GUID *, __int64 *))v4->lpVtbl->QueryInterface)(
    v4,
    &GUID_00000000_0000_0000_c000_000000000046,
    &v17);
  v6 = v17;
  v13 = v17;
  v18 = v17;
  v20 = (char *)v5 + 200;
  Node = ATL::CAtlMap<IUnknown *,GraphStreamingResourceManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<GraphStreamingResourceManager::DeviceRegistrations::ListValue>>::GetNode(
           (int)v5 + 200,
           (unsigned int)&v18,
           (unsigned int)&v16,
           (unsigned int)&v27,
           (__int64)v22);
  v8 = Node;
  if ( Node )
  {
    _InterlockedIncrement((volatile signed __int32 *)(Node + 8));
LABEL_4:
    *v3 = (struct DeviceRegistrationToken__ *)v8;
    v8 = 0LL;
    v9 = 0;
    goto LABEL_5;
  }
  try
  {
    v21[1] = 0LL;
    v21[2] = 0LL;
    v21[0] = 1LL;
    v19 = v6;
    v8 = ATL::CAtlMap<IUnknown *,GraphStreamingResourceManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<GraphStreamingResourceManager::DeviceRegistrations::ListValue>>::SetAt(
           (char *)v5 + 200,
           &v19,
           v21);
    v12 = v8;
  }
  catch ( ATL::CAtlException *v23 )
  {
    v11 = v23;
    if ( *(_DWORD *)v23 == -1073741571 )
      _o__resetstkoflw();
    v27 = *(_DWORD *)v11;
    v9 = v27;
    v8 = v12;
    if ( v27 >= 0 )
    {
      v5 = this;
      v3 = a3;
      v4 = a2;
      goto LABEL_3;
    }
LABEL_5:
    if ( v8 )
      ATL::CAtlMap<IUnknown *,GraphStreamingResourceManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<GraphStreamingResourceManager::DeviceRegistrations::ListValue>>::RemoveAtPos(
        v20,
        v8);
    if ( v15 )
      LeaveCriticalSection(lpCriticalSection);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
    result = (unsigned int)v9;
  }
LABEL_3:
  v9 = (*(__int64 (__fastcall **)(__int64, struct IAudioDeviceEndpoint *, __int64))(*((_QWORD *)v5 - 1) + 64LL))(
         (__int64)v5 - 8,
         v4,
         v8 + 16);
  if ( v9 < 0 )
    goto LABEL_5;
  goto LABEL_4;
}
